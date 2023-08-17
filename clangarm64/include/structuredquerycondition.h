/*** Autogenerated by WIDL 8.13 from include/structuredquerycondition.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __structuredquerycondition_h__
#define __structuredquerycondition_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IRichChunk_FWD_DEFINED__
#define __IRichChunk_FWD_DEFINED__
typedef interface IRichChunk IRichChunk;
#ifdef __cplusplus
interface IRichChunk;
#endif /* __cplusplus */
#endif

#ifndef __ICondition_FWD_DEFINED__
#define __ICondition_FWD_DEFINED__
typedef interface ICondition ICondition;
#ifdef __cplusplus
interface ICondition;
#endif /* __cplusplus */
#endif

#ifndef __ICondition2_FWD_DEFINED__
#define __ICondition2_FWD_DEFINED__
typedef interface ICondition2 ICondition2;
#ifdef __cplusplus
interface ICondition2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <objidl.h>
#include <propidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

typedef enum tagCONDITION_TYPE {
    CT_AND_CONDITION = 0,
    CT_OR_CONDITION = 1,
    CT_NOT_CONDITION = 2,
    CT_LEAF_CONDITION = 3
} CONDITION_TYPE;

typedef enum tagCONDITION_OPERATION {
    COP_IMPLICIT = 0,
    COP_EQUAL = 1,
    COP_NOTEQUAL = 2,
    COP_LESSTHAN = 3,
    COP_GREATERTHAN = 4,
    COP_LESSTHANOREQUAL = 5,
    COP_GREATERTHANOREQUAL = 6,
    COP_VALUE_STARTSWITH = 7,
    COP_VALUE_ENDSWITH = 8,
    COP_VALUE_CONTAINS = 9,
    COP_VALUE_NOTCONTAINS = 10,
    COP_DOSWILDCARDS = 11,
    COP_WORD_EQUAL = 12,
    COP_WORD_STARTSWITH = 13,
    COP_APPLICATION_SPECIFIC = 14
} CONDITION_OPERATION;

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * IRichChunk interface
 */
#ifndef __IRichChunk_INTERFACE_DEFINED__
#define __IRichChunk_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRichChunk, 0x4fdef69c, 0xdbc9, 0x454e, 0x99,0x10, 0xb3,0x4f,0x3c,0x64,0xb5,0x10);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("4fdef69c-dbc9-454e-9910-b34f3c64b510")
IRichChunk : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetData(
        ULONG *pFirstPos,
        ULONG *pLength,
        LPWSTR *ppsz,
        PROPVARIANT *pValue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRichChunk, 0x4fdef69c, 0xdbc9, 0x454e, 0x99,0x10, 0xb3,0x4f,0x3c,0x64,0xb5,0x10)
#endif
#else
typedef struct IRichChunkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRichChunk *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRichChunk *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRichChunk *This);

    /*** IRichChunk methods ***/
    HRESULT (STDMETHODCALLTYPE *GetData)(
        IRichChunk *This,
        ULONG *pFirstPos,
        ULONG *pLength,
        LPWSTR *ppsz,
        PROPVARIANT *pValue);

    END_INTERFACE
} IRichChunkVtbl;

