/*** Autogenerated by WIDL 8.12 from include/sensorsapi.idl - Do not edit ***/

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

#ifndef __sensorsapi_h__
#define __sensorsapi_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __ISensorManager_FWD_DEFINED__
#define __ISensorManager_FWD_DEFINED__
typedef interface ISensorManager ISensorManager;
#ifdef __cplusplus
interface ISensorManager;
#endif /* __cplusplus */
#endif

#ifndef __ISensorCollection_FWD_DEFINED__
#define __ISensorCollection_FWD_DEFINED__
typedef interface ISensorCollection ISensorCollection;
#ifdef __cplusplus
interface ISensorCollection;
#endif /* __cplusplus */
#endif

#ifndef __ISensor_FWD_DEFINED__
#define __ISensor_FWD_DEFINED__
typedef interface ISensor ISensor;
#ifdef __cplusplus
interface ISensor;
#endif /* __cplusplus */
#endif

#ifndef __ISensorDataReport_FWD_DEFINED__
#define __ISensorDataReport_FWD_DEFINED__
typedef interface ISensorDataReport ISensorDataReport;
#ifdef __cplusplus
interface ISensorDataReport;
#endif /* __cplusplus */
#endif

#ifndef __ISensorManagerEvents_FWD_DEFINED__
#define __ISensorManagerEvents_FWD_DEFINED__
typedef interface ISensorManagerEvents ISensorManagerEvents;
#ifdef __cplusplus
interface ISensorManagerEvents;
#endif /* __cplusplus */
#endif

#ifndef __ISensorEvents_FWD_DEFINED__
#define __ISensorEvents_FWD_DEFINED__
typedef interface ISensorEvents ISensorEvents;
#ifdef __cplusplus
interface ISensorEvents;
#endif /* __cplusplus */
#endif

#ifndef __SensorManager_FWD_DEFINED__
#define __SensorManager_FWD_DEFINED__
#ifdef __cplusplus
typedef class SensorManager SensorManager;
#else
typedef struct SensorManager SensorManager;
#endif /* defined __cplusplus */
#endif /* defined __SensorManager_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <propsys.h>
#include <portabledevicetypes.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum __WIDL_sensorsapi_generated_name_00000020 {
    SENSOR_STATE_MIN = 0,
    SENSOR_STATE_READY = SENSOR_STATE_MIN,
    SENSOR_STATE_NOT_AVAILABLE = SENSOR_STATE_READY + 1,
    SENSOR_STATE_NO_DATA = SENSOR_STATE_NOT_AVAILABLE + 1,
    SENSOR_STATE_INITIALIZING = SENSOR_STATE_NO_DATA + 1,
    SENSOR_STATE_ACCESS_DENIED = SENSOR_STATE_INITIALIZING + 1,
    SENSOR_STATE_ERROR = SENSOR_STATE_ACCESS_DENIED + 1,
    SENSOR_STATE_MAX = SENSOR_STATE_ERROR
} SensorState;
typedef enum __WIDL_sensorsapi_generated_name_00000021 {
    SENSOR_CONNECTION_TYPE_PC_INTEGRATED = 0,
    SENSOR_CONNECTION_TYPE_PC_ATTACHED = SENSOR_CONNECTION_TYPE_PC_INTEGRATED + 1,
    SENSOR_CONNECTION_TYPE_PC_EXTERNAL = SENSOR_CONNECTION_TYPE_PC_ATTACHED + 1
} SensorConnectionType;
typedef enum LOCATION_DESIRED_ACCURACY {
    LOCATION_DESIRED_ACCURACY_DEFAULT = 0,
    LOCATION_DESIRED_ACCURACY_HIGH = LOCATION_DESIRED_ACCURACY_DEFAULT + 1
} LOCATION_DESIRED_ACCURACY;
typedef GUID SENSOR_CATEGORY_ID;
typedef REFGUID REFSENSOR_CATEGORY_ID;
typedef GUID SENSOR_TYPE_ID;
typedef REFGUID REFSENSOR_TYPE_ID;
typedef GUID SENSOR_ID;
typedef REFGUID REFSENSOR_ID;
#ifndef __ISensorCollection_FWD_DEFINED__
#define __ISensorCollection_FWD_DEFINED__
typedef interface ISensorCollection ISensorCollection;
#ifdef __cplusplus
interface ISensorCollection;
#endif /* __cplusplus */
#endif

