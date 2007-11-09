/***************************************************************
 * Name:      wxalarmMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Rex Zhang (rex.zhang@gmail.com)
 * Created:   2007-11-01
 * Copyright: Rex Zhang (http://code.google.com/p/wxalarm/)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxalarmMain.h"


//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

BEGIN_EVENT_TABLE(wxalarmFrame, wxFrame)
    EVT_TIMER(1, wxalarmFrame::OnTimer)
END_EVENT_TABLE()

wxalarmFrame::wxalarmFrame(wxFrame *frame)
        : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
    m_tary = new myWxTary(this);
    m_tary->SetIcon(wxICON(aaaa));

    m_timer = new wxTimer(this, 1);
    //m_timer = new wxTimer(NULL, this->OnTimer());
    //m_timer->Connect( wxEVT_TIMER ,  wxTimerEventHandler( wxalarmFrame::OnTimer ) );//, NULL, this);
    //m_timer->Connect( wxEVT_TIMER ,  wxTimerEventHandler( wxalarmFrame::OnTimer ) );
    //m_timer.Connect( wxEVT_TIMER ,  wxTimerEventHandler( wxalarmFrame::OnTimer ), NULL, this);
}

wxalarmFrame::~wxalarmFrame()
{
    delete m_tary;
    delete m_timer;
}


void wxalarmFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void wxalarmFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void wxalarmFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxalarmFrame::clickCommit(wxCommandEvent &event)
{
    //wxString msg = wxbuildinfo(long_f);
    //wxMessageBox(msg, _("clickCommit..."));

    int m_time = this->m_spinCtrlTimeNumber->GetValue();

    wxString textEscapeTime;

    textEscapeTime.Printf(_("%i"), m_time);

    this->m_staticTextEscapeTime->SetLabel( textEscapeTime );

    if ( !m_timer->Start( m_time * 1000, wxTIMER_ONE_SHOT ) )
        //if( !m_timer.Start(m_time * 1000) )
    {
        wxString msg = wxbuildinfo(long_f);
        wxMessageBox(msg, _("if( !m_timer->Start(m_time * 100) )"));
    }

}

//void wxalarmFrame::OnTimer(wxTimerEvent& event)
void wxalarmFrame::OnTimer(wxTimerEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
