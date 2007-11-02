/***************************************************************
 * Name:      wxalarmApp.cpp
 * Purpose:   Code for Application Class
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

#include <wx/taskbar.h>

#include "wxalarmApp.h"
#include "wxalarmMain.h"

#include "myWxTary.h"

IMPLEMENT_APP(wxalarmApp);

bool wxalarmApp::OnInit()
{
    wxalarmFrame* frame = new wxalarmFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    //myTary = new myWxTary;
    //myTary->SetIcon(wxICON(aaaa));

    //wxTaskBarIcon* myTary = new wxTaskBarIcon;
    //myTary->SetIcon(wxICON(aaaa));
    //delete myTary;

    return true;
}


wxalarmApp::~wxalarmApp()
{
    //myTary->~wxTaskBarIcon();
    //delete myTary;
}

