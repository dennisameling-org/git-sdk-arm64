/*** Autogenerated by WIDL 8.12 from include/windows.ui.composition.interop.idl - Do not edit ***/

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

#ifndef __windows_ui_composition_interop_h__
#define __windows_ui_composition_interop_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositorInterop __x_ABI_CWindows_CUI_CComposition_CICompositorInterop;
#ifdef __cplusplus
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop ABI::Windows::UI::Composition::ICompositorInterop
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                interface ICompositorInterop;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <windows.ui.composition.h>
#include <sdkddkver.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositorInterop __x_ABI_CWindows_CUI_CComposition_CICompositorInterop;
#ifdef __cplusplus
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop ABI::Windows::UI::Composition::ICompositorInterop
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                interface ICompositorInterop;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * ICompositorInterop interface
 */
#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CUI_CComposition_CICompositorInterop, 0x25297d5c, 0x3ad4, 0x4c9c, 0xb5,0xcf, 0xe3,0x6a,0x38,0x51,0x23,0x30);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                MIDL_INTERFACE("25297d5c-3ad4-4c9c-b5cf-e36a38512330")
                ICompositorInterop : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCompositionSurfaceForHandle(
                        HANDLE swapchain,
                        ABI::Windows::UI::Composition::ICompositionSurface **result) = 0;

                    virtual HRESULT STDMETHODCALLTYPE CreateCompositionSurfaceForSwapChain(
                        IUnknown *swapchain,
                        ABI::Windows::UI::Composition::ICompositionSurface **result) = 0;

                    virtual HRESULT STDMETHODCALLTYPE CreateGraphicsDevice(
                        IUnknown *device,
                        ABI::Windows::UI::Composition::ICompositionGraphicsDevice **result) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop, 0x25297d5c, 0x3ad4, 0x4c9c, 0xb5,0xcf, 0xe3,0x6a,0x38,0x51,0x23,0x30)
#endif
#else
typedef struct __x_ABI_CWindows_CUI_CComposition_CICompositorInteropVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        TrustLevel *trustLevel);

    /*** ICompositorInterop methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateCompositionSurfaceForHandle)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        HANDLE swapchain,
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurface **result);

    HRESULT (STDMETHODCALLTYPE *CreateCompositionSurfaceForSwapChain)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        IUnknown *swapchain,
        __x_ABI_CWindows_CUI_CComposition_CICompositionSurface **result);

    HRESULT (STDMETHODCALLTYPE *CreateGraphicsDevice)(
        __x_ABI_CWindows_CUI_CComposition_CICompositorInterop *This,
        IUnknown *device,
        __x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice **result);

    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CICompositorInteropVtbl;

interface __x_ABI_CWindows_CUI_CComposition_CICompositorInterop {
    CONST_VTBL __x_ABI_CWindows_CUI_CComposition_CICompositorInteropVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** ICompositorInterop methods ***/
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateCompositionSurfaceForHandle(This,swapchain,result) (This)->lpVtbl->CreateCompositionSurfaceForHandle(This,swapchain,result)
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateCompositionSurfaceForSwapChain(This,swapchain,result) (This)->lpVtbl->CreateCompositionSurfaceForSwapChain(This,swapchain,result)
#define __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateGraphicsDevice(This,device,result) (This)->lpVtbl->CreateGraphicsDevice(This,device,result)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_QueryInterface(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_AddRef(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_Release(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetIids(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetRuntimeClassName(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetTrustLevel(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** ICompositorInterop methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateCompositionSurfaceForHandle(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,HANDLE swapchain,__x_ABI_CWindows_CUI_CComposition_CICompositionSurface **result) {
    return This->lpVtbl->CreateCompositionSurfaceForHandle(This,swapchain,result);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateCompositionSurfaceForSwapChain(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,IUnknown *swapchain,__x_ABI_CWindows_CUI_CComposition_CICompositionSurface **result) {
    return This->lpVtbl->CreateCompositionSurfaceForSwapChain(This,swapchain,result);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateGraphicsDevice(__x_ABI_CWindows_CUI_CComposition_CICompositorInterop* This,IUnknown *device,__x_ABI_CWindows_CUI_CComposition_CICompositionGraphicsDevice **result) {
    return This->lpVtbl->CreateGraphicsDevice(This,device,result);
}
#endif
#ifdef WIDL_using_Windows_UI_Composition
#define IID_ICompositorInterop IID___x_ABI_CWindows_CUI_CComposition_CICompositorInterop
#define ICompositorInteropVtbl __x_ABI_CWindows_CUI_CComposition_CICompositorInteropVtbl
#define ICompositorInterop __x_ABI_CWindows_CUI_CComposition_CICompositorInterop
#define ICompositorInterop_QueryInterface __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_QueryInterface
#define ICompositorInterop_AddRef __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_AddRef
#define ICompositorInterop_Release __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_Release
#define ICompositorInterop_GetIids __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetIids
#define ICompositorInterop_GetRuntimeClassName __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetRuntimeClassName
#define ICompositorInterop_GetTrustLevel __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_GetTrustLevel
#define ICompositorInterop_CreateCompositionSurfaceForHandle __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateCompositionSurfaceForHandle
#define ICompositorInterop_CreateCompositionSurfaceForSwapChain __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateCompositionSurfaceForSwapChain
#define ICompositorInterop_CreateGraphicsDevice __x_ABI_CWindows_CUI_CComposition_CICompositorInterop_CreateGraphicsDevice
#endif /* WIDL_using_Windows_UI_Composition */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CUI_CComposition_CICompositorInterop_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_ui_composition_interop_h__ */
