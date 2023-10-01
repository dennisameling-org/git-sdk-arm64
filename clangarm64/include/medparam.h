/*** Autogenerated by WIDL 8.16 from include/medparam.idl - Do not edit ***/

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

#ifndef __medparam_h__
#define __medparam_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IMediaParams_FWD_DEFINED__
#define __IMediaParams_FWD_DEFINED__
typedef interface IMediaParams IMediaParams;
#ifdef __cplusplus
interface IMediaParams;
#endif /* __cplusplus */
#endif

#ifndef __IMediaParamInfo_FWD_DEFINED__
#define __IMediaParamInfo_FWD_DEFINED__
typedef interface IMediaParamInfo IMediaParamInfo;
#ifdef __cplusplus
interface IMediaParamInfo;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <strmif.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef DWORD MP_TIMEDATA;
typedef DWORD MP_CAPS;
typedef DWORD MP_FLAGS;
typedef float MP_DATA;
typedef enum _MP_Type {
    MPT_INT = 0,
    MPT_FLOAT = 1,
    MPT_BOOL = 2,
    MPT_ENUM = 3,
    MPT_MAX = 4
} MP_TYPE;
typedef enum _MP_CURVE_TYPE {
    MP_CURVE_JUMP = 0x1,
    MP_CURVE_LINEAR = 0x2,
    MP_CURVE_SQUARE = 0x4,
    MP_CURVE_INVSQUARE = 0x8,
    MP_CURVE_SINE = 0x10
} MP_CURVE_TYPE;
typedef struct _MP_PARAMINFO {
    MP_TYPE mpType;
    MP_CAPS mopCaps;
    MP_DATA mpdMinValue;
    MP_DATA mpdMaxValue;
    MP_DATA mpdNeutralValue;
    WCHAR szUnitText[32];
    WCHAR szLabel[32];
} MP_PARAMINFO;
typedef struct _MP_ENVELOPE_SEGMENT {
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    MP_DATA valStart;
    MP_DATA valEnd;
    MP_CURVE_TYPE iCurve;
    MP_FLAGS flags;
} MP_ENVELOPE_SEGMENT;
#define MP_CAPS_CURVE_JUMP (MP_CURVE_JUMP)

#define MP_CAPS_CURVE_LINEAR (MP_CURVE_LINEAR)

#define MP_CAPS_CURVE_SQUARE (MP_CURVE_SQUARE)

#define MP_CAPS_CURVE_INVSQUARE (MP_CURVE_INVSQUARE)

#define MP_CAPS_CURVE_SINE (MP_CURVE_SINE)

/*****************************************************************************
 * IMediaParams interface
 */
#ifndef __IMediaParams_INTERFACE_DEFINED__
#define __IMediaParams_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMediaParams, 0x6d6cbb61, 0xa223, 0x44aa, 0x84,0x2f, 0xa2,0xf0,0x67,0x50,0xbe,0x6e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("6d6cbb61-a223-44aa-842f-a2f06750be6e")
IMediaParams : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AddEnvelope(
        DWORD dwParamIndex,
        DWORD cPoints,
        MP_ENVELOPE_SEGMENT *pEnvelope) = 0;

    virtual HRESULT STDMETHODCALLTYPE FlushEnvelope(
        DWORD dwParamIndex,
        REFERENCE_TIME refTimeStart,
        REFERENCE_TIME refTimeEnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParam(
        DWORD dwParamIndex,
        MP_DATA *pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetParam(
        DWORD dwParamIndex,
        MP_DATA value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetTimeFormat(
        GUID guidTimeFormat,
        MP_TIMEDATA mpTimeData) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMediaParams, 0x6d6cbb61, 0xa223, 0x44aa, 0x84,0x2f, 0xa2,0xf0,0x67,0x50,0xbe,0x6e)
#endif
#else
typedef struct IMediaParamsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMediaParams *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMediaParams *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMediaParams *This);

    /*** IMediaParams methods ***/
    HRESULT (STDMETHODCALLTYPE *AddEnvelope)(
        IMediaParams *This,
        DWORD dwParamIndex,
        DWORD cPoints,
        MP_ENVELOPE_SEGMENT *pEnvelope);

    HRESULT (STDMETHODCALLTYPE *FlushEnvelope)(
        IMediaParams *This,
        DWORD dwParamIndex,
        REFERENCE_TIME refTimeStart,
        REFERENCE_TIME refTimeEnd);

    HRESULT (STDMETHODCALLTYPE *GetParam)(
        IMediaParams *This,
        DWORD dwParamIndex,
        MP_DATA *pValue);

    HRESULT (STDMETHODCALLTYPE *SetParam)(
        IMediaParams *This,
        DWORD dwParamIndex,
        MP_DATA value);

    HRESULT (STDMETHODCALLTYPE *SetTimeFormat)(
        IMediaParams *This,
        GUID guidTimeFormat,
        MP_TIMEDATA mpTimeData);

    END_INTERFACE
} IMediaParamsVtbl;

