/*** Autogenerated by WIDL 8.13 from include/qnetwork.idl - Do not edit ***/

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

#ifndef __qnetwork_h__
#define __qnetwork_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IAMMediaContent_FWD_DEFINED__
#define __IAMMediaContent_FWD_DEFINED__
typedef interface IAMMediaContent IAMMediaContent;
#ifdef __cplusplus
interface IAMMediaContent;
#endif /* __cplusplus */
#endif

#ifndef __IAMNetworkStatus_FWD_DEFINED__
#define __IAMNetworkStatus_FWD_DEFINED__
typedef interface IAMNetworkStatus IAMNetworkStatus;
#ifdef __cplusplus
interface IAMNetworkStatus;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <strmif.h>
#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IAMMediaContent interface
 */
#ifndef __IAMMediaContent_INTERFACE_DEFINED__
#define __IAMMediaContent_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAMMediaContent, 0xfa2aa8f4, 0x8b62, 0x11d0, 0xa5,0x20, 0x00,0x00,0x00,0x00,0x00,0x00);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("fa2aa8f4-8b62-11d0-a520-000000000000")
IAMMediaContent : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE get_AuthorName(
        BSTR *pbstrAuthorName) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Title(
        BSTR *pbstrTitle) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Rating(
        BSTR *pbstrRating) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Description(
        BSTR *pbstrDescription) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Copyright(
        BSTR *pbstrCopyright) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_BaseURL(
        BSTR *pbstrBaseURL) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_LogoURL(
        BSTR *pbstrLogoURL) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_LogoIconURL(
        BSTR *pbstrLogoURL) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_WatermarkURL(
        BSTR *pbstrWatermarkURL) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_MoreInfoURL(
        BSTR *pbstrMoreInfoURL) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_MoreInfoBannerImage(
        BSTR *pbstrMoreInfoBannerImage) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_MoreInfoBannerURL(
        BSTR *pbstrMoreInfoBannerURL) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_MoreInfoText(
        BSTR *pbstrMoreInfoText) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAMMediaContent, 0xfa2aa8f4, 0x8b62, 0x11d0, 0xa5,0x20, 0x00,0x00,0x00,0x00,0x00,0x00)
#endif
#else
typedef struct IAMMediaContentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAMMediaContent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAMMediaContent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAMMediaContent *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IAMMediaContent *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IAMMediaContent *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IAMMediaContent *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IAMMediaContent *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IAMMediaContent methods ***/
    HRESULT (STDMETHODCALLTYPE *get_AuthorName)(
        IAMMediaContent *This,
        BSTR *pbstrAuthorName);

    HRESULT (STDMETHODCALLTYPE *get_Title)(
        IAMMediaContent *This,
        BSTR *pbstrTitle);

    HRESULT (STDMETHODCALLTYPE *get_Rating)(
        IAMMediaContent *This,
        BSTR *pbstrRating);

    HRESULT (STDMETHODCALLTYPE *get_Description)(
        IAMMediaContent *This,
        BSTR *pbstrDescription);

    HRESULT (STDMETHODCALLTYPE *get_Copyright)(
        IAMMediaContent *This,
        BSTR *pbstrCopyright);

    HRESULT (STDMETHODCALLTYPE *get_BaseURL)(
        IAMMediaContent *This,
        BSTR *pbstrBaseURL);

    HRESULT (STDMETHODCALLTYPE *get_LogoURL)(
        IAMMediaContent *This,
        BSTR *pbstrLogoURL);

    HRESULT (STDMETHODCALLTYPE *get_LogoIconURL)(
        IAMMediaContent *This,
        BSTR *pbstrLogoURL);

    HRESULT (STDMETHODCALLTYPE *get_WatermarkURL)(
        IAMMediaContent *This,
        BSTR *pbstrWatermarkURL);

    HRESULT (STDMETHODCALLTYPE *get_MoreInfoURL)(
        IAMMediaContent *This,
        BSTR *pbstrMoreInfoURL);

    HRESULT (STDMETHODCALLTYPE *get_MoreInfoBannerImage)(
        IAMMediaContent *This,
        BSTR *pbstrMoreInfoBannerImage);

    HRESULT (STDMETHODCALLTYPE *get_MoreInfoBannerURL)(
        IAMMediaContent *This,
        BSTR *pbstrMoreInfoBannerURL);

    HRESULT (STDMETHODCALLTYPE *get_MoreInfoText)(
        IAMMediaContent *This,
        BSTR *pbstrMoreInfoText);

    END_INTERFACE
} IAMMediaContentVtbl;

