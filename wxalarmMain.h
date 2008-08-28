/***************************************************************
 * Name:      wxalarmMain.h
 * Purpose:   Defines Application Frame
 * Author:    Rex Zhang (rex.zhang@gmail.com)
 * Created:   2007-11-01
 * Copyright: Rex Zhang (http://code.google.com/p/wxalarm/)
 * License:
 **************************************************************/

#ifndef WXALARMMAIN_H
#define WXALARMMAIN_H

#include <wx/timer.h>

#include "wxalarmApp.h"

#include "myWxTary.h"

#include "GUIFrame.h"

#include "ticpp/tinyxml.h"

#include <string>
using std::string;

class wxalarmFrame: public GUI_frameMainWindow
{
public:
    wxalarmFrame(wxFrame *frame);
    ~wxalarmFrame();

protected:
    myWxTary* m_tary;
    wxTimer* m_timer;

private:
    virtual void OnClose(wxCloseEvent& event);
    virtual void OnQuit(wxCommandEvent& event);
    virtual void OnAbout(wxCommandEvent& event);

    virtual void clickCommit(wxCommandEvent& event);
    virtual void clickQuit( wxCommandEvent& event );

    virtual void OnTimer(wxTimerEvent& event);

    virtual void wxalarmFrame::OnListColClick( wxListEvent& event );
    virtual void wxalarmFrame::OnListItemActivated( wxListEvent& event );

    DECLARE_EVENT_TABLE()
};

class alarmItem
{
    string remainderTime;//剩余时间
    string description;//提醒内容
    bool repeat;//自动循环
    string alarmTime;
    string memo;//备注
};

#endif // WXALARMMAIN_H