interface IRichChunk {
    CONST_VTBL IRichChunkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRichChunk_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRichChunk_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRichChunk_Release(This) (This)->lpVtbl->Release(This)
/*** IRichChunk methods ***/
#define IRichChunk_GetData(This,pFirstPos,pLength,ppsz,pValue) (This)->lpVtbl->GetData(This,pFirstPos,pLength,ppsz,pValue)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IRichChunk_QueryInterface(IRichChunk* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IRichChunk_AddRef(IRichChunk* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IRichChunk_Release(IRichChunk* This) {
    return This->lpVtbl->Release(This);
}
/*** IRichChunk methods ***/
static __WIDL_INLINE HRESULT IRichChunk_GetData(IRichChunk* This,ULONG *pFirstPos,ULONG *pLength,LPWSTR *ppsz,PROPVARIANT *pValue) {
    return This->lpVtbl->GetData(This,pFirstPos,pLength,ppsz,pValue);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IRichChunk_RemoteGetData_Proxy(
    IRichChunk* This,
    ULONG *pFirstPos,
    ULONG *pLength,
    LPWSTR *ppsz,
    PROPVARIANT *pValue);
void __RPC_STUB IRichChunk_RemoteGetData_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IRichChunk_GetData_Proxy(
    IRichChunk* This,
    ULONG *pFirstPos,
    ULONG *pLength,
    LPWSTR *ppsz,
    PROPVARIANT *pValue);
HRESULT __RPC_STUB IRichChunk_GetData_Stub(
    IRichChunk* This,
    ULONG *pFirstPos,
    ULONG *pLength,
    LPWSTR *ppsz,
    PROPVARIANT *pValue);

#endif  /* __IRichChunk_INTERFACE_DEFINED__ */


/*****************************************************************************
 * ICondition interface
 */
#ifndef __ICondition_INTERFACE_DEFINED__
#define __ICondition_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICondition, 0x0fc988d4, 0xc935, 0x4b97, 0xa9,0x73, 0x46,0x28,0x2e,0xa1,0x75,0xc8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0fc988d4-c935-4b97-a973-46282ea175c8")
ICondition : public IPersistStream
{
    virtual HRESULT STDMETHODCALLTYPE GetConditionType(
        CONDITION_TYPE *pNodeType) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSubConditions(
        REFIID riid,
        void **ppv) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetComparisonInfo(
        LPWSTR *ppszPropertyName,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetValueType(
        LPWSTR *ppszValueTypeName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetValueNormalization(
        LPWSTR *ppszNormalization) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputTerms(
        IRichChunk **ppPropertyTerm,
        IRichChunk **ppOperationTerm,
        IRichChunk **ppValueTerm) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        ICondition **ppc) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICondition, 0x0fc988d4, 0xc935, 0x4b97, 0xa9,0x73, 0x46,0x28,0x2e,0xa1,0x75,0xc8)
#endif
#else
typedef struct IConditionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICondition *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICondition *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICondition *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        ICondition *This,
        CLSID *pClassID);

    /*** IPersistStream methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        ICondition *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        ICondition *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *Save)(
        ICondition *This,
        IStream *pStm,
        WINBOOL fClearDirty);

    HRESULT (STDMETHODCALLTYPE *GetSizeMax)(
        ICondition *This,
        ULARGE_INTEGER *pcbSize);

    /*** ICondition methods ***/
    HRESULT (STDMETHODCALLTYPE *GetConditionType)(
        ICondition *This,
        CONDITION_TYPE *pNodeType);

    HRESULT (STDMETHODCALLTYPE *GetSubConditions)(
        ICondition *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetComparisonInfo)(
        ICondition *This,
        LPWSTR *ppszPropertyName,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar);

    HRESULT (STDMETHODCALLTYPE *GetValueType)(
        ICondition *This,
        LPWSTR *ppszValueTypeName);

    HRESULT (STDMETHODCALLTYPE *GetValueNormalization)(
        ICondition *This,
        LPWSTR *ppszNormalization);

    HRESULT (STDMETHODCALLTYPE *GetInputTerms)(
        ICondition *This,
        IRichChunk **ppPropertyTerm,
        IRichChunk **ppOperationTerm,
        IRichChunk **ppValueTerm);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ICondition *This,
        ICondition **ppc);

    END_INTERFACE
} IConditionVtbl;

