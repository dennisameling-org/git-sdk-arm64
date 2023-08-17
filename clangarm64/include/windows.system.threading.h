/*** Autogenerated by WIDL 8.13 from include/windows.system.threading.idl - Do not edit ***/

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

#ifndef __windows_system_threading_h__
#define __windows_system_threading_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler ABI::Windows::System::Threading::IWorkItemHandler
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IWorkItemHandler;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics ABI::Windows::System::Threading::IThreadPoolStatics
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IThreadPoolStatics;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CThreadPool_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CThreadPool_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                class ThreadPool;
            }
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CSystem_CThreading_CThreadPool __x_ABI_CWindows_CSystem_CThreading_CThreadPool;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CSystem_CThreading_CThreadPool_FWD_DEFINED__ */

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <windowscontracts.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;
#endif /* __cplusplus */

#ifndef __cplusplus
typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;
#endif /* __cplusplus */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                enum WorkItemPriority {
                    WorkItemPriority_Low = -1,
                    WorkItemPriority_Normal = 0,
                    WorkItemPriority_High = 1
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority {
    WorkItemPriority_Low = -1,
    WorkItemPriority_Normal = 0,
    WorkItemPriority_High = 1
};
#ifdef WIDL_using_Windows_System_Threading
#define WorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority
#endif /* WIDL_using_Windows_System_Threading */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                enum WorkItemOptions {
                    WorkItemOptions_None = 0x0,
                    WorkItemOptions_TimeSliced = 0x1
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions {
    WorkItemOptions_None = 0x0,
    WorkItemOptions_TimeSliced = 0x1
};
#ifdef WIDL_using_Windows_System_Threading
#define WorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions
#endif /* WIDL_using_Windows_System_Threading */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/*****************************************************************************
 * IWorkItemHandler interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler, 0x1d1a8b8b, 0xfa66, 0x414f, 0x9c,0xbd, 0xb6,0x5f,0xc9,0x9d,0x17,0xfa);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                MIDL_INTERFACE("1d1a8b8b-fa66-414f-9cbd-b65fc99d17fa")
                IWorkItemHandler : public IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        ABI::Windows::Foundation::IAsyncAction *operation) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler, 0x1d1a8b8b, 0xfa66, 0x414f, 0x9c,0xbd, 0xb6,0x5f,0xc9,0x9d,0x17,0xfa)
#endif
#else
typedef struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *This);

    /*** IWorkItemHandler methods ***/
    HRESULT (STDMETHODCALLTYPE *Invoke)(
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction *operation);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler {
    CONST_VTBL __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Release(This) (This)->lpVtbl->Release(This)
/*** IWorkItemHandler methods ***/
#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Invoke(This,operation) (This)->lpVtbl->Invoke(This,operation)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_QueryInterface(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_AddRef(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Release(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This) {
    return This->lpVtbl->Release(This);
}
/*** IWorkItemHandler methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Invoke(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This,__x_ABI_CWindows_CFoundation_CIAsyncAction *operation) {
    return This->lpVtbl->Invoke(This,operation);
}
#endif
#ifdef WIDL_using_Windows_System_Threading
#define IID_IWorkItemHandler IID___x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler
#define IWorkItemHandlerVtbl __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl
#define IWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler
#define IWorkItemHandler_QueryInterface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_QueryInterface
#define IWorkItemHandler_AddRef __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_AddRef
#define IWorkItemHandler_Release __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Release
#define IWorkItemHandler_Invoke __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Invoke
#endif /* WIDL_using_Windows_System_Threading */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*****************************************************************************
 * IThreadPoolStatics interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics, 0xb6bf67dd, 0x84bd, 0x44f8, 0xac,0x1c, 0x93,0xeb,0xcb,0x9d,0xba,0x91);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                MIDL_INTERFACE("b6bf67dd-84bd-44f8-ac1c-93ebcb9dba91")
                IThreadPoolStatics : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RunAsync(
                        ABI::Windows::System::Threading::IWorkItemHandler *handler,
                        ABI::Windows::Foundation::IAsyncAction **operation) = 0;

                    virtual HRESULT STDMETHODCALLTYPE RunWithPriorityAsync(
                        ABI::Windows::System::Threading::IWorkItemHandler *handler,
                        enum WorkItemPriority priority,
                        ABI::Windows::Foundation::IAsyncAction **operation) = 0;

                    virtual HRESULT STDMETHODCALLTYPE RunWithPriorityAndOptionsAsync(
                        ABI::Windows::System::Threading::IWorkItemHandler *handler,
                        enum WorkItemPriority priority,
                        enum WorkItemOptions options,
                        ABI::Windows::Foundation::IAsyncAction **operation) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics, 0xb6bf67dd, 0x84bd, 0x44f8, 0xac,0x1c, 0x93,0xeb,0xcb,0x9d,0xba,0x91)