#ifndef __ISensor_FWD_DEFINED__
#define __ISensor_FWD_DEFINED__
typedef interface ISensor ISensor;
#ifdef __cplusplus
interface ISensor;
#endif /* __cplusplus */
#endif

#ifndef __ISensorDataReport_FWD_DEFINED__
#define __ISensorDataReport_FWD_DEFINED__
typedef interface ISensorDataReport ISensorDataReport;
#ifdef __cplusplus
interface ISensorDataReport;
#endif /* __cplusplus */
#endif

#ifndef __ISensorManagerEvents_FWD_DEFINED__
#define __ISensorManagerEvents_FWD_DEFINED__
typedef interface ISensorManagerEvents ISensorManagerEvents;
#ifdef __cplusplus
interface ISensorManagerEvents;
#endif /* __cplusplus */
#endif

#ifndef __ISensorEvents_FWD_DEFINED__
#define __ISensorEvents_FWD_DEFINED__
typedef interface ISensorEvents ISensorEvents;
#ifdef __cplusplus
interface ISensorEvents;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * ISensorManager interface
 */
#ifndef __ISensorManager_INTERFACE_DEFINED__
#define __ISensorManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISensorManager, 0xbd77db67, 0x45a8, 0x42dc, 0x8d,0x00, 0x6d,0xcf,0x15,0xf8,0x37,0x7a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bd77db67-45a8-42dc-8d00-6dcf15f8377a")
ISensorManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetSensorsByCategory(
        REFSENSOR_CATEGORY_ID sensorCategory,
        ISensorCollection **ppSensorsFound) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSensorsByType(
        REFSENSOR_TYPE_ID sensorType,
        ISensorCollection **ppSensorsFound) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSensorByID(
        REFSENSOR_ID sensorID,
        ISensor **ppSensor) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEventSink(
        ISensorManagerEvents *pEvents) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestPermissions(
        HWND hParent,
        ISensorCollection *pSensors,
        WINBOOL fModal) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISensorManager, 0xbd77db67, 0x45a8, 0x42dc, 0x8d,0x00, 0x6d,0xcf,0x15,0xf8,0x37,0x7a)
#endif
#else
typedef struct ISensorManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISensorManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISensorManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISensorManager *This);

    /*** ISensorManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSensorsByCategory)(
        ISensorManager *This,
        REFSENSOR_CATEGORY_ID sensorCategory,
        ISensorCollection **ppSensorsFound);

    HRESULT (STDMETHODCALLTYPE *GetSensorsByType)(
        ISensorManager *This,
        REFSENSOR_TYPE_ID sensorType,
        ISensorCollection **ppSensorsFound);

    HRESULT (STDMETHODCALLTYPE *GetSensorByID)(
        ISensorManager *This,
        REFSENSOR_ID sensorID,
        ISensor **ppSensor);

    HRESULT (STDMETHODCALLTYPE *SetEventSink)(
        ISensorManager *This,
        ISensorManagerEvents *pEvents);

    HRESULT (STDMETHODCALLTYPE *RequestPermissions)(
        ISensorManager *This,
        HWND hParent,
        ISensorCollection *pSensors,
        WINBOOL fModal);

    END_INTERFACE
} ISensorManagerVtbl;

interface ISensorManager {
    CONST_VTBL ISensorManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISensorManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISensorManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISensorManager_Release(This) (This)->lpVtbl->Release(This)
/*** ISensorManager methods ***/
#define ISensorManager_GetSensorsByCategory(This,sensorCategory,ppSensorsFound) (This)->lpVtbl->GetSensorsByCategory(This,sensorCategory,ppSensorsFound)
#define ISensorManager_GetSensorsByType(This,sensorType,ppSensorsFound) (This)->lpVtbl->GetSensorsByType(This,sensorType,ppSensorsFound)
#define ISensorManager_GetSensorByID(This,sensorID,ppSensor) (This)->lpVtbl->GetSensorByID(This,sensorID,ppSensor)
#define ISensorManager_SetEventSink(This,pEvents) (This)->lpVtbl->SetEventSink(This,pEvents)
#define ISensorManager_RequestPermissions(This,hParent,pSensors,fModal) (This)->lpVtbl->RequestPermissions(This,hParent,pSensors,fModal)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISensorManager_QueryInterface(ISensorManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISensorManager_AddRef(ISensorManager* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISensorManager_Release(ISensorManager* This) {
    return This->lpVtbl->Release(This);
}
/*** ISensorManager methods ***/
static __WIDL_INLINE HRESULT ISensorManager_GetSensorsByCategory(ISensorManager* This,REFSENSOR_CATEGORY_ID sensorCategory,ISensorCollection **ppSensorsFound) {
    return This->lpVtbl->GetSensorsByCategory(This,sensorCategory,ppSensorsFound);
}
static __WIDL_INLINE HRESULT ISensorManager_GetSensorsByType(ISensorManager* This,REFSENSOR_TYPE_ID sensorType,ISensorCollection **ppSensorsFound) {
    return This->lpVtbl->GetSensorsByType(This,sensorType,ppSensorsFound);
}
static __WIDL_INLINE HRESULT ISensorManager_GetSensorByID(ISensorManager* This,REFSENSOR_ID sensorID,ISensor **ppSensor) {
    return This->lpVtbl->GetSensorByID(This,sensorID,ppSensor);
}
static __WIDL_INLINE HRESULT ISensorManager_SetEventSink(ISensorManager* This,ISensorManagerEvents *pEvents) {
    return This->lpVtbl->SetEventSink(This,pEvents);
}
static __WIDL_INLINE HRESULT ISensorManager_RequestPermissions(ISensorManager* This,HWND hParent,ISensorCollection *pSensors,WINBOOL fModal) {
    return This->lpVtbl->RequestPermissions(This,hParent,pSensors,fModal);
}
#endif
#endif

