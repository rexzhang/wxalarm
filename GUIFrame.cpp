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
	
	wxBoxSizer* bSizerInputA;
	bSizerInputA = new wxBoxSizer( wxVERTICAL );
	
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
	
	m_listCtrl = new wxListCtrl( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	bSizer14->Add( m_listCtrl, 1, wxALL|wxEXPAND, 5 );
	
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
	m_listCtrl->Connect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( GUIFrame::OnListColClick ), NULL, this );
	m_listCtrl->Connect( wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler( GUIFrame::OnListItemActivated ), NULL, this );
	m_buttonQuit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickQuit ), NULL, this );
	m_buttonCommit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickCommit ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
	m_listCtrl->Disconnect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( GUIFrame::OnListColClick ), NULL, this );
	m_listCtrl->Disconnect( wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler( GUIFrame::OnListItemActivated ), NULL, this );
	m_buttonQuit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickQuit ), NULL, this );
	m_buttonCommit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::clickCommit ), NULL, this );
}

GUIAlarmItemModifyDialog::GUIAlarmItemModifyDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText15 = new wxStaticText( m_panel3, wxID_ANY, wxT("闹钟调整"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 24, 70, 90, 90, false, wxEmptyString ) );
	
	bSizer25->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer24->Add( bSizer25, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizerAlarmText;
	bSizerAlarmText = new wxBoxSizer( wxVERTICAL );
	
	m_staticText6 = new wxStaticText( m_panel3, wxID_ANY, wxT("提醒内容："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizerAlarmText->Add( m_staticText6, 0, wxALL, 5 );
	
	m_comboBox1 = new wxComboBox( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizerAlarmText->Add( m_comboBox1, 1, wxALL|wxEXPAND, 5 );
	
	bSizer24->Add( bSizerAlarmText, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerInputB;
	bSizerInputB = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText7 = new wxStaticText( m_panel3, wxID_ANY, wxT("等待时间："), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer9->Add( m_staticText7, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_spinCtrlDayNumber = new wxSpinCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 99, 0 );
	bSizer16->Add( m_spinCtrlDayNumber, 0, wxALL, 5 );
	
	m_staticText9 = new wxStaticText( m_panel3, wxID_ANY, wxT("天"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer16->Add( m_staticText9, 0, wxALL, 5 );
	
	m_spinCtrlHourNumber = new wxSpinCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 23, 0 );
	bSizer16->Add( m_spinCtrlHourNumber, 0, wxALL, 5 );
	
	m_staticText8 = new wxStaticText( m_panel3, wxID_ANY, wxT("小时"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer16->Add( m_staticText8, 0, wxALL, 5 );
	
	m_spinCtrlMinNumber1 = new wxSpinCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 23, 0 );
	bSizer16->Add( m_spinCtrlMinNumber1, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( m_panel3, wxID_ANY, wxT("分"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer16->Add( m_staticText10, 0, wxALL, 5 );
	
	bSizer9->Add( bSizer16, 1, wxEXPAND, 5 );
	
	bSizerInputB->Add( bSizer9, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer24->Add( bSizerInputB, 0, wxEXPAND, 5 );
	
	m_checkBox2 = new wxCheckBox( m_panel3, wxID_ANY, wxT("自动循环"), wxDefaultPosition, wxDefaultSize, 0 );
	
	bSizer24->Add( m_checkBox2, 0, wxALL, 5 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_panel3, wxID_ANY, wxT("自动循环设置") ), wxVERTICAL );
	
	m_panel4 = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText14 = new wxStaticText( m_panel4, wxID_ANY, wxT("自动循环模板"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer28->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxArrayString m_choice2Choices;
	m_choice2 = new wxChoice( m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice2Choices, 0 );
	m_choice2->SetSelection( 0 );
	bSizer28->Add( m_choice2, 1, wxALL|wxEXPAND, 5 );
	
	bSizer27->Add( bSizer28, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( m_panel4, wxID_ANY, wxT("循环周期"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer23->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spinCtrlDayNumber2 = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 99, 0 );
	bSizer23->Add( m_spinCtrlDayNumber2, 0, wxALL, 5 );
	
	m_staticText13 = new wxStaticText( m_panel4, wxID_ANY, wxT("天"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer23->Add( m_staticText13, 0, wxALL, 5 );
	
	m_spinCtrlHourNumber1 = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 99, 0 );
	bSizer23->Add( m_spinCtrlHourNumber1, 0, wxALL, 5 );
	
	m_staticText12 = new wxStaticText( m_panel4, wxID_ANY, wxT("小时"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer23->Add( m_staticText12, 0, wxALL, 5 );
	
	bSizer27->Add( bSizer23, 1, wxEXPAND, 5 );
	
	m_panel4->SetSizer( bSizer27 );
	m_panel4->Layout();
	bSizer27->Fit( m_panel4 );
	sbSizer2->Add( m_panel4, 1, wxEXPAND | wxALL, 5 );
	
	bSizer24->Add( sbSizer2, 0, wxEXPAND, 5 );
	
	m_staticline2 = new wxStaticLine( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer24->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button3 = new wxButton( m_panel3, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_button3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_button4 = new wxButton( m_panel3, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_button4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer17->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer24->Add( bSizer17, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_panel3->SetSizer( bSizer24 );
	m_panel3->Layout();
	bSizer24->Fit( m_panel3 );
	bSizer15->Add( m_panel3, 1, wxEXPAND | wxALL, 20 );
	
	this->SetSizer( bSizer15 );
	this->Layout();
}

GUIAlarmItemModifyDialog::~GUIAlarmItemModifyDialog()
{
}
