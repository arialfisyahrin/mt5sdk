//+------------------------------------------------------------------+
//|                                                   BalanceExample |
//|                             Copyright 2000-2023, MetaQuotes Ltd. |
//|                                               www.metaquotes.net |
//+------------------------------------------------------------------+
#pragma once
#include "resource.h"      // main symbols
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
class CBalanceApp : public CWinApp
  {
public:
                     CBalanceApp();
public:
   virtual BOOL      InitInstance();
   DECLARE_MESSAGE_MAP()
  };
extern CBalanceApp theApp;
//+------------------------------------------------------------------+