#endif
#else
typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        TrustLevel *trustLevel);

    /*** IThreadPoolStatics methods ***/
    HRESULT (STDMETHODCALLTYPE *RunAsync)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,
        __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);

    HRESULT (STDMETHODCALLTYPE *RunWithPriorityAsync)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);

    HRESULT (STDMETHODCALLTYPE *RunWithPriorityAndOptionsAsync)(
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics *This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
        __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics {
    CONST_VTBL __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IThreadPoolStatics methods ***/
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunAsync(This,handler,operation) (This)->lpVtbl->RunAsync(This,handler,operation)
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAsync(This,handler,priority,operation) (This)->lpVtbl->RunWithPriorityAsync(This,handler,priority,operation)
#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAndOptionsAsync(This,handler,priority,options,operation) (This)->lpVtbl->RunWithPriorityAndOptionsAsync(This,handler,priority,options,operation)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_QueryInterface(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_AddRef(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_Release(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetIids(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetRuntimeClassName(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetTrustLevel(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IThreadPoolStatics methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunAsync(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,__x_ABI_CWindows_CFoundation_CIAsyncAction **operation) {
    return This->lpVtbl->RunAsync(This,handler,operation);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAsync(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,__x_ABI_CWindows_CFoundation_CIAsyncAction **operation) {
    return This->lpVtbl->RunWithPriorityAsync(This,handler,priority,operation);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAndOptionsAsync(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,__x_ABI_CWindows_CFoundation_CIAsyncAction **operation) {
    return This->lpVtbl->RunWithPriorityAndOptionsAsync(This,handler,priority,options,operation);
}
#endif
#ifdef WIDL_using_Windows_System_Threading
#define IID_IThreadPoolStatics IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics
#define IThreadPoolStaticsVtbl __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl
#define IThreadPoolStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics
#define IThreadPoolStatics_QueryInterface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_QueryInterface
#define IThreadPoolStatics_AddRef __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_AddRef
#define IThreadPoolStatics_Release __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_Release
#define IThreadPoolStatics_GetIids __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetIids
#define IThreadPoolStatics_GetRuntimeClassName __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetRuntimeClassName
#define IThreadPoolStatics_GetTrustLevel __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetTrustLevel
#define IThreadPoolStatics_RunAsync __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunAsync
#define IThreadPoolStatics_RunWithPriorityAsync __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAsync
#define IThreadPoolStatics_RunWithPriorityAndOptionsAsync __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAndOptionsAsync
#endif /* WIDL_using_Windows_System_Threading */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.System.Threading.ThreadPool
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Threading_ThreadPool_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_ThreadPool_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_System_Threading_ThreadPool[] = {'W','i','n','d','o','w','s','.','S','y','s','t','e','m','.','T','h','r','e','a','d','i','n','g','.','T','h','r','e','a','d','P','o','o','l',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_System_Threading_ThreadPool[] = L"Windows.System.Threading.ThreadPool";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_System_Threading_ThreadPool[] = {'W','i','n','d','o','w','s','.','S','y','s','t','e','m','.','T','h','r','e','a','d','i','n','g','.','T','h','r','e','a','d','P','o','o','l',0};
#endif
#endif /* RUNTIMECLASS_Windows_System_Threading_ThreadPool_DEFINED */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_system_threading_h__ */
