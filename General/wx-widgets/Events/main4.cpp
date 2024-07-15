#include <wx/wx.h>
#include <iostream>

using namespace std;

class MyApp : public wxApp{
    public:
        virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);

class MyFrame : public wxFrame
{
    public:
        MyFrame(const wxString &title,const wxPoint &pos,const wxSize &size);
    private :
        void OnClick(wxCommandEvent &);
};



enum ButtonId{
    first_button_id = wxID_LAST +1,
    other_button_id
};

class MyPanel : public wxPanel
{
    public:
        MyPanel(wxWindow *parent);
};

MyPanel::MyPanel(wxWindow *parent) : wxPanel(parent)
{
    this->SetBackgroundColour(wxColor(200,100,100));
}

void MyPanel::OnClick(wxCommandEvent &e)
{
    cout<<"PANEL OnClick, id = "<< e.GetId()<<endl;
    e.Skip();
}


bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("Events",wxDefaultPosition,wxDefaultSize);
    frame->Show(true);
    return true;
}



MyFrame::MyFrame(const wxString &title,const wxPoint &pos,const wxSize &size) : wxFrame(nullptr,wxID_ANY,title,pos,size)
{
    auto panel = new MyPanel(this);

    auto button = new wxButton(panel,first_button_id,"Click me!");
    auto panelSizer = new wxBoxSizer(wxHORIZONTAL);
    panelSizer->Add(button,0,wxCENTER | wxALL,100);
    panel->SetSizerAndFit(panelSizer);

    auto otherButton = new wxButton(this,other_button_id,"Or me!");

    auto sizer = new wxBoxSizer(wxHORIZONTAL);
    sizer->Add(panel,0,wxEXPAND);
    sizer->Add(otherButton,0,wxCENTER | wxALL,100);
    SetSizerAndFit(sizer);

    button->Bind(wxEVT_BUTTON,[](wxCommandEvents&e)
    {
        cout<<"I'm a lambda! Id = "<<e.GetId()<<endl;
    });
}   