#endif


#endif  /* __ISensorManager_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISensorCollection interface
 */
#ifndef __ISensorCollection_INTERFACE_DEFINED__
#define __ISensorCollection_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISensorCollection, 0x23571e11, 0xe545, 0x4dd8, 0xa3,0x37, 0xb8,0x9b,0xf4,0x4b,0x10,0xdf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("23571e11-e545-4dd8-a337-b89bf44b10df")
ISensorCollection : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetAt(
        ULONG ulIndex,
        ISensor **ppSensor) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCount(
        ULONG *pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE Add(
        ISensor *pSensor) = 0;

    virtual HRESULT STDMETHODCALLTYPE Remove(
        ISensor *pSensor) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveByID(
        REFSENSOR_ID sensorID) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clear(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISensorCollection, 0x23571e11, 0xe545, 0x4dd8, 0xa3,0x37, 0xb8,0x9b,0xf4,0x4b,0x10,0xdf)
#endif
#else
typedef struct ISensorCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISensorCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISensorCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISensorCollection *This);

    /*** ISensorCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAt)(
        ISensorCollection *This,
        ULONG ulIndex,
        ISensor **ppSensor);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        ISensorCollection *This,
        ULONG *pCount);

    HRESULT (STDMETHODCALLTYPE *Add)(
        ISensorCollection *This,
        ISensor *pSensor);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        ISensorCollection *This,
        ISensor *pSensor);

    HRESULT (STDMETHODCALLTYPE *RemoveByID)(
        ISensorCollection *This,
        REFSENSOR_ID sensorID);

    HRESULT (STDMETHODCALLTYPE *Clear)(
        ISensorCollection *This);

    END_INTERFACE
} ISensorCollectionVtbl;

interface ISensorCollection {
    CONST_VTBL ISensorCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISensorCollection_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISensorCollection_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISensorCollection_Release(This) (This)->lpVtbl->Release(This)
/*** ISensorCollection methods ***/
#define ISensorCollection_GetAt(This,ulIndex,ppSensor) (This)->lpVtbl->GetAt(This,ulIndex,ppSensor)
#define ISensorCollection_GetCount(This,pCount) (This)->lpVtbl->GetCount(This,pCount)
#define ISensorCollection_Add(This,pSensor) (This)->lpVtbl->Add(This,pSensor)
#define ISensorCollection_Remove(This,pSensor) (This)->lpVtbl->Remove(This,pSensor)
#define ISensorCollection_RemoveByID(This,sensorID) (This)->lpVtbl->RemoveByID(This,sensorID)
#define ISensorCollection_Clear(This) (This)->lpVtbl->Clear(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISensorCollection_QueryInterface(ISensorCollection* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISensorCollection_AddRef(ISensorCollection* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISensorCollection_Release(ISensorCollection* This) {
    return This->lpVtbl->Release(This);
}
/*** ISensorCollection methods ***/
static __WIDL_INLINE HRESULT ISensorCollection_GetAt(ISensorCollection* This,ULONG ulIndex,ISensor **ppSensor) {
    return This->lpVtbl->GetAt(This,ulIndex,ppSensor);
}
static __WIDL_INLINE HRESULT ISensorCollection_GetCount(ISensorCollection* This,ULONG *pCount) {
    return This->lpVtbl->GetCount(This,pCount);
}
static __WIDL_INLINE HRESULT ISensorCollection_Add(ISensorCollection* This,ISensor *pSensor) {
    return This->lpVtbl->Add(This,pSensor);
}
static __WIDL_INLINE HRESULT ISensorCollection_Remove(ISensorCollection* This,ISensor *pSensor) {
    return This->lpVtbl->Remove(This,pSensor);
}
static __WIDL_INLINE HRESULT ISensorCollection_RemoveByID(ISensorCollection* This,REFSENSOR_ID sensorID) {
    return This->lpVtbl->RemoveByID(This,sensorID);
}
static __WIDL_INLINE HRESULT ISensorCollection_Clear(ISensorCollection* This) {
    return This->lpVtbl->Clear(This);
}
#endif
#endif

