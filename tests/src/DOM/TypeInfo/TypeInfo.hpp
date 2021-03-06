/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//  define null for compatibility with original Java source code.
#define null 0

#include <xercesc/dom/DOM.hpp>

using namespace XERCES_CPP_NAMESPACE;

namespace XERCES_CPP_NAMESPACE {
class XercesDOMParser;
}




class TypeInfo {

public:
	TypeInfo();
	~TypeInfo();

    bool testInBuiltTypesOnElements();
    bool testInBuiltTypesOnAttributes(bool DTDPresent);
    bool testSimpleDerived();
    bool testComplexTypes();
    bool testUnions();
    bool testAnonymous();
    bool testXsiTypes();
    bool testInvaild();
    bool testAnys();
    bool testDTD();
    bool combinedTest();

    bool compareDOMTypeInfo(const DOMTypeInfo *info, const XMLCh* type, const XMLCh* uri);

	XercesDOMParser *parser;
    DOMDocument *doc;

private:

    DOMElement* findElement(const XMLCh *name) const ;

};
