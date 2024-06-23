//
// Created by admin on 2024/6/22.
//

#pragma once

#include <wx/wx.h>
#include <wx/taskbar.h>

class MyTray : public wxTaskBarIcon {

public:
    explicit MyTray(wxTaskBarIconType iconType);

public:
//    void OnAbout(wxCommandEvent &event);
    // void exitFun(wxCommandEvent &event);

protected:
    virtual wxMenu *CreatePopupMenu();
    void pushTrayMenus(wxTaskBarIconEvent& event);

private:

};

