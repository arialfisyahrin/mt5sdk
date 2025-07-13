//+------------------------------------------------------------------+
//|                                                    DealerExample |
//|                             Copyright 2000-2023, MetaQuotes Ltd. |
//|                                               www.metaquotes.net |
//+------------------------------------------------------------------+
#include "stdafx.h"
#include "DealerExample.h"
#include "DealerExampleDlg.h"
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
BEGIN_MESSAGE_MAP(CDealerExampleApp,CWinApp)
   ON_COMMAND(ID_HELP,&CWinApp::OnHelp)
END_MESSAGE_MAP()
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
CDealerExampleApp::CDealerExampleApp()
  {
  }
CDealerExampleApp theApp;
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
BOOL CDealerExampleApp::InitInstance()
  {
   CWinApp::InitInstance();
   CDealerExampleDlg dlg;
   m_pMainWnd=&dlg;
   INT_PTR nResponse=dlg.DoModal();
   return(FALSE);
  }
//+------------------------------------------------------------------+
