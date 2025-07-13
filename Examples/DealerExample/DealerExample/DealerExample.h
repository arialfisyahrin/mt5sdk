//+------------------------------------------------------------------+
//|                                                    DealerExample |
//|                             Copyright 2000-2023, MetaQuotes Ltd. |
//|                                               www.metaquotes.net |
//+------------------------------------------------------------------+
#pragma once
//+------------------------------------------------------------------+
//|                                                                  |
//+------------------------------------------------------------------+
class CDealerExampleApp : public CWinApp
  {
public:
                     CDealerExampleApp();

public:
   virtual BOOL      InitInstance();

   DECLARE_MESSAGE_MAP()
  };
extern CDealerExampleApp theApp;
//+------------------------------------------------------------------+
