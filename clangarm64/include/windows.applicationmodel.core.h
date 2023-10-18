/*** Autogenerated by WIDL 8.17 from include/windows.applicationmodel.core.idl - Do not edit ***/

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

#ifndef __windows_applicationmodel_core_h__
#define __windows_applicationmodel_core_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;
#ifdef __cplusplus
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry ABI::Windows::ApplicationModel::Core::IAppListEntry
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                interface IAppListEntry;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CAppListEntry_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                class AppListEntry;
            }
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CAppListEntry;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CApplicationModel_CCore_CAppListEntry_FWD_DEFINED__ */

/* Headers for imported files */

#include <windows.foundation.h>
#include <windows.storage.h>
#include <windows.system.h>
#include <windows.applicationmodel.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;
#ifdef __cplusplus
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry ABI::Windows::ApplicationModel::Core::IAppListEntry
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                interface IAppListEntry;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IAppListEntry interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry, 0xef00f07f, 0x2108, 0x490a, 0x87,0x7a, 0x8a,0x9f,0x17,0xc2,0x5f,0xad);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                MIDL_INTERFACE("ef00f07f-2108-490a-877a-8a9f17c25fad")
                IAppListEntry : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE get_DisplayInfo(
                        ABI::Windows::ApplicationModel::IAppDisplayInfo **value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE LaunchAsync(
                        ABI::Windows::Foundation::IAsyncOperation<boolean > **operation) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry, 0xef00f07f, 0x2108, 0x490a, 0x87,0x7a, 0x8a,0x9f,0x17,0xc2,0x5f,0xad)
#endif
#else
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This,
        TrustLevel *trustLevel);

    /*** IAppListEntry methods ***/
    HRESULT (STDMETHODCALLTYPE *get_DisplayInfo)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This,
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo **value);

    HRESULT (STDMETHODCALLTYPE *LaunchAsync)(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry *This,
        __FIAsyncOperation_1_boolean **operation);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry {
    CONST_VTBL __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IAppListEntry methods ***/
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_get_DisplayInfo(This,value) (This)->lpVtbl->get_DisplayInfo(This,value)
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_LaunchAsync(This,operation) (This)->lpVtbl->LaunchAsync(This,operation)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_QueryInterface(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_AddRef(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_Release(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetIids(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetRuntimeClassName(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetTrustLevel(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IAppListEntry methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_get_DisplayInfo(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This,__x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo **value) {
    return This->lpVtbl->get_DisplayInfo(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_LaunchAsync(__x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* This,__FIAsyncOperation_1_boolean **operation) {
    return This->lpVtbl->LaunchAsync(This,operation);
}
#endif
#ifdef WIDL_using_Windows_ApplicationModel_Core
#define IID_IAppListEntry IID___x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry
#define IAppListEntryVtbl __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl
#define IAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry
#define IAppListEntry_QueryInterface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_QueryInterface
#define IAppListEntry_AddRef __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_AddRef
#define IAppListEntry_Release __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_Release
#define IAppListEntry_GetIids __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetIids
#define IAppListEntry_GetRuntimeClassName __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetRuntimeClassName
#define IAppListEntry_GetTrustLevel __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_GetTrustLevel
#define IAppListEntry_get_DisplayInfo __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_get_DisplayInfo
#define IAppListEntry_LaunchAsync __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_LaunchAsync
#endif /* WIDL_using_Windows_ApplicationModel_Core */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.ApplicationModel.Core.AppListEntry
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Core_AppListEntry_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Core_AppListEntry_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_ApplicationModel_Core_AppListEntry[] = {'W','i','n','d','o','w','s','.','A','p','p','l','i','c','a','t','i','o','n','M','o','d','e','l','.','C','o','r','e','.','A','p','p','L','i','s','t','E','n','t','r','y',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_ApplicationModel_Core_AppListEntry[] = L"Windows.ApplicationModel.Core.AppListEntry";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_ApplicationModel_Core_AppListEntry[] = {'W','i','n','d','o','w','s','.','A','p','p','l','i','c','a','t','i','o','n','M','o','d','e','l','.','C','o','r','e','.','A','p','p','L','i','s','t','E','n','t','r','y',0};
#endif
#endif /* RUNTIMECLASS_Windows_ApplicationModel_Core_AppListEntry_DEFINED */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_applicationmodel_core_h__ */
