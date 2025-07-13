//+------------------------------------------------------------------+
//|                                                     SimpleDealer |
//|                             Copyright 2000-2023, MetaQuotes Ltd. |
//|                                               www.metaquotes.net |
//+------------------------------------------------------------------+
#pragma once
//--- Windows versions
#define WINVER               0x0601          // Change this to the appropriate value to target other versions of Windows.
#define _WIN32_WINNT         0x0601          // Change this to the appropriate value to target other versions of Windows.
#define _WIN32_WINDOWS       0x0601          // Change this to the appropriate value to target Windows Me or later.
#define _WIN32_IE            0x0601          // Change this to the appropriate value to target other versions of IE.
//--- headers
#include <wchar.h>
#include <process.h>
#include <Winsock2.h>
//--- API
#include "..\..\..\Include\MT5APIManager.h"
//+------------------------------------------------------------------+