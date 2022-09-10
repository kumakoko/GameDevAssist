#include <wx/filedlg.h>
#include "game_dev_assist_main_frame.h"

GameDevAssistMainFrame::GameDevAssistMainFrame(wxWindow* parent) :MainFrame(parent)
{

}

static void OpenAndDisplayImage(wxWindow* file_dlg_parent, wxImage& src_img, wxStaticBitmap* src_img_view)
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
        wxImage scaled_img = src_img.Scale(256, 256, wxIMAGE_QUALITY_BILINEAR);
        wxBitmap bmp(scaled_img);
        src_img_view->SetBitmap(scaled_img);
    }
}


void GameDevAssistMainFrame::OnOpenImageForImageView1(wxCommandEvent& event)
{
    OpenAndDisplayImage(this, src_img_1_, src_img_view_1_);
}

void GameDevAssistMainFrame::OnOpenImageForImageView2(wxCommandEvent& event)
{
    OpenAndDisplayImage(this, src_img_2_, src_img_view_2_);
}

void GameDevAssistMainFrame::OnOpenImageForImageView3(wxCommandEvent& event)
{
    OpenAndDisplayImage(this, src_img_3_, src_img_view_3_);
}

void GameDevAssistMainFrame::OnOpenImageForImageView4(wxCommandEvent& event)
{
    OpenAndDisplayImage(this, src_img_4_, src_img_view_4_);
}

void GameDevAssistMainFrame::OnCombineImageClicked(wxCommandEvent& event)
{
    //wxImage img = src_img_view_1_->GetBitmap().ConvertToImage();

    wxImage combinedImg(96 * 2, 128 * 2);

    for (int w = 0; w < 96; ++w)
    {
        for (int h = 0; h < 128; ++h)
        {
            unsigned char r = src_img_1_.GetRed(w, h);
            unsigned char g = src_img_1_.GetGreen(w, h);
            unsigned char b = src_img_1_.GetBlue(w, h);
            combinedImg.SetRGB(w, h, r, g, b);
        }
    }

    src_img_1_.SaveFile(wxT("C:/test.png"));
}
