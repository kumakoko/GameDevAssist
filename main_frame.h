///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/checkbox.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxStaticBitmap* src_img_view_1_;
		wxCheckBox* chk_img_view_1_red_;
		wxCheckBox* chk_img_view_1_green_;
		wxCheckBox* chek_img_view_1_blue_;
		wxCheckBox* chk_img_view_1_alpha_;
		wxButton* btn_load_img_1_;
		wxStaticBitmap* src_img_view_2_;
		wxCheckBox* chk_img_view_2_red_;
		wxCheckBox* chk_img_view_2_green_;
		wxCheckBox* chk_img_view_2_blue_;
		wxCheckBox* chk_img_view_2_alpha_;
		wxButton* btn_load_img_2_;
		wxStaticBitmap* src_img_view_3_;
		wxCheckBox* chk_img_view_3_red_;
		wxCheckBox* chk_img_view_3_green_;
		wxCheckBox* chk_img_view_3_blue_;
		wxCheckBox* chk_img_view_3_alpha_;
		wxButton* btn_load_img_3_;
		wxStaticBitmap* src_img_view_4_;
		wxCheckBox* chk_img_view_4_red_;
		wxCheckBox* chk_img_view_4_green_;
		wxCheckBox* chk_img_view_4_blue_;
		wxCheckBox* chk_img_view_4_alpha_;
		wxButton* btn_load_img_4_;
		wxButton* btn_combine_image_;
		wxStaticBitmap* src_img_view_combined_;

		// Virtual event handlers, override them in your derived class
		virtual void OnOpenImageForImageView1( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenImageForImageView2( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenImageForImageView3( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenImageForImageView4( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCombineImageClicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("游戏开发助手"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1200,800 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