interface ICondition {
    CONST_VTBL IConditionVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICondition_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICondition_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICondition_Release(This) (This)->lpVtbl->Release(This)
/*** IPersist methods ***/
#define ICondition_GetClassID(This,pClassID) (This)->lpVtbl->GetClassID(This,pClassID)
/*** IPersistStream methods ***/
#define ICondition_IsDirty(This) (This)->lpVtbl->IsDirty(This)
#define ICondition_Load(This,pStm) (This)->lpVtbl->Load(This,pStm)
#define ICondition_Save(This,pStm,fClearDirty) (This)->lpVtbl->Save(This,pStm,fClearDirty)
#define ICondition_GetSizeMax(This,pcbSize) (This)->lpVtbl->GetSizeMax(This,pcbSize)
/*** ICondition methods ***/
#define ICondition_GetConditionType(This,pNodeType) (This)->lpVtbl->GetConditionType(This,pNodeType)
#define ICondition_GetSubConditions(This,riid,ppv) (This)->lpVtbl->GetSubConditions(This,riid,ppv)
#define ICondition_GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) (This)->lpVtbl->GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar)
#define ICondition_GetValueType(This,ppszValueTypeName) (This)->lpVtbl->GetValueType(This,ppszValueTypeName)
#define ICondition_GetValueNormalization(This,ppszNormalization) (This)->lpVtbl->GetValueNormalization(This,ppszNormalization)
#define ICondition_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) (This)->lpVtbl->GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm)
#define ICondition_Clone(This,ppc) (This)->lpVtbl->Clone(This,ppc)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ICondition_QueryInterface(ICondition* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ICondition_AddRef(ICondition* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ICondition_Release(ICondition* This) {
    return This->lpVtbl->Release(This);
}
/*** IPersist methods ***/
static __WIDL_INLINE HRESULT ICondition_GetClassID(ICondition* This,CLSID *pClassID) {
    return This->lpVtbl->GetClassID(This,pClassID);
}
/*** IPersistStream methods ***/
static __WIDL_INLINE HRESULT ICondition_IsDirty(ICondition* This) {
    return This->lpVtbl->IsDirty(This);
}
static __WIDL_INLINE HRESULT ICondition_Load(ICondition* This,IStream *pStm) {
    return This->lpVtbl->Load(This,pStm);
}
static __WIDL_INLINE HRESULT ICondition_Save(ICondition* This,IStream *pStm,WINBOOL fClearDirty) {
    return This->lpVtbl->Save(This,pStm,fClearDirty);
}
static __WIDL_INLINE HRESULT ICondition_GetSizeMax(ICondition* This,ULARGE_INTEGER *pcbSize) {
    return This->lpVtbl->GetSizeMax(This,pcbSize);
}
/*** ICondition methods ***/
static __WIDL_INLINE HRESULT ICondition_GetConditionType(ICondition* This,CONDITION_TYPE *pNodeType) {
    return This->lpVtbl->GetConditionType(This,pNodeType);
}
static __WIDL_INLINE HRESULT ICondition_GetSubConditions(ICondition* This,REFIID riid,void **ppv) {
    return This->lpVtbl->GetSubConditions(This,riid,ppv);
}
static __WIDL_INLINE HRESULT ICondition_GetComparisonInfo(ICondition* This,LPWSTR *ppszPropertyName,CONDITION_OPERATION *pcop,PROPVARIANT *ppropvar) {
    return This->lpVtbl->GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar);
}
static __WIDL_INLINE HRESULT ICondition_GetValueType(ICondition* This,LPWSTR *ppszValueTypeName) {
    return This->lpVtbl->GetValueType(This,ppszValueTypeName);
}
static __WIDL_INLINE HRESULT ICondition_GetValueNormalization(ICondition* This,LPWSTR *ppszNormalization) {
    return This->lpVtbl->GetValueNormalization(This,ppszNormalization);
}
static __WIDL_INLINE HRESULT ICondition_GetInputTerms(ICondition* This,IRichChunk **ppPropertyTerm,IRichChunk **ppOperationTerm,IRichChunk **ppValueTerm) {
    return This->lpVtbl->GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm);
}
static __WIDL_INLINE HRESULT ICondition_Clone(ICondition* This,ICondition **ppc) {
    return This->lpVtbl->Clone(This,ppc);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ICondition_RemoteGetComparisonInfo_Proxy(
    ICondition* This,
    LPWSTR *ppszPropertyName,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
void __RPC_STUB ICondition_RemoteGetComparisonInfo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICondition_RemoteGetInputTerms_Proxy(
    ICondition* This,
    IRichChunk **ppPropertyTerm,
    IRichChunk **ppOperationTerm,
    IRichChunk **ppValueTerm);
void __RPC_STUB ICondition_RemoteGetInputTerms_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ICondition_GetComparisonInfo_Proxy(
    ICondition* This,
    LPWSTR *ppszPropertyName,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
HRESULT __RPC_STUB ICondition_GetComparisonInfo_Stub(
    ICondition* This,
    LPWSTR *ppszPropertyName,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
HRESULT CALLBACK ICondition_GetInputTerms_Proxy(
    ICondition* This,
    IRichChunk **ppPropertyTerm,
    IRichChunk **ppOperationTerm,
    IRichChunk **ppValueTerm);
HRESULT __RPC_STUB ICondition_GetInputTerms_Stub(
    ICondition* This,
    IRichChunk **ppPropertyTerm,
    IRichChunk **ppOperationTerm,
    IRichChunk **ppValueTerm);

#endif  /* __ICondition_INTERFACE_DEFINED__ */


/*****************************************************************************
 * ICondition2 interface
 */
#ifndef __ICondition2_INTERFACE_DEFINED__
#define __ICondition2_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICondition2, 0x0db8851d, 0x2e5b, 0x47eb, 0x92,0x08, 0xd2,0x8c,0x32,0x5a,0x01,0xd7);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0db8851d-2e5b-47eb-9208-d28c325a01d7")
ICondition2 : public ICondition
{
    virtual HRESULT STDMETHODCALLTYPE GetLocale(
        LPWSTR *ppszLocaleName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLeafConditionInfo(
        PROPERTYKEY *ppropkey,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICondition2, 0x0db8851d, 0x2e5b, 0x47eb, 0x92,0x08, 0xd2,0x8c,0x32,0x5a,0x01,0xd7)
#endif
#else
typedef struct ICondition2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICondition2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICondition2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICondition2 *This);

    /*** IPersist methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClassID)(
        ICondition2 *This,
        CLSID *pClassID);

    /*** IPersistStream methods ***/
    HRESULT (STDMETHODCALLTYPE *IsDirty)(
        ICondition2 *This);

    HRESULT (STDMETHODCALLTYPE *Load)(
        ICondition2 *This,
        IStream *pStm);

    HRESULT (STDMETHODCALLTYPE *Save)(
        ICondition2 *This,
        IStream *pStm,
        WINBOOL fClearDirty);

    HRESULT (STDMETHODCALLTYPE *GetSizeMax)(
        ICondition2 *This,
        ULARGE_INTEGER *pcbSize);

    /*** ICondition methods ***/
    HRESULT (STDMETHODCALLTYPE *GetConditionType)(
        ICondition2 *This,
        CONDITION_TYPE *pNodeType);

    HRESULT (STDMETHODCALLTYPE *GetSubConditions)(
        ICondition2 *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *GetComparisonInfo)(
        ICondition2 *This,
        LPWSTR *ppszPropertyName,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar);

    HRESULT (STDMETHODCALLTYPE *GetValueType)(
        ICondition2 *This,
        LPWSTR *ppszValueTypeName);

    HRESULT (STDMETHODCALLTYPE *GetValueNormalization)(
        ICondition2 *This,
        LPWSTR *ppszNormalization);

    HRESULT (STDMETHODCALLTYPE *GetInputTerms)(
        ICondition2 *This,
        IRichChunk **ppPropertyTerm,
        IRichChunk **ppOperationTerm,
        IRichChunk **ppValueTerm);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ICondition2 *This,
        ICondition **ppc);

    /*** ICondition2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLocale)(
        ICondition2 *This,
        LPWSTR *ppszLocaleName);

    HRESULT (STDMETHODCALLTYPE *GetLeafConditionInfo)(
        ICondition2 *This,
        PROPERTYKEY *ppropkey,
        CONDITION_OPERATION *pcop,
        PROPVARIANT *ppropvar);

    END_INTERFACE
} ICondition2Vtbl;

interface ICondition2 {
    CONST_VTBL ICondition2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICondition2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICondition2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICondition2_Release(This) (This)->lpVtbl->Release(This)
/*** IPersist methods ***/
#define ICondition2_GetClassID(This,pClassID) (This)->lpVtbl->GetClassID(This,pClassID)
/*** IPersistStream methods ***/
#define ICondition2_IsDirty(This) (This)->lpVtbl->IsDirty(This)
#define ICondition2_Load(This,pStm) (This)->lpVtbl->Load(This,pStm)
#define ICondition2_Save(This,pStm,fClearDirty) (This)->lpVtbl->Save(This,pStm,fClearDirty)
#define ICondition2_GetSizeMax(This,pcbSize) (This)->lpVtbl->GetSizeMax(This,pcbSize)
/*** ICondition methods ***/
#define ICondition2_GetConditionType(This,pNodeType) (This)->lpVtbl->GetConditionType(This,pNodeType)
#define ICondition2_GetSubConditions(This,riid,ppv) (This)->lpVtbl->GetSubConditions(This,riid,ppv)
#define ICondition2_GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) (This)->lpVtbl->GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar)
#define ICondition2_GetValueType(This,ppszValueTypeName) (This)->lpVtbl->GetValueType(This,ppszValueTypeName)
#define ICondition2_GetValueNormalization(This,ppszNormalization) (This)->lpVtbl->GetValueNormalization(This,ppszNormalization)
#define ICondition2_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) (This)->lpVtbl->GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm)
#define ICondition2_Clone(This,ppc) (This)->lpVtbl->Clone(This,ppc)
/*** ICondition2 methods ***/
#define ICondition2_GetLocale(This,ppszLocaleName) (This)->lpVtbl->GetLocale(This,ppszLocaleName)
#define ICondition2_GetLeafConditionInfo(This,ppropkey,pcop,ppropvar) (This)->lpVtbl->GetLeafConditionInfo(This,ppropkey,pcop,ppropvar)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ICondition2_QueryInterface(ICondition2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ICondition2_AddRef(ICondition2* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ICondition2_Release(ICondition2* This) {
    return This->lpVtbl->Release(This);
}
/*** IPersist methods ***/
static __WIDL_INLINE HRESULT ICondition2_GetClassID(ICondition2* This,CLSID *pClassID) {
    return This->lpVtbl->GetClassID(This,pClassID);
}
/*** IPersistStream methods ***/
static __WIDL_INLINE HRESULT ICondition2_IsDirty(ICondition2* This) {
    return This->lpVtbl->IsDirty(This);
}
static __WIDL_INLINE HRESULT ICondition2_Load(ICondition2* This,IStream *pStm) {
    return This->lpVtbl->Load(This,pStm);
}
static __WIDL_INLINE HRESULT ICondition2_Save(ICondition2* This,IStream *pStm,WINBOOL fClearDirty) {
    return This->lpVtbl->Save(This,pStm,fClearDirty);
}
static __WIDL_INLINE HRESULT ICondition2_GetSizeMax(ICondition2* This,ULARGE_INTEGER *pcbSize) {
    return This->lpVtbl->GetSizeMax(This,pcbSize);
}
/*** ICondition methods ***/
static __WIDL_INLINE HRESULT ICondition2_GetConditionType(ICondition2* This,CONDITION_TYPE *pNodeType) {
    return This->lpVtbl->GetConditionType(This,pNodeType);
}
static __WIDL_INLINE HRESULT ICondition2_GetSubConditions(ICondition2* This,REFIID riid,void **ppv) {
    return This->lpVtbl->GetSubConditions(This,riid,ppv);
}
static __WIDL_INLINE HRESULT ICondition2_GetComparisonInfo(ICondition2* This,LPWSTR *ppszPropertyName,CONDITION_OPERATION *pcop,PROPVARIANT *ppropvar) {
    return This->lpVtbl->GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar);
}
static __WIDL_INLINE HRESULT ICondition2_GetValueType(ICondition2* This,LPWSTR *ppszValueTypeName) {
    return This->lpVtbl->GetValueType(This,ppszValueTypeName);
}
static __WIDL_INLINE HRESULT ICondition2_GetValueNormalization(ICondition2* This,LPWSTR *ppszNormalization) {
    return This->lpVtbl->GetValueNormalization(This,ppszNormalization);
}
static __WIDL_INLINE HRESULT ICondition2_GetInputTerms(ICondition2* This,IRichChunk **ppPropertyTerm,IRichChunk **ppOperationTerm,IRichChunk **ppValueTerm) {
    return This->lpVtbl->GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm);
}
static __WIDL_INLINE HRESULT ICondition2_Clone(ICondition2* This,ICondition **ppc) {
    return This->lpVtbl->Clone(This,ppc);
}
/*** ICondition2 methods ***/
static __WIDL_INLINE HRESULT ICondition2_GetLocale(ICondition2* This,LPWSTR *ppszLocaleName) {
    return This->lpVtbl->GetLocale(This,ppszLocaleName);
}
static __WIDL_INLINE HRESULT ICondition2_GetLeafConditionInfo(ICondition2* This,PROPERTYKEY *ppropkey,CONDITION_OPERATION *pcop,PROPVARIANT *ppropvar) {
    return This->lpVtbl->GetLeafConditionInfo(This,ppropkey,pcop,ppropvar);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ICondition2_RemoteGetLeafConditionInfo_Proxy(
    ICondition2* This,
    PROPERTYKEY *ppropkey,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
void __RPC_STUB ICondition2_RemoteGetLeafConditionInfo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ICondition2_GetLeafConditionInfo_Proxy(
    ICondition2* This,
    PROPERTYKEY *ppropkey,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);
HRESULT __RPC_STUB ICondition2_GetLeafConditionInfo_Stub(
    ICondition2* This,
    PROPERTYKEY *ppropkey,
    CONDITION_OPERATION *pcop,
    PROPVARIANT *ppropvar);

#endif  /* __ICondition2_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);
ULONG           __RPC_USER LPSAFEARRAY_UserSize     (ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal  (ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void            __RPC_USER LPSAFEARRAY_UserFree     (ULONG *, LPSAFEARRAY *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __structuredquerycondition_h__ */