interface IAMMediaContent {
    CONST_VTBL IAMMediaContentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAMMediaContent_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAMMediaContent_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAMMediaContent_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IAMMediaContent_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IAMMediaContent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IAMMediaContent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IAMMediaContent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IAMMediaContent methods ***/
#define IAMMediaContent_get_AuthorName(This,pbstrAuthorName) (This)->lpVtbl->get_AuthorName(This,pbstrAuthorName)
#define IAMMediaContent_get_Title(This,pbstrTitle) (This)->lpVtbl->get_Title(This,pbstrTitle)
#define IAMMediaContent_get_Rating(This,pbstrRating) (This)->lpVtbl->get_Rating(This,pbstrRating)
#define IAMMediaContent_get_Description(This,pbstrDescription) (This)->lpVtbl->get_Description(This,pbstrDescription)
#define IAMMediaContent_get_Copyright(This,pbstrCopyright) (This)->lpVtbl->get_Copyright(This,pbstrCopyright)
#define IAMMediaContent_get_BaseURL(This,pbstrBaseURL) (This)->lpVtbl->get_BaseURL(This,pbstrBaseURL)
#define IAMMediaContent_get_LogoURL(This,pbstrLogoURL) (This)->lpVtbl->get_LogoURL(This,pbstrLogoURL)
#define IAMMediaContent_get_LogoIconURL(This,pbstrLogoURL) (This)->lpVtbl->get_LogoIconURL(This,pbstrLogoURL)
#define IAMMediaContent_get_WatermarkURL(This,pbstrWatermarkURL) (This)->lpVtbl->get_WatermarkURL(This,pbstrWatermarkURL)
#define IAMMediaContent_get_MoreInfoURL(This,pbstrMoreInfoURL) (This)->lpVtbl->get_MoreInfoURL(This,pbstrMoreInfoURL)
#define IAMMediaContent_get_MoreInfoBannerImage(This,pbstrMoreInfoBannerImage) (This)->lpVtbl->get_MoreInfoBannerImage(This,pbstrMoreInfoBannerImage)
#define IAMMediaContent_get_MoreInfoBannerURL(This,pbstrMoreInfoBannerURL) (This)->lpVtbl->get_MoreInfoBannerURL(This,pbstrMoreInfoBannerURL)
#define IAMMediaContent_get_MoreInfoText(This,pbstrMoreInfoText) (This)->lpVtbl->get_MoreInfoText(This,pbstrMoreInfoText)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IAMMediaContent_QueryInterface(IAMMediaContent* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IAMMediaContent_AddRef(IAMMediaContent* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IAMMediaContent_Release(IAMMediaContent* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static __WIDL_INLINE HRESULT IAMMediaContent_GetTypeInfoCount(IAMMediaContent* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static __WIDL_INLINE HRESULT IAMMediaContent_GetTypeInfo(IAMMediaContent* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static __WIDL_INLINE HRESULT IAMMediaContent_GetIDsOfNames(IAMMediaContent* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static __WIDL_INLINE HRESULT IAMMediaContent_Invoke(IAMMediaContent* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IAMMediaContent methods ***/
static __WIDL_INLINE HRESULT IAMMediaContent_get_AuthorName(IAMMediaContent* This,BSTR *pbstrAuthorName) {
    return This->lpVtbl->get_AuthorName(This,pbstrAuthorName);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_Title(IAMMediaContent* This,BSTR *pbstrTitle) {
    return This->lpVtbl->get_Title(This,pbstrTitle);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_Rating(IAMMediaContent* This,BSTR *pbstrRating) {
    return This->lpVtbl->get_Rating(This,pbstrRating);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_Description(IAMMediaContent* This,BSTR *pbstrDescription) {
    return This->lpVtbl->get_Description(This,pbstrDescription);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_Copyright(IAMMediaContent* This,BSTR *pbstrCopyright) {
    return This->lpVtbl->get_Copyright(This,pbstrCopyright);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_BaseURL(IAMMediaContent* This,BSTR *pbstrBaseURL) {
    return This->lpVtbl->get_BaseURL(This,pbstrBaseURL);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_LogoURL(IAMMediaContent* This,BSTR *pbstrLogoURL) {
    return This->lpVtbl->get_LogoURL(This,pbstrLogoURL);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_LogoIconURL(IAMMediaContent* This,BSTR *pbstrLogoURL) {
    return This->lpVtbl->get_LogoIconURL(This,pbstrLogoURL);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_WatermarkURL(IAMMediaContent* This,BSTR *pbstrWatermarkURL) {
    return This->lpVtbl->get_WatermarkURL(This,pbstrWatermarkURL);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_MoreInfoURL(IAMMediaContent* This,BSTR *pbstrMoreInfoURL) {
    return This->lpVtbl->get_MoreInfoURL(This,pbstrMoreInfoURL);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_MoreInfoBannerImage(IAMMediaContent* This,BSTR *pbstrMoreInfoBannerImage) {
    return This->lpVtbl->get_MoreInfoBannerImage(This,pbstrMoreInfoBannerImage);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_MoreInfoBannerURL(IAMMediaContent* This,BSTR *pbstrMoreInfoBannerURL) {
    return This->lpVtbl->get_MoreInfoBannerURL(This,pbstrMoreInfoBannerURL);
}
static __WIDL_INLINE HRESULT IAMMediaContent_get_MoreInfoText(IAMMediaContent* This,BSTR *pbstrMoreInfoText) {
    return This->lpVtbl->get_MoreInfoText(This,pbstrMoreInfoText);
}
#endif
#endif

#endif


#endif  /* __IAMMediaContent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAMNetworkStatus interface
 */
#ifndef __IAMNetworkStatus_INTERFACE_DEFINED__
#define __IAMNetworkStatus_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAMNetworkStatus, 0xfa2aa8f3, 0x8b62, 0x11d0, 0xa5,0x20, 0x00,0x00,0x00,0x00,0x00,0x00);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("fa2aa8f3-8b62-11d0-a520-000000000000")
IAMNetworkStatus : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE get_ReceivedPackets(
        LONG *pReceivedPackets) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_RecoveredPackets(
        LONG *pRecoveredPackets) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_LostPackets(
        LONG *pLostPackets) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ReceptionQuality(
        LONG *pReceptionQuality) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_BufferingCount(
        LONG *pBufferingCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_IsBroadcast(
        VARIANT_BOOL *pIsBroadcast) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_BufferingProgress(
        LONG *pBufferingProgress) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAMNetworkStatus, 0xfa2aa8f3, 0x8b62, 0x11d0, 0xa5,0x20, 0x00,0x00,0x00,0x00,0x00,0x00)
#endif
#else
typedef struct IAMNetworkStatusVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAMNetworkStatus *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAMNetworkStatus *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAMNetworkStatus *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IAMNetworkStatus *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IAMNetworkStatus *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IAMNetworkStatus *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IAMNetworkStatus *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IAMNetworkStatus methods ***/
    HRESULT (STDMETHODCALLTYPE *get_ReceivedPackets)(
        IAMNetworkStatus *This,
        LONG *pReceivedPackets);

    HRESULT (STDMETHODCALLTYPE *get_RecoveredPackets)(
        IAMNetworkStatus *This,
        LONG *pRecoveredPackets);

    HRESULT (STDMETHODCALLTYPE *get_LostPackets)(
        IAMNetworkStatus *This,
        LONG *pLostPackets);

    HRESULT (STDMETHODCALLTYPE *get_ReceptionQuality)(
        IAMNetworkStatus *This,
        LONG *pReceptionQuality);

    HRESULT (STDMETHODCALLTYPE *get_BufferingCount)(
        IAMNetworkStatus *This,
        LONG *pBufferingCount);

    HRESULT (STDMETHODCALLTYPE *get_IsBroadcast)(
        IAMNetworkStatus *This,
        VARIANT_BOOL *pIsBroadcast);

    HRESULT (STDMETHODCALLTYPE *get_BufferingProgress)(
        IAMNetworkStatus *This,
        LONG *pBufferingProgress);

    END_INTERFACE
} IAMNetworkStatusVtbl;

interface IAMNetworkStatus {
    CONST_VTBL IAMNetworkStatusVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAMNetworkStatus_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAMNetworkStatus_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAMNetworkStatus_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IAMNetworkStatus_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IAMNetworkStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IAMNetworkStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IAMNetworkStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IAMNetworkStatus methods ***/
#define IAMNetworkStatus_get_ReceivedPackets(This,pReceivedPackets) (This)->lpVtbl->get_ReceivedPackets(This,pReceivedPackets)
#define IAMNetworkStatus_get_RecoveredPackets(This,pRecoveredPackets) (This)->lpVtbl->get_RecoveredPackets(This,pRecoveredPackets)
#define IAMNetworkStatus_get_LostPackets(This,pLostPackets) (This)->lpVtbl->get_LostPackets(This,pLostPackets)
#define IAMNetworkStatus_get_ReceptionQuality(This,pReceptionQuality) (This)->lpVtbl->get_ReceptionQuality(This,pReceptionQuality)
#define IAMNetworkStatus_get_BufferingCount(This,pBufferingCount) (This)->lpVtbl->get_BufferingCount(This,pBufferingCount)
#define IAMNetworkStatus_get_IsBroadcast(This,pIsBroadcast) (This)->lpVtbl->get_IsBroadcast(This,pIsBroadcast)
#define IAMNetworkStatus_get_BufferingProgress(This,pBufferingProgress) (This)->lpVtbl->get_BufferingProgress(This,pBufferingProgress)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IAMNetworkStatus_QueryInterface(IAMNetworkStatus* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IAMNetworkStatus_AddRef(IAMNetworkStatus* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IAMNetworkStatus_Release(IAMNetworkStatus* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static __WIDL_INLINE HRESULT IAMNetworkStatus_GetTypeInfoCount(IAMNetworkStatus* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_GetTypeInfo(IAMNetworkStatus* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_GetIDsOfNames(IAMNetworkStatus* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_Invoke(IAMNetworkStatus* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IAMNetworkStatus methods ***/
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_ReceivedPackets(IAMNetworkStatus* This,LONG *pReceivedPackets) {
    return This->lpVtbl->get_ReceivedPackets(This,pReceivedPackets);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_RecoveredPackets(IAMNetworkStatus* This,LONG *pRecoveredPackets) {
    return This->lpVtbl->get_RecoveredPackets(This,pRecoveredPackets);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_LostPackets(IAMNetworkStatus* This,LONG *pLostPackets) {
    return This->lpVtbl->get_LostPackets(This,pLostPackets);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_ReceptionQuality(IAMNetworkStatus* This,LONG *pReceptionQuality) {
    return This->lpVtbl->get_ReceptionQuality(This,pReceptionQuality);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_BufferingCount(IAMNetworkStatus* This,LONG *pBufferingCount) {
    return This->lpVtbl->get_BufferingCount(This,pBufferingCount);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_IsBroadcast(IAMNetworkStatus* This,VARIANT_BOOL *pIsBroadcast) {
    return This->lpVtbl->get_IsBroadcast(This,pIsBroadcast);
}
static __WIDL_INLINE HRESULT IAMNetworkStatus_get_BufferingProgress(IAMNetworkStatus* This,LONG *pBufferingProgress) {
    return This->lpVtbl->get_BufferingProgress(This,pBufferingProgress);
}
#endif
#endif

#endif


#endif  /* __IAMNetworkStatus_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __qnetwork_h__ */
