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



#include "wxalarmApp.h"

#include "myWxTary.h"

#include "GUIFrame.h"

class wxalarmFrame: public GUIFrame
{
    public:
        wxalarmFrame(wxFrame *frame);
        ~wxalarmFrame();
        myWxTary* myTary;

    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // WXALARMMAIN_H