interface IMediaParams {
    CONST_VTBL IMediaParamsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMediaParams_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMediaParams_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMediaParams_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaParams methods ***/
#define IMediaParams_AddEnvelope(This,dwParamIndex,cPoints,pEnvelope) (This)->lpVtbl->AddEnvelope(This,dwParamIndex,cPoints,pEnvelope)
#define IMediaParams_FlushEnvelope(This,dwParamIndex,refTimeStart,refTimeEnd) (This)->lpVtbl->FlushEnvelope(This,dwParamIndex,refTimeStart,refTimeEnd)
#define IMediaParams_GetParam(This,dwParamIndex,pValue) (This)->lpVtbl->GetParam(This,dwParamIndex,pValue)
#define IMediaParams_SetParam(This,dwParamIndex,value) (This)->lpVtbl->SetParam(This,dwParamIndex,value)
#define IMediaParams_SetTimeFormat(This,guidTimeFormat,mpTimeData) (This)->lpVtbl->SetTimeFormat(This,guidTimeFormat,mpTimeData)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMediaParams_QueryInterface(IMediaParams* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMediaParams_AddRef(IMediaParams* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMediaParams_Release(IMediaParams* This) {
    return This->lpVtbl->Release(This);
}
/*** IMediaParams methods ***/
static __WIDL_INLINE HRESULT IMediaParams_AddEnvelope(IMediaParams* This,DWORD dwParamIndex,DWORD cPoints,MP_ENVELOPE_SEGMENT *pEnvelope) {
    return This->lpVtbl->AddEnvelope(This,dwParamIndex,cPoints,pEnvelope);
}
static __WIDL_INLINE HRESULT IMediaParams_FlushEnvelope(IMediaParams* This,DWORD dwParamIndex,REFERENCE_TIME refTimeStart,REFERENCE_TIME refTimeEnd) {
    return This->lpVtbl->FlushEnvelope(This,dwParamIndex,refTimeStart,refTimeEnd);
}
static __WIDL_INLINE HRESULT IMediaParams_GetParam(IMediaParams* This,DWORD dwParamIndex,MP_DATA *pValue) {
    return This->lpVtbl->GetParam(This,dwParamIndex,pValue);
}
static __WIDL_INLINE HRESULT IMediaParams_SetParam(IMediaParams* This,DWORD dwParamIndex,MP_DATA value) {
    return This->lpVtbl->SetParam(This,dwParamIndex,value);
}
static __WIDL_INLINE HRESULT IMediaParams_SetTimeFormat(IMediaParams* This,GUID guidTimeFormat,MP_TIMEDATA mpTimeData) {
    return This->lpVtbl->SetTimeFormat(This,guidTimeFormat,mpTimeData);
}
#endif
#endif

#endif


#endif  /* __IMediaParams_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMediaParamInfo interface
 */
#ifndef __IMediaParamInfo_INTERFACE_DEFINED__
#define __IMediaParamInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMediaParamInfo, 0x6d6cbb60, 0xa223, 0x44aa, 0x84,0x2f, 0xa2,0xf0,0x67,0x50,0xbe,0x6d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("6d6cbb60-a223-44aa-842f-a2f06750be6d")
IMediaParamInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetParamCount(
        DWORD *pdwParams) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParamInfo(
        DWORD dwParamIndex,
        MP_PARAMINFO *pInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParamText(
        DWORD dwParamIndex,
        WCHAR **ppwchText) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNumTimeFormats(
        DWORD *pdwNumTimeFormats) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSupportedTimeFormat(
        DWORD dwFormatIndex,
        GUID *pguidTimeFormat) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCurrentTimeFormat(
        GUID *pguidTimeFormat,
        MP_TIMEDATA *pTimeData) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMediaParamInfo, 0x6d6cbb60, 0xa223, 0x44aa, 0x84,0x2f, 0xa2,0xf0,0x67,0x50,0xbe,0x6d)
