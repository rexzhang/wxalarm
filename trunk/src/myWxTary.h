/////////////////////////////////////////////////////////////////////////////
// Name:        myWxTary.h
// Purpose:
// Author:      Rex Zhang
// Modified by:
// Created:     2007-11-01
// RCS-ID:
// Copyright:   (c) 200x Rex Zhang
// Licence:     GNU General Public License (GPL) version 2
/////////////////////////////////////////////////////////////////////////////
#ifndef MYWXTARY_H
#define MYWXTARY_H

#include <wx/wx.h>
#include <wx/taskbar.h>

class wxalarmFrame;

DECLARE_EVENT_TYPE( PU_EXIT, -1 )

class myWxTary : public wxTaskBarIcon
{
    public:
        myWxTary( wxalarmFrame* pmain );
        virtual ~myWxTary();

        void OnMenuQuit(  wxCommandEvent& );

        void OnLeftButtonClick( wxTaskBarIconEvent& );
        void OnRightButtonClick( wxTaskBarIconEvent& );

        virtual wxMenu* CreatePopupMenu();


    protected:
        wxalarmFrame *m_pMainwin;

    private:
        DECLARE_EVENT_TABLE()
};



#endif // MYWXTARY_H
