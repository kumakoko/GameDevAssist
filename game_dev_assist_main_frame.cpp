#include <wx/filedlg.h>
#include "game_dev_assist_main_frame.h"
#include "image_tools.h"
#include "auto_buffer.h"

GameDevAssistMainFrame::GameDevAssistMainFrame(wxWindow* parent) :MainFrame(parent)
{

}

void GameDevAssistMainFrame::OnOpenImageForImageView1(wxCommandEvent& event)
{
    ImageTools::OpenAndDisplayImage(this, src_img_1_, src_img_view_1_);
}

void GameDevAssistMainFrame::OnOpenImageForImageView2(wxCommandEvent& event)
{
    ImageTools::OpenAndDisplayImage(this, src_img_2_, src_img_view_2_);
}

void GameDevAssistMainFrame::OnOpenImageForImageView3(wxCommandEvent& event)
{
    ImageTools::OpenAndDisplayImage(this, src_img_3_, src_img_view_3_);
}

void GameDevAssistMainFrame::OnOpenImageForImageView4(wxCommandEvent& event)
{
    ImageTools::OpenAndDisplayImage(this, src_img_4_, src_img_view_4_);
}

void GameDevAssistMainFrame::OnCombineImageClicked(wxCommandEvent& event)
{
    wxImage combinedImg;

    int max_image_w = 0;
    int max_image_h = 0;
    ImageTools::GetMaxWidthHeight(src_img_1_, src_img_2_, src_img_3_, src_img_4_, max_image_w, max_image_h);

    AutoBuffer rgb_data;
    rgb_data.Allocate(max_image_w * max_image_h * 3, true);

    AutoBuffer alpha_data;
    alpha_data.Allocate(max_image_w * max_image_h, true);

    bool r = combinedImg.Create(max_image_w, max_image_h, rgb_data.GetUnsignedBuffer(), alpha_data.GetUnsignedBuffer(), true);

    int w = 0, h = 0;

    for (w = 0; w < max_image_w; ++w)
    {
        for (h = 0; h < max_image_h; ++h)
        {
            unsigned char r = ImageTools::GetChannelValue(ImageTools::Channel::RED, src_img_1_, w, h);
            unsigned char g = ImageTools::GetChannelValue(ImageTools::Channel::GREEN, src_img_2_, w, h);
            unsigned char b = ImageTools::GetChannelValue(ImageTools::Channel::BLUE, src_img_3_, w, h);
            unsigned char a = ImageTools::GetChannelValue(ImageTools::Channel::ALPHA, src_img_4_, w, h);
            combinedImg.SetRGB(w, h, r, g, b);
            combinedImg.SetAlpha(w, h, a);
        }
    }

    ImageTools::DisplayImage(combinedImg, src_img_view_combined_, 256, 256);
}
