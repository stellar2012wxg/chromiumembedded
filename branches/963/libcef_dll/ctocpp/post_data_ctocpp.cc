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

#include "libcef_dll/ctocpp/post_data_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_element_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefPostData> CefPostData::CreatePostData()
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_post_data_t* _retval = cef_post_data_create();

  // Return type: refptr_same
  return CefPostDataCToCpp::Wrap(_retval);
}



// VIRTUAL METHODS - Body may be edited by hand.

size_t CefPostDataCToCpp::GetElementCount()
{
  if (CEF_MEMBER_MISSING(struct_, get_element_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = struct_->get_element_count(struct_);

  // Return type: simple
  return _retval;
}


void CefPostDataCToCpp::GetElements(ElementVector& elements)
{
  if (CEF_MEMBER_MISSING(struct_, get_elements))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: elements; type: refptr_vec_same_byref
  size_t elementsSize = elements.size();
  size_t elementsCount = std::max(GetElementCount(), elementsSize);
  cef_post_data_element_t** elementsList = NULL;
  if (elementsCount > 0) {
    elementsList = new cef_post_data_element_t*[elementsCount];
    DCHECK(elementsList);
    if (elementsList) {
       memset(elementsList, 0, sizeof(cef_post_data_element_t*)*elementsCount);
    }
    if (elementsList && elementsSize > 0) {
      for (size_t i = 0; i < elementsSize; ++i) {
        elementsList[i] = CefPostDataElementCToCpp::Unwrap(elements[i]);
      }
    }
  }

  // Execute
  struct_->get_elements(struct_,
      &elementsCount,
      elementsList);

  // Restore param:elements; type: refptr_vec_same_byref
  elements.clear();
  if (elementsCount > 0 && elementsList) {
    for (size_t i = 0; i < elementsCount; ++i) {
      elements.push_back(CefPostDataElementCToCpp::Wrap(elementsList[i]));
    }
    delete [] elementsList;
  }
}


bool CefPostDataCToCpp::RemoveElement(CefRefPtr<CefPostDataElement> element)
{
  if (CEF_MEMBER_MISSING(struct_, remove_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: element; type: refptr_same
  DCHECK(element.get());
  if (!element.get())
    return false;

  // Execute
  int _retval = struct_->remove_element(struct_,
      CefPostDataElementCToCpp::Unwrap(element));

  // Return type: bool
  return _retval?true:false;
}


bool CefPostDataCToCpp::AddElement(CefRefPtr<CefPostDataElement> element)
{
  if (CEF_MEMBER_MISSING(struct_, add_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: element; type: refptr_same
  DCHECK(element.get());
  if (!element.get())
    return false;

  // Execute
  int _retval = struct_->add_element(struct_,
      CefPostDataElementCToCpp::Unwrap(element));

  // Return type: bool
  return _retval?true:false;
}


void CefPostDataCToCpp::RemoveElements()
{
  if (CEF_MEMBER_MISSING(struct_, remove_elements))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->remove_elements(struct_);
}



#ifndef NDEBUG
template<> long CefCToCpp<CefPostDataCToCpp, CefPostData,
    cef_post_data_t>::DebugObjCt = 0;
#endif

