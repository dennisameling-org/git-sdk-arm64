/*** Autogenerated by WIDL 8.13 from include/mfd3d12.idl - Do not edit ***/

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

#ifndef __mfd3d12_h__
#define __mfd3d12_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IMFD3D12SynchronizationObjectCommands_FWD_DEFINED__
#define __IMFD3D12SynchronizationObjectCommands_FWD_DEFINED__
typedef interface IMFD3D12SynchronizationObjectCommands IMFD3D12SynchronizationObjectCommands;
#ifdef __cplusplus
interface IMFD3D12SynchronizationObjectCommands;
#endif /* __cplusplus */
#endif

#ifndef __IMFD3D12SynchronizationObject_FWD_DEFINED__
#define __IMFD3D12SynchronizationObject_FWD_DEFINED__
typedef interface IMFD3D12SynchronizationObject IMFD3D12SynchronizationObject;
#ifdef __cplusplus
interface IMFD3D12SynchronizationObject;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <mfidl.h>
#include <d3d12.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
/*****************************************************************************
 * IMFD3D12SynchronizationObjectCommands interface
 */
#ifndef __IMFD3D12SynchronizationObjectCommands_INTERFACE_DEFINED__
#define __IMFD3D12SynchronizationObjectCommands_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFD3D12SynchronizationObjectCommands, 0x09d0f835, 0x92ff, 0x4e53, 0x8e,0xfa, 0x40,0xfa,0xa5,0x51,0xf2,0x33);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("09d0f835-92ff-4e53-8efa-40faa551f233")
IMFD3D12SynchronizationObjectCommands : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE EnqueueResourceReady(
        ID3D12CommandQueue *pProducerCommandQueue) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnqueueResourceReadyWait(
        ID3D12CommandQueue *pConsumerCommandQueue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SignalEventOnResourceReady(
        HANDLE hEvent) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnqueueResourceRelease(
        ID3D12CommandQueue *pConsumerCommandQueue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFD3D12SynchronizationObjectCommands, 0x09d0f835, 0x92ff, 0x4e53, 0x8e,0xfa, 0x40,0xfa,0xa5,0x51,0xf2,0x33)
#endif
#else
typedef struct IMFD3D12SynchronizationObjectCommandsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFD3D12SynchronizationObjectCommands *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFD3D12SynchronizationObjectCommands *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFD3D12SynchronizationObjectCommands *This);

    /*** IMFD3D12SynchronizationObjectCommands methods ***/
    HRESULT (STDMETHODCALLTYPE *EnqueueResourceReady)(
        IMFD3D12SynchronizationObjectCommands *This,
        ID3D12CommandQueue *pProducerCommandQueue);

    HRESULT (STDMETHODCALLTYPE *EnqueueResourceReadyWait)(
        IMFD3D12SynchronizationObjectCommands *This,
        ID3D12CommandQueue *pConsumerCommandQueue);

    HRESULT (STDMETHODCALLTYPE *SignalEventOnResourceReady)(
        IMFD3D12SynchronizationObjectCommands *This,
        HANDLE hEvent);

    HRESULT (STDMETHODCALLTYPE *EnqueueResourceRelease)(
        IMFD3D12SynchronizationObjectCommands *This,
        ID3D12CommandQueue *pConsumerCommandQueue);

    END_INTERFACE
} IMFD3D12SynchronizationObjectCommandsVtbl;