#endif


#endif  /* __ISensorCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISensor interface
 */
#ifndef __ISensor_INTERFACE_DEFINED__
#define __ISensor_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISensor, 0x5fa08f80, 0x2657, 0x458e, 0xaf,0x75, 0x46,0xf7,0x3f,0xa6,0xac,0x5c);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5fa08f80-2657-458e-af75-46f73fa6ac5c")
ISensor : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetID(
        SENSOR_ID *pID) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCategory(
        SENSOR_CATEGORY_ID *pSensorCategory) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetType(
        SENSOR_TYPE_ID *pSensorType) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFriendlyName(
        BSTR *pFriendlyName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        REFPROPERTYKEY key,
        PROPVARIANT *pProperty) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperties(
        IPortableDeviceKeyCollection *pKeys,
        IPortableDeviceValues **ppProperties) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSupportedDataFields(
        IPortableDeviceKeyCollection **ppDataFields) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProperties(
        IPortableDeviceValues *pProperties,
        IPortableDeviceValues **ppResults) = 0;

    virtual HRESULT STDMETHODCALLTYPE SupportsDataField(
        REFPROPERTYKEY key,
        VARIANT_BOOL *pIsSupported) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetState(
        SensorState *pState) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetData(
        ISensorDataReport **ppDataReport) = 0;

    virtual HRESULT STDMETHODCALLTYPE SupportsEvent(
        REFGUID eventGuid,
        VARIANT_BOOL *pIsSupported) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEventInterest(
        GUID **ppValues,
        ULONG *pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEventInterest(
        GUID *pValues,
        ULONG count) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEventSink(
        ISensorEvents *pEvents) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISensor, 0x5fa08f80, 0x2657, 0x458e, 0xaf,0x75, 0x46,0xf7,0x3f,0xa6,0xac,0x5c)
#endif
#else
typedef struct ISensorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISensor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISensor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISensor *This);

    /*** ISensor methods ***/
    HRESULT (STDMETHODCALLTYPE *GetID)(
        ISensor *This,
        SENSOR_ID *pID);

    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        ISensor *This,
        SENSOR_CATEGORY_ID *pSensorCategory);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        ISensor *This,
        SENSOR_TYPE_ID *pSensorType);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        ISensor *This,
        BSTR *pFriendlyName);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        ISensor *This,
        REFPROPERTYKEY key,
        PROPVARIANT *pProperty);

    HRESULT (STDMETHODCALLTYPE *GetProperties)(
        ISensor *This,
        IPortableDeviceKeyCollection *pKeys,
        IPortableDeviceValues **ppProperties);

    HRESULT (STDMETHODCALLTYPE *GetSupportedDataFields)(
        ISensor *This,
        IPortableDeviceKeyCollection **ppDataFields);

    HRESULT (STDMETHODCALLTYPE *SetProperties)(
        ISensor *This,
        IPortableDeviceValues *pProperties,
        IPortableDeviceValues **ppResults);

    HRESULT (STDMETHODCALLTYPE *SupportsDataField)(
        ISensor *This,
        REFPROPERTYKEY key,
        VARIANT_BOOL *pIsSupported);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        ISensor *This,
        SensorState *pState);

    HRESULT (STDMETHODCALLTYPE *GetData)(
        ISensor *This,
        ISensorDataReport **ppDataReport);

    HRESULT (STDMETHODCALLTYPE *SupportsEvent)(
        ISensor *This,
        REFGUID eventGuid,
        VARIANT_BOOL *pIsSupported);

    HRESULT (STDMETHODCALLTYPE *GetEventInterest)(
        ISensor *This,
        GUID **ppValues,
        ULONG *pCount);

    HRESULT (STDMETHODCALLTYPE *SetEventInterest)(
        ISensor *This,
        GUID *pValues,
        ULONG count);

    HRESULT (STDMETHODCALLTYPE *SetEventSink)(
        ISensor *This,
        ISensorEvents *pEvents);

    END_INTERFACE
} ISensorVtbl;

