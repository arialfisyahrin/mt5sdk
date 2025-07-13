//+------------------------------------------------------------------+
//|                                                   BalanceExample |
//|                             Copyright 2000-2023, MetaQuotes Ltd. |
//|                                               www.metaquotes.net |
//+------------------------------------------------------------------+
#include "stdafx.h"
#include "BalanceExample.h"
#include "BalanceDlg.h"
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
BEGIN_MESSAGE_MAP(CBalanceApp,CWinApp)
   ON_COMMAND(ID_HELP,&CWinApp::OnHelp)
END_MESSAGE_MAP()
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
CBalanceApp::CBalanceApp()
  {
  }
CBalanceApp theApp;
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
BOOL CBalanceApp::InitInstance()
  {
   CWinApp::InitInstance();
//---
   CBalanceExampleDlg dlg;
   m_pMainWnd=&dlg;
   INT_PTR nResponse=dlg.DoModal();
//---
   return(FALSE);
  }
//+------------------------------------------------------------------+
