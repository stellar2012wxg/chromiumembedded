// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef _PRINTHANDLER_CPPTOC_H
#define _PRINTHANDLER_CPPTOC_H

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else // USING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/cpptoc/cpptoc.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefPrintHandlerCppToC
    : public CefCppToC<CefPrintHandlerCppToC, CefPrintHandler,
        cef_print_handler_t>
{
public:
  CefPrintHandlerCppToC(CefPrintHandler* cls);
  virtual ~CefPrintHandlerCppToC() {}
};

#endif // USING_CEF_SHARED
#endif // _PRINTHANDLER_CPPTOC_H