interface ISensor {
    CONST_VTBL ISensorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISensor_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISensor_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISensor_Release(This) (This)->lpVtbl->Release(This)
/*** ISensor methods ***/
#define ISensor_GetID(This,pID) (This)->lpVtbl->GetID(This,pID)
#define ISensor_GetCategory(This,pSensorCategory) (This)->lpVtbl->GetCategory(This,pSensorCategory)
#define ISensor_GetType(This,pSensorType) (This)->lpVtbl->GetType(This,pSensorType)
#define ISensor_GetFriendlyName(This,pFriendlyName) (This)->lpVtbl->GetFriendlyName(This,pFriendlyName)
#define ISensor_GetProperty(This,key,pProperty) (This)->lpVtbl->GetProperty(This,key,pProperty)
#define ISensor_GetProperties(This,pKeys,ppProperties) (This)->lpVtbl->GetProperties(This,pKeys,ppProperties)
#define ISensor_GetSupportedDataFields(This,ppDataFields) (This)->lpVtbl->GetSupportedDataFields(This,ppDataFields)
#define ISensor_SetProperties(This,pProperties,ppResults) (This)->lpVtbl->SetProperties(This,pProperties,ppResults)
#define ISensor_SupportsDataField(This,key,pIsSupported) (This)->lpVtbl->SupportsDataField(This,key,pIsSupported)
#define ISensor_GetState(This,pState) (This)->lpVtbl->GetState(This,pState)
#define ISensor_GetData(This,ppDataReport) (This)->lpVtbl->GetData(This,ppDataReport)
#define ISensor_SupportsEvent(This,eventGuid,pIsSupported) (This)->lpVtbl->SupportsEvent(This,eventGuid,pIsSupported)
#define ISensor_GetEventInterest(This,ppValues,pCount) (This)->lpVtbl->GetEventInterest(This,ppValues,pCount)
#define ISensor_SetEventInterest(This,pValues,count) (This)->lpVtbl->SetEventInterest(This,pValues,count)
#define ISensor_SetEventSink(This,pEvents) (This)->lpVtbl->SetEventSink(This,pEvents)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISensor_QueryInterface(ISensor* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISensor_AddRef(ISensor* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISensor_Release(ISensor* This) {
    return This->lpVtbl->Release(This);
}
/*** ISensor methods ***/
static __WIDL_INLINE HRESULT ISensor_GetID(ISensor* This,SENSOR_ID *pID) {
    return This->lpVtbl->GetID(This,pID);
}
static __WIDL_INLINE HRESULT ISensor_GetCategory(ISensor* This,SENSOR_CATEGORY_ID *pSensorCategory) {
    return This->lpVtbl->GetCategory(This,pSensorCategory);
}
static __WIDL_INLINE HRESULT ISensor_GetType(ISensor* This,SENSOR_TYPE_ID *pSensorType) {
    return This->lpVtbl->GetType(This,pSensorType);
}
static __WIDL_INLINE HRESULT ISensor_GetFriendlyName(ISensor* This,BSTR *pFriendlyName) {
    return This->lpVtbl->GetFriendlyName(This,pFriendlyName);
}
static __WIDL_INLINE HRESULT ISensor_GetProperty(ISensor* This,REFPROPERTYKEY key,PROPVARIANT *pProperty) {
    return This->lpVtbl->GetProperty(This,key,pProperty);
}
static __WIDL_INLINE HRESULT ISensor_GetProperties(ISensor* This,IPortableDeviceKeyCollection *pKeys,IPortableDeviceValues **ppProperties) {
    return This->lpVtbl->GetProperties(This,pKeys,ppProperties);
}
static __WIDL_INLINE HRESULT ISensor_GetSupportedDataFields(ISensor* This,IPortableDeviceKeyCollection **ppDataFields) {
    return This->lpVtbl->GetSupportedDataFields(This,ppDataFields);
}
static __WIDL_INLINE HRESULT ISensor_SetProperties(ISensor* This,IPortableDeviceValues *pProperties,IPortableDeviceValues **ppResults) {
    return This->lpVtbl->SetProperties(This,pProperties,ppResults);
}
static __WIDL_INLINE HRESULT ISensor_SupportsDataField(ISensor* This,REFPROPERTYKEY key,VARIANT_BOOL *pIsSupported) {
    return This->lpVtbl->SupportsDataField(This,key,pIsSupported);
}
static __WIDL_INLINE HRESULT ISensor_GetState(ISensor* This,SensorState *pState) {
    return This->lpVtbl->GetState(This,pState);
}
static __WIDL_INLINE HRESULT ISensor_GetData(ISensor* This,ISensorDataReport **ppDataReport) {
    return This->lpVtbl->GetData(This,ppDataReport);
}
static __WIDL_INLINE HRESULT ISensor_SupportsEvent(ISensor* This,REFGUID eventGuid,VARIANT_BOOL *pIsSupported) {
    return This->lpVtbl->SupportsEvent(This,eventGuid,pIsSupported);
}
static __WIDL_INLINE HRESULT ISensor_GetEventInterest(ISensor* This,GUID **ppValues,ULONG *pCount) {
    return This->lpVtbl->GetEventInterest(This,ppValues,pCount);
}
static __WIDL_INLINE HRESULT ISensor_SetEventInterest(ISensor* This,GUID *pValues,ULONG count) {
    return This->lpVtbl->SetEventInterest(This,pValues,count);
}
static __WIDL_INLINE HRESULT ISensor_SetEventSink(ISensor* This,ISensorEvents *pEvents) {
    return This->lpVtbl->SetEventSink(This,pEvents);
}
#endif
#endif

