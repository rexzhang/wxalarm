///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	mbar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Quit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
	fileMenu->Append( menuFileQuit );
	
	mbar->Append( fileMenu, wxT("&File") );
	
	helpMenu = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
	helpMenu->Append( menuHelpAbout );
	
	mbar->Append( helpMenu, wxT("&Help") );
	
	this->SetMenuBar( mbar );
	
	statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerAlarmText;
	bSizerAlarmText = new wxBoxSizer( wxVERTICAL );
	
	m_staticText6 = new wxStaticText( m_panel1, wxID_ANY, wxT("提醒内容："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizerAlarmText->Add( m_staticText6, 0, wxALL, 5 );
	
	m_comboBox1 = new wxComboBox( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizerAlarmText->Add( m_comboBox1, 1, wxALL|wxEXPAND, 5 );
	
	bSizer6->Add( bSizerAlarmText, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerInputA;
	bSizerInputA = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerInputB;
	bSizerInputB = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText7 = new wxStaticText( m_panel1, wxID_ANY, wxT("等待时间："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer9->Add( m_staticText7, 0, wxALL, 5 );
	
	m_spinCtrlTimeNumber = new wxSpinCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 60, 0 );
	bSizer9->Add( m_spinCtrlTimeNumber, 0, wxALL, 5 );
	
	bSizerInputB->Add( bSizer9, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText71 = new wxStaticText( m_panel1, wxID_ANY, wxT("时间单位："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	bSizer10->Add( m_staticText71, 0, wxALL, 5 );
	
	wxString m_choice1Choices[] = { wxT("分"), wxT("小时") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1NChoices, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer10->Add( m_choice1, 0, wxALL, 5 );
	
	bSizerInputB->Add( bSizer10, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	bSizer8->Add( bSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_checkBox1 = new wxCheckBox( m_panel1, wxID_ANY, wxT("最小化到托盘"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox1->SetValue(true);
	
	bSizer12->Add( m_checkBox1, 0, wxALL, 5 );
	
	bSizer8->Add( bSizer12, 1, wxEXPAND, 5 );
	
	bSizerInputB->Add( bSizer8, 1, wxEXPAND, 5 );
	
	bSizerInputA->Add( bSizerInputB, 1, wxEXPAND, 5 );
	
	bSizer6->Add( bSizerInputA, 0, wxEXPAND, 5 );
	
	m_staticline1 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer6->Add( m_staticline1, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizerShowTime;
	bSizerShowTime = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( m_panel1, wxID_ANY, wxT("剩余时间："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizerShowTime->Add( m_staticText2, 0, wxALL, 5 );
	
	m_staticTextEscapeTime = new wxStaticText( m_panel1, wxID_ANY, wxT("10:10:10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEscapeTime->Wrap( -1 );
	bSizerShowTime->Add( m_staticTextEscapeTime, 0, wxALL, 5 );
	
	m_staticText5 = new wxStaticText( m_panel1, wxID_ANY, wxT("终点时间："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizerShowTime->Add( m_staticText5, 0, wxALL, 5 );
	
	m_staticTextStopTime = new wxStaticText( m_panel1, wxID_ANY, wxT("20：20：20"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextStopTime->Wrap( -1 );
	bSizerShowTime->Add( m_staticTextStopTime, 0, wxALL, 5 );
	
	bSizer6->Add( bSizerShowTime, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	m_listCtrl3 = new wxListCtrl( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_LIST|wxLC_SINGLE_SEL|wxLC_VRULES );
	bSizer14->Add( m_listCtrl3, 1, wxALL|wxEXPAND, 5 );
	
	bSizer6->Add( bSizer14, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonQuit = new wxButton( m_panel1, wxID_ANY, wxT("退出程序"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer131->Add( m_buttonQuit, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_buttonCommit = new wxButton( m_panel1, wxID_ANY, wxT("开始计时"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer131->Add( m_buttonCommit, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer13->Add( bSizer131, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer6->Add( bSizer13, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_panel1->SetSizer( bSizer6 );
	m_panel1->Layout();
	bSizer6->Fit( m_panel1 );
	bSizer1->Add( m_panel1, 1, wxALL|wxEXPAND, 0 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_buttonQuit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickQuit ), NULL, this );
	m_buttonCommit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickCommit ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_buttonQuit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickQuit ), NULL, this );
	m_buttonCommit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickCommit ), NULL, this );
}