interface IMFD3D12SynchronizationObjectCommands {
    CONST_VTBL IMFD3D12SynchronizationObjectCommandsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFD3D12SynchronizationObjectCommands_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFD3D12SynchronizationObjectCommands_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFD3D12SynchronizationObjectCommands_Release(This) (This)->lpVtbl->Release(This)
/*** IMFD3D12SynchronizationObjectCommands methods ***/
#define IMFD3D12SynchronizationObjectCommands_EnqueueResourceReady(This,pProducerCommandQueue) (This)->lpVtbl->EnqueueResourceReady(This,pProducerCommandQueue)
#define IMFD3D12SynchronizationObjectCommands_EnqueueResourceReadyWait(This,pConsumerCommandQueue) (This)->lpVtbl->EnqueueResourceReadyWait(This,pConsumerCommandQueue)
#define IMFD3D12SynchronizationObjectCommands_SignalEventOnResourceReady(This,hEvent) (This)->lpVtbl->SignalEventOnResourceReady(This,hEvent)
#define IMFD3D12SynchronizationObjectCommands_EnqueueResourceRelease(This,pConsumerCommandQueue) (This)->lpVtbl->EnqueueResourceRelease(This,pConsumerCommandQueue)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObjectCommands_QueryInterface(IMFD3D12SynchronizationObjectCommands* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMFD3D12SynchronizationObjectCommands_AddRef(IMFD3D12SynchronizationObjectCommands* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMFD3D12SynchronizationObjectCommands_Release(IMFD3D12SynchronizationObjectCommands* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFD3D12SynchronizationObjectCommands methods ***/
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObjectCommands_EnqueueResourceReady(IMFD3D12SynchronizationObjectCommands* This,ID3D12CommandQueue *pProducerCommandQueue) {
    return This->lpVtbl->EnqueueResourceReady(This,pProducerCommandQueue);
}
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObjectCommands_EnqueueResourceReadyWait(IMFD3D12SynchronizationObjectCommands* This,ID3D12CommandQueue *pConsumerCommandQueue) {
    return This->lpVtbl->EnqueueResourceReadyWait(This,pConsumerCommandQueue);
}
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObjectCommands_SignalEventOnResourceReady(IMFD3D12SynchronizationObjectCommands* This,HANDLE hEvent) {
    return This->lpVtbl->SignalEventOnResourceReady(This,hEvent);
}
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObjectCommands_EnqueueResourceRelease(IMFD3D12SynchronizationObjectCommands* This,ID3D12CommandQueue *pConsumerCommandQueue) {
    return This->lpVtbl->EnqueueResourceRelease(This,pConsumerCommandQueue);
}
#endif
#endif

#endif


#endif  /* __IMFD3D12SynchronizationObjectCommands_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFD3D12SynchronizationObject interface
 */
#ifndef __IMFD3D12SynchronizationObject_INTERFACE_DEFINED__
#define __IMFD3D12SynchronizationObject_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFD3D12SynchronizationObject, 0x802302b0, 0x82de, 0x45e1, 0xb4,0x21, 0xf1,0x9e,0xe5,0xbd,0xaf,0x23);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("802302b0-82de-45e1-b421-f19ee5bdaf23")
IMFD3D12SynchronizationObject : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SignalEventOnFinalResourceRelease(
        HANDLE hEvent) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFD3D12SynchronizationObject, 0x802302b0, 0x82de, 0x45e1, 0xb4,0x21, 0xf1,0x9e,0xe5,0xbd,0xaf,0x23)
#endif
#else
typedef struct IMFD3D12SynchronizationObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFD3D12SynchronizationObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFD3D12SynchronizationObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFD3D12SynchronizationObject *This);

    /*** IMFD3D12SynchronizationObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SignalEventOnFinalResourceRelease)(
        IMFD3D12SynchronizationObject *This,
        HANDLE hEvent);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IMFD3D12SynchronizationObject *This);

    END_INTERFACE
} IMFD3D12SynchronizationObjectVtbl;

interface IMFD3D12SynchronizationObject {
    CONST_VTBL IMFD3D12SynchronizationObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFD3D12SynchronizationObject_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFD3D12SynchronizationObject_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFD3D12SynchronizationObject_Release(This) (This)->lpVtbl->Release(This)
/*** IMFD3D12SynchronizationObject methods ***/
#define IMFD3D12SynchronizationObject_SignalEventOnFinalResourceRelease(This,hEvent) (This)->lpVtbl->SignalEventOnFinalResourceRelease(This,hEvent)
#define IMFD3D12SynchronizationObject_Reset(This) (This)->lpVtbl->Reset(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObject_QueryInterface(IMFD3D12SynchronizationObject* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMFD3D12SynchronizationObject_AddRef(IMFD3D12SynchronizationObject* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMFD3D12SynchronizationObject_Release(IMFD3D12SynchronizationObject* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFD3D12SynchronizationObject methods ***/
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObject_SignalEventOnFinalResourceRelease(IMFD3D12SynchronizationObject* This,HANDLE hEvent) {
    return This->lpVtbl->SignalEventOnFinalResourceRelease(This,hEvent);
}
static __WIDL_INLINE HRESULT IMFD3D12SynchronizationObject_Reset(IMFD3D12SynchronizationObject* This) {
    return This->lpVtbl->Reset(This);
}
#endif
#endif

