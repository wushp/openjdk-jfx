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

#include "JSDOMWrapper.h"
#include "TestStringifierNamedOperation.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSTestStringifierNamedOperation : public JSDOMWrapper<TestStringifierNamedOperation> {
public:
    using Base = JSDOMWrapper<TestStringifierNamedOperation>;
    static JSTestStringifierNamedOperation* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TestStringifierNamedOperation>&& impl)
    {
        JSTestStringifierNamedOperation* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierNamedOperation>(globalObject->vm().heap)) JSTestStringifierNamedOperation(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static TestStringifierNamedOperation* toWrapped(JSC::VM&, JSC::JSValue);
    static void destroy(JSC::JSCell*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
protected:
    JSTestStringifierNamedOperation(JSC::Structure*, JSDOMGlobalObject&, Ref<TestStringifierNamedOperation>&&);

    void finishCreation(JSC::VM&);
};

class JSTestStringifierNamedOperationOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TestStringifierNamedOperation*)
{
    static NeverDestroyed<JSTestStringifierNamedOperationOwner> owner;
    return &owner.get();
}

inline void* wrapperKey(TestStringifierNamedOperation* wrappableObject)
{
    return wrappableObject;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestStringifierNamedOperation&);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestStringifierNamedOperation* impl) { return impl ? toJS(state, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Ref<TestStringifierNamedOperation>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::ExecState* state, JSDOMGlobalObject* globalObject, RefPtr<TestStringifierNamedOperation>&& impl) { return impl ? toJSNewlyCreated(state, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<TestStringifierNamedOperation> {
    using WrapperClass = JSTestStringifierNamedOperation;
    using ToWrappedReturnType = TestStringifierNamedOperation*;
};

} // namespace WebCore
