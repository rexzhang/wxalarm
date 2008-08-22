///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFrame__
#define __GUIFrame__

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/listctrl.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/statbox.h>
#include <wx/choice.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define idMenuQuit 1000
#define idMenuAbout 1001

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* helpMenu;
		wxStatusBar* statusBar;
		wxPanel* m_panel1;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticTextEscapeTime;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticTextStopTime;
		wxListCtrl* m_listCtrl;
		wxButton* m_buttonQuit;
		wxButton* m_buttonCommit;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ){ event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnListColClick( wxListEvent& event ){ event.Skip(); }
		virtual void OnListItemActivated( wxListEvent& event ){ event.Skip(); }
		virtual void clickQuit( wxCommandEvent& event ){ event.Skip(); }
		virtual void clickCommit( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxAlarm"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 522,667 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~GUIFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GUIAlarmItemModifyDialog
///////////////////////////////////////////////////////////////////////////////
class GUIAlarmItemModifyDialog : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panel3;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText6;
		wxComboBox* m_comboBox1;
		wxRadioBox* m_radioBox1;
		wxCheckBox* m_checkBox2;
		wxPanel* m_panel41;
		wxStaticText* m_staticText7;
		wxSpinCtrl* m_spinCtrlDayNumber;
		wxStaticText* m_staticText9;
		wxSpinCtrl* m_spinCtrlHourNumber;
		wxStaticText* m_staticText8;
		wxSpinCtrl* m_spinCtrlMinNumber1;
		wxStaticText* m_staticText10;
		wxStaticLine* m_staticline3;
		wxStaticText* m_staticText151;
		wxDatePickerCtrl* m_datePicker1;
		wxSpinCtrl* m_spinCtrl6;
		wxStaticText* m_staticText16;
		wxSpinCtrl* m_spinCtrl7;
		wxStaticText* m_staticText17;
		wxPanel* m_panel4;
		wxStaticText* m_staticText14;
		wxChoice* m_choice2;
		wxStaticText* m_staticText11;
		wxSpinCtrl* m_spinCtrlDayNumber2;
		wxStaticText* m_staticText13;
		wxSpinCtrl* m_spinCtrlHourNumber1;
		wxStaticText* m_staticText12;
		wxButton* m_button3;
		wxButton* m_button4;
	
	public:
		GUIAlarmItemModifyDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 647,543 ), long style = wxDEFAULT_DIALOG_STYLE );
		~GUIAlarmItemModifyDialog();
	
};

#endif //__GUIFrame__
