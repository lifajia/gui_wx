#include <iostream>

// Start of wxWidgets "Hello World" Program
#include <wx/wx.h>
#include <wx/taskbar.h>
#include "MainFrame.h"

class MyApp : public wxApp {
public:
    bool OnInit() override;
};

bool MyApp::OnInit() {

//    wxWindow * wxwindow =  new wxWindow();
    auto *frame = new MainFrame(nullptr);
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(MyApp);
