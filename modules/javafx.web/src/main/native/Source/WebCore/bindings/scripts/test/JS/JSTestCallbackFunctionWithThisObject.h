/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#pragma once

#include "IDLTypes.h"
#include "JSCallbackData.h"
#include "TestCallbackFunctionWithThisObject.h"
#include <wtf/Forward.h>

namespace WebCore {

class JSTestCallbackFunctionWithThisObject final : public TestCallbackFunctionWithThisObject {
public:
    static Ref<JSTestCallbackFunctionWithThisObject> create(JSC::JSObject* callback, JSDOMGlobalObject* globalObject)
    {
        return adoptRef(*new JSTestCallbackFunctionWithThisObject(callback, globalObject));
    }

    virtual ScriptExecutionContext* scriptExecutionContext() const { return ContextDestructionObserver::scriptExecutionContext(); }

    virtual ~JSTestCallbackFunctionWithThisObject();
    JSCallbackDataStrong* callbackData() { return m_data; }

    // Functions
    virtual CallbackResult<typename IDLVoid::ImplementationType> handleEvent(typename IDLInterface<TestNode>::ParameterType thisObject, typename IDLSequence<IDLInterface<TestNode>>::ParameterType parameter) override;

private:
    JSTestCallbackFunctionWithThisObject(JSC::JSObject*, JSDOMGlobalObject*);

    JSCallbackDataStrong* m_data;
};

JSC::JSValue toJS(TestCallbackFunctionWithThisObject&);
inline JSC::JSValue toJS(TestCallbackFunctionWithThisObject* impl) { return impl ? toJS(*impl) : JSC::jsNull(); }

} // namespace WebCore