#endif
#else
typedef struct IMediaParamInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMediaParamInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMediaParamInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMediaParamInfo *This);

    /*** IMediaParamInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetParamCount)(
        IMediaParamInfo *This,
        DWORD *pdwParams);

    HRESULT (STDMETHODCALLTYPE *GetParamInfo)(
        IMediaParamInfo *This,
        DWORD dwParamIndex,
        MP_PARAMINFO *pInfo);

    HRESULT (STDMETHODCALLTYPE *GetParamText)(
        IMediaParamInfo *This,
        DWORD dwParamIndex,
        WCHAR **ppwchText);

    HRESULT (STDMETHODCALLTYPE *GetNumTimeFormats)(
        IMediaParamInfo *This,
        DWORD *pdwNumTimeFormats);

    HRESULT (STDMETHODCALLTYPE *GetSupportedTimeFormat)(
        IMediaParamInfo *This,
        DWORD dwFormatIndex,
        GUID *pguidTimeFormat);

    HRESULT (STDMETHODCALLTYPE *GetCurrentTimeFormat)(
        IMediaParamInfo *This,
        GUID *pguidTimeFormat,
        MP_TIMEDATA *pTimeData);

    END_INTERFACE
} IMediaParamInfoVtbl;

interface IMediaParamInfo {
    CONST_VTBL IMediaParamInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMediaParamInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMediaParamInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMediaParamInfo_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaParamInfo methods ***/
#define IMediaParamInfo_GetParamCount(This,pdwParams) (This)->lpVtbl->GetParamCount(This,pdwParams)
#define IMediaParamInfo_GetParamInfo(This,dwParamIndex,pInfo) (This)->lpVtbl->GetParamInfo(This,dwParamIndex,pInfo)
#define IMediaParamInfo_GetParamText(This,dwParamIndex,ppwchText) (This)->lpVtbl->GetParamText(This,dwParamIndex,ppwchText)
#define IMediaParamInfo_GetNumTimeFormats(This,pdwNumTimeFormats) (This)->lpVtbl->GetNumTimeFormats(This,pdwNumTimeFormats)
#define IMediaParamInfo_GetSupportedTimeFormat(This,dwFormatIndex,pguidTimeFormat) (This)->lpVtbl->GetSupportedTimeFormat(This,dwFormatIndex,pguidTimeFormat)
#define IMediaParamInfo_GetCurrentTimeFormat(This,pguidTimeFormat,pTimeData) (This)->lpVtbl->GetCurrentTimeFormat(This,pguidTimeFormat,pTimeData)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMediaParamInfo_QueryInterface(IMediaParamInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMediaParamInfo_AddRef(IMediaParamInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMediaParamInfo_Release(IMediaParamInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** IMediaParamInfo methods ***/
static __WIDL_INLINE HRESULT IMediaParamInfo_GetParamCount(IMediaParamInfo* This,DWORD *pdwParams) {
    return This->lpVtbl->GetParamCount(This,pdwParams);
}
static __WIDL_INLINE HRESULT IMediaParamInfo_GetParamInfo(IMediaParamInfo* This,DWORD dwParamIndex,MP_PARAMINFO *pInfo) {
    return This->lpVtbl->GetParamInfo(This,dwParamIndex,pInfo);
}
static __WIDL_INLINE HRESULT IMediaParamInfo_GetParamText(IMediaParamInfo* This,DWORD dwParamIndex,WCHAR **ppwchText) {
    return This->lpVtbl->GetParamText(This,dwParamIndex,ppwchText);
}
static __WIDL_INLINE HRESULT IMediaParamInfo_GetNumTimeFormats(IMediaParamInfo* This,DWORD *pdwNumTimeFormats) {
    return This->lpVtbl->GetNumTimeFormats(This,pdwNumTimeFormats);
}
static __WIDL_INLINE HRESULT IMediaParamInfo_GetSupportedTimeFormat(IMediaParamInfo* This,DWORD dwFormatIndex,GUID *pguidTimeFormat) {
    return This->lpVtbl->GetSupportedTimeFormat(This,dwFormatIndex,pguidTimeFormat);
}
static __WIDL_INLINE HRESULT IMediaParamInfo_GetCurrentTimeFormat(IMediaParamInfo* This,GUID *pguidTimeFormat,MP_TIMEDATA *pTimeData) {
    return This->lpVtbl->GetCurrentTimeFormat(This,pguidTimeFormat,pTimeData);
}
#endif
#endif

#endif


#endif  /* __IMediaParamInfo_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __medparam_h__ */
