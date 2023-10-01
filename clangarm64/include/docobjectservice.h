/*** Autogenerated by WIDL 8.16 from include/docobjectservice.idl - Do not edit ***/

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

#ifndef __docobjectservice_h__
#define __docobjectservice_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IDocObjectService_FWD_DEFINED__
#define __IDocObjectService_FWD_DEFINED__
typedef interface IDocObjectService IDocObjectService;
#ifdef __cplusplus
interface IDocObjectService;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <mshtml.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#ifndef __IDocObjectService_FWD_DEFINED__
#define __IDocObjectService_FWD_DEFINED__
typedef interface IDocObjectService IDocObjectService;
#ifdef __cplusplus
interface IDocObjectService;
#endif /* __cplusplus */
#endif


#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * IDocObjectService interface
 */
#ifndef __IDocObjectService_INTERFACE_DEFINED__
#define __IDocObjectService_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDocObjectService, 0x3050f801, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f801-98b5-11cf-bb82-00aa00bdce0b")
IDocObjectService : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE FireBeforeNavigate2(
        IDispatch *pDispatch,
        LPCWSTR lpszUrl,
        DWORD dwFlags,
        LPCWSTR lpszFrameName,
        BYTE *pPostData,
        DWORD cbPostData,
        LPCWSTR lpszHeaders,
        WINBOOL fPlayNavSound,
        WINBOOL *pfCancel) = 0;

    virtual HRESULT STDMETHODCALLTYPE FireNavigateComplete2(
        IHTMLWindow2 *pHTMLWindow2,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE FireDownloadBegin(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE FireDownloadComplete(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE FireDocumentComplete(
        IHTMLWindow2 *pHTMLWindow,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE UpdateDesktopComponent(
        IHTMLWindow2 *pHTMLWindow) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPendingUrl(
        BSTR *pbstrPendingUrl) = 0;

    virtual HRESULT STDMETHODCALLTYPE ActiveElementChanged(
        IHTMLElement *pHTMLElement) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetUrlSearchComponent(
        BSTR *pbstrSearch) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsErrorUrl(
        LPCWSTR lpszUrl,
        WINBOOL *pfIsError) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDocObjectService, 0x3050f801, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct IDocObjectServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDocObjectService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDocObjectService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDocObjectService *This);

    /*** IDocObjectService methods ***/
    HRESULT (STDMETHODCALLTYPE *FireBeforeNavigate2)(
        IDocObjectService *This,
        IDispatch *pDispatch,
        LPCWSTR lpszUrl,
        DWORD dwFlags,
        LPCWSTR lpszFrameName,
        BYTE *pPostData,
        DWORD cbPostData,
        LPCWSTR lpszHeaders,
        WINBOOL fPlayNavSound,
        WINBOOL *pfCancel);

    HRESULT (STDMETHODCALLTYPE *FireNavigateComplete2)(
        IDocObjectService *This,
        IHTMLWindow2 *pHTMLWindow2,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *FireDownloadBegin)(
        IDocObjectService *This);

    HRESULT (STDMETHODCALLTYPE *FireDownloadComplete)(
        IDocObjectService *This);

    HRESULT (STDMETHODCALLTYPE *FireDocumentComplete)(
        IDocObjectService *This,
        IHTMLWindow2 *pHTMLWindow,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *UpdateDesktopComponent)(
        IDocObjectService *This,
        IHTMLWindow2 *pHTMLWindow);

    HRESULT (STDMETHODCALLTYPE *GetPendingUrl)(
        IDocObjectService *This,
        BSTR *pbstrPendingUrl);

    HRESULT (STDMETHODCALLTYPE *ActiveElementChanged)(
        IDocObjectService *This,
        IHTMLElement *pHTMLElement);

    HRESULT (STDMETHODCALLTYPE *GetUrlSearchComponent)(
        IDocObjectService *This,
        BSTR *pbstrSearch);

    HRESULT (STDMETHODCALLTYPE *IsErrorUrl)(
        IDocObjectService *This,
        LPCWSTR lpszUrl,
        WINBOOL *pfIsError);

    END_INTERFACE
} IDocObjectServiceVtbl;

interface IDocObjectService {
    CONST_VTBL IDocObjectServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDocObjectService_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDocObjectService_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDocObjectService_Release(This) (This)->lpVtbl->Release(This)
/*** IDocObjectService methods ***/
#define IDocObjectService_FireBeforeNavigate2(This,pDispatch,lpszUrl,dwFlags,lpszFrameName,pPostData,cbPostData,lpszHeaders,fPlayNavSound,pfCancel) (This)->lpVtbl->FireBeforeNavigate2(This,pDispatch,lpszUrl,dwFlags,lpszFrameName,pPostData,cbPostData,lpszHeaders,fPlayNavSound,pfCancel)
#define IDocObjectService_FireNavigateComplete2(This,pHTMLWindow2,dwFlags) (This)->lpVtbl->FireNavigateComplete2(This,pHTMLWindow2,dwFlags)
#define IDocObjectService_FireDownloadBegin(This) (This)->lpVtbl->FireDownloadBegin(This)
#define IDocObjectService_FireDownloadComplete(This) (This)->lpVtbl->FireDownloadComplete(This)
#define IDocObjectService_FireDocumentComplete(This,pHTMLWindow,dwFlags) (This)->lpVtbl->FireDocumentComplete(This,pHTMLWindow,dwFlags)
#define IDocObjectService_UpdateDesktopComponent(This,pHTMLWindow) (This)->lpVtbl->UpdateDesktopComponent(This,pHTMLWindow)
#define IDocObjectService_GetPendingUrl(This,pbstrPendingUrl) (This)->lpVtbl->GetPendingUrl(This,pbstrPendingUrl)
#define IDocObjectService_ActiveElementChanged(This,pHTMLElement) (This)->lpVtbl->ActiveElementChanged(This,pHTMLElement)
#define IDocObjectService_GetUrlSearchComponent(This,pbstrSearch) (This)->lpVtbl->GetUrlSearchComponent(This,pbstrSearch)
#define IDocObjectService_IsErrorUrl(This,lpszUrl,pfIsError) (This)->lpVtbl->IsErrorUrl(This,lpszUrl,pfIsError)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDocObjectService_QueryInterface(IDocObjectService* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDocObjectService_AddRef(IDocObjectService* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDocObjectService_Release(IDocObjectService* This) {
    return This->lpVtbl->Release(This);
}
/*** IDocObjectService methods ***/
static __WIDL_INLINE HRESULT IDocObjectService_FireBeforeNavigate2(IDocObjectService* This,IDispatch *pDispatch,LPCWSTR lpszUrl,DWORD dwFlags,LPCWSTR lpszFrameName,BYTE *pPostData,DWORD cbPostData,LPCWSTR lpszHeaders,WINBOOL fPlayNavSound,WINBOOL *pfCancel) {
    return This->lpVtbl->FireBeforeNavigate2(This,pDispatch,lpszUrl,dwFlags,lpszFrameName,pPostData,cbPostData,lpszHeaders,fPlayNavSound,pfCancel);
}
static __WIDL_INLINE HRESULT IDocObjectService_FireNavigateComplete2(IDocObjectService* This,IHTMLWindow2 *pHTMLWindow2,DWORD dwFlags) {
    return This->lpVtbl->FireNavigateComplete2(This,pHTMLWindow2,dwFlags);
}
static __WIDL_INLINE HRESULT IDocObjectService_FireDownloadBegin(IDocObjectService* This) {
    return This->lpVtbl->FireDownloadBegin(This);
}
static __WIDL_INLINE HRESULT IDocObjectService_FireDownloadComplete(IDocObjectService* This) {
    return This->lpVtbl->FireDownloadComplete(This);
}
static __WIDL_INLINE HRESULT IDocObjectService_FireDocumentComplete(IDocObjectService* This,IHTMLWindow2 *pHTMLWindow,DWORD dwFlags) {
    return This->lpVtbl->FireDocumentComplete(This,pHTMLWindow,dwFlags);
}
static __WIDL_INLINE HRESULT IDocObjectService_UpdateDesktopComponent(IDocObjectService* This,IHTMLWindow2 *pHTMLWindow) {
    return This->lpVtbl->UpdateDesktopComponent(This,pHTMLWindow);
}
static __WIDL_INLINE HRESULT IDocObjectService_GetPendingUrl(IDocObjectService* This,BSTR *pbstrPendingUrl) {
    return This->lpVtbl->GetPendingUrl(This,pbstrPendingUrl);
}
static __WIDL_INLINE HRESULT IDocObjectService_ActiveElementChanged(IDocObjectService* This,IHTMLElement *pHTMLElement) {
    return This->lpVtbl->ActiveElementChanged(This,pHTMLElement);
}
static __WIDL_INLINE HRESULT IDocObjectService_GetUrlSearchComponent(IDocObjectService* This,BSTR *pbstrSearch) {
    return This->lpVtbl->GetUrlSearchComponent(This,pbstrSearch);
}
static __WIDL_INLINE HRESULT IDocObjectService_IsErrorUrl(IDocObjectService* This,LPCWSTR lpszUrl,WINBOOL *pfIsError) {
    return This->lpVtbl->IsErrorUrl(This,lpszUrl,pfIsError);
}
#endif
#endif

#endif


#endif  /* __IDocObjectService_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __docobjectservice_h__ */
