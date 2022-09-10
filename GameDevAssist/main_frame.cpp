///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "main_frame.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* main_sizer_;
	main_sizer_ = new wxGridSizer( 2, 1, 0, 0 );

	wxGridSizer* src_img_sizer_;
	src_img_sizer_ = new wxGridSizer( 1, 4, 0, 0 );

	wxBoxSizer* src_img_view_1_sizer_;
	src_img_view_1_sizer_ = new wxBoxSizer( wxVERTICAL );

	src_img_view_1_ = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 256,256 ), wxBORDER_SUNKEN );
	src_img_view_1_sizer_->Add( src_img_view_1_, 0, wxALL, 5 );

	wxBoxSizer* img_opt_1_sizer_;
	img_opt_1_sizer_ = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* img_chanel_opt_1_sizer_;
	img_chanel_opt_1_sizer_ = new wxBoxSizer( wxVERTICAL );

	chk_img_view_1_red_ = new wxCheckBox( this, wxID_ANY, wxT("Red通道"), wxDefaultPosition, wxDefaultSize, 0 );
	img_chanel_opt_1_sizer_->Add( chk_img_view_1_red_, 0, wxALL, 5 );

	chk_img_view_1_green_ = new wxCheckBox( this, wxID_ANY, wxT("Green通道"), wxDefaultPosition, wxDefaultSize, 0 );
	img_chanel_opt_1_sizer_->Add( chk_img_view_1_green_, 0, wxALL, 5 );

	chek_img_view_1_blue_ = new wxCheckBox( this, wxID_ANY, wxT("Blue通道"), wxDefaultPosition, wxDefaultSize, 0 );
	img_chanel_opt_1_sizer_->Add( chek_img_view_1_blue_, 0, wxALL, 5 );

	chk_img_view_1_alpha_ = new wxCheckBox( this, wxID_ANY, wxT("Alpha通道"), wxDefaultPosition, wxDefaultSize, 0 );
	img_chanel_opt_1_sizer_->Add( chk_img_view_1_alpha_, 0, wxALL, 5 );


	img_opt_1_sizer_->Add( img_chanel_opt_1_sizer_, 1, wxEXPAND, 5 );

	wxBoxSizer* img_others_opt_1_sizer_;
	img_others_opt_1_sizer_ = new wxBoxSizer( wxVERTICAL );

	btn_load_img_1_ = new wxButton( this, wxID_ANY, wxT("打开图片"), wxDefaultPosition, wxDefaultSize, 0 );
	img_others_opt_1_sizer_->Add( btn_load_img_1_, 0, wxALL, 5 );


	img_opt_1_sizer_->Add( img_others_opt_1_sizer_, 1, wxEXPAND, 5 );


	src_img_view_1_sizer_->Add( img_opt_1_sizer_, 1, wxEXPAND, 5 );


	src_img_sizer_->Add( src_img_view_1_sizer_, 1, wxALIGN_CENTER|wxEXPAND, 5 );

	wxBoxSizer* src_img_view_2_sizer_;
	src_img_view_2_sizer_ = new wxBoxSizer( wxVERTICAL );

	src_img_view_2_ = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 256,256 ), wxBORDER_SUNKEN );
	src_img_view_2_sizer_->Add( src_img_view_2_, 0, wxALL, 5 );

	wxBoxSizer* img_opt_2_sizer_;
	img_opt_2_sizer_ = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* mg_chanel_opt_2_sizer_;
	mg_chanel_opt_2_sizer_ = new wxBoxSizer( wxVERTICAL );

	chk_img_view_2_red_ = new wxCheckBox( this, wxID_ANY, wxT("Red通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_chanel_opt_2_sizer_->Add( chk_img_view_2_red_, 0, wxALL, 5 );

	chk_img_view_2_green_ = new wxCheckBox( this, wxID_ANY, wxT("Green通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_chanel_opt_2_sizer_->Add( chk_img_view_2_green_, 0, wxALL, 5 );

	chk_img_view_2_blue_ = new wxCheckBox( this, wxID_ANY, wxT("Blue通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_chanel_opt_2_sizer_->Add( chk_img_view_2_blue_, 0, wxALL, 5 );

	chk_img_view_2_alpha_ = new wxCheckBox( this, wxID_ANY, wxT("Alpha通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_chanel_opt_2_sizer_->Add( chk_img_view_2_alpha_, 0, wxALL, 5 );


	img_opt_2_sizer_->Add( mg_chanel_opt_2_sizer_, 1, wxEXPAND, 5 );

	wxBoxSizer* img_others_opt_2_sizer_;
	img_others_opt_2_sizer_ = new wxBoxSizer( wxVERTICAL );

	btn_load_img_2_ = new wxButton( this, wxID_ANY, wxT("打开图片"), wxDefaultPosition, wxDefaultSize, 0 );
	img_others_opt_2_sizer_->Add( btn_load_img_2_, 0, wxALL, 5 );


	img_opt_2_sizer_->Add( img_others_opt_2_sizer_, 1, wxEXPAND, 5 );


	src_img_view_2_sizer_->Add( img_opt_2_sizer_, 1, wxEXPAND, 5 );


	src_img_sizer_->Add( src_img_view_2_sizer_, 1, wxALIGN_CENTER|wxEXPAND, 5 );

	wxBoxSizer* src_img_view_3_sizer_;
	src_img_view_3_sizer_ = new wxBoxSizer( wxVERTICAL );

	src_img_view_3_ = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 256,256 ), wxBORDER_SUNKEN );
	src_img_view_3_sizer_->Add( src_img_view_3_, 0, wxALL, 5 );

	wxBoxSizer* img_opt_3_sizer_;
	img_opt_3_sizer_ = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* mg_channel_opt_3_sizer_;
	mg_channel_opt_3_sizer_ = new wxBoxSizer( wxVERTICAL );

	chk_img_view_3_red_ = new wxCheckBox( this, wxID_ANY, wxT("Red通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_3_sizer_->Add( chk_img_view_3_red_, 0, wxALL, 5 );

	chk_img_view_3_green_ = new wxCheckBox( this, wxID_ANY, wxT("Green通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_3_sizer_->Add( chk_img_view_3_green_, 0, wxALL, 5 );

	chk_img_view_3_blue_ = new wxCheckBox( this, wxID_ANY, wxT("Blue通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_3_sizer_->Add( chk_img_view_3_blue_, 0, wxALL, 5 );

	chk_img_view_3_alpha_ = new wxCheckBox( this, wxID_ANY, wxT("Alpha通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_3_sizer_->Add( chk_img_view_3_alpha_, 0, wxALL, 5 );


	img_opt_3_sizer_->Add( mg_channel_opt_3_sizer_, 1, wxEXPAND, 5 );

	wxBoxSizer* img_others_opt_3_sizer_;
	img_others_opt_3_sizer_ = new wxBoxSizer( wxVERTICAL );

	btn_load_img_3_ = new wxButton( this, wxID_ANY, wxT("打开图片"), wxDefaultPosition, wxDefaultSize, 0 );
	img_others_opt_3_sizer_->Add( btn_load_img_3_, 0, wxALL, 5 );


	img_opt_3_sizer_->Add( img_others_opt_3_sizer_, 1, wxEXPAND, 5 );


	src_img_view_3_sizer_->Add( img_opt_3_sizer_, 1, wxEXPAND, 5 );


	src_img_sizer_->Add( src_img_view_3_sizer_, 1, wxALIGN_CENTER|wxEXPAND, 5 );

	wxBoxSizer* src_img_view_4_sizer_;
	src_img_view_4_sizer_ = new wxBoxSizer( wxVERTICAL );

	src_img_view_4_ = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 256,256 ), wxBORDER_STATIC );
	src_img_view_4_sizer_->Add( src_img_view_4_, 0, wxALL, 5 );

	wxBoxSizer* img_opt_4_sizer_;
	img_opt_4_sizer_ = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* mg_channel_opt_4_sizer_;
	mg_channel_opt_4_sizer_ = new wxBoxSizer( wxVERTICAL );

	chk_img_view_4_red_ = new wxCheckBox( this, wxID_ANY, wxT("Red通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_4_sizer_->Add( chk_img_view_4_red_, 0, wxALL, 5 );

	chk_img_view_4_green_ = new wxCheckBox( this, wxID_ANY, wxT("Green通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_4_sizer_->Add( chk_img_view_4_green_, 0, wxALL, 5 );

	chk_img_view_4_blue_ = new wxCheckBox( this, wxID_ANY, wxT("Blue通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_4_sizer_->Add( chk_img_view_4_blue_, 0, wxALL, 5 );

	chk_img_view_4_alpha_ = new wxCheckBox( this, wxID_ANY, wxT("Alpha通道"), wxDefaultPosition, wxDefaultSize, 0 );
	mg_channel_opt_4_sizer_->Add( chk_img_view_4_alpha_, 0, wxALL, 5 );


	img_opt_4_sizer_->Add( mg_channel_opt_4_sizer_, 1, wxEXPAND, 5 );

	wxBoxSizer* img_others_opt_4_sizer_;
	img_others_opt_4_sizer_ = new wxBoxSizer( wxVERTICAL );

	btn_load_img_4_ = new wxButton( this, wxID_ANY, wxT("打开图片"), wxDefaultPosition, wxDefaultSize, 0 );
	img_others_opt_4_sizer_->Add( btn_load_img_4_, 0, wxALL, 5 );


	img_opt_4_sizer_->Add( img_others_opt_4_sizer_, 1, wxEXPAND, 5 );


	src_img_view_4_sizer_->Add( img_opt_4_sizer_, 1, wxEXPAND, 5 );


	src_img_sizer_->Add( src_img_view_4_sizer_, 1, wxALIGN_CENTER|wxEXPAND, 5 );


	main_sizer_->Add( src_img_sizer_, 1, wxEXPAND, 5 );

	wxBoxSizer* main_option_sizer_;
	main_option_sizer_ = new wxBoxSizer( wxVERTICAL );

	btn_combine_image_ = new wxButton( this, wxID_ANY, wxT("合成图片"), wxDefaultPosition, wxDefaultSize, 0 );
	main_option_sizer_->Add( btn_combine_image_, 0, wxALL, 5 );


	main_sizer_->Add( main_option_sizer_, 1, wxEXPAND, 5 );


	this->SetSizer( main_sizer_ );
	this->Layout();

	// Connect Events
	btn_load_img_1_->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView1 ), NULL, this );
	btn_load_img_2_->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView2 ), NULL, this );
	btn_load_img_3_->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView3 ), NULL, this );
	btn_load_img_4_->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView4 ), NULL, this );
	btn_combine_image_->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnCombineImageClicked ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	btn_load_img_1_->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView1 ), NULL, this );
	btn_load_img_2_->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView2 ), NULL, this );
	btn_load_img_3_->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView3 ), NULL, this );
	btn_load_img_4_->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenImageForImageView4 ), NULL, this );
	btn_combine_image_->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnCombineImageClicked ), NULL, this );

}