#endif


#endif  /* __IMFD3D12SynchronizationObject_INTERFACE_DEFINED__ */

#if NTDDI_VERSION >= NTDDI_WIN10_CO
HRESULT MFCreateD3D12SynchronizationObject(ID3D12Device *pDevice, REFIID riid, void **ppvSyncObject);
#endif /* NTDDI_WIN10_CO */
typedef enum MF_MT_D3D_RESOURCE_VERSION_ENUM {
    MF_D3D11_RESOURCE = 0,
    MF_D3D12_RESOURCE = 1
} MF_MT_D3D_RESOURCE_VERSION_ENUM;
EXTERN_GUID(MF_D3D12_SYNCHRONIZATION_OBJECT, 0x2a7c8d6a, 0x85a6, 0x494d, 0xa0, 0x46, 0x6, 0xea, 0x1a, 0x13, 0x8f, 0x4b);
EXTERN_GUID(MF_MT_D3D_RESOURCE_VERSION, 0x174f1e85, 0xfe26, 0x453d, 0xb5, 0x2e, 0x5b, 0xdd, 0x4e, 0x55, 0xb9, 0x44);
EXTERN_GUID(MF_MT_D3D12_CPU_READBACK, 0x28ee9fe3, 0xd481, 0x46a6, 0xb9, 0x8a, 0x7f, 0x69, 0xd5, 0x28, 0xe, 0x82);
EXTERN_GUID(MF_MT_D3D12_TEXTURE_LAYOUT, 0x97c85caa, 0xbeb, 0x4ee1, 0x97, 0x15, 0xf2, 0x2f, 0xad, 0x8c, 0x10, 0xf5);
EXTERN_GUID(MF_MT_D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET, 0xeeac2585, 0x3430, 0x498c, 0x84, 0xa2, 0x77, 0xb1, 0xbb, 0xa5, 0x70, 0xf6);
EXTERN_GUID(MF_MT_D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL, 0xb1138dc3, 0x1d5, 0x4c14, 0x9b, 0xdc, 0xcd, 0xc9, 0x33, 0x6f, 0x55, 0xb9);
EXTERN_GUID(MF_MT_D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, 0x82c85647, 0x5057, 0x4960, 0x95, 0x59, 0xf4, 0x5b, 0x8e, 0x27, 0x14, 0x27);
EXTERN_GUID(MF_MT_D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE, 0xba06bfac, 0xffe3, 0x474a, 0xab, 0x55, 0x16, 0x1e, 0xe4, 0x41, 0x7a, 0x2e);
EXTERN_GUID(MF_MT_D3D12_RESOURCE_FLAG_ALLOW_CROSS_ADAPTER, 0xa6a1e439, 0x2f96, 0x4ab5, 0x98, 0xdc, 0xad, 0xf7, 0x49, 0x73, 0x50, 0x5d);
EXTERN_GUID(MF_MT_D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS, 0xa4940b2, 0xcfd6, 0x4738, 0x9d, 0x2, 0x98, 0x11, 0x37, 0x34, 0x1, 0x5a);
EXTERN_GUID(MF_SA_D3D12_HEAP_FLAGS, 0x496b3266, 0xd28f, 0x4f8c, 0x93, 0xa7, 0x4a, 0x59, 0x6b, 0x1a, 0x31, 0xa1);
EXTERN_GUID(MF_SA_D3D12_HEAP_TYPE, 0x56f26a76, 0xbbc1, 0x4ce0, 0xbb, 0x11, 0xe2, 0x23, 0x68, 0xd8, 0x74, 0xed);
EXTERN_GUID(MF_SA_D3D12_CLEAR_VALUE, 0x86ba9a39, 0x526, 0x495d, 0x9a, 0xb5, 0x54, 0xec, 0x9f, 0xad, 0x6f, 0xc3);
#endif /* WINAPI_PARTITION_APP */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mfd3d12_h__ */
