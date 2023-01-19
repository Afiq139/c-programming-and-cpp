/***************************************************************
 * Name:      __testMain.h
 * Purpose:   Defines Application Frame
 * Author:    shafiq (shafiq5427.engineering@gmail.com)
 * Created:   2023-01-19
 * Copyright: shafiq (None)
 * License:
 **************************************************************/

#ifndef __TESTMAIN_H
#define __TESTMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "__testApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class __testDialog: public wxDialog
{
    public:
        __testDialog(wxDialog *dlg, const wxString& title);
        ~__testDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // __TESTMAIN_H