#endif


#endif  /* __ISensor_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISensorDataReport interface
 */
#ifndef __ISensorDataReport_INTERFACE_DEFINED__
#define __ISensorDataReport_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISensorDataReport, 0x0ab9df9b, 0xc4b5, 0x4796, 0x88,0x98, 0x04,0x70,0x70,0x6a,0x2e,0x1d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0ab9df9b-c4b5-4796-8898-0470706a2e1d")
ISensorDataReport : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetTimestamp(
        SYSTEMTIME *pTimeStamp) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSensorValue(
        REFPROPERTYKEY pKey,
        PROPVARIANT *pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSensorValues(
        IPortableDeviceKeyCollection *pKeys,
        IPortableDeviceValues **ppValues) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISensorDataReport, 0x0ab9df9b, 0xc4b5, 0x4796, 0x88,0x98, 0x04,0x70,0x70,0x6a,0x2e,0x1d)
#endif
#else
typedef struct ISensorDataReportVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISensorDataReport *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISensorDataReport *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISensorDataReport *This);

    /*** ISensorDataReport methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTimestamp)(
        ISensorDataReport *This,
        SYSTEMTIME *pTimeStamp);

    HRESULT (STDMETHODCALLTYPE *GetSensorValue)(
        ISensorDataReport *This,
        REFPROPERTYKEY pKey,
        PROPVARIANT *pValue);

    HRESULT (STDMETHODCALLTYPE *GetSensorValues)(
        ISensorDataReport *This,
        IPortableDeviceKeyCollection *pKeys,
        IPortableDeviceValues **ppValues);

    END_INTERFACE
} ISensorDataReportVtbl;

interface ISensorDataReport {
    CONST_VTBL ISensorDataReportVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISensorDataReport_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISensorDataReport_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISensorDataReport_Release(This) (This)->lpVtbl->Release(This)
/*** ISensorDataReport methods ***/
#define ISensorDataReport_GetTimestamp(This,pTimeStamp) (This)->lpVtbl->GetTimestamp(This,pTimeStamp)
#define ISensorDataReport_GetSensorValue(This,pKey,pValue) (This)->lpVtbl->GetSensorValue(This,pKey,pValue)
#define ISensorDataReport_GetSensorValues(This,pKeys,ppValues) (This)->lpVtbl->GetSensorValues(This,pKeys,ppValues)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISensorDataReport_QueryInterface(ISensorDataReport* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISensorDataReport_AddRef(ISensorDataReport* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISensorDataReport_Release(ISensorDataReport* This) {
    return This->lpVtbl->Release(This);
}
/*** ISensorDataReport methods ***/
static __WIDL_INLINE HRESULT ISensorDataReport_GetTimestamp(ISensorDataReport* This,SYSTEMTIME *pTimeStamp) {
    return This->lpVtbl->GetTimestamp(This,pTimeStamp);
}
static __WIDL_INLINE HRESULT ISensorDataReport_GetSensorValue(ISensorDataReport* This,REFPROPERTYKEY pKey,PROPVARIANT *pValue) {
    return This->lpVtbl->GetSensorValue(This,pKey,pValue);
}
static __WIDL_INLINE HRESULT ISensorDataReport_GetSensorValues(ISensorDataReport* This,IPortableDeviceKeyCollection *pKeys,IPortableDeviceValues **ppValues) {
    return This->lpVtbl->GetSensorValues(This,pKeys,ppValues);
}
#endif
#endif

