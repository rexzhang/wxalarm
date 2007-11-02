/***************************************************************
 * Name:      wxalarmApp.h
 * Purpose:   Defines Application Class
 * Author:    Rex Zhang (rex.zhang@gmail.com)
 * Created:   2007-11-01
 * Copyright: Rex Zhang (http://code.google.com/p/wxalarm/)
 * License:
 **************************************************************/

#ifndef WXALARMAPP_H
#define WXALARMAPP_H

#include <wx/app.h>

#include <wx/taskbar.h>

#include "myWxTary.h"

class wxalarmApp : public wxApp
{
    public:
        virtual bool OnInit();
        //wxTaskBarIcon* myTary;
        //static
        myWxTary* myTary;
        ~wxalarmApp();
};

#endif // WXALARMAPP_H
