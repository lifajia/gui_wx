///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MainFrame.h"
#include "ExitDialog.h"
#include "wx/wx.h"
#include "spdlog/spdlog.h"
#include "MyTray.h"
#include "wx/msw/taskbar.h"
#include "wx/taskbar.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size,
                     long style) : wxFrame(parent, id, title, pos, size, style) {
    this->SetSizeHints(wxSize(-1, -1), wxDefaultSize);

    wxBoxSizer *bSizer13;
    bSizer13 = new wxBoxSizer(wxVERTICAL);

    m_listbook14 = new wxListbook(this, wxID_ANY, wxDefaultPosition, wxSize(-1, 400), wxLB_DEFAULT);
    m_panel34 = new wxPanel(m_listbook14, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    wxGridSizer *gSizer3;
    gSizer3 = new wxGridSizer(0, 2, 0, 0);

    m_toggleBtn1 = new wxToggleButton(m_panel34, wxID_ANY, _("退出程序"), wxDefaultPosition, wxDefaultSize, 0);
    gSizer3->Add(m_toggleBtn1, 0, wxALL, 5);

    m_toggleBtn2 = new wxToggleButton(m_panel34, wxID_ANY, _("重启程序"), wxDefaultPosition, wxDefaultSize, 0);
    gSizer3->Add(m_toggleBtn2, 0, wxALL, 5);


    m_panel34->SetSizer(gSizer3);
    m_panel34->Layout();
    gSizer3->Fit(m_panel34);
    m_listbook14->AddPage(m_panel34, _("总览"), true);
    m_panel35 = new wxPanel(m_listbook14, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer *bSizer14;
    bSizer14 = new wxBoxSizer(wxVERTICAL);

    m_dataViewListCtrl4 = new wxDataViewListCtrl(m_panel35, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_ROW_LINES);
    bSizer14->Add(m_dataViewListCtrl4, 0, wxALL, 5);


    m_panel35->SetSizer(bSizer14);
    m_panel35->Layout();
    bSizer14->Fit(m_panel35);
    m_listbook14->AddPage(m_panel35, _("统计"), false);
    m_panel36 = new wxPanel(m_listbook14, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxFlexGridSizer *fgSizer9;
    fgSizer9 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer9->SetFlexibleDirection(wxBOTH);
    fgSizer9->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

    m_staticText3 = new wxStaticText(m_panel36, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText3->Wrap(-1);
    fgSizer9->Add(m_staticText3, 0, wxALL, 5);

    m_textCtrl9 = new wxTextCtrl(m_panel36, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_textCtrl9, 0, wxALL, 5);

    m_staticText4 = new wxStaticText(m_panel36, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText4->Wrap(-1);
    fgSizer9->Add(m_staticText4, 0, wxALL, 5);

    m_textCtrl10 = new wxTextCtrl(m_panel36, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_textCtrl10, 0, wxALL, 5);

    m_comboBox1 = new wxComboBox(m_panel36, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
    fgSizer9->Add(m_comboBox1, 0, wxALL, 5);

    m_bcomboBox1 = new wxBitmapComboBox(m_panel36, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
    fgSizer9->Add(m_bcomboBox1, 0, wxALL, 5);

    wxArrayString m_choice1Choices;
    m_choice1 = new wxChoice(m_panel36, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1Choices, 0);
    m_choice1->SetSelection(0);
    fgSizer9->Add(m_choice1, 0, wxALL, 5);

    m_listBox2 = new wxListBox(m_panel36, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
    fgSizer9->Add(m_listBox2, 0, wxALL, 5);

    m_checkBox1 = new wxCheckBox(m_panel36, wxID_ANY, _("Check Me!"), wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_checkBox1, 0, wxALL, 5);

    m_checkBox2 = new wxCheckBox(m_panel36, wxID_ANY, _("Check Me!"), wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_checkBox2, 0, wxALL, 5);

    m_checkBox3 = new wxCheckBox(m_panel36, wxID_ANY, _("Check Me!"), wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_checkBox3, 0, wxALL, 5);

    m_checkBox4 = new wxCheckBox(m_panel36, wxID_ANY, _("Check Me!"), wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_checkBox4, 0, wxALL, 5);

    wxString m_radioBox1Choices[] = {_("Radio Button")};
    int m_radioBox1NChoices = sizeof(m_radioBox1Choices) / sizeof(wxString);
    m_radioBox1 = new wxRadioBox(m_panel36, wxID_ANY, _("wxRadioBox"), wxDefaultPosition, wxDefaultSize,
                                 m_radioBox1NChoices, m_radioBox1Choices, 1, wxRA_SPECIFY_COLS);
    m_radioBox1->SetSelection(0);
    fgSizer9->Add(m_radioBox1, 0, wxALL, 5);

    m_radioBtn1 = new wxRadioButton(m_panel36, wxID_ANY, _("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
    fgSizer9->Add(m_radioBtn1, 0, wxALL, 5);

    m_staticline1 = new wxStaticLine(m_panel36, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    fgSizer9->Add(m_staticline1, 0, wxEXPAND | wxALL, 5);

    m_slider5 = new wxSlider(m_panel36, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
    fgSizer9->Add(m_slider5, 0, wxALL, 5);

    m_gauge5 = new wxGauge(m_panel36, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL);
    m_gauge5->SetValue(0);
    fgSizer9->Add(m_gauge5, 0, wxALL, 5);


    m_panel36->SetSizer(fgSizer9);
    m_panel36->Layout();
    fgSizer9->Fit(m_panel36);
    m_listbook14->AddPage(m_panel36, _("配置"), false);
    m_panel37 = new wxPanel(m_listbook14, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxGridSizer *gSizer4;
    gSizer4 = new wxGridSizer(0, 2, 0, 0);

    m_searchCtrl1 = new wxSearchCtrl(m_panel37, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
#ifndef __WXMAC__
    m_searchCtrl1->ShowSearchButton(true);
#endif
    m_searchCtrl1->ShowCancelButton(false);
    gSizer4->Add(m_searchCtrl1, 0, wxALL, 5);

    m_colourPicker1 = new wxColourPickerCtrl(m_panel37, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize,
                                             wxCLRP_DEFAULT_STYLE);
    gSizer4->Add(m_colourPicker1, 0, wxALL, 5);

    m_timePicker2 = new wxTimePickerCtrl(m_panel37, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize,
                                         wxTP_DEFAULT);
    gSizer4->Add(m_timePicker2, 0, wxALL, 5);

    m_datePicker2 = new wxDatePickerCtrl(m_panel37, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize,
                                         wxDP_DEFAULT);
    gSizer4->Add(m_datePicker2, 0, wxALL, 5);


    m_panel37->SetSizer(gSizer4);
    m_panel37->Layout();
    gSizer4->Fit(m_panel37);
    m_listbook14->AddPage(m_panel37, _("工具"), false);
#ifdef __WXGTK__ // Small icon style not supported in GTK
    wxListView* m_listbook14ListView = m_listbook14->GetListView();
    long m_listbook14Flags = m_listbook14ListView->GetWindowStyleFlag();
    if( m_listbook14Flags & wxLC_SMALL_ICON )
    {
        m_listbook14Flags = ( m_listbook14Flags & ~wxLC_SMALL_ICON ) | wxLC_ICON;
    }
    m_listbook14ListView->SetWindowStyleFlag( m_listbook14Flags );
#endif

    bSizer13->Add(m_listbook14, 1, wxALL | wxEXPAND | wxTOP, 3);

    m_auinotebook4 = new wxAuiNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1, 240), wxAUI_NB_DEFAULT_STYLE);
    m_auinotebook4->SetMinSize(wxSize(-1, 200));

    m_scrolledWindow4 = new wxScrolledWindow(m_auinotebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                             wxHSCROLL | wxVSCROLL);
    m_scrolledWindow4->SetScrollRate(5, 5);
    m_auinotebook4->AddPage(m_scrolledWindow4, _("推送日志"), true, wxNullBitmap);
    m_scrolledWindow5 = new wxScrolledWindow(m_auinotebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                             wxHSCROLL | wxVSCROLL);
    m_scrolledWindow5->SetScrollRate(5, 5);
    m_auinotebook4->AddPage(m_scrolledWindow5, _("系统日志"), false, wxNullBitmap);
    m_scrolledWindow6 = new wxScrolledWindow(m_auinotebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                             wxHSCROLL | wxVSCROLL);
    m_scrolledWindow6->SetScrollRate(5, 5);
    m_auinotebook4->AddPage(m_scrolledWindow6, _("异常日志"), false, wxNullBitmap);
    m_scrolledWindow7 = new wxScrolledWindow(m_auinotebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                             wxHSCROLL | wxVSCROLL);
    m_scrolledWindow7->SetScrollRate(5, 5);
    m_auinotebook4->AddPage(m_scrolledWindow7, _("操作日志"), false, wxNullBitmap);

    bSizer13->Add(m_auinotebook4, 1, wxEXPAND | wxALL, 3);


    this->SetSizer(bSizer13);
    this->Layout();
    m_menubar6 = new wxMenuBar(0);
    m_menu10 = new wxMenu();
    m_menubar6->Append(m_menu10, _("文件"));

    m_menu11 = new wxMenu();
    m_menubar6->Append(m_menu11, _("编辑"));

    m_menu12 = new wxMenu();
    m_menubar6->Append(m_menu12, _("关于"));

    this->SetMenuBar(m_menubar6);


    this->Centre(wxBOTH);

    /// 托盘图标
    MyTray* icon = new MyTray(wxTBI_DOCK);
    taskBarIcon = icon;
    taskBarIcon->Bind(wxEVT_MENU, &MainFrame::OnAbout, this, wxID_ABOUT);
    taskBarIcon->Bind(wxEVT_MENU, &MainFrame::exitFun, this, wxID_EXIT);
    taskBarIcon->Bind(wxEVT_MENU, &MainFrame::resetFun, this, 1);
    taskBarIcon->Bind(wxEVT_TASKBAR_LEFT_DOWN, &MainFrame::showWindow,this);

    // Connect Events
    m_toggleBtn1->Bind(wxEVT_TOGGLEBUTTON, &MainFrame::exitFun, this);
    m_toggleBtn2->Bind(wxEVT_TOGGLEBUTTON, &MainFrame::resetFun, this);

//    this->Bind(wxEVT_CLOSE_WINDOW,[=](wxCloseEvent& event) {
//        hideWindow(event,new std::string("hide"));
//        });

    this->Bind(wxEVT_CLOSE_WINDOW,&MainFrame::hideWindow,this);
}


void MainFrame::exitFun(wxCommandEvent &event) {

    auto pExitDialog = new ExitDialog(this);
    auto value = pExitDialog->ShowModal();

    if (value == wxID_OK) {
        appWindowStatus = 2;
        Close(true);
    }
}

void MainFrame::resetFun(wxCommandEvent &event) {

    spdlog::info("Welcome to spdlog version {}.{}.{}  !", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR,
                 SPDLOG_VER_PATCH);
    appWindowStatus = 2;
    wxMessageBox(wxT("确定重启程序吗?"), wxT("重启程序"), wxOK | wxCANCEL | wxCANCEL_DEFAULT | wxICON_WARNING);

}

void MainFrame::OnAbout(wxCommandEvent &event) {
    wxMessageBox(_T("hello!"), wxT("About Tray!"), wxOK | wxICON_INFORMATION);
}

void MainFrame::hideWindow(wxCloseEvent &event) {
//    判断是手动关闭还是重启 通过传参吧
    if (appWindowStatus == 1){
        spdlog::info(u8"点击标题栏关闭->隐藏到托盘");
        this->Show(false);
        event.Veto(); // 阻止默认的关闭行为
    }
    if (appWindowStatus == 2){
        spdlog::info(u8"关闭应用");
        event.Skip();
    }
}

void MainFrame::showWindow(wxTaskBarIconEvent &event) {
    spdlog::info(u8"激活窗口");
    this->Show(true);
}


void MainFrame::tttttt(wxTaskBarIconEvent &event) {
    spdlog::info("右键触发了!!!");
}



MainFrame::~MainFrame() {
    delete taskBarIcon;
}

