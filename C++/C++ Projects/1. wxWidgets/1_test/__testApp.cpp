/***************************************************************
 * Name:      __testApp.cpp
 * Purpose:   Code for Application Class
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

#include "__testApp.h"
#include "__testMain.h"

IMPLEMENT_APP(__testApp);

bool __testApp::OnInit()
{
    
    __testDialog* dlg = new __testDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
