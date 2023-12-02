/*** Autogenerated by WIDL 8.21 from include/wmprealestate.idl - Do not edit ***/

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

#ifndef __wmprealestate_h__
#define __wmprealestate_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IWMPVideoRenderConfig_FWD_DEFINED__
#define __IWMPVideoRenderConfig_FWD_DEFINED__
typedef interface IWMPVideoRenderConfig IWMPVideoRenderConfig;
#ifdef __cplusplus
interface IWMPVideoRenderConfig;
#endif /* __cplusplus */
#endif

#ifndef __IWMPRenderConfig_FWD_DEFINED__
#define __IWMPRenderConfig_FWD_DEFINED__
typedef interface IWMPRenderConfig IWMPRenderConfig;
#ifdef __cplusplus
interface IWMPRenderConfig;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <ocidl.h>
#include <mfidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IWMPVideoRenderConfig interface
 */
#ifndef __IWMPVideoRenderConfig_INTERFACE_DEFINED__
#define __IWMPVideoRenderConfig_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWMPVideoRenderConfig, 0x6d6cf803, 0x1ec0, 0x4c8d, 0xb3,0xca, 0xf1,0x8e,0x27,0x28,0x20,0x74);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("6d6cf803-1ec0-4c8d-b3ca-f18e27282074")
IWMPVideoRenderConfig : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE put_presenterActivate(
        IMFActivate *activate) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWMPVideoRenderConfig, 0x6d6cf803, 0x1ec0, 0x4c8d, 0xb3,0xca, 0xf1,0x8e,0x27,0x28,0x20,0x74)
#endif
#else
typedef struct IWMPVideoRenderConfigVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWMPVideoRenderConfig *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWMPVideoRenderConfig *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWMPVideoRenderConfig *This);

    /*** IWMPVideoRenderConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *put_presenterActivate)(
        IWMPVideoRenderConfig *This,
        IMFActivate *activate);

    END_INTERFACE
} IWMPVideoRenderConfigVtbl;

interface IWMPVideoRenderConfig {
    CONST_VTBL IWMPVideoRenderConfigVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWMPVideoRenderConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWMPVideoRenderConfig_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWMPVideoRenderConfig_Release(This) (This)->lpVtbl->Release(This)
/*** IWMPVideoRenderConfig methods ***/
#define IWMPVideoRenderConfig_put_presenterActivate(This,activate) (This)->lpVtbl->put_presenterActivate(This,activate)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWMPVideoRenderConfig_QueryInterface(IWMPVideoRenderConfig* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWMPVideoRenderConfig_AddRef(IWMPVideoRenderConfig* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWMPVideoRenderConfig_Release(IWMPVideoRenderConfig* This) {
    return This->lpVtbl->Release(This);
}
/*** IWMPVideoRenderConfig methods ***/
static __WIDL_INLINE HRESULT IWMPVideoRenderConfig_put_presenterActivate(IWMPVideoRenderConfig* This,IMFActivate *activate) {
    return This->lpVtbl->put_presenterActivate(This,activate);
}
#endif
#endif

#endif


#endif  /* __IWMPVideoRenderConfig_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWMPRenderConfig interface
 */
#ifndef __IWMPRenderConfig_INTERFACE_DEFINED__
#define __IWMPRenderConfig_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWMPRenderConfig, 0x959506c1, 0x0314, 0x4ec5, 0x9e,0x61, 0x85,0x28,0xdb,0x5e,0x54,0x78);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("959506c1-0314-4ec5-9e61-8528db5e5478")
IWMPRenderConfig : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE put_inProcOnly(
        WINBOOL fInProc) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_inProcOnly(
        WINBOOL *pfInProc) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWMPRenderConfig, 0x959506c1, 0x0314, 0x4ec5, 0x9e,0x61, 0x85,0x28,0xdb,0x5e,0x54,0x78)
#endif
#else
typedef struct IWMPRenderConfigVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWMPRenderConfig *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWMPRenderConfig *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWMPRenderConfig *This);

    /*** IWMPRenderConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *put_inProcOnly)(
        IWMPRenderConfig *This,
        WINBOOL fInProc);

    HRESULT (STDMETHODCALLTYPE *get_inProcOnly)(
        IWMPRenderConfig *This,
        WINBOOL *pfInProc);

    END_INTERFACE
} IWMPRenderConfigVtbl;

interface IWMPRenderConfig {
    CONST_VTBL IWMPRenderConfigVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWMPRenderConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWMPRenderConfig_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWMPRenderConfig_Release(This) (This)->lpVtbl->Release(This)
/*** IWMPRenderConfig methods ***/
#define IWMPRenderConfig_put_inProcOnly(This,fInProc) (This)->lpVtbl->put_inProcOnly(This,fInProc)
#define IWMPRenderConfig_get_inProcOnly(This,pfInProc) (This)->lpVtbl->get_inProcOnly(This,pfInProc)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWMPRenderConfig_QueryInterface(IWMPRenderConfig* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWMPRenderConfig_AddRef(IWMPRenderConfig* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWMPRenderConfig_Release(IWMPRenderConfig* This) {
    return This->lpVtbl->Release(This);
}
/*** IWMPRenderConfig methods ***/
static __WIDL_INLINE HRESULT IWMPRenderConfig_put_inProcOnly(IWMPRenderConfig* This,WINBOOL fInProc) {
    return This->lpVtbl->put_inProcOnly(This,fInProc);
}
static __WIDL_INLINE HRESULT IWMPRenderConfig_get_inProcOnly(IWMPRenderConfig* This,WINBOOL *pfInProc) {
    return This->lpVtbl->get_inProcOnly(This,pfInProc);
}
#endif
#endif

#endif


#endif  /* __IWMPRenderConfig_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wmprealestate_h__ */