#endif


#endif  /* __ISensorDataReport_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISensorManagerEvents interface
 */
#ifndef __ISensorManagerEvents_INTERFACE_DEFINED__
#define __ISensorManagerEvents_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISensorManagerEvents, 0x9b3b0b86, 0x266a, 0x4aad, 0xb2,0x1f, 0xfd,0xe5,0x50,0x10,0x01,0xb7);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9b3b0b86-266a-4aad-b21f-fde5501001b7")
ISensorManagerEvents : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnSensorEnter(
        ISensor *pSensor,
        SensorState state) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISensorManagerEvents, 0x9b3b0b86, 0x266a, 0x4aad, 0xb2,0x1f, 0xfd,0xe5,0x50,0x10,0x01,0xb7)
#endif
#else
typedef struct ISensorManagerEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISensorManagerEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISensorManagerEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISensorManagerEvents *This);

    /*** ISensorManagerEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnSensorEnter)(
        ISensorManagerEvents *This,
        ISensor *pSensor,
        SensorState state);

    END_INTERFACE
} ISensorManagerEventsVtbl;

interface ISensorManagerEvents {
    CONST_VTBL ISensorManagerEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISensorManagerEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISensorManagerEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISensorManagerEvents_Release(This) (This)->lpVtbl->Release(This)
/*** ISensorManagerEvents methods ***/
#define ISensorManagerEvents_OnSensorEnter(This,pSensor,state) (This)->lpVtbl->OnSensorEnter(This,pSensor,state)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISensorManagerEvents_QueryInterface(ISensorManagerEvents* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISensorManagerEvents_AddRef(ISensorManagerEvents* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISensorManagerEvents_Release(ISensorManagerEvents* This) {
    return This->lpVtbl->Release(This);
}
/*** ISensorManagerEvents methods ***/
static __WIDL_INLINE HRESULT ISensorManagerEvents_OnSensorEnter(ISensorManagerEvents* This,ISensor *pSensor,SensorState state) {
    return This->lpVtbl->OnSensorEnter(This,pSensor,state);
}
#endif
#endif

#endif


#endif  /* __ISensorManagerEvents_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISensorEvents interface
 */
#ifndef __ISensorEvents_INTERFACE_DEFINED__
#define __ISensorEvents_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISensorEvents, 0x5d8dcc91, 0x4641, 0x47e7, 0xb7,0xc3, 0xb7,0x4f,0x48,0xa6,0xc3,0x91);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5d8dcc91-4641-47e7-b7c3-b74f48a6c391")
ISensorEvents : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnStateChanged(
        ISensor *pSensor,
        SensorState state) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnDataUpdated(
        ISensor *pSensor,
        ISensorDataReport *pNewData) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnEvent(
        ISensor *pSensor,
        REFGUID eventID,
        IPortableDeviceValues *pEventData) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnLeave(
        REFSENSOR_ID ID) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISensorEvents, 0x5d8dcc91, 0x4641, 0x47e7, 0xb7,0xc3, 0xb7,0x4f,0x48,0xa6,0xc3,0x91)
