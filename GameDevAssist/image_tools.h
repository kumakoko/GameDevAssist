#ifndef image_tools_h__
#define image_tools_h__

#include <wx/image.h>
#include <wx/statbmp.h>
#include <wx/window.h>

class ImageTools
{
public:
    enum Channel
    {
        RED = 0,
        GREEN = 1,
        BLUE = 2,
        ALPHA = 3
    };
public:
    static void GetMaxWidthHeight(const wxImage& img1, const wxImage& img2, const wxImage& img3, const wxImage& img4, int& max_width, int& min_height);

    static void DisplayImage(wxImage& src_img, wxStaticBitmap* src_img_view, int display_w = 256, int display_h = 256);

    static void OpenAndDisplayImage(wxWindow* file_dlg_parent, wxImage& src_img, wxStaticBitmap* src_img_view, int display_w = 256, int display_h = 256);

    static unsigned char GetChannelValue(Channel channel, const wxImage& img, int w, int h);
};
#endif // image_tools_h__
