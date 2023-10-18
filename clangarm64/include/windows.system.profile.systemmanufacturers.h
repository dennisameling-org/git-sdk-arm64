/*** Autogenerated by WIDL 8.17 from include/windows.system.profile.systemmanufacturers.idl - Do not edit ***/

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

#ifndef __windows_system_profile_systemmanufacturers_h__
#define __windows_system_profile_systemmanufacturers_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics ABI::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                namespace SystemManufacturers {
                    interface ISmbiosInformationStatics;
                }
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CSmbiosInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CSmbiosInformation_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                namespace SystemManufacturers {
                    class SmbiosInformation;
                }
            }
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CSmbiosInformation __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CSmbiosInformation;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CSmbiosInformation_FWD_DEFINED__ */

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <eventtoken.h>
#include <windowscontracts.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics ABI::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                namespace SystemManufacturers {
                    interface ISmbiosInformationStatics;
                }
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#if !defined(WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION)
#define WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION)

/*****************************************************************************
 * ISmbiosInformationStatics interface
 */
#if WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics, 0x080cca7c, 0x637c, 0x48c4, 0xb7,0x28, 0xf9,0x27,0x38,0x12,0xdb,0x8e);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                namespace SystemManufacturers {
                    MIDL_INTERFACE("080cca7c-637c-48c4-b728-f9273812db8e")
                    ISmbiosInformationStatics : public IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE get_SerialNumber(
                            HSTRING *value) = 0;

                    };
                }
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics, 0x080cca7c, 0x637c, 0x48c4, 0xb7,0x28, 0xf9,0x27,0x38,0x12,0xdb,0x8e)
#endif
#else
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This,
        TrustLevel *trustLevel);

    /*** ISmbiosInformationStatics methods ***/
    HRESULT (STDMETHODCALLTYPE *get_SerialNumber)(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics *This,
        HSTRING *value);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics {
    CONST_VTBL __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** ISmbiosInformationStatics methods ***/
#define __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_get_SerialNumber(This,value) (This)->lpVtbl->get_SerialNumber(This,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_QueryInterface(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_AddRef(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_Release(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetIids(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetRuntimeClassName(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetTrustLevel(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** ISmbiosInformationStatics methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_get_SerialNumber(__x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics* This,HSTRING *value) {
    return This->lpVtbl->get_SerialNumber(This,value);
}
#endif
#ifdef WIDL_using_Windows_System_Profile_SystemManufacturers
#define IID_ISmbiosInformationStatics IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics
#define ISmbiosInformationStaticsVtbl __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl
#define ISmbiosInformationStatics __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics
#define ISmbiosInformationStatics_QueryInterface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_QueryInterface
#define ISmbiosInformationStatics_AddRef __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_AddRef
#define ISmbiosInformationStatics_Release __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_Release
#define ISmbiosInformationStatics_GetIids __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetIids
#define ISmbiosInformationStatics_GetRuntimeClassName __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetRuntimeClassName
#define ISmbiosInformationStatics_GetTrustLevel __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_GetTrustLevel
#define ISmbiosInformationStatics_get_SerialNumber __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_get_SerialNumber
#endif /* WIDL_using_Windows_System_Profile_SystemManufacturers */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics_INTERFACE_DEFINED__ */
#endif /* WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.System.Profile.SystemManufacturers.SmbiosInformation
 */
#if WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_SystemManufacturers_SmbiosInformation_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemManufacturers_SmbiosInformation_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SmbiosInformation[] = {'W','i','n','d','o','w','s','.','S','y','s','t','e','m','.','P','r','o','f','i','l','e','.','S','y','s','t','e','m','M','a','n','u','f','a','c','t','u','r','e','r','s','.','S','m','b','i','o','s','I','n','f','o','r','m','a','t','i','o','n',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SmbiosInformation[] = L"Windows.System.Profile.SystemManufacturers.SmbiosInformation";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SmbiosInformation[] = {'W','i','n','d','o','w','s','.','S','y','s','t','e','m','.','P','r','o','f','i','l','e','.','S','y','s','t','e','m','M','a','n','u','f','a','c','t','u','r','e','r','s','.','S','m','b','i','o','s','I','n','f','o','r','m','a','t','i','o','n',0};
#endif
#endif /* RUNTIMECLASS_Windows_System_Profile_SystemManufacturers_SmbiosInformation_DEFINED */
#endif /* WINDOWS_SYSTEM_PROFILE_SYSTEMMANUFACTURERS_SYSTEMMANUFACTURERSCONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HSTRING_UserSize     (ULONG *, ULONG, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserMarshal  (ULONG *, unsigned char *, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserUnmarshal(ULONG *, unsigned char *, HSTRING *);
void            __RPC_USER HSTRING_UserFree     (ULONG *, HSTRING *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_system_profile_systemmanufacturers_h__ */