#endif
#else
typedef struct ISensorEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISensorEvents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISensorEvents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISensorEvents *This);

    /*** ISensorEvents methods ***/
    HRESULT (STDMETHODCALLTYPE *OnStateChanged)(
        ISensorEvents *This,
        ISensor *pSensor,
        SensorState state);

    HRESULT (STDMETHODCALLTYPE *OnDataUpdated)(
        ISensorEvents *This,
        ISensor *pSensor,
        ISensorDataReport *pNewData);

    HRESULT (STDMETHODCALLTYPE *OnEvent)(
        ISensorEvents *This,
        ISensor *pSensor,
        REFGUID eventID,
        IPortableDeviceValues *pEventData);

    HRESULT (STDMETHODCALLTYPE *OnLeave)(
        ISensorEvents *This,
        REFSENSOR_ID ID);

    END_INTERFACE
} ISensorEventsVtbl;

interface ISensorEvents {
    CONST_VTBL ISensorEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISensorEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISensorEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISensorEvents_Release(This) (This)->lpVtbl->Release(This)
/*** ISensorEvents methods ***/
#define ISensorEvents_OnStateChanged(This,pSensor,state) (This)->lpVtbl->OnStateChanged(This,pSensor,state)
#define ISensorEvents_OnDataUpdated(This,pSensor,pNewData) (This)->lpVtbl->OnDataUpdated(This,pSensor,pNewData)
#define ISensorEvents_OnEvent(This,pSensor,eventID,pEventData) (This)->lpVtbl->OnEvent(This,pSensor,eventID,pEventData)
#define ISensorEvents_OnLeave(This,ID) (This)->lpVtbl->OnLeave(This,ID)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISensorEvents_QueryInterface(ISensorEvents* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISensorEvents_AddRef(ISensorEvents* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISensorEvents_Release(ISensorEvents* This) {
    return This->lpVtbl->Release(This);
}
/*** ISensorEvents methods ***/
static __WIDL_INLINE HRESULT ISensorEvents_OnStateChanged(ISensorEvents* This,ISensor *pSensor,SensorState state) {
    return This->lpVtbl->OnStateChanged(This,pSensor,state);
}
static __WIDL_INLINE HRESULT ISensorEvents_OnDataUpdated(ISensorEvents* This,ISensor *pSensor,ISensorDataReport *pNewData) {
    return This->lpVtbl->OnDataUpdated(This,pSensor,pNewData);
}
static __WIDL_INLINE HRESULT ISensorEvents_OnEvent(ISensorEvents* This,ISensor *pSensor,REFGUID eventID,IPortableDeviceValues *pEventData) {
    return This->lpVtbl->OnEvent(This,pSensor,eventID,pEventData);
}
static __WIDL_INLINE HRESULT ISensorEvents_OnLeave(ISensorEvents* This,REFSENSOR_ID ID) {
    return This->lpVtbl->OnLeave(This,ID);
}
#endif
#endif

#endif


#endif  /* __ISensorEvents_INTERFACE_DEFINED__ */

#ifndef __SensorsApiLib_LIBRARY_DEFINED__
#define __SensorsApiLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_SensorsApiLib, 0x15092592, 0x5270, 0x4c6c, 0xaa,0xa0, 0x11,0x76,0x4f,0x18,0x9a,0x8f);

/*****************************************************************************
 * SensorManager coclass
 */

DEFINE_GUID(CLSID_SensorManager, 0x77a1c827, 0xfcd2, 0x4689, 0x89,0x15, 0x9d,0x61,0x3c,0xc5,0xfa,0x3e);

#ifdef __cplusplus
class DECLSPEC_UUID("77a1c827-fcd2-4689-8915-9d613cc5fa3e") SensorManager;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(SensorManager, 0x77a1c827, 0xfcd2, 0x4689, 0x89,0x15, 0x9d,0x61,0x3c,0xc5,0xfa,0x3e)
#endif
#endif

#endif /* __SensorsApiLib_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);
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

#endif /* __sensorsapi_h__ */
