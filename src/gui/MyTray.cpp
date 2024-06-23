
#include "MyTray.h"
#include "wx/event.h"
#include "MainFrame.h"
#include "ExitDialog.h"


wxMenu *MyTray::CreatePopupMenu() {
    // 每次都要 new 一个新的 wxMenu
    wxMenu *popupMenu = new wxMenu;
    popupMenu->Append(wxID_ABOUT, _("关于"));
    popupMenu->Append(1, _("重启程序"));
//    popupMenu->AppendSeparator();
    popupMenu->Append(wxID_EXIT, _("退出程序"));
    return popupMenu;
}


MyTray::MyTray(wxTaskBarIconType iconType) : wxTaskBarIcon(iconType) {
    this->SetIcon(wxIcon("D:/projects/c++/wx_test1/ui/icon.ico", wxBITMAP_TYPE_ICO), "My APP!");

//    Bind(wxEVT_TASKBAR_LEFT_DOWN, &MyTray::pushTrayMenus,this);
    Bind(wxEVT_TASKBAR_RIGHT_DOWN, &MyTray::pushTrayMenus, this);
}



void MyTray::pushTrayMenus(wxTaskBarIconEvent &event) {
    this->PopupMenu(this->CreatePopupMenu());
}

