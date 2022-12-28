#include "auto_buffer.h"
#include "image_tools.h"

#include <wx/filedlg.h>

void ImageTools::GetMaxWidthHeight(const wxImage& img1, const wxImage& img2, const wxImage& img3, const wxImage& img4, int& max_width, int& min_height)
{
    int img1_w = img1.IsOk() ? img1.GetWidth() : 0;
    int img1_h = img1.IsOk() ? img1.GetHeight() : 0;

    int img2_w = img2.IsOk() ? img2.GetWidth() : 0;
    int img2_h = img2.IsOk() ? img2.GetHeight() : 0;

    int img3_w = img3.IsOk() ? img3.GetWidth() : 0;
    int img3_h = img3.IsOk() ? img3.GetHeight() : 0;

    int img4_w = img4.IsOk() ? img4.GetWidth() : 0;
    int img4_h = img4.IsOk() ? img4.GetHeight() : 0;

    max_width = std::max(std::max(std::max(img1_w, img2_w), img3_w), img4_w);
    min_height = std::max(std::max(std::max(img1_h, img2_h), img3_h), img4_h);
}

void ImageTools::DisplayImage(wxImage& src_img, wxStaticBitmap* src_img_view, int display_w, int display_h)
{
    wxImage scaled_img = src_img.Scale(display_w, display_h, wxIMAGE_QUALITY_BILINEAR);
    wxBitmap bmp(scaled_img);
    src_img_view->SetBitmap(bmp);
}

void ImageTools::OpenAndDisplayImage(wxWindow* file_dlg_parent, wxImage& src_img, wxStaticBitmap* src_img_view, int display_w, int display_h)
{
    wxFileDialog fd(file_dlg_parent, ("Open Image file"), "", "", "png (*.png)|*.png", wxFD_OPEN | wxFD_FILE_MUST_EXIST);

    if (fd.ShowModal() == wxID_OK)
    {
        wxString img_file_name = fd.GetPath();

        if (src_img.IsOk())
        {
            src_img.Clear();
        }

        src_img.LoadFile(img_file_name);
        DisplayImage(src_img, src_img_view, display_w, display_h);
    }
}

unsigned char ImageTools::GetChannelValue(Channel channel, const wxImage& img, int w, int h)
{
    switch (channel)
    {
    case Channel::RED:
        return  img.IsOk() && w < img.GetWidth() && h < img.GetHeight() ? img.GetRed(w, h) : 0;
    case Channel::GREEN:
        return  img.IsOk() && w < img.GetWidth() && h < img.GetHeight() ? img.GetGreen(w, h) : 0;
    case Channel::BLUE:
        return  img.IsOk() && w < img.GetWidth() && h < img.GetHeight() ? img.GetBlue(w, h) : 0;
    case Channel::ALPHA:
    default:
        return  img.IsOk() && img.HasAlpha() && w < img.GetWidth() && h < img.GetHeight() ? img.GetAlpha(w, h) : 255;
    }
}