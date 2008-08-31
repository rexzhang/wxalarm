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

//界面类
#include "dialogAlarmItemModify.h"

//程序运行支撑类
#include "alarmList.h"

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
        : GUI_frameMainWindow(frame)
{
    /*
    #if wxUSE_STATUSBAR
        statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
        statusBar->SetStatusText(wxbuildinfo(short_f), 1);
    #endif
    */
    m_tary = new myWxTary(this);
    m_tary->SetIcon(wxICON(aaaa));

    m_timer = new wxTimer(this, 1);
    //m_timer->Connect( wxEVT_TIMER ,  wxTimerEventHandler( wxalarmFrame::OnTimer ) );
    //m_timer.Connect( wxEVT_TIMER ,  wxTimerEventHandler( wxalarmFrame::OnTimer ), NULL, this);

    //构造多列列表结构
    wxListItem itemCol;

    itemCol.SetText(_T("剩余时间"));
    m_listCtrl->InsertColumn(0, itemCol);

    itemCol.SetText(_T("提醒内容"));
    m_listCtrl->InsertColumn(1, itemCol);

    itemCol.SetText(_T("循环？"));
    m_listCtrl->InsertColumn(2, itemCol);

    itemCol.SetText(_T("到期时间"));
    m_listCtrl->InsertColumn(3, itemCol);

    itemCol.SetText(_T("其他"));
    m_listCtrl->InsertColumn(4, itemCol);

    //向多列列表填充数据
    for ( int i = 0; i < 20; i++ )
    {
        //m_listCtrl->InsertItemInReportView(i);
        wxString buf;

        buf.Printf(_T("This is item %d"), i);
        long tmp = m_listCtrl->InsertItem(i, buf, 0);
        m_listCtrl->SetItemData(tmp, i);

        buf.Printf(_T("Col 1, item %d"), i);
        m_listCtrl->SetItem(tmp, 1, buf);

        buf.Printf(_T("Item %d in column 2"), i);
        m_listCtrl->SetItem(tmp, 2, buf);
    }

    //根据内容调整表内尺寸
    m_listCtrl->SetColumnWidth(0, wxLIST_AUTOSIZE );
    m_listCtrl->SetColumnWidth(1, wxLIST_AUTOSIZE );
    m_listCtrl->SetColumnWidth(2, wxLIST_AUTOSIZE );
    //m_listCtrl->SetColumnWidth(3, wxLIST_AUTOSIZE );
    //m_listCtrl->SetColumnWidth(4, wxLIST_AUTOSIZE );

    alarmList *myAlarmList;
    myAlarmList = new alarmList;
    myAlarmList->ReloadList();

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
    //wxString msg = wxbuildinfo(long_f);
    wxString msg = _("wxAlarm Alapha");
    wxMessageBox(msg, _("Welcome to..."));
}

void wxalarmFrame::clickCommit(wxCommandEvent &event)
{
    /*
        int m_time = this->m_spinCtrlTimeNumber->GetValue();

        wxString textEscapeTime;

        textEscapeTime.Printf(_("%i"), m_time);

        this->m_staticTextEscapeTime->SetLabel( textEscapeTime );

        if ( !m_timer->Start( m_time * 60 * 1000, wxTIMER_ONE_SHOT ) )
            //if( !m_timer.Start(m_time * 1000) )
        {
            wxString msg = wxbuildinfo(long_f);
            wxMessageBox(msg, _("if( !m_timer->Start(m_time * 100) )"));
        }

        this->Hide();
    */
}

void wxalarmFrame::OnTimer(wxTimerEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("void wxalarmFrame::OnTimer(wxTimerEvent& event)"));
}

void wxalarmFrame::clickQuit( wxCommandEvent& event )
{
    Destroy();
}

void wxalarmFrame::OnListColClick( wxListEvent& event )
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("OnListColClick"));
    //Destroy();
}

void wxalarmFrame::OnListItemActivated( wxListEvent& event )
{
    //wxString msg = wxbuildinfo(long_f);
    //wxMessageBox(msg, _("OnListItemActivated"));
    //Destroy();
    dialogAlarmItemModify* itemModifyDialog = new dialogAlarmItemModify(this);
    itemModifyDialog->Show();
}
