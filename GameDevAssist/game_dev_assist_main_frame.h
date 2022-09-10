#ifndef __GameDevAssistMainFrame__
#define __GameDevAssistMainFrame__

#include "main_frame.h"

class GameDevAssistMainFrame : public MainFrame
{
protected:
    virtual void OnOpenImageForImageView1(wxCommandEvent& event) override;
    virtual void OnOpenImageForImageView2(wxCommandEvent& event) override;
    virtual void OnOpenImageForImageView3(wxCommandEvent& event) override;
    virtual void OnOpenImageForImageView4(wxCommandEvent& event) override;
    virtual void OnCombineImageClicked(wxCommandEvent& event);
public:
    GameDevAssistMainFrame(wxWindow* parent);
private:
private:
    wxImage src_img_1_;
    wxImage src_img_2_;
    wxImage src_img_3_;
    wxImage src_img_4_;
};

#endif // __GameDevAssistMainFrame__
