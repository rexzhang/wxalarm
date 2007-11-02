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
enum wxbuildinfoformat {
    short_f, long_f };

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

wxalarmFrame::wxalarmFrame(wxFrame *frame)
    : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
    myTary = new myWxTary(this);
    myTary->SetIcon(wxICON(aaaa));

    //m_timer = new wxTimer(this);
    m_timer.Connect(TIMER_ID,  wxCommandEventHandler( wxalarmFrame::OnTimer ), NULL, this);
}

wxalarmFrame::~wxalarmFrame()
{
    delete myTary;
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

    //this->m_timer->Start(m_time * 60);
    m_timer.Start(m_time * 60);

}

void wxalarmFrame::OnTimer(wxTimerEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
