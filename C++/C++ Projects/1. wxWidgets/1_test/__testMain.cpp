/***************************************************************
 * Name:      __testMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    shafiq (shafiq5427.engineering@gmail.com)
 * Created:   2023-01-19
 * Copyright: shafiq (None)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "__testMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


BEGIN_EVENT_TABLE(__testDialog, wxDialog)
    EVT_CLOSE(__testDialog::OnClose)
    EVT_BUTTON(idBtnQuit, __testDialog::OnQuit)
    EVT_BUTTON(idBtnAbout, __testDialog::OnAbout)
END_EVENT_TABLE()

__testDialog::__testDialog(wxDialog *dlg, const wxString &title)
    : wxDialog(dlg, -1, title)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer(wxHORIZONTAL);
    m_staticText1 = new wxStaticText(this, wxID_ANY, wxT("Welcome To\nwxWidgets"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText1->SetFont(wxFont(20, 74, 90, 90, false, wxT("Arial")));
    bSizer1->Add(m_staticText1, 0, wxALL|wxEXPAND, 5);
    wxBoxSizer* bSizer2;
    bSizer2 = new wxBoxSizer(wxVERTICAL);
    BtnAbout = new wxButton(this, idBtnAbout, wxT("&About"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer2->Add(BtnAbout, 0, wxALL, 5);
    m_staticline1 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    bSizer2->Add(m_staticline1, 0, wxALL|wxEXPAND, 5);
    BtnQuit = new wxButton(this, idBtnQuit, wxT("&Quit"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer2->Add(BtnQuit, 0, wxALL, 5);
    bSizer1->Add(bSizer2, 1, wxEXPAND, 5);
    this->SetSizer(bSizer1);
    this->Layout();
    bSizer1->Fit(this);
}


__testDialog::~__testDialog()
{
}

void __testDialog::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void __testDialog::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void __testDialog::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}