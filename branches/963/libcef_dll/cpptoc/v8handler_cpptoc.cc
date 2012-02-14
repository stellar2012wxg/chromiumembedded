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

#include "libcef_dll/cpptoc/v8handler_cpptoc.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK v8handler_execute(struct _cef_v8handler_t* self,
    const cef_string_t* name, struct _cef_v8value_t* object,
    size_t argumentsCount, struct _cef_v8value_t* const* arguments,
    struct _cef_v8value_t** retval, cef_string_t* exception)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return 0;
  // Verify param: object; type: refptr_diff
  DCHECK(object);
  if (!object)
    return 0;
  // Verify param: arguments; type: refptr_vec_diff_byref_const
  DCHECK(argumentsCount == 0 || arguments);
  if (argumentsCount > 0 && !arguments)
    return 0;
  // Verify param: retval; type: refptr_diff_byref
  DCHECK(retval);
  if (!retval)
    return 0;
  // Verify param: exception; type: string_byref
  DCHECK(exception);
  if (!exception)
    return 0;

  // Translate param: arguments; type: refptr_vec_diff_byref_const
  std::vector<CefRefPtr<CefV8Value> > argumentsList;
  if (argumentsCount > 0) {
    for (size_t i = 0; i < argumentsCount; ++i) {
      argumentsList.push_back(CefV8ValueCToCpp::Wrap(arguments[i]));
    }
  }
  // Translate param: retval; type: refptr_diff_byref
  CefRefPtr<CefV8Value> retvalPtr;
  if (retval && *retval)
    retvalPtr = CefV8ValueCToCpp::Wrap(*retval);
  CefV8Value* retvalOrig = retvalPtr.get();
  // Translate param: exception; type: string_byref
  CefString exceptionStr(exception);

  // Execute
  bool _retval = CefV8HandlerCppToC::Get(self)->Execute(
      CefString(name),
      CefV8ValueCToCpp::Wrap(object),
      argumentsList,
      retvalPtr,
      exceptionStr);

  // Restore param: retval; type: refptr_diff_byref
  if (retval) {
    if (retvalPtr.get()) {
      if (retvalPtr.get() != retvalOrig) {
        *retval = CefV8ValueCToCpp::Unwrap(retvalPtr);
      }
    } else {
      *retval = NULL;
    }
  }

  // Return type: bool
  return _retval;
}



// CONSTRUCTOR - Do not edit by hand.

CefV8HandlerCppToC::CefV8HandlerCppToC(CefV8Handler* cls)
    : CefCppToC<CefV8HandlerCppToC, CefV8Handler, cef_v8handler_t>(cls)
{
  struct_.struct_.execute = v8handler_execute;
}

#ifndef NDEBUG
template<> long CefCppToC<CefV8HandlerCppToC, CefV8Handler,
    cef_v8handler_t>::DebugObjCt = 0;
#endif

