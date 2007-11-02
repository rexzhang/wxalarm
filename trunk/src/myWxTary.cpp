/////////////////////////////////////////////////////////////////////////////
// Name:        myWxTary.cpp
// Purpose:
// Author:      Rex Zhang
// Modified by:
// Created:     2007-11-01
// RCS-ID:
// Copyright:   (c) 200x Rex Zhang
// Licence:     GNU General Public License (GPL) version 2
/////////////////////////////////////////////////////////////////////////////#include "myWxTary.h"

#include <wx/menu.h>

#include "wxalarmMain.h"

#include "myWxTary.h"

DEFINE_EVENT_TYPE( PU_EXIT )

BEGIN_EVENT_TABLE( myWxTary, wxTaskBarIcon )
    EVT_MENU( PU_EXIT, myWxTary::OnMenuQuit )

    EVT_TASKBAR_LEFT_DOWN ( myWxTary::OnLeftButtonClick )
    //EVT_TASKBAR_RIGHT_DOWN( myWxTary::OnRightButtonClick )
END_EVENT_TABLE()

myWxTary::myWxTary( wxalarmFrame* pmain )
{
    //ctor
    m_pMainwin = pmain;
}

myWxTary::~myWxTary()
{
    //dtor
    //~wxTaskBarIcon();
    //RemoveIcon();
}

wxMenu* myWxTary::CreatePopupMenu()
{
    wxMenu * menu = new wxMenu;
    wxMenuItem *mTiem;

    menu->Append(1, _("test"));

    mTiem = new wxMenuItem( menu, PU_EXIT, _("quit"), wxT( "quit wxalarm" ) );
    menu->Append( mTiem );
    //menu->Append(2, _("quit"));

    return menu;
}


void myWxTary::OnMenuQuit(  wxCommandEvent& )
{
    wxLogWarning( _("OnMenuQuit") );
    m_pMainwin->Destroy();
}

void myWxTary::OnLeftButtonClick( wxTaskBarIconEvent& event )
{
    wxLogWarning( _("OnLeftButtonClick") );

    event.Skip();
}

void myWxTary::OnRightButtonClick( wxTaskBarIconEvent& event )
{
    wxLogWarning( _("OnRightButtonClick") );

    event.Skip();
}

