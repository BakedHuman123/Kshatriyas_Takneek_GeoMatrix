#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<CesiumForUnity.CesiumGlobeAnchor>
struct HashSet_1_t4EBB7FFFC2C24145546AEE4DEF0DE46813887C67;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// CesiumForUnity.Cesium3DTileset[]
struct Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D;
// CesiumForUnity.CesiumSubScene[]
struct CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CesiumForUnity.Cesium3DTileset
struct Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA;
// CesiumForUnity.CesiumGeoreference
struct CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268;
// CesiumForUnity.CesiumPointCloudRenderer
struct CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725;
// CesiumForUnity.CesiumPointCloudShading
struct CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5;
// CesiumForUnity.CesiumRasterOverlay
struct CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6;
// CesiumForUnity.CesiumRuntimeSettings
struct CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17;
// CesiumForUnity.CesiumSubScene
struct CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F;
// CesiumForUnity.CesiumTileExcluder
struct CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC;
// CesiumForUnity.CesiumTileMapServiceRasterOverlay
struct CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2;
// CesiumForUnity.CesiumWebMapServiceRasterOverlay
struct CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerScript
struct DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GraphicsBuffer
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1;
// CesiumForUnity.Helpers
struct Helpers_tF67CB24E1B3D10F6E551B7D1DC5ED497AC3E1DD2;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// CesiumForUnity.NativeCoroutine
struct NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34;
// CesiumForUnity.NativeDownloadHandler
struct NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CesiumForUnity.Cesium3DTileset/ImplementationHandle
struct ImplementationHandle_t685BC708FB0C8850A500FC041F737C2710BD78FC;
// CesiumForUnity.Cesium3DTileset/TilesetLoadFailureDelegate
struct TilesetLoadFailureDelegate_t6E00F7291205D117E7E5713F818BCEB6A898C0F9;
// CesiumForUnity.CesiumGeoreference/ImplementationHandle
struct ImplementationHandle_t4087DC3CB078155FA3EFE95CB797A103DB3E326A;
// CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate
struct RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28;
// CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle
struct ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD;
// CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle
struct ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59;
// CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1;
// CesiumForUnity.NativeDownloadHandler/ImplementationHandle
struct ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01390D5FA7BD5E05E12237F14716794B351352D7;
IL2CPP_EXTERN_C String_t* _stringLiteral067EC96FF336E56142A07CCD1C749677694836B9;
IL2CPP_EXTERN_C String_t* _stringLiteral1E31481D40AF4ACD0D354BBD1308F13E1262753F;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3E71EC8AE17AE2AB299E95ED437827008B58928B;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0239E75D13C598B997E2FA826B09466A0986B6;
IL2CPP_EXTERN_C String_t* _stringLiteral3F815AC1139A867D66488ECCCF2D628CDB1E7E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral48E8AB7247D551A29855167A89CC4504D9A5C00B;
IL2CPP_EXTERN_C String_t* _stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC;
IL2CPP_EXTERN_C String_t* _stringLiteral5642CA1AC4A79EA83539EBB6D8B5E1410413E219;
IL2CPP_EXTERN_C String_t* _stringLiteral70D5BABE062BD90E268D9C36985B6DCA20D8864E;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral862F749F7B5B6DBD89A8EA5A639585899358F536;
IL2CPP_EXTERN_C String_t* _stringLiteral9BBD24E733C36645A109849FBABDB6E97DE09B2E;
IL2CPP_EXTERN_C String_t* _stringLiteralB794A42CE131829234E7D16B251BE583536753F4;
IL2CPP_EXTERN_C String_t* _stringLiteralC79B55BA9D1BB3A4C8B3D02368731860F5FB2B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C235F372D3DDB5616D121093D08A3974CC6292;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5E889332F80C2B75ACD023412FAD63C4021723;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991;
IL2CPP_EXTERN_C String_t* _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF4011F90533DCBEE88324E4E10DAC70BB6B154FA;
IL2CPP_EXTERN_C String_t* _stringLiteralFB78B034DD7A4EF538AD927CF39C86AF2332F248;
IL2CPP_EXTERN_C const RuntimeMethod* CesiumSubScene_OnEnable_m669537F1251662E20310D7C5104902C6A13E576E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CesiumTileMapServiceRasterOverlay_AddToTileset_m599BEED2D3FA0E07382C7701588F69BE3AF73378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CesiumTileMapServiceRasterOverlay_RemoveFromTileset_m972E3917D80448731E8A78F0B7957EA8FF492296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CesiumWebMapServiceRasterOverlay_AddToTileset_m8536A1B6442E5F55E21D907844A475C36664B2CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CesiumWebMapServiceRasterOverlay_RemoveFromTileset_m4363EE36DD61D1399C010730170646DDDCCDF097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F_m1ECCE5CC167145ECB331135801D9CD0061073EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_m292804BD6C8461D37E9A010C9B0378835226E0C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeDownloadHandler_ReceiveDataNative_mE2D779C1623184305ABC205471ADFE68142C8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisCesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_m45102545DAF631FC6EC5A799D653DEE28FDDE49A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mE8E016962F281593E81FBD2CD898B99EC0D7E49F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D;
struct CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CesiumForUnity.CesiumPointCloudShading
struct CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5  : public RuntimeObject
{
	// System.Boolean CesiumForUnity.CesiumPointCloudShading::_attenuation
	bool ____attenuation_0;
	// System.Single CesiumForUnity.CesiumPointCloudShading::_geometricErrorScale
	float ____geometricErrorScale_1;
	// System.Single CesiumForUnity.CesiumPointCloudShading::_maximumAttenuation
	float ____maximumAttenuation_2;
	// System.Single CesiumForUnity.CesiumPointCloudShading::_baseResolution
	float ____baseResolution_3;
};

// CesiumForUnity.CesiumWgs84Ellipsoid
struct CesiumWgs84Ellipsoid_t076C1F2DCBA3A70489523831F9696B0465E7FABC  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// CesiumForUnity.Helpers
struct Helpers_tF67CB24E1B3D10F6E551B7D1DC5ED497AC3E1DD2  : public RuntimeObject
{
};

// CesiumForUnity.NativeCoroutine
struct NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34  : public RuntimeObject
{
	// System.Func`2<System.Object,System.Object> CesiumForUnity.NativeCoroutine::_callback
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ____callback_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// CesiumForUnity.UnityLifetime
struct UnityLifetime_tA6BD8D9A89A5E6F0A1CB4F2530D94249A8651CBA  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1  : public RuntimeObject
{
	// System.Int32 CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CesiumForUnity.NativeCoroutine CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::<>4__this
	NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34* ___U3CU3E4__this_2;
	// System.Object CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::<sentinel>5__1
	RuntimeObject* ___U3CsentinelU3E5__1_3;
	// System.Object CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::<next>5__2
	RuntimeObject* ___U3CnextU3E5__2_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
struct CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 
{
	// CesiumForUnity.CesiumRasterOverlay CesiumForUnity.CesiumRasterOverlayLoadFailureDetails::overlay
	CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* ___overlay_0;
	// CesiumForUnity.CesiumRasterOverlayLoadType CesiumForUnity.CesiumRasterOverlayLoadFailureDetails::type
	int32_t ___type_1;
	// System.Int64 CesiumForUnity.CesiumRasterOverlayLoadFailureDetails::httpStatusCode
	int64_t ___httpStatusCode_2;
	// System.String CesiumForUnity.CesiumRasterOverlayLoadFailureDetails::message
	String_t* ___message_3;
};
// Native definition for P/Invoke marshalling of CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
struct CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_pinvoke
{
	CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* ___overlay_0;
	int32_t ___type_1;
	int64_t ___httpStatusCode_2;
	char* ___message_3;
};
// Native definition for COM marshalling of CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
struct CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_com
{
	CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* ___overlay_0;
	int32_t ___type_1;
	int64_t ___httpStatusCode_2;
	Il2CppChar* ___message_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Mathematics.double3
struct double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 
{
	// System.Double Unity.Mathematics.double3::x
	double ___x_0;
	// System.Double Unity.Mathematics.double3::y
	double ___y_1;
	// System.Double Unity.Mathematics.double3::z
	double ___z_2;
};

// Unity.Mathematics.double4
struct double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 
{
	// System.Double Unity.Mathematics.double4::x
	double ___x_0;
	// System.Double Unity.Mathematics.double4::y
	double ___y_1;
	// System.Double Unity.Mathematics.double4::z
	double ___z_2;
	// System.Double Unity.Mathematics.double4::w
	double ___w_3;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

// System.Nullable`1<Unity.Mathematics.double3>
struct Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// CesiumForUnity.Cesium3DTileInfo
struct Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB 
{
	// System.Boolean CesiumForUnity.Cesium3DTileInfo::usesAdditiveRefinement
	bool ___usesAdditiveRefinement_0;
	// System.Single CesiumForUnity.Cesium3DTileInfo::geometricError
	float ___geometricError_1;
	// UnityEngine.Vector3 CesiumForUnity.Cesium3DTileInfo::dimensions
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dimensions_2;
	// System.Boolean CesiumForUnity.Cesium3DTileInfo::isTranslucent
	bool ___isTranslucent_3;
};
// Native definition for P/Invoke marshalling of CesiumForUnity.Cesium3DTileInfo
struct Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_pinvoke
{
	int32_t ___usesAdditiveRefinement_0;
	float ___geometricError_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dimensions_2;
	int32_t ___isTranslucent_3;
};
// Native definition for COM marshalling of CesiumForUnity.Cesium3DTileInfo
struct Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_com
{
	int32_t ___usesAdditiveRefinement_0;
	float ___geometricError_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dimensions_2;
	int32_t ___isTranslucent_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.GraphicsBuffer
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GraphicsBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Unity.Mathematics.double3x3
struct double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 
{
	// Unity.Mathematics.double3 Unity.Mathematics.double3x3::c0
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___c0_0;
	// Unity.Mathematics.double3 Unity.Mathematics.double3x3::c1
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___c1_1;
	// Unity.Mathematics.double3 Unity.Mathematics.double3x3::c2
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___c2_2;
};

// Unity.Mathematics.double4x4
struct double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C 
{
	// Unity.Mathematics.double4 Unity.Mathematics.double4x4::c0
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___c0_0;
	// Unity.Mathematics.double4 Unity.Mathematics.double4x4::c1
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___c1_1;
	// Unity.Mathematics.double4 Unity.Mathematics.double4x4::c2
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___c2_2;
	// Unity.Mathematics.double4 Unity.Mathematics.double4x4::c3
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___c3_3;
};

// Unity.Mathematics.float3x3
struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c0
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c0_0;
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c1
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c1_1;
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c2
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c2_2;
};

// Unity.Mathematics.quaternion
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	// Unity.Mathematics.float4 Unity.Mathematics.quaternion::value
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerScript
struct DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerScript
struct DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerScript
struct DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CesiumForUnity.CesiumRuntimeSettings
struct CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CesiumForUnity.CesiumRuntimeSettings::_defaultIonAccessTokenID
	String_t* ____defaultIonAccessTokenID_7;
	// System.String CesiumForUnity.CesiumRuntimeSettings::_defaultIonAccessToken
	String_t* ____defaultIonAccessToken_8;
	// System.Int32 CesiumForUnity.CesiumRuntimeSettings::_requestsPerCachePrune
	int32_t ____requestsPerCachePrune_9;
	// System.UInt64 CesiumForUnity.CesiumRuntimeSettings::_maxItems
	uint64_t ____maxItems_10;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CesiumForUnity.NativeDownloadHandler
struct NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091  : public DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B
{
	// CesiumForUnity.NativeDownloadHandler/ImplementationHandle CesiumForUnity.NativeDownloadHandler::_implementation
	ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* ____implementation_1;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate
struct RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28  : public MulticastDelegate_t
{
};

// CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle
struct ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle
struct ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// CesiumForUnity.NativeDownloadHandler/ImplementationHandle
struct ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CesiumForUnity.Cesium3DTileset
struct Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CesiumForUnity.Cesium3DTileset::_showCreditsOnScreen
	bool ____showCreditsOnScreen_6;
	// CesiumForUnity.CesiumDataSource CesiumForUnity.Cesium3DTileset::_tilesetSource
	int32_t ____tilesetSource_7;
	// System.String CesiumForUnity.Cesium3DTileset::_url
	String_t* ____url_8;
	// System.Int64 CesiumForUnity.Cesium3DTileset::_ionAssetID
	int64_t ____ionAssetID_9;
	// System.String CesiumForUnity.Cesium3DTileset::_ionAccessToken
	String_t* ____ionAccessToken_10;
	// System.Single CesiumForUnity.Cesium3DTileset::_maximumScreenSpaceError
	float ____maximumScreenSpaceError_11;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_preloadAncestors
	bool ____preloadAncestors_12;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_preloadSiblings
	bool ____preloadSiblings_13;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_forbidHoles
	bool ____forbidHoles_14;
	// System.UInt32 CesiumForUnity.Cesium3DTileset::_maximumSimultaneousTileLoads
	uint32_t ____maximumSimultaneousTileLoads_15;
	// System.Int64 CesiumForUnity.Cesium3DTileset::_maximumCachedBytes
	int64_t ____maximumCachedBytes_16;
	// System.UInt32 CesiumForUnity.Cesium3DTileset::_loadingDescendantLimit
	uint32_t ____loadingDescendantLimit_17;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_enableFrustumCulling
	bool ____enableFrustumCulling_18;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_enableFogCulling
	bool ____enableFogCulling_19;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_enforceCulledScreenSpaceError
	bool ____enforceCulledScreenSpaceError_20;
	// System.Single CesiumForUnity.Cesium3DTileset::_culledScreenSpaceError
	float ____culledScreenSpaceError_21;
	// UnityEngine.Material CesiumForUnity.Cesium3DTileset::_opaqueMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____opaqueMaterial_22;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_generateSmoothNormals
	bool ____generateSmoothNormals_23;
	// CesiumForUnity.CesiumPointCloudShading CesiumForUnity.Cesium3DTileset::_pointCloudShading
	CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* ____pointCloudShading_24;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_suspendUpdate
	bool ____suspendUpdate_25;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_previousSuspendUpdate
	bool ____previousSuspendUpdate_26;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_showTilesInHierarchy
	bool ____showTilesInHierarchy_27;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_updateInEditor
	bool ____updateInEditor_28;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_logSelectionStats
	bool ____logSelectionStats_29;
	// System.Boolean CesiumForUnity.Cesium3DTileset::_createPhysicsMeshes
	bool ____createPhysicsMeshes_30;
	// CesiumForUnity.Cesium3DTileset/ImplementationHandle CesiumForUnity.Cesium3DTileset::_implementation
	ImplementationHandle_t685BC708FB0C8850A500FC041F737C2710BD78FC* ____implementation_31;
};

// CesiumForUnity.CesiumGeoreference
struct CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CesiumForUnity.CesiumGeoreferenceOriginAuthority CesiumForUnity.CesiumGeoreference::_originAuthority
	int32_t ____originAuthority_4;
	// System.Double CesiumForUnity.CesiumGeoreference::_latitude
	double ____latitude_5;
	// System.Double CesiumForUnity.CesiumGeoreference::_longitude
	double ____longitude_6;
	// System.Double CesiumForUnity.CesiumGeoreference::_height
	double ____height_7;
	// System.Double CesiumForUnity.CesiumGeoreference::_ecefX
	double ____ecefX_8;
	// System.Double CesiumForUnity.CesiumGeoreference::_ecefY
	double ____ecefY_9;
	// System.Double CesiumForUnity.CesiumGeoreference::_ecefZ
	double ____ecefZ_10;
	// System.Double CesiumForUnity.CesiumGeoreference::_scale
	double ____scale_11;
	// Unity.Mathematics.double4x4 CesiumForUnity.CesiumGeoreference::_localToEcef
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ____localToEcef_12;
	// Unity.Mathematics.double4x4 CesiumForUnity.CesiumGeoreference::_ecefToLocal
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ____ecefToLocal_13;
	// System.Boolean CesiumForUnity.CesiumGeoreference::_isInitialized
	bool ____isInitialized_14;
	// System.Collections.Generic.HashSet`1<CesiumForUnity.CesiumGlobeAnchor> CesiumForUnity.CesiumGeoreference::_globeAnchors
	HashSet_1_t4EBB7FFFC2C24145546AEE4DEF0DE46813887C67* ____globeAnchors_15;
	// System.Action CesiumForUnity.CesiumGeoreference::changed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed_16;
	// CesiumForUnity.CesiumGeoreference/ImplementationHandle CesiumForUnity.CesiumGeoreference::_implementation
	ImplementationHandle_t4087DC3CB078155FA3EFE95CB797A103DB3E326A* ____implementation_17;
};

// CesiumForUnity.CesiumPointCloudRenderer
struct CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CesiumForUnity.Cesium3DTileset CesiumForUnity.CesiumPointCloudRenderer::_tileset
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ____tileset_4;
	// UnityEngine.Mesh CesiumForUnity.CesiumPointCloudRenderer::_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____mesh_5;
	// UnityEngine.MeshFilter CesiumForUnity.CesiumPointCloudRenderer::_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____meshFilter_6;
	// UnityEngine.MeshRenderer CesiumForUnity.CesiumPointCloudRenderer::_meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____meshRenderer_7;
	// UnityEngine.GraphicsBuffer CesiumForUnity.CesiumPointCloudRenderer::_meshVertexBuffer
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ____meshVertexBuffer_8;
	// System.Int32 CesiumForUnity.CesiumPointCloudRenderer::_pointCount
	int32_t ____pointCount_9;
	// UnityEngine.Material CesiumForUnity.CesiumPointCloudRenderer::_pointMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____pointMaterial_10;
	// UnityEngine.Bounds CesiumForUnity.CesiumPointCloudRenderer::_bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ____bounds_11;
	// UnityEngine.Vector4 CesiumForUnity.CesiumPointCloudRenderer::_attenuationParameters
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____attenuationParameters_12;
	// UnityEngine.Vector4 CesiumForUnity.CesiumPointCloudRenderer::_constantColor
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____constantColor_13;
	// CesiumForUnity.Cesium3DTileInfo CesiumForUnity.CesiumPointCloudRenderer::_tileInfo
	Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB ____tileInfo_14;
	// UnityEngine.Vector3[] CesiumForUnity.CesiumPointCloudRenderer::positionsScratch
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positionsScratch_15;
};

// CesiumForUnity.CesiumRasterOverlay
struct CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CesiumForUnity.CesiumRasterOverlay::_showCreditsOnScreen
	bool ____showCreditsOnScreen_5;
	// System.Single CesiumForUnity.CesiumRasterOverlay::_maximumScreenSpaceError
	float ____maximumScreenSpaceError_6;
	// System.Int32 CesiumForUnity.CesiumRasterOverlay::_maximumTextureSize
	int32_t ____maximumTextureSize_7;
	// System.Int32 CesiumForUnity.CesiumRasterOverlay::_maximumSimultaneousTileLoads
	int32_t ____maximumSimultaneousTileLoads_8;
	// System.Int64 CesiumForUnity.CesiumRasterOverlay::_subTileCacheBytes
	int64_t ____subTileCacheBytes_9;
};

// CesiumForUnity.CesiumSubScene
struct CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Double CesiumForUnity.CesiumSubScene::_activationRadius
	double ____activationRadius_4;
	// System.Boolean CesiumForUnity.CesiumSubScene::_showActivationRadius
	bool ____showActivationRadius_5;
	// CesiumForUnity.CesiumGeoreferenceOriginAuthority CesiumForUnity.CesiumSubScene::_originAuthority
	int32_t ____originAuthority_6;
	// System.Double CesiumForUnity.CesiumSubScene::_latitude
	double ____latitude_7;
	// System.Double CesiumForUnity.CesiumSubScene::_longitude
	double ____longitude_8;
	// System.Double CesiumForUnity.CesiumSubScene::_height
	double ____height_9;
	// System.Double CesiumForUnity.CesiumSubScene::_ecefX
	double ____ecefX_10;
	// System.Double CesiumForUnity.CesiumSubScene::_ecefY
	double ____ecefY_11;
	// System.Double CesiumForUnity.CesiumSubScene::_ecefZ
	double ____ecefZ_12;
};

// CesiumForUnity.CesiumTileExcluder
struct CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CesiumForUnity.CesiumTileMapServiceRasterOverlay
struct CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2  : public CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6
{
	// System.String CesiumForUnity.CesiumTileMapServiceRasterOverlay::_url
	String_t* ____url_10;
	// System.Boolean CesiumForUnity.CesiumTileMapServiceRasterOverlay::_specifyZoomLevels
	bool ____specifyZoomLevels_11;
	// System.Int32 CesiumForUnity.CesiumTileMapServiceRasterOverlay::_minimumLevel
	int32_t ____minimumLevel_12;
	// System.Int32 CesiumForUnity.CesiumTileMapServiceRasterOverlay::_maximumLevel
	int32_t ____maximumLevel_13;
	// CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle CesiumForUnity.CesiumTileMapServiceRasterOverlay::_implementation
	ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* ____implementation_14;
};

// CesiumForUnity.CesiumWebMapServiceRasterOverlay
struct CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C  : public CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6
{
	// System.String CesiumForUnity.CesiumWebMapServiceRasterOverlay::_baseUrl
	String_t* ____baseUrl_10;
	// System.String CesiumForUnity.CesiumWebMapServiceRasterOverlay::_layers
	String_t* ____layers_11;
	// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::_tileWidth
	int32_t ____tileWidth_12;
	// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::_tileHeight
	int32_t ____tileHeight_13;
	// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::_minimumLevel
	int32_t ____minimumLevel_14;
	// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::_maximumLevel
	int32_t ____maximumLevel_15;
	// CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle CesiumForUnity.CesiumWebMapServiceRasterOverlay::_implementation
	ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* ____implementation_16;
};

// CesiumForUnity.CesiumPointCloudShading

// CesiumForUnity.CesiumPointCloudShading

// CesiumForUnity.CesiumWgs84Ellipsoid

// CesiumForUnity.CesiumWgs84Ellipsoid

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// CesiumForUnity.Helpers

// CesiumForUnity.Helpers

// CesiumForUnity.NativeCoroutine

// CesiumForUnity.NativeCoroutine

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// CesiumForUnity.UnityLifetime

// CesiumForUnity.UnityLifetime

// System.ValueType

// System.ValueType

// CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2

// CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// CesiumForUnity.CesiumRasterOverlayLoadFailureDetails

// CesiumForUnity.CesiumRasterOverlayLoadFailureDetails

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt64

// System.UInt64

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// Unity.Mathematics.double3
struct double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4_StaticFields
{
	// Unity.Mathematics.double3 Unity.Mathematics.double3::zero
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___zero_3;
};

// Unity.Mathematics.double3

// Unity.Mathematics.double4
struct double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5_StaticFields
{
	// Unity.Mathematics.double4 Unity.Mathematics.double4::zero
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___zero_4;
};

// Unity.Mathematics.double4

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float3

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// Unity.Mathematics.float4

// System.Nullable`1<Unity.Mathematics.double3>

// System.Nullable`1<Unity.Mathematics.double3>

// UnityEngine.Bounds

// UnityEngine.Bounds

// CesiumForUnity.Cesium3DTileInfo

// CesiumForUnity.Cesium3DTileInfo

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.GraphicsBuffer

// UnityEngine.GraphicsBuffer

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Runtime.InteropServices.SafeHandle

// System.Runtime.InteropServices.SafeHandle

// Unity.Mathematics.double3x3
struct double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0_StaticFields
{
	// Unity.Mathematics.double3x3 Unity.Mathematics.double3x3::identity
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___identity_3;
	// Unity.Mathematics.double3x3 Unity.Mathematics.double3x3::zero
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___zero_4;
};

// Unity.Mathematics.double3x3

// Unity.Mathematics.double4x4
struct double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_StaticFields
{
	// Unity.Mathematics.double4x4 Unity.Mathematics.double4x4::identity
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___identity_4;
	// Unity.Mathematics.double4x4 Unity.Mathematics.double4x4::zero
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___zero_5;
};

// Unity.Mathematics.double4x4

// Unity.Mathematics.float3x3
struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79_StaticFields
{
	// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::identity
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___identity_3;
	// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::zero
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___zero_4;
};

// Unity.Mathematics.float3x3

// Unity.Mathematics.quaternion
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::identity
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity_1;
};

// Unity.Mathematics.quaternion

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Networking.DownloadHandlerScript

// UnityEngine.Networking.DownloadHandlerScript

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// CesiumForUnity.CesiumRuntimeSettings
struct CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields
{
	// System.String CesiumForUnity.CesiumRuntimeSettings::_settingsName
	String_t* ____settingsName_4;
	// System.String CesiumForUnity.CesiumRuntimeSettings::_filePath
	String_t* ____filePath_5;
	// CesiumForUnity.CesiumRuntimeSettings CesiumForUnity.CesiumRuntimeSettings::_instance
	CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* ____instance_6;
};

// CesiumForUnity.CesiumRuntimeSettings

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// CesiumForUnity.NativeDownloadHandler

// CesiumForUnity.NativeDownloadHandler

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate

// CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate

// CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle

// CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle

// CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle

// CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle

// CesiumForUnity.NativeDownloadHandler/ImplementationHandle

// CesiumForUnity.NativeDownloadHandler/ImplementationHandle

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// CesiumForUnity.Cesium3DTileset
struct Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_StaticFields
{
	// CesiumForUnity.Cesium3DTileset/TilesetLoadFailureDelegate CesiumForUnity.Cesium3DTileset::OnCesium3DTilesetLoadFailure
	TilesetLoadFailureDelegate_t6E00F7291205D117E7E5713F818BCEB6A898C0F9* ___OnCesium3DTilesetLoadFailure_4;
	// System.Action CesiumForUnity.Cesium3DTileset::OnSetShowCreditsOnScreen
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSetShowCreditsOnScreen_5;
};

// CesiumForUnity.Cesium3DTileset

// CesiumForUnity.CesiumGeoreference

// CesiumForUnity.CesiumGeoreference

// CesiumForUnity.CesiumPointCloudRenderer

// CesiumForUnity.CesiumPointCloudRenderer

// CesiumForUnity.CesiumRasterOverlay
struct CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields
{
	// CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate CesiumForUnity.CesiumRasterOverlay::OnCesiumRasterOverlayLoadFailure
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* ___OnCesiumRasterOverlayLoadFailure_4;
};

// CesiumForUnity.CesiumRasterOverlay

// CesiumForUnity.CesiumSubScene

// CesiumForUnity.CesiumSubScene

// CesiumForUnity.CesiumTileExcluder

// CesiumForUnity.CesiumTileExcluder

// CesiumForUnity.CesiumTileMapServiceRasterOverlay

// CesiumForUnity.CesiumTileMapServiceRasterOverlay

// CesiumForUnity.CesiumWebMapServiceRasterOverlay

// CesiumForUnity.CesiumWebMapServiceRasterOverlay
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CesiumForUnity.CesiumSubScene[]
struct CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F  : public RuntimeArray
{
	ALIGN_FIELD (8) CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* m_Items[1];

	inline CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CesiumForUnity.Cesium3DTileset[]
struct Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D  : public RuntimeArray
{
	ALIGN_FIELD (8) Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* m_Items[1];

	inline Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.Mathematics.double3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E_gshared (Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_value, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<CesiumForUnity.Cesium3DTileset>()
inline Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* GameObject_GetComponentInParent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_m292804BD6C8461D37E9A010C9B0378835226E0C9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.Material>(T)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_original, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.GraphicsBuffer UnityEngine.Mesh::GetVertexBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* Mesh_GetVertexBuffer_mD87ECA25FE364DC33B99A2F084463B75A03D5AA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GraphicsBuffer::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsBuffer_get_count_mFB2375DCEEFB459134AB0056F0ED77191E9EFB4F (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GraphicsBuffer::get_stride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsBuffer_get_stride_mC2A315A56C5C7EA6B3BB349D25C85C97D5B9B534 (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GraphicsBuffer::.ctor(UnityEngine.GraphicsBuffer/Target,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsBuffer__ctor_mBDE2A119B58AD582F79CFE8071F47001965D14F4 (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* __this, int32_t ___0_target, int32_t ___1_count, int32_t ___2_stride, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyBuffer(UnityEngine.GraphicsBuffer,UnityEngine.GraphicsBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyBuffer_m565B7247FE17593BD3BCEC61B79E2761D7C74268 (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_source, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_dest, const RuntimeMethod* method) ;
// System.Void UnityEngine.GraphicsBuffer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsBuffer_Release_m383E932BE0F3C20D90D715D751C9888472121F75 (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* __this, const RuntimeMethod* method) ;
// UnityEngine.GraphicsBuffer/Target UnityEngine.Mesh::get_vertexBufferTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexBufferTarget_m75A31F5EA1210B0196A84E52A1AF4DF82A6F1EBC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertexBufferTarget(UnityEngine.GraphicsBuffer/Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertexBufferTarget_mEC2C2DF9E73C882DCC365201DB521019B3629FD9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_attr, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_keyword, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasColor_m4AD3F871A49E3699DBEF077A4301FAED7D0B5DA9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasVector_mCE85AE4869A73211AD4A4E6D3DD98E4DCE0558D8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.XRSettings/StereoRenderingMode UnityEngine.XR.XRSettings::get_stereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC (const RuntimeMethod* method) ;
// System.Single CesiumForUnity.CesiumPointCloudShading::get_baseResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_baseResolution_mFD5D3C436B9F91B755BDD00642DEFAE96D357179_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) ;
// System.Single CesiumForUnity.Cesium3DTileset::get_maximumScreenSpaceError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Cesium3DTileset_get_maximumScreenSpaceError_mB22DE8413F7ECBDB115000F86812A28C7DB114CC_inline (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, const RuntimeMethod* method) ;
// CesiumForUnity.CesiumPointCloudShading CesiumForUnity.Cesium3DTileset::get_pointCloudShading()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* Cesium3DTileset_get_pointCloudShading_mC8CB3275DDCAA3A3A8F19844E4E6BF4CB1202BC1_inline (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, const RuntimeMethod* method) ;
// System.Single CesiumForUnity.CesiumPointCloudShading::get_maximumAttenuation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_maximumAttenuation_m31ADCE81E474DC690FA833A627EA1ED5E6C5B842_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// System.Single CesiumForUnity.CesiumPointCloudRenderer::GetGeometricError(CesiumForUnity.CesiumPointCloudShading)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CesiumPointCloudRenderer_GetGeometricError_m87EAC32C6018B9FD68039515353A565A6A1BA751 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* ___0_pointCloudShading, const RuntimeMethod* method) ;
// System.Single CesiumForUnity.CesiumPointCloudShading::get_geometricErrorScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_geometricErrorScale_m2182592AF3E9909EA5327FC630AFFE6597788C2C_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_scaledPixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.GeometryUtility::CalculateBounds(UnityEngine.Vector3[],UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GeometryUtility_CalculateBounds_mE1696B5F19DD26A9F11F244021EE07BBD0E1B663 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_positions, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_transform, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.GraphicsBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetBuffer_mD72D1E5A19677F70141835374BDEF6BB75796CDF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_tag, String_t* ___1_val, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumPointCloudRenderer::UpdateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_UpdateBounds_mDFCC1EC545203EE69571092701C0B14D5A3A6800 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumPointCloudRenderer::UpdateAttenuationParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_UpdateAttenuationParameters_m33EBF887E85E4175A6C35A56810F145A16FFD0F8 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumPointCloudRenderer::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_UpdateMaterial_m54D83EACC89FAD90ADD19A134C4FD942A61B7EE4 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawProcedural(UnityEngine.Material,UnityEngine.Bounds,UnityEngine.MeshTopology,System.Int32,System.Int32,UnityEngine.Camera,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawProcedural_m24C41DA182DB29ED2D723829D30ED38EA851995D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_bounds, int32_t ___2_topology, int32_t ___3_vertexCount, int32_t ___4_instanceCount, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___5_camera, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___6_properties, int32_t ___7_castShadows, bool ___8_receiveShadows, int32_t ___9_layer, const RuntimeMethod* method) ;
// System.Boolean CesiumForUnity.CesiumPointCloudShading::get_attenuation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CesiumPointCloudShading_get_attenuation_mF662032A72CCC8B9FF7DE1C4B29CAFD0A34A01A5_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumPointCloudRenderer::DrawPointsWithAttenuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_DrawPointsWithAttenuation_mD4133D289F3946FA21819D403B183D19C2E53C17 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumPointCloudRenderer::DestroyResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_DestroyResources_mDCE852CE779BAFCF3DE893560AEE39CCA3C39C5D (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate::Invoke(CesiumForUnity.CesiumRasterOverlayLoadFailureDetails)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_inline (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumRasterOverlay::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CesiumForUnity.Cesium3DTileset>()
inline Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumRasterOverlay::RemoveFromTileset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_RemoveFromTileset_m88548824BB26EA62CC1BBF4648EF8394003D5BD8 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumRasterOverlay::AddToTileset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_AddToTileset_mBD945B69FD8991E84A1F728AEF41F82390574526 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumRasterOverlayLoadFailureDetails::.ctor(CesiumForUnity.CesiumRasterOverlay,CesiumForUnity.CesiumRasterOverlayLoadType,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlayLoadFailureDetails__ctor_m7B549B223C0900D543C6B7E82A7FEC09A46FE0A3 (CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572* __this, CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* ___0_overlay, int32_t ___1_type, int64_t ___2_httpStatusCode, String_t* ___3_message, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<CesiumForUnity.CesiumRuntimeSettings>()
inline CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* ScriptableObject_CreateInstance_TisCesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_m45102545DAF631FC6EC5A799D653DEE28FDDE49A (const RuntimeMethod* method)
{
	return ((  CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// CesiumForUnity.CesiumRuntimeSettings CesiumForUnity.CesiumRuntimeSettings::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* CesiumRuntimeSettings_get_instance_mA63CA4CB38A995319E5C5049DCCCE26579E5062C (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumSubScene::UpdateOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumSubScene::set_originAuthority(CesiumForUnity.CesiumGeoreferenceOriginAuthority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<CesiumForUnity.CesiumGeoreference>()
inline CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void CesiumForUnity.CesiumGeoreference::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumGeoreference_Initialize_mCE868F703AAED6203BFC9A81B7B66154EC1F2237 (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<CesiumForUnity.CesiumSubScene>()
inline CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* Component_GetComponentsInChildren_TisCesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F_m1ECCE5CC167145ECB331135801D9CD0061073EB9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double3::.ctor(System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, double ___0_x, double ___1_y, double ___2_z, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::LongitudeLatitudeHeightToEarthCenteredEarthFixed(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed_m6998B8AC075149178533D1C516FA95F8AA04EEA7 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_longitudeLatitudeHeight, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::EarthCenteredEarthFixedToLongitudeLatitudeHeight(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mBD814A88230A66A8651170CD363EE449BB144C12 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_earthCenteredEarthFixed, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// CesiumForUnity.CesiumGeoreferenceOriginAuthority CesiumForUnity.CesiumSubScene::get_originAuthority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CesiumSubScene_get_originAuthority_mEF66B444989512F7573B2AAB231B0EEE2CB9E40F_inline (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumGeoreference::SetOriginEarthCenteredEarthFixed(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumGeoreference_SetOriginEarthCenteredEarthFixed_m1F2192BF30202E41193DEC2B566A0870650F08A3 (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, double ___0_x, double ___1_y, double ___2_z, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumGeoreference::SetOriginLongitudeLatitudeHeight(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumGeoreference_SetOriginLongitudeLatitudeHeight_mC4BF385DEE24B22CE38F079525B1A786E0961154 (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, double ___0_longitude, double ___1_latitude, double ___2_height, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<CesiumForUnity.Cesium3DTileset>()
inline Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void CesiumForUnity.CesiumTileExcluder::AddToTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_AddToTileset_m0BCB0C9B2FE2FE4B3B869EB8E99E78583830EF23 (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileExcluder::RemoveFromTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_RemoveFromTileset_mB8C2B223F4C6ED391F77219E76C4AC575F9F4717 (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) ;
// System.Void Reinterop.ReinteropInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReinteropInitializer_Initialize_mC21B2A7426F23F6D19F90EB4462149EEC23CCF79 (const RuntimeMethod* method) ;
// System.IntPtr Reinterop.ObjectHandleUtility::CreateHandle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileExcluder::DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset_mA26CFD34ED2F16147825AA156F341D6DA641E5C6 (intptr_t ___0_thiz, intptr_t ___1_tileset, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileExcluder::DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset_m8734DF270B953FCD638EFA43FFE6014211D700B8 (intptr_t ___0_thiz, intptr_t ___1_tileset, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset(System.IntPtr,CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset_m6F396522416A1E7E4198D43A029CBAD32E4DC7A9 (intptr_t ___0_thiz, ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset(System.IntPtr,CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset_mD49D86C525AAF5EF0B2486D10BD7E62057AF5AC5 (intptr_t ___0_thiz, ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle::.ctor(CesiumForUnity.CesiumTileMapServiceRasterOverlay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationHandle__ctor_m639BE448B6FF7F0ACD915173645BA90A04CB3FA0 (ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* __this, CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* ___0_managed, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DisposeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DisposeImplementation_mB4CF7C6F2CA318C79588547F710F681BAB34AFE3 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumRasterOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay__ctor_mBF08B99B21CEFD240A84AE711451E8270BCE8FA1 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::CreateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_CreateImplementation_mCC557FC1C6F43D141D3F03608BA759481F40C973 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___0_success, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89 (SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629* __this, bool ___0_ownsHandle, const RuntimeMethod* method) ;
// System.IntPtr CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation_mA476AD27477286AD369C62D0E1FC2E48F5D0EEBF (intptr_t ___0_thiz, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation_m786E9D4A980EA7A9695BC389D40EFBB2FAD4FD44 (intptr_t ___0_implementation, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset(System.IntPtr,CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset_mB480679FDE7D92759AA9E376B391BF7B156919E6 (intptr_t ___0_thiz, ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset(System.IntPtr,CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset_m1A2D9F6776AD725516EDD7943C0393311D83C5E5 (intptr_t ___0_thiz, ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle::.ctor(CesiumForUnity.CesiumWebMapServiceRasterOverlay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationHandle__ctor_m0DA922A43F88A0C9384EB9E2C0C697FDE330A999 (ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* __this, CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* ___0_managed, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DisposeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DisposeImplementation_m72AA46F7579DEB9E4D164CDE6EDCC54A0D75DC4A (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::CreateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_CreateImplementation_m4C0860193FA4213D82AEB4121662E7253C2B2CB2 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) ;
// System.IntPtr CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation_m8C54A643D5AA0555D0E3037E3A975C1C9C5DDD54 (intptr_t ___0_thiz, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation_mB748C8C3EB397CE220E9FBBE9A2B4896772D7829 (intptr_t ___0_implementation, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii(Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii_m678096AAA73014B9DCF2EABF67B38ADE1CC4D61A (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_pReturnValue, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::GetRadii()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_GetRadii_m10F8E0E42E21410101AB3F22EDFD1426645C43DD (const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::cmax(Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_cmax_mD1CA685960C6D3E73AE61E158449D1F136B2D8D9_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::cmin(Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_cmin_mD62CF2BF7B13402E46E966F3BED814004E5D8C65_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, const RuntimeMethod* method) ;
// System.Byte CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface_m593719466F71E4789AB1B165A587ACBD5B0809A1 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_earthCenteredEarthFixed, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.Mathematics.double3>::.ctor(T)
inline void Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E (Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4, const RuntimeMethod*))Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E_gshared)(__this, ___0_value, method);
}
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal_m8438EEC0C21734C52F3E4ECC866D40833412C4E7 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_earthCenteredEarthFixed, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed_mF5B0648E1CC82054D9ADDC8043EE9EF8DA9D8377 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_longitudeLatitudeHeight, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mF73D8C75E992EE3265AA399BB86B63427CC7FD81 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_earthCenteredEarthFixed, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.NativeDownloadHandler/ImplementationHandle::.ctor(CesiumForUnity.NativeDownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationHandle__ctor_m07B970AC703BB29D300B6C1873ED2BC975E76143 (ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* __this, NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* ___0_managed, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.NativeDownloadHandler::DisposeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_DisposeImplementation_m618A868DEE8729DBA9D368FBE03466DE4A803EAA (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerScript::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerScript__ctor_m67B5897E7D6354051F54E8EB70ACA62BA0EF264A (DownloadHandlerScript_t42FD7363F738391BB1EA2552FF18F9FA7C0EE38B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_preallocatedBuffer, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.NativeDownloadHandler::CreateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_CreateImplementation_mC4E7F430EFD43A3C5F06DF67865DEF647C7A64CC (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Boolean CesiumForUnity.NativeDownloadHandler::ReceiveDataNative(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeDownloadHandler_ReceiveDataNative_mE2D779C1623184305ABC205471ADFE68142C8FBF (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, intptr_t ___0_data, int32_t ___1_dataLength, const RuntimeMethod* method) ;
// System.Byte CesiumForUnity.NativeDownloadHandler::DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative(System.IntPtr,CesiumForUnity.NativeDownloadHandler/ImplementationHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative_mAB4ECF15CEBCBF80B4DF152C80C1E31C398B7B5B (intptr_t ___0_thiz, ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* ___1_implementation, intptr_t ___2_data, int32_t ___3_dataLength, const RuntimeMethod* method) ;
// System.IntPtr CesiumForUnity.NativeDownloadHandler::DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation_mAF076FB4B78BE6C80021D63D06E57F3F133E4FBE (intptr_t ___0_thiz, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.NativeDownloadHandler::DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation_m4E09345C0F5E07FBCE8E06E532695440C45BD9B5 (intptr_t ___0_implementation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double4x4::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* __this, double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m03, double ___4_m10, double ___5_m11, double ___6_m12, double ___7_m13, double ___8_m20, double ___9_m21, double ___10_m22, double ___11_m23, double ___12_m30, double ___13_m31, double ___14_m32, double ___15_m33, const RuntimeMethod* method) ;
// UnityEngine.Vector4 CesiumForUnity.Helpers::FromMathematics(Unity.Mathematics.double4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Helpers_FromMathematics_m480F9CECA74BED4970A73DA27BA2D8126C596BB8 (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_vector, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_column0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_column1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_column2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_column3, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double3x3::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3x3__ctor_mBEE4C5D1CCF08BD6C8E94DD819F144FBC690E888_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0* __this, double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m10, double ___4_m11, double ___5_m12, double ___6_m20, double ___7_m21, double ___8_m22, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3x3::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float ___0_m00, float ___1_m01, float ___2_m02, float ___3_m10, float ___4_m11, float ___5_m12, float ___6_m20, float ___7_m21, float ___8_m22, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::length(Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_length_m936CF76FF0C94E358B2193CFB59E41080B87E641_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::op_Division(Unity.Mathematics.double3,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Division_mBFCCDD798F735189AE8D843BD014FCF5F1EEAD93_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Explicit(Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Explicit_mC39F75EB64FD16249FAD573FD8B6ADB14F132D78_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_v, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3x3::.ctor(Unity.Mathematics.float3,Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_c0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_c1, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___2_c2, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.math::cross(Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 math_cross_mD4DDFE34A1DA411148681014E59AEDC0655C0973_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_y, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::dot(Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_dot_m710CE5F525FC4891265B265568DE10C0100B509B_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_y, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::op_Multiply(Unity.Mathematics.float3x3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 float3x3_op_Multiply_mF3B9F7F790D87EFB7EBC38F26ABDC9305816484A_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::op_Multiply(Unity.Mathematics.double3,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.math::quaternion(Unity.Mathematics.float3x3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_mE9DBDC1E38A93968B447FF4D365823A7889B0749_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_m, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double4::get_xyz()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double3x3::.ctor(Unity.Mathematics.double3,Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3x3__ctor_m0BF27C1E4D2C1C4965521A8B3A919CF9DB11B305_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_c0, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_c1, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___2_c2, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.Helpers::MatrixToRotationAndScale(Unity.Mathematics.double3x3,Unity.Mathematics.quaternion&,Unity.Mathematics.double3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_MatrixToRotationAndScale_mA7BA8F572035E772AB8B038C797831E630BDAC46 (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___0_matrix, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___1_rotation, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___2_scale, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Unity.Mathematics.quaternion::op_Implicit(Unity.Mathematics.quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 quaternion_op_Implicit_m78F07E28F5AB9C26F0EE997B2F12AF4A209FCD41 (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CesiumForUnity.Helpers::FromMathematics(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Helpers_FromMathematics_m8CB96E41C8AFC98D3FBDBD51283C7A77D4655409 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_vector, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.Helpers::MatrixToInaccurateRotationAndScale(Unity.Mathematics.double3x3,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_MatrixToInaccurateRotationAndScale_m47E8DEAED109886AABCC62F11B18860885F58EC6 (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___0_matrix, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_scale, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3x3::.ctor(Unity.Mathematics.quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void float3x3__ctor_mF94488DFF7867CFC89648E024FA89A19F23E2FAE (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, const RuntimeMethod* method) ;
// Unity.Mathematics.double3x3 Unity.Mathematics.double3x3::op_Implicit(Unity.Mathematics.float3x3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 double3x3_op_Implicit_mDE9DBCF7F737C1128250D072AF94867314B7FAA1_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.double3x3 Unity.Mathematics.math::mul(Unity.Mathematics.double3x3,Unity.Mathematics.double3x3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 math_mul_m8006A1F722590AD2791FB2B506A1A74A0816494F_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___0_a, double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___1_b, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double4::.ctor(Unity.Mathematics.double3,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4__ctor_mAAB30D5A18E63BBEB9AD9B98E95D510784E64B26_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_xyz, double ___1_w, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double4x4::.ctor(Unity.Mathematics.double4,Unity.Mathematics.double4,Unity.Mathematics.double4,Unity.Mathematics.double4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4x4__ctor_mC28DA9877244770A1E61E41A50DF95F405AFD34B_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* __this, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_c0, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_c1, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___2_c2, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___3_c3, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m33BA9725115B0FB505A76B96DF2E1D9827F32492 (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::max(System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_max_m8830F8721EFC73BCF991CD497115A103B86BF3BE_inline (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::min(System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double4::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, double ___0_x, double ___1_y, double ___2_z, double ___3_w, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::sqrt(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_sqrt_mA3A9D5DFDF6841F8836E3ECD5D83555842383F36_inline (double ___0_x, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mD7BFFAB3D7057D71DB7B2F5A50788D197E1AA49B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::get_yzx()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_get_yzx_mFEFD36EE9E6E6470EDDCF595DEAAB85FCBAC2795_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::op_Multiply(Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Multiply_mFF3B33CAB54AB767C1B7927B97658C307150BCA9_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::op_Subtraction(Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Subtraction_m22E94C140DA02DCD57ADB54B6DEEFA271AEB82A0_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.quaternion::.ctor(Unity.Mathematics.float3x3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quaternion__ctor_m354F09C0E50CA59DA43037E9993EAE9BF97E9120 (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_m, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double3x3::.ctor(Unity.Mathematics.float3x3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3x3__ctor_m4A89254CD6C32BCF5BCEBC60A4E712E2360DD972_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0* __this, float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::op_Addition(Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.double3x3 Unity.Mathematics.math::double3x3(Unity.Mathematics.double3,Unity.Mathematics.double3,Unity.Mathematics.double3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 math_double3x3_mDEDFD3D5E0FAD4EC0550DE55A86A7D199B3CC61B_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_c0, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_c1, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___2_c2, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Unity.Mathematics.double3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Implicit_m5DCE807570E8C929820AE8D221FFEE4861D9D5D9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double3::.ctor(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3__ctor_m246C72AEDE9AC7E52CF7DF7FEE065D66EF96AB8A_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset(intptr_t, void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset(intptr_t, void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset(intptr_t, void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset(intptr_t, void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C uint8_t CDECL DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C void CDECL DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
IL2CPP_EXTERN_C uint8_t CDECL DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative(intptr_t, void*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CesiumForUnity.Cesium3DTileInfo
IL2CPP_EXTERN_C void Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshal_pinvoke(const Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB& unmarshaled, Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_pinvoke& marshaled)
{
	marshaled.___usesAdditiveRefinement_0 = static_cast<int32_t>(unmarshaled.___usesAdditiveRefinement_0);
	marshaled.___geometricError_1 = unmarshaled.___geometricError_1;
	marshaled.___dimensions_2 = unmarshaled.___dimensions_2;
	marshaled.___isTranslucent_3 = static_cast<int32_t>(unmarshaled.___isTranslucent_3);
}
IL2CPP_EXTERN_C void Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshal_pinvoke_back(const Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_pinvoke& marshaled, Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB& unmarshaled)
{
	bool unmarshaledusesAdditiveRefinement_temp_0 = false;
	unmarshaledusesAdditiveRefinement_temp_0 = static_cast<bool>(marshaled.___usesAdditiveRefinement_0);
	unmarshaled.___usesAdditiveRefinement_0 = unmarshaledusesAdditiveRefinement_temp_0;
	float unmarshaledgeometricError_temp_1 = 0.0f;
	unmarshaledgeometricError_temp_1 = marshaled.___geometricError_1;
	unmarshaled.___geometricError_1 = unmarshaledgeometricError_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddimensions_temp_2;
	memset((&unmarshaleddimensions_temp_2), 0, sizeof(unmarshaleddimensions_temp_2));
	unmarshaleddimensions_temp_2 = marshaled.___dimensions_2;
	unmarshaled.___dimensions_2 = unmarshaleddimensions_temp_2;
	bool unmarshaledisTranslucent_temp_3 = false;
	unmarshaledisTranslucent_temp_3 = static_cast<bool>(marshaled.___isTranslucent_3);
	unmarshaled.___isTranslucent_3 = unmarshaledisTranslucent_temp_3;
}
// Conversion method for clean up from marshalling of: CesiumForUnity.Cesium3DTileInfo
IL2CPP_EXTERN_C void Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshal_pinvoke_cleanup(Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CesiumForUnity.Cesium3DTileInfo
IL2CPP_EXTERN_C void Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshal_com(const Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB& unmarshaled, Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_com& marshaled)
{
	marshaled.___usesAdditiveRefinement_0 = static_cast<int32_t>(unmarshaled.___usesAdditiveRefinement_0);
	marshaled.___geometricError_1 = unmarshaled.___geometricError_1;
	marshaled.___dimensions_2 = unmarshaled.___dimensions_2;
	marshaled.___isTranslucent_3 = static_cast<int32_t>(unmarshaled.___isTranslucent_3);
}
IL2CPP_EXTERN_C void Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshal_com_back(const Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_com& marshaled, Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB& unmarshaled)
{
	bool unmarshaledusesAdditiveRefinement_temp_0 = false;
	unmarshaledusesAdditiveRefinement_temp_0 = static_cast<bool>(marshaled.___usesAdditiveRefinement_0);
	unmarshaled.___usesAdditiveRefinement_0 = unmarshaledusesAdditiveRefinement_temp_0;
	float unmarshaledgeometricError_temp_1 = 0.0f;
	unmarshaledgeometricError_temp_1 = marshaled.___geometricError_1;
	unmarshaled.___geometricError_1 = unmarshaledgeometricError_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddimensions_temp_2;
	memset((&unmarshaleddimensions_temp_2), 0, sizeof(unmarshaleddimensions_temp_2));
	unmarshaleddimensions_temp_2 = marshaled.___dimensions_2;
	unmarshaled.___dimensions_2 = unmarshaleddimensions_temp_2;
	bool unmarshaledisTranslucent_temp_3 = false;
	unmarshaledisTranslucent_temp_3 = static_cast<bool>(marshaled.___isTranslucent_3);
	unmarshaled.___isTranslucent_3 = unmarshaledisTranslucent_temp_3;
}
// Conversion method for clean up from marshalling of: CesiumForUnity.Cesium3DTileInfo
IL2CPP_EXTERN_C void Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshal_com_cleanup(Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.CesiumPointCloudRenderer::set_tileInfo(CesiumForUnity.Cesium3DTileInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_set_tileInfo_mF77F7E293F75628FDAA54CD3454988E5F7DD68C3 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB ___0_value, const RuntimeMethod* method) 
{
	{
		// set => this._tileInfo = value;
		Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB L_0 = ___0_value;
		__this->____tileInfo_14 = L_0;
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_OnEnable_m35A316D1DEF6AF74D1C6AF4475842245FECA3B8E (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_m292804BD6C8461D37E9A010C9B0378835226E0C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral067EC96FF336E56142A07CCD1C749677694836B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0239E75D13C598B997E2FA826B09466A0986B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70D5BABE062BD90E268D9C36985B6DCA20D8864E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C235F372D3DDB5616D121093D08A3974CC6292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB5E889332F80C2B75ACD023412FAD63C4021723);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B16_0 = 0;
	{
		// this._tileset = this.gameObject.GetComponentInParent<Cesium3DTileset>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_1;
		L_1 = GameObject_GetComponentInParent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_m292804BD6C8461D37E9A010C9B0378835226E0C9(L_0, GameObject_GetComponentInParent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_m292804BD6C8461D37E9A010C9B0378835226E0C9_RuntimeMethod_var);
		__this->____tileset_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tileset_4), (void*)L_1);
		// this._meshFilter = this.gameObject.GetComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3;
		L_3 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_2, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		__this->____meshFilter_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshFilter_6), (void*)L_3);
		// this._mesh = this._meshFilter.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4 = __this->____meshFilter_6;
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5;
		L_5 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_4, NULL);
		__this->____mesh_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_5), (void*)L_5);
		// this._meshRenderer = this.gameObject.GetComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_6, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		__this->____meshRenderer_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshRenderer_7), (void*)L_7);
		// this._pointCount = this._mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = __this->____mesh_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_8, NULL);
		__this->____pointCount_9 = L_9;
		// this._pointMaterial = UnityEngine.Object.Instantiate(
		//             Resources.Load<Material>("CesiumPointCloudShadingMaterial"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral067EC96FF336E56142A07CCD1C749677694836B9, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171(L_10, Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mF8E527A6B5D85BF5A41D9846980AB777D2A6B171_RuntimeMethod_var);
		__this->____pointMaterial_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pointMaterial_10), (void*)L_11);
		// GraphicsBuffer sourceBuffer = this._mesh.GetVertexBuffer(0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = __this->____mesh_5;
		NullCheck(L_12);
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_13;
		L_13 = Mesh_GetVertexBuffer_mD87ECA25FE364DC33B99A2F084463B75A03D5AA7(L_12, 0, NULL);
		V_0 = L_13;
		// bool usingDirect11 = SystemInfo.graphicsDeviceType == GraphicsDeviceType.Direct3D11;
		int32_t L_14;
		L_14 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		V_1 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		// if (usingDirect11)
		bool L_15 = V_1;
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00b7;
		}
	}
	{
		// this._meshVertexBuffer = new GraphicsBuffer(
		//     GraphicsBuffer.Target.Structured | GraphicsBuffer.Target.CopyDestination,
		//     sourceBuffer.count,
		//     sourceBuffer.stride);
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = GraphicsBuffer_get_count_mFB2375DCEEFB459134AB0056F0ED77191E9EFB4F(L_17, NULL);
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = GraphicsBuffer_get_stride_mC2A315A56C5C7EA6B3BB349D25C85C97D5B9B534(L_19, NULL);
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_21 = (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*)il2cpp_codegen_object_new(GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		GraphicsBuffer__ctor_mBDE2A119B58AD582F79CFE8071F47001965D14F4(L_21, ((int32_t)24), L_18, L_20, NULL);
		__this->____meshVertexBuffer_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshVertexBuffer_8), (void*)L_21);
		// Graphics.CopyBuffer(sourceBuffer, this._meshVertexBuffer);
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_22 = V_0;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_23 = __this->____meshVertexBuffer_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyBuffer_m565B7247FE17593BD3BCEC61B79E2761D7C74268(L_22, L_23, NULL);
		// sourceBuffer.Release();
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_24 = V_0;
		NullCheck(L_24);
		GraphicsBuffer_Release_m383E932BE0F3C20D90D715D751C9888472121F75(L_24, NULL);
		goto IL_00d5;
	}

IL_00b7:
	{
		// this._mesh.vertexBufferTarget |= GraphicsBuffer.Target.Structured;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = __this->____mesh_5;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Mesh_get_vertexBufferTarget_m75A31F5EA1210B0196A84E52A1AF4DF82A6F1EBC(L_26, NULL);
		NullCheck(L_26);
		Mesh_set_vertexBufferTarget_mEC2C2DF9E73C882DCC365201DB521019B3629FD9(L_26, ((int32_t)((int32_t)L_27|((int32_t)16))), NULL);
		// this._meshVertexBuffer = sourceBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_28 = V_0;
		__this->____meshVertexBuffer_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshVertexBuffer_8), (void*)L_28);
	}

IL_00d5:
	{
		// if (this._mesh.HasVertexAttribute(VertexAttribute.Color))
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29 = __this->____mesh_5;
		NullCheck(L_29);
		bool L_30;
		L_30 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(L_29, 3, NULL);
		V_3 = L_30;
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		// this._pointMaterial.EnableKeyword("HAS_POINT_COLORS");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->____pointMaterial_10;
		NullCheck(L_32);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_32, _stringLiteralCB5E889332F80C2B75ACD023412FAD63C4021723, NULL);
		goto IL_016b;
	}

IL_00fa:
	{
		// Material material = this._meshRenderer.sharedMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_33 = __this->____meshRenderer_7;
		NullCheck(L_33);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_33, NULL);
		V_4 = L_34;
		// if (material.HasColor("_Color"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_4;
		NullCheck(L_35);
		bool L_36;
		L_36 = Material_HasColor_m4AD3F871A49E3699DBEF077A4301FAED7D0B5DA9(L_35, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		V_5 = L_36;
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0130;
		}
	}
	{
		// this._constantColor = material.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = V_4;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_38, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_40;
		L_40 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_39, NULL);
		__this->____constantColor_13 = L_40;
		goto IL_016a;
	}

IL_0130:
	{
		// else if (material.HasVector("_baseColorFactor"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = V_4;
		NullCheck(L_41);
		bool L_42;
		L_42 = Material_HasVector_mCE85AE4869A73211AD4A4E6D3DD98E4DCE0558D8(L_41, _stringLiteralC8C235F372D3DDB5616D121093D08A3974CC6292, NULL);
		V_6 = L_42;
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_0158;
		}
	}
	{
		// this._constantColor = material.GetVector("_baseColorFactor");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = V_4;
		NullCheck(L_44);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		L_45 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_44, _stringLiteralC8C235F372D3DDB5616D121093D08A3974CC6292, NULL);
		__this->____constantColor_13 = L_45;
		goto IL_016a;
	}

IL_0158:
	{
		// this._constantColor = Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47;
		L_47 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_46, NULL);
		__this->____constantColor_13 = L_47;
	}

IL_016a:
	{
	}

IL_016b:
	{
		// if (this._mesh.HasVertexAttribute(VertexAttribute.Normal))
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_48 = __this->____mesh_5;
		NullCheck(L_48);
		bool L_49;
		L_49 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(L_48, 1, NULL);
		V_7 = L_49;
		bool L_50 = V_7;
		if (!L_50)
		{
			goto IL_0190;
		}
	}
	{
		// this._pointMaterial.EnableKeyword("HAS_POINT_NORMALS");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->____pointMaterial_10;
		NullCheck(L_51);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_51, _stringLiteral3F0239E75D13C598B997E2FA826B09466A0986B6, NULL);
	}

IL_0190:
	{
		// if (XRSettings.stereoRenderingMode == XRSettings.StereoRenderingMode.SinglePassInstanced ||
		//     XRSettings.stereoRenderingMode == XRSettings.StereoRenderingMode.SinglePassMultiview)
		int32_t L_52;
		L_52 = XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC(NULL);
		if ((((int32_t)L_52) == ((int32_t)2)))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_53;
		L_53 = XRSettings_get_stereoRenderingMode_mD66918C11E2216B1F8FA76934F79D5F85BC303FC(NULL);
		G_B16_0 = ((((int32_t)L_53) == ((int32_t)3))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B16_0 = 1;
	}

IL_01a3:
	{
		V_8 = (bool)G_B16_0;
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_01bc;
		}
	}
	{
		// this._pointMaterial.EnableKeyword("INSTANCING_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->____pointMaterial_10;
		NullCheck(L_55);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_55, _stringLiteral70D5BABE062BD90E268D9C36985B6DCA20D8864E, NULL);
	}

IL_01bc:
	{
		// }
		return;
	}
}
// System.Single CesiumForUnity.CesiumPointCloudRenderer::GetGeometricError(CesiumForUnity.CesiumPointCloudShading)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CesiumPointCloudRenderer_GetGeometricError_m87EAC32C6018B9FD68039515353A565A6A1BA751 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* ___0_pointCloudShading, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		// float geometricError = this._tileInfo.geometricError;
		Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB* L_0 = (&__this->____tileInfo_14);
		float L_1 = L_0->___geometricError_1;
		V_0 = L_1;
		// if (geometricError > 0.0f)
		float L_2 = V_0;
		V_3 = (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return geometricError;
		float L_4 = V_0;
		V_4 = L_4;
		goto IL_0075;
	}

IL_001f:
	{
		// if (pointCloudShading.baseResolution > 0.0f)
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_5 = ___0_pointCloudShading;
		NullCheck(L_5);
		float L_6;
		L_6 = CesiumPointCloudShading_get_baseResolution_mFD5D3C436B9F91B755BDD00642DEFAE96D357179_inline(L_5, NULL);
		V_5 = (bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return pointCloudShading.baseResolution;
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_8 = ___0_pointCloudShading;
		NullCheck(L_8);
		float L_9;
		L_9 = CesiumPointCloudShading_get_baseResolution_mFD5D3C436B9F91B755BDD00642DEFAE96D357179_inline(L_8, NULL);
		V_4 = L_9;
		goto IL_0075;
	}

IL_003d:
	{
		// Vector3 dimensions = this._tileInfo.dimensions;
		Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB* L_10 = (&__this->____tileInfo_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___dimensions_2;
		V_1 = L_11;
		// float volume = dimensions.x * dimensions.y * dimensions.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		float L_15 = L_14.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = L_16.___z_4;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_15)), L_17));
		// return Mathf.Pow(volume / this._pointCount, 1.0f / 3.0f);
		float L_18 = V_2;
		int32_t L_19 = __this->____pointCount_9;
		float L_20;
		L_20 = powf(((float)(L_18/((float)L_19))), (0.333333343f));
		V_4 = L_20;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		float L_21 = V_4;
		return L_21;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::UpdateAttenuationParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_UpdateAttenuationParameters_m33EBF887E85E4175A6C35A56810F145A16FFD0F8 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* V_1 = NULL;
	float V_2 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	float G_B3_0 = 0.0f;
	{
		// float maximumPointSize =
		//     this._tileInfo.usesAdditiveRefinement ?
		//     5.0f :
		//     this._tileset.maximumScreenSpaceError;
		Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB* L_0 = (&__this->____tileInfo_14);
		bool L_1 = L_0->___usesAdditiveRefinement_0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_2 = __this->____tileset_4;
		NullCheck(L_2);
		float L_3;
		L_3 = Cesium3DTileset_get_maximumScreenSpaceError_mB22DE8413F7ECBDB115000F86812A28C7DB114CC_inline(L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0020;
	}

IL_001b:
	{
		G_B3_0 = (5.0f);
	}

IL_0020:
	{
		V_0 = G_B3_0;
		// if (this._tileset.pointCloudShading.maximumAttenuation > 0.0f)
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_4 = __this->____tileset_4;
		NullCheck(L_4);
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_5;
		L_5 = Cesium3DTileset_get_pointCloudShading_mC8CB3275DDCAA3A3A8F19844E4E6BF4CB1202BC1_inline(L_4, NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = CesiumPointCloudShading_get_maximumAttenuation_m31ADCE81E474DC690FA833A627EA1ED5E6C5B842_inline(L_5, NULL);
		V_6 = (bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// maximumPointSize = this._tileset.pointCloudShading.maximumAttenuation;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_8 = __this->____tileset_4;
		NullCheck(L_8);
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_9;
		L_9 = Cesium3DTileset_get_pointCloudShading_mC8CB3275DDCAA3A3A8F19844E4E6BF4CB1202BC1_inline(L_8, NULL);
		NullCheck(L_9);
		float L_10;
		L_10 = CesiumPointCloudShading_get_maximumAttenuation_m31ADCE81E474DC690FA833A627EA1ED5E6C5B842_inline(L_9, NULL);
		V_0 = L_10;
	}

IL_0051:
	{
		// if (Screen.dpi > 0)
		float L_11;
		L_11 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		V_7 = (bool)((((float)L_11) > ((float)(0.0f)))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		// maximumPointSize *= Screen.dpi / 150;
		float L_13 = V_0;
		float L_14;
		L_14 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_13, ((float)(L_14/(150.0f)))));
	}

IL_0073:
	{
		// CesiumPointCloudShading pointCloudShading = this._tileset.pointCloudShading;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_15 = __this->____tileset_4;
		NullCheck(L_15);
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_16;
		L_16 = Cesium3DTileset_get_pointCloudShading_mC8CB3275DDCAA3A3A8F19844E4E6BF4CB1202BC1_inline(L_15, NULL);
		V_1 = L_16;
		// float geometricError = this.GetGeometricError(pointCloudShading);
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_17 = V_1;
		float L_18;
		L_18 = CesiumPointCloudRenderer_GetGeometricError_m87EAC32C6018B9FD68039515353A565A6A1BA751(__this, L_17, NULL);
		V_2 = L_18;
		// geometricError *= pointCloudShading.geometricErrorScale;
		float L_19 = V_2;
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_20 = V_1;
		NullCheck(L_20);
		float L_21;
		L_21 = CesiumPointCloudShading_get_geometricErrorScale_m2182592AF3E9909EA5327FC630AFFE6597788C2C_inline(L_20, NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_19, L_21));
		// Camera camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		V_3 = L_22;
		// float sseDenominator = 2.0f * Mathf.Tan(0.5f * Mathf.Deg2Rad * camera.fieldOfView);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = V_3;
		NullCheck(L_23);
		float L_24;
		L_24 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_23, NULL);
		float L_25;
		L_25 = tanf(((float)il2cpp_codegen_multiply((0.00872664619f), L_24)));
		V_4 = ((float)il2cpp_codegen_multiply((2.0f), L_25));
		// float depthMultplier = camera.scaledPixelHeight / sseDenominator;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9(L_26, NULL);
		float L_28 = V_4;
		V_5 = ((float)(((float)L_27)/L_28));
		// this._attenuationParameters =
		//     new Vector4(maximumPointSize, geometricError, depthMultplier, 0);
		float L_29 = V_0;
		float L_30 = V_2;
		float L_31 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_32), L_29, L_30, L_31, (0.0f), /*hidden argument*/NULL);
		__this->____attenuationParameters_12 = L_32;
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::UpdateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_UpdateBounds_mDFCC1EC545203EE69571092701C0B14D5A3A6800 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Matrix4x4 transformMatrix = this.gameObject.transform.localToWorldMatrix;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_1, NULL);
		V_0 = L_2;
		// Bounds localBounds = this._mesh.bounds;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = __this->____mesh_5;
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_3, NULL);
		V_1 = L_4;
		// positionsScratch[0] = localBounds.center;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___positionsScratch_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		// positionsScratch[1] = localBounds.min;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->___positionsScratch_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_1), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		// positionsScratch[2] = localBounds.max;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___positionsScratch_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_1), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// this._bounds = GeometryUtility.CalculateBounds(positionsScratch, transformMatrix);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___positionsScratch_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
		L_13 = GeometryUtility_CalculateBounds_mE1696B5F19DD26A9F11F244021EE07BBD0E1B663(L_11, L_12, NULL);
		__this->____bounds_11 = L_13;
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::DestroyResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_DestroyResources_mDCE852CE779BAFCF3DE893560AEE39CCA3C39C5D (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this._meshVertexBuffer != null)
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_0 = __this->____meshVertexBuffer_8;
		V_0 = (bool)((!(((RuntimeObject*)(GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// this._meshVertexBuffer.Release();
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_2 = __this->____meshVertexBuffer_8;
		NullCheck(L_2);
		GraphicsBuffer_Release_m383E932BE0F3C20D90D715D751C9888472121F75(L_2, NULL);
		// this._meshVertexBuffer = null;
		__this->____meshVertexBuffer_8 = (GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____meshVertexBuffer_8), (void*)(GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*)NULL);
	}

IL_0023:
	{
		// if (this._pointMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____pointMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// Destroy(this._pointMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->____pointMaterial_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_UpdateMaterial_m54D83EACC89FAD90ADD19A134C4FD942A61B7EE4 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01390D5FA7BD5E05E12237F14716794B351352D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E71EC8AE17AE2AB299E95ED437827008B58928B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F815AC1139A867D66488ECCCF2D628CDB1E7E9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB794A42CE131829234E7D16B251BE583536753F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// this._pointMaterial.SetBuffer("_inPoints", this._meshVertexBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____pointMaterial_10;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = __this->____meshVertexBuffer_8;
		NullCheck(L_0);
		Material_SetBuffer_mD72D1E5A19677F70141835374BDEF6BB75796CDF(L_0, _stringLiteral3E71EC8AE17AE2AB299E95ED437827008B58928B, L_1, NULL);
		// this._pointMaterial.SetMatrix("_worldTransform", this.gameObject.transform.localToWorldMatrix);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____pointMaterial_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_4, NULL);
		NullCheck(L_2);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_2, _stringLiteralB794A42CE131829234E7D16B251BE583536753F4, L_5, NULL);
		// this._pointMaterial.SetVector("_attenuationParameters", this._attenuationParameters);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->____pointMaterial_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = __this->____attenuationParameters_12;
		NullCheck(L_6);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_6, _stringLiteral3F815AC1139A867D66488ECCCF2D628CDB1E7E9D, L_7, NULL);
		// this._pointMaterial.SetVector("_constantColor", this._constantColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->____pointMaterial_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = __this->____constantColor_13;
		NullCheck(L_8);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_8, _stringLiteral01390D5FA7BD5E05E12237F14716794B351352D7, L_9, NULL);
		// if (this._tileInfo.isTranslucent || this._constantColor.w < 1.0f)
		Cesium3DTileInfo_t91B05706ECDCA757B854448A94C5AF401EEDF5FB* L_10 = (&__this->____tileInfo_14);
		bool L_11 = L_10->___isTranslucent_3;
		if (L_11)
		{
			goto IL_0088;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12 = (&__this->____constantColor_13);
		float L_13 = L_12->___w_4;
		G_B3_0 = ((((float)L_13) < ((float)(1.0f)))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B3_0 = 1;
	}

IL_0089:
	{
		V_0 = (bool)G_B3_0;
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		// this._pointMaterial.SetOverrideTag("RenderType", "Transparent");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->____pointMaterial_10;
		NullCheck(L_15);
		Material_SetOverrideTag_mD68833CD28EBAF71CB6AF127B38075629B74FE08(L_15, _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, _stringLiteralF318A9CBF6133558944579D6309707D3FF4760E1, NULL);
		// this._pointMaterial.renderQueue = (int)RenderQueue.Transparent;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->____pointMaterial_10;
		NullCheck(L_16);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_16, ((int32_t)3000), NULL);
		// this._pointMaterial.SetInt("_SrcBlend", (int)BlendMode.SrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->____pointMaterial_10;
		NullCheck(L_17);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_17, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, NULL);
		// this._pointMaterial.SetInt("_DstBlend", (int)BlendMode.OneMinusSrcAlpha);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = __this->____pointMaterial_10;
		NullCheck(L_18);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_18, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), NULL);
		goto IL_0103;
	}

IL_00dd:
	{
		// this._pointMaterial.SetInt("_SrcBlend", (int)BlendMode.One);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->____pointMaterial_10;
		NullCheck(L_19);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_19, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 1, NULL);
		// this._pointMaterial.SetInt("_DstBlend", (int)BlendMode.Zero);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->____pointMaterial_10;
		NullCheck(L_20);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_20, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 0, NULL);
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::DrawPointsWithAttenuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_DrawPointsWithAttenuation_mD4133D289F3946FA21819D403B183D19C2E53C17 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.UpdateBounds();
		CesiumPointCloudRenderer_UpdateBounds_mDFCC1EC545203EE69571092701C0B14D5A3A6800(__this, NULL);
		// this.UpdateAttenuationParameters();
		CesiumPointCloudRenderer_UpdateAttenuationParameters_m33EBF887E85E4175A6C35A56810F145A16FFD0F8(__this, NULL);
		// this.UpdateMaterial();
		CesiumPointCloudRenderer_UpdateMaterial_m54D83EACC89FAD90ADD19A134C4FD942A61B7EE4(__this, NULL);
		// Graphics.DrawProcedural(
		//     this._pointMaterial,
		//     this._bounds,
		//     MeshTopology.Triangles,
		//     this._pointCount * 6,
		//     1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____pointMaterial_10;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = __this->____bounds_11;
		int32_t L_2 = __this->____pointCount_9;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_DrawProcedural_m24C41DA182DB29ED2D723829D30ED38EA851995D(L_0, L_1, 0, ((int32_t)il2cpp_codegen_multiply(L_2, 6)), 1, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, 1, (bool)1, 0, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_Update_mC84023DD309D7358354E5DD48C45DA6AFCEBD465 (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this._tileset.pointCloudShading.attenuation)
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_0 = __this->____tileset_4;
		NullCheck(L_0);
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_1;
		L_1 = Cesium3DTileset_get_pointCloudShading_mC8CB3275DDCAA3A3A8F19844E4E6BF4CB1202BC1_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = CesiumPointCloudShading_get_attenuation_mF662032A72CCC8B9FF7DE1C4B29CAFD0A34A01A5_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// this.DrawPointsWithAttenuation();
		CesiumPointCloudRenderer_DrawPointsWithAttenuation_mD4133D289F3946FA21819D403B183D19C2E53C17(__this, NULL);
		// this._meshRenderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->____meshRenderer_7;
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		goto IL_003c;
	}

IL_002d:
	{
		// this._meshRenderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->____meshRenderer_7;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)1, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer_OnDisable_m3C22E6AAA37D2BCD33AA26FBC8DFB3E232B9CA7E (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	{
		// this.DestroyResources();
		CesiumPointCloudRenderer_DestroyResources_mDCE852CE779BAFCF3DE893560AEE39CCA3C39C5D(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudRenderer__ctor_mB09C2515FAD12CEF8460FF767A1FBDFCBA71667E (CesiumPointCloudRenderer_tFF83D3AC88DBA0099581D846732A2080FE1BB725* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _pointCount = 0;
		__this->____pointCount_9 = 0;
		// private Vector3[] positionsScratch = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___positionsScratch_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positionsScratch_15), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CesiumForUnity.CesiumPointCloudShading::get_attenuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CesiumPointCloudShading_get_attenuation_mF662032A72CCC8B9FF7DE1C4B29CAFD0A34A01A5 (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._attenuation;
		bool L_0 = __this->____attenuation_0;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudShading::set_attenuation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudShading_set_attenuation_m382BE7C39397D187A79C9D10BFCB2B99B783AF03 (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => this._attenuation = value;
		bool L_0 = ___0_value;
		__this->____attenuation_0 = L_0;
		return;
	}
}
// System.Single CesiumForUnity.CesiumPointCloudShading::get_geometricErrorScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_geometricErrorScale_m2182592AF3E9909EA5327FC630AFFE6597788C2C (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._geometricErrorScale;
		float L_0 = __this->____geometricErrorScale_1;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudShading::set_geometricErrorScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudShading_set_geometricErrorScale_m51AA002018B9282DF370FF37FEC5D11F8E7EF957 (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// this._geometricErrorScale = Mathf.Max(value, 0.0f);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, (0.0f), NULL);
		__this->____geometricErrorScale_1 = L_1;
		// }
		return;
	}
}
// System.Single CesiumForUnity.CesiumPointCloudShading::get_maximumAttenuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_maximumAttenuation_m31ADCE81E474DC690FA833A627EA1ED5E6C5B842 (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumAttenuation;
		float L_0 = __this->____maximumAttenuation_2;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudShading::set_maximumAttenuation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudShading_set_maximumAttenuation_m3EC44B83FE7D08D9CE4E4EBE2049ED2970ED33BE (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// this._maximumAttenuation = Mathf.Max(value, 0.0f);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, (0.0f), NULL);
		__this->____maximumAttenuation_2 = L_1;
		// }
		return;
	}
}
// System.Single CesiumForUnity.CesiumPointCloudShading::get_baseResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_baseResolution_mFD5D3C436B9F91B755BDD00642DEFAE96D357179 (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._baseResolution;
		float L_0 = __this->____baseResolution_3;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudShading::set_baseResolution(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudShading_set_baseResolution_m98969C059B865CCC38AAC2AA53CDE2D62DEAED35 (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => this._baseResolution = Mathf.Max(value, 0.0f);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, (0.0f), NULL);
		__this->____baseResolution_3 = L_1;
		return;
	}
}
// System.Void CesiumForUnity.CesiumPointCloudShading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumPointCloudShading__ctor_m52AF242979AABFE2B4B91CFCF27F975D1A6163DC (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// private bool _attenuation = false;
		__this->____attenuation_0 = (bool)0;
		// private float _geometricErrorScale = 1.0f;
		__this->____geometricErrorScale_1 = (1.0f);
		// private float _maximumAttenuation = 0.0f;
		__this->____maximumAttenuation_2 = (0.0f);
		// private float _baseResolution = 0.0f;
		__this->____baseResolution_3 = (0.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.CesiumRasterOverlay::add_OnCesiumRasterOverlayLoadFailure(CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_add_OnCesiumRasterOverlayLoadFailure_m329F679FB30AB7B476EC861C27CE13A601ABD5A1 (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* V_0 = NULL;
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* V_1 = NULL;
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* V_2 = NULL;
	{
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_0 = ((CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var))->___OnCesiumRasterOverlayLoadFailure_4;
		V_0 = L_0;
	}

IL_0006:
	{
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_1 = V_0;
		V_1 = L_1;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_2 = V_1;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)CastclassSealed((RuntimeObject*)L_4, RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28_il2cpp_TypeInfo_var));
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_5 = V_2;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_6 = V_1;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_7;
		L_7 = InterlockedCompareExchangeImpl<RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*>((&((CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var))->___OnCesiumRasterOverlayLoadFailure_4), L_5, L_6);
		V_0 = L_7;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_8 = V_0;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_9 = V_1;
		if ((!(((RuntimeObject*)(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)L_8) == ((RuntimeObject*)(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::remove_OnCesiumRasterOverlayLoadFailure(CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_remove_OnCesiumRasterOverlayLoadFailure_m6ABEDD68104E130FF71C836BD998A205633F6670 (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* V_0 = NULL;
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* V_1 = NULL;
	RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* V_2 = NULL;
	{
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_0 = ((CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var))->___OnCesiumRasterOverlayLoadFailure_4;
		V_0 = L_0;
	}

IL_0006:
	{
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_1 = V_0;
		V_1 = L_1;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_2 = V_1;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)CastclassSealed((RuntimeObject*)L_4, RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28_il2cpp_TypeInfo_var));
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_5 = V_2;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_6 = V_1;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_7;
		L_7 = InterlockedCompareExchangeImpl<RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*>((&((CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var))->___OnCesiumRasterOverlayLoadFailure_4), L_5, L_6);
		V_0 = L_7;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_8 = V_0;
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_9 = V_1;
		if ((!(((RuntimeObject*)(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)L_8) == ((RuntimeObject*)(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::BroadcastCesiumRasterOverlayLoadFailure(CesiumForUnity.CesiumRasterOverlayLoadFailureDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_BroadcastCesiumRasterOverlayLoadFailure_mED5E09D307AD5C6488E3D6C18317766588DAC4BA (CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (OnCesiumRasterOverlayLoadFailure != null)
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_0 = ((CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var))->___OnCesiumRasterOverlayLoadFailure_4;
		V_0 = (bool)((!(((RuntimeObject*)(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// OnCesiumRasterOverlayLoadFailure(details);
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* L_2 = ((CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6_il2cpp_TypeInfo_var))->___OnCesiumRasterOverlayLoadFailure_4;
		CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 L_3 = ___0_details;
		NullCheck(L_2);
		RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.CesiumRasterOverlay::get_showCreditsOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CesiumRasterOverlay_get_showCreditsOnScreen_mC949EB90AC2EFA5E1FD49A42EC778B04526E23E9 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// get => this._showCreditsOnScreen;
		bool L_0 = __this->____showCreditsOnScreen_5;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::set_showCreditsOnScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_set_showCreditsOnScreen_m4CFB408B06CE8F97327E570207577FC22BBDC3A1 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// this._showCreditsOnScreen = value;
		bool L_0 = ___0_value;
		__this->____showCreditsOnScreen_5 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Single CesiumForUnity.CesiumRasterOverlay::get_maximumScreenSpaceError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CesiumRasterOverlay_get_maximumScreenSpaceError_m93C50E99CE08FAED0810BD27915D1A0EC61D7635 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumScreenSpaceError;
		float L_0 = __this->____maximumScreenSpaceError_6;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::set_maximumScreenSpaceError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_set_maximumScreenSpaceError_m28102085EF9695459647C7297C883C754C4B3D20 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// this._maximumScreenSpaceError = value;
		float L_0 = ___0_value;
		__this->____maximumScreenSpaceError_6 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumRasterOverlay::get_maximumTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumRasterOverlay_get_maximumTextureSize_m1D39F29352C3B7DAF1A19D705C989D92ED6F9ABD (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumTextureSize;
		int32_t L_0 = __this->____maximumTextureSize_7;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::set_maximumTextureSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_set_maximumTextureSize_m302B530A327F3C99608EC3CDE09C177CE8302DCB (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._maximumTextureSize = value;
		int32_t L_0 = ___0_value;
		__this->____maximumTextureSize_7 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumRasterOverlay::get_maximumSimultaneousTileLoads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumRasterOverlay_get_maximumSimultaneousTileLoads_m23795A385A6002C15C43BBA30CA44CD4A728700D (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumSimultaneousTileLoads;
		int32_t L_0 = __this->____maximumSimultaneousTileLoads_8;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::set_maximumSimultaneousTileLoads(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_set_maximumSimultaneousTileLoads_m9D336B4D5E6D971AFEB75A19DBCE4699DBF88D52 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._maximumSimultaneousTileLoads = value;
		int32_t L_0 = ___0_value;
		__this->____maximumSimultaneousTileLoads_8 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int64 CesiumForUnity.CesiumRasterOverlay::get_subTileCacheBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CesiumRasterOverlay_get_subTileCacheBytes_m2DFCA07BAB4A576AFE8C4594CDF9E44DA23FF2C5 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// get => this._subTileCacheBytes;
		int64_t L_0 = __this->____subTileCacheBytes_9;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::set_subTileCacheBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_set_subTileCacheBytes_mA5B72D08FF60C5EE870C6F52BB4B00204E66A963 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._subTileCacheBytes = value;
		int64_t L_0 = ___0_value;
		__this->____subTileCacheBytes_9 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::AddToTileset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_AddToTileset_mBD945B69FD8991E84A1F728AEF41F82390574526 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_0 = NULL;
	bool V_1 = false;
	{
		// Cesium3DTileset tileset = this.gameObject.GetComponent<Cesium3DTileset>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_1;
		L_1 = GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587(L_0, GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587_RuntimeMethod_var);
		V_0 = L_1;
		// if (tileset == null)
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_001a:
	{
		// this.AddToTileset(tileset);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_5 = V_0;
		VirtualActionInvoker1< Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* >::Invoke(4 /* System.Void CesiumForUnity.CesiumRasterOverlay::AddToTileset(CesiumForUnity.Cesium3DTileset) */, __this, L_5);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::RemoveFromTileset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_RemoveFromTileset_m88548824BB26EA62CC1BBF4648EF8394003D5BD8 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_0 = NULL;
	bool V_1 = false;
	{
		// Cesium3DTileset tileset = this.gameObject.GetComponent<Cesium3DTileset>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_1;
		L_1 = GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587(L_0, GameObject_GetComponent_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mF385277FEF306FD90F2007D5AD22FB9657FCC587_RuntimeMethod_var);
		V_0 = L_1;
		// if (tileset == null)
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_001a:
	{
		// this.RemoveFromTileset(tileset);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_5 = V_0;
		VirtualActionInvoker1< Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* >::Invoke(5 /* System.Void CesiumForUnity.CesiumRasterOverlay::RemoveFromTileset(CesiumForUnity.Cesium3DTileset) */, __this, L_5);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// this.RemoveFromTileset();
		CesiumRasterOverlay_RemoveFromTileset_m88548824BB26EA62CC1BBF4648EF8394003D5BD8(__this, NULL);
		// if (this.enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.AddToTileset();
		CesiumRasterOverlay_AddToTileset_mBD945B69FD8991E84A1F728AEF41F82390574526(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_OnEnable_mFABC379CE360776F5EDB4F62639F7D576311FE21 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// this.AddToTileset();
		CesiumRasterOverlay_AddToTileset_mBD945B69FD8991E84A1F728AEF41F82390574526(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_OnDisable_mC3B8CA58C68A994C51ECB646D3CD1B5B23769323 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// this.RemoveFromTileset();
		CesiumRasterOverlay_RemoveFromTileset_m88548824BB26EA62CC1BBF4648EF8394003D5BD8(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay_OnValidate_m1956EA840D80FB4B4200DEEA5805B0CCEEBD5AFA (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumRasterOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlay__ctor_mBF08B99B21CEFD240A84AE711451E8270BCE8FA1 (CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* __this, const RuntimeMethod* method) 
{
	{
		// private bool _showCreditsOnScreen = false;
		__this->____showCreditsOnScreen_5 = (bool)0;
		// private float _maximumScreenSpaceError = 2.0f;
		__this->____maximumScreenSpaceError_6 = (2.0f);
		// private int _maximumTextureSize = 2048;
		__this->____maximumTextureSize_7 = ((int32_t)2048);
		// private int _maximumSimultaneousTileLoads = 20;
		__this->____maximumSimultaneousTileLoads_8 = ((int32_t)20);
		// private long _subTileCacheBytes = 16 * 1024 * 1024;
		__this->____subTileCacheBytes_9 = ((int64_t)((int32_t)16777216));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_Multicast(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* currentDelegate = reinterpret_cast<RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_details, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_OpenInst(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_details, method);
}
void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_OpenStatic(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_details, method);
}
void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_OpenStaticInvoker(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method)
{
	InvokerActionInvoker1< CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_details);
}
void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_ClosedStaticInvoker(RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_details);
}
// System.Void CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterOverlayLoadFailureDelegate__ctor_m905F40EE095BDEA75371FEA9EC3EA9EF2A4093D0 (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_Multicast;
}
// System.Void CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate::Invoke(CesiumForUnity.CesiumRasterOverlayLoadFailureDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_details, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate::BeginInvoke(CesiumForUnity.CesiumRasterOverlayLoadFailureDetails,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RasterOverlayLoadFailureDelegate_BeginInvoke_m288C0CD2FB3956C530CA088800150A503F54F777 (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_il2cpp_TypeInfo_var, &___0_details);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void CesiumForUnity.CesiumRasterOverlay/RasterOverlayLoadFailureDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterOverlayLoadFailureDelegate_EndInvoke_m20B18D5DA2E51BD4A2139F9DAE51EF48624A1DED (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
IL2CPP_EXTERN_C void CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshal_pinvoke(const CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572& unmarshaled, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_pinvoke& marshaled)
{
	Exception_t* ___overlay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'overlay' of type 'CesiumRasterOverlayLoadFailureDetails': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___overlay_0Exception, NULL);
}
IL2CPP_EXTERN_C void CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshal_pinvoke_back(const CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_pinvoke& marshaled, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572& unmarshaled)
{
	Exception_t* ___overlay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'overlay' of type 'CesiumRasterOverlayLoadFailureDetails': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___overlay_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
IL2CPP_EXTERN_C void CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshal_pinvoke_cleanup(CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
IL2CPP_EXTERN_C void CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshal_com(const CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572& unmarshaled, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_com& marshaled)
{
	Exception_t* ___overlay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'overlay' of type 'CesiumRasterOverlayLoadFailureDetails': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___overlay_0Exception, NULL);
}
IL2CPP_EXTERN_C void CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshal_com_back(const CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_com& marshaled, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572& unmarshaled)
{
	Exception_t* ___overlay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'overlay' of type 'CesiumRasterOverlayLoadFailureDetails': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___overlay_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CesiumForUnity.CesiumRasterOverlayLoadFailureDetails
IL2CPP_EXTERN_C void CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshal_com_cleanup(CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572_marshaled_com& marshaled)
{
}
// System.Void CesiumForUnity.CesiumRasterOverlayLoadFailureDetails::.ctor(CesiumForUnity.CesiumRasterOverlay,CesiumForUnity.CesiumRasterOverlayLoadType,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRasterOverlayLoadFailureDetails__ctor_m7B549B223C0900D543C6B7E82A7FEC09A46FE0A3 (CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572* __this, CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* ___0_overlay, int32_t ___1_type, int64_t ___2_httpStatusCode, String_t* ___3_message, const RuntimeMethod* method) 
{
	{
		// this.overlay = overlay;
		CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* L_0 = ___0_overlay;
		__this->___overlay_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___overlay_0), (void*)L_0);
		// this.type = type;
		int32_t L_1 = ___1_type;
		__this->___type_1 = L_1;
		// this.httpStatusCode = httpStatusCode;
		int64_t L_2 = ___2_httpStatusCode;
		__this->___httpStatusCode_2 = L_2;
		// this.message = message;
		String_t* L_3 = ___3_message;
		__this->___message_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_3), (void*)L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CesiumRasterOverlayLoadFailureDetails__ctor_m7B549B223C0900D543C6B7E82A7FEC09A46FE0A3_AdjustorThunk (RuntimeObject* __this, CesiumRasterOverlay_t215C3071149D6D1FB222192FC3DB34D0723C3FA6* ___0_overlay, int32_t ___1_type, int64_t ___2_httpStatusCode, String_t* ___3_message, const RuntimeMethod* method)
{
	CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572*>(__this + _offset);
	CesiumRasterOverlayLoadFailureDetails__ctor_m7B549B223C0900D543C6B7E82A7FEC09A46FE0A3(_thisAdjusted, ___0_overlay, ___1_type, ___2_httpStatusCode, ___3_message, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CesiumForUnity.CesiumRuntimeSettings CesiumForUnity.CesiumRuntimeSettings::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* CesiumRuntimeSettings_get_instance_mA63CA4CB38A995319E5C5049DCCCE26579E5062C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisCesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_m45102545DAF631FC6EC5A799D653DEE28FDDE49A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC79B55BA9D1BB3A4C8B3D02368731860F5FB2B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB78B034DD7A4EF538AD927CF39C86AF2332F248);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* V_1 = NULL;
	bool V_2 = false;
	{
		// if (_instance != null)
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_0 = ((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_3 = ((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6;
		V_1 = L_3;
		goto IL_005b;
	}

IL_0019:
	{
		// _instance =
		//     Resources.Load("CesiumRuntimeSettings") as CesiumRuntimeSettings;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralC79B55BA9D1BB3A4C8B3D02368731860F5FB2B4C, NULL);
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6 = ((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17*)IsInstSealed((RuntimeObject*)L_4, CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6), (void*)((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17*)IsInstSealed((RuntimeObject*)L_4, CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var)));
		// if (_instance == null)
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_5 = ((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// _instance = ScriptableObject.CreateInstance<CesiumRuntimeSettings>();
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_8;
		L_8 = ScriptableObject_CreateInstance_TisCesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_m45102545DAF631FC6EC5A799D653DEE28FDDE49A(ScriptableObject_CreateInstance_TisCesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_m45102545DAF631FC6EC5A799D653DEE28FDDE49A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6), (void*)L_8);
		// Debug.LogError("Cannot find a CesiumRuntimeSettings asset. " +
		//     "Any assets that use the project's default token will not load.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFB78B034DD7A4EF538AD927CF39C86AF2332F248, NULL);
	}

IL_0053:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_9 = ((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____instance_6;
		V_1 = L_9;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_10 = V_1;
		return L_10;
	}
}
// System.String CesiumForUnity.CesiumRuntimeSettings::get_defaultIonAccessTokenID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CesiumRuntimeSettings_get_defaultIonAccessTokenID_m7FD599F0F791F956A8191263B5C1DE5D4434B30A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance._defaultIonAccessTokenID;
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_0;
		L_0 = CesiumRuntimeSettings_get_instance_mA63CA4CB38A995319E5C5049DCCCE26579E5062C(NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->____defaultIonAccessTokenID_7;
		return L_1;
	}
}
// System.String CesiumForUnity.CesiumRuntimeSettings::get_defaultIonAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CesiumRuntimeSettings_get_defaultIonAccessToken_m800E565A7100601BADD13EEB324765661296433B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance._defaultIonAccessToken;
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_0;
		L_0 = CesiumRuntimeSettings_get_instance_mA63CA4CB38A995319E5C5049DCCCE26579E5062C(NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->____defaultIonAccessToken_8;
		return L_1;
	}
}
// System.Int32 CesiumForUnity.CesiumRuntimeSettings::get_requestsPerCachePrune()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumRuntimeSettings_get_requestsPerCachePrune_m30A573260FEBD4AD7780AACC25B4ABC57216D396 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance._requestsPerCachePrune;
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_0;
		L_0 = CesiumRuntimeSettings_get_instance_mA63CA4CB38A995319E5C5049DCCCE26579E5062C(NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->____requestsPerCachePrune_9;
		return L_1;
	}
}
// System.UInt64 CesiumForUnity.CesiumRuntimeSettings::get_maxItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CesiumRuntimeSettings_get_maxItems_mFC124311867F4058B4707C59FCEB11019D1D1E7F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => instance._maxItems;
		il2cpp_codegen_runtime_class_init_inline(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* L_0;
		L_0 = CesiumRuntimeSettings_get_instance_mA63CA4CB38A995319E5C5049DCCCE26579E5062C(NULL);
		NullCheck(L_0);
		uint64_t L_1 = L_0->____maxItems_10;
		return L_1;
	}
}
// System.Void CesiumForUnity.CesiumRuntimeSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRuntimeSettings__ctor_mAE1EB45ACE0986ACBA71F277D4E83E6E6F5D6835 (CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _defaultIonAccessTokenID = "";
		__this->____defaultIonAccessTokenID_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultIonAccessTokenID_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string _defaultIonAccessToken = "";
		__this->____defaultIonAccessToken_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultIonAccessToken_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private int _requestsPerCachePrune = 10000;
		__this->____requestsPerCachePrune_9 = ((int32_t)10000);
		// private ulong  _maxItems = 4096;
		__this->____maxItems_10 = ((int64_t)((int32_t)4096));
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
// System.Void CesiumForUnity.CesiumRuntimeSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumRuntimeSettings__cctor_m57562410A30C0136A74A5D18EB8AB4AFB92CB94A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E31481D40AF4ACD0D354BBD1308F13E1262753F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BBD24E733C36645A109849FBABDB6E97DE09B2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string _settingsName = "CesiumSettings";
		((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____settingsName_4 = _stringLiteral1E31481D40AF4ACD0D354BBD1308F13E1262753F;
		Il2CppCodeGenWriteBarrier((void**)(&((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____settingsName_4), (void*)_stringLiteral1E31481D40AF4ACD0D354BBD1308F13E1262753F);
		// private static readonly string _filePath =
		//     "Assets/" + _settingsName + "/Resources/CesiumRuntimeSettings.asset";
		String_t* L_0 = ((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____settingsName_4;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991, L_0, _stringLiteral9BBD24E733C36645A109849FBABDB6E97DE09B2E, NULL);
		((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____filePath_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_StaticFields*)il2cpp_codegen_static_fields_for(CesiumRuntimeSettings_tC0E914882DCA741E27B483A653F8C7A4709D9B17_il2cpp_TypeInfo_var))->____filePath_5), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double CesiumForUnity.CesiumSubScene::get_activationRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_activationRadius_mF54B17A6484354DFA2B5BF162E70D3BF9BEE440F (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._activationRadius;
		double L_0 = __this->____activationRadius_4;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_activationRadius(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_activationRadius_m65A0BF22C46FFCB162443CDFE4E159092DABA9F7 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._activationRadius = value;
		double L_0 = ___0_value;
		__this->____activationRadius_4 = L_0;
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.CesiumSubScene::get_showActivationRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CesiumSubScene_get_showActivationRadius_mC12A4DBB4A68260FEBCB644D2B97833372BA6D0B (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._showActivationRadius;
		bool L_0 = __this->____showActivationRadius_5;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_showActivationRadius(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_showActivationRadius_mF4486005BE9C63CA8BCF3E17F592C12AF7C46C09 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => this._showActivationRadius = value;
		bool L_0 = ___0_value;
		__this->____showActivationRadius_5 = L_0;
		return;
	}
}
// CesiumForUnity.CesiumGeoreferenceOriginAuthority CesiumForUnity.CesiumSubScene::get_originAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumSubScene_get_originAuthority_mEF66B444989512F7573B2AAB231B0EEE2CB9E40F (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._originAuthority;
		int32_t L_0 = __this->____originAuthority_6;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_originAuthority(CesiumForUnity.CesiumGeoreferenceOriginAuthority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._originAuthority = value;
		int32_t L_0 = ___0_value;
		__this->____originAuthority_6 = L_0;
		// this.UpdateOrigin();
		CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16(__this, NULL);
		// }
		return;
	}
}
// System.Double CesiumForUnity.CesiumSubScene::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_latitude_mA0290204980B2EC581D5D18C7676AA7647E519D4 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._latitude;
		double L_0 = __this->____latitude_7;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_latitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_latitude_m2915D121C4AC1B10CAE173995E989DD2CBAF2CA6 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._latitude = value;
		double L_0 = ___0_value;
		__this->____latitude_7 = L_0;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.LongitudeLatitudeHeight;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 0, NULL);
		// }
		return;
	}
}
// System.Double CesiumForUnity.CesiumSubScene::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_longitude_mCE7895DB74583D570E8499420EE62E61847E3849 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._longitude;
		double L_0 = __this->____longitude_8;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_longitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_longitude_m2D530EC52425BAC17FEC5F73476DE3411664EAA8 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._longitude = value;
		double L_0 = ___0_value;
		__this->____longitude_8 = L_0;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.LongitudeLatitudeHeight;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 0, NULL);
		// }
		return;
	}
}
// System.Double CesiumForUnity.CesiumSubScene::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_height_m1AF05A956D106CF0B39D220B94A44AA991F4D0B5 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._height;
		double L_0 = __this->____height_9;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_height(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_height_mA5CCD60141731AAFCE18C105D4B934AD6828595C (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._height = value;
		double L_0 = ___0_value;
		__this->____height_9 = L_0;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.LongitudeLatitudeHeight;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 0, NULL);
		// }
		return;
	}
}
// System.Double CesiumForUnity.CesiumSubScene::get_ecefX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_ecefX_mD86A6CE5842881A821DE60C2036E71D042CC2036 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._ecefX;
		double L_0 = __this->____ecefX_10;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_ecefX(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_ecefX_mC116EB9CD28FEF332C25245BE00F4D123ED4A747 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._ecefX = value;
		double L_0 = ___0_value;
		__this->____ecefX_10 = L_0;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.EarthCenteredEarthFixed;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 1, NULL);
		// }
		return;
	}
}
// System.Double CesiumForUnity.CesiumSubScene::get_ecefY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_ecefY_m1EFC19306F87F4A982BDA589D818F8594884BCE7 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._ecefY;
		double L_0 = __this->____ecefY_11;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_ecefY(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_ecefY_m89AD3402AB7E4E037FBCBB5459BA4B5F756097A0 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._ecefY = value;
		double L_0 = ___0_value;
		__this->____ecefY_11 = L_0;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.EarthCenteredEarthFixed;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 1, NULL);
		// }
		return;
	}
}
// System.Double CesiumForUnity.CesiumSubScene::get_ecefZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumSubScene_get_ecefZ_m3878CBF813ADE5DEED42A47E93193FCA7C68A078 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._ecefZ;
		double L_0 = __this->____ecefZ_12;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::set_ecefZ(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_set_ecefZ_mE34D55337756FA75CF8C444D4881858CF80747C6 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// this._ecefZ = value;
		double L_0 = ___0_value;
		__this->____ecefZ_12 = L_0;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.EarthCenteredEarthFixed;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::SetOriginEarthCenteredEarthFixed(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_SetOriginEarthCenteredEarthFixed_m96664C58E29FD11F5E4707EFBC2116F4965E7882 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_x, double ___1_y, double ___2_z, const RuntimeMethod* method) 
{
	{
		// this._ecefX = x;
		double L_0 = ___0_x;
		__this->____ecefX_10 = L_0;
		// this._ecefY = y;
		double L_1 = ___1_y;
		__this->____ecefY_11 = L_1;
		// this._ecefZ = z;
		double L_2 = ___2_z;
		__this->____ecefZ_12 = L_2;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.EarthCenteredEarthFixed;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::SetOriginLongitudeLatitudeHeight(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_SetOriginLongitudeLatitudeHeight_m71FE1665415DA9409E5107B1E6B27FBB0B9CB367 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, double ___0_longitude, double ___1_latitude, double ___2_height, const RuntimeMethod* method) 
{
	{
		// this._longitude = longitude;
		double L_0 = ___0_longitude;
		__this->____longitude_8 = L_0;
		// this._latitude = latitude;
		double L_1 = ___1_latitude;
		__this->____latitude_7 = L_1;
		// this._height = height;
		double L_2 = ___2_height;
		__this->____height_9 = L_2;
		// this.originAuthority = CesiumGeoreferenceOriginAuthority.LongitudeLatitudeHeight;
		CesiumSubScene_set_originAuthority_mA053181FA1D5E8963A20C9820EB48699A4664364(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_OnValidate_mB3A6C43D55495CA014F4A7E4F8D749CF42578996 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_0 = NULL;
	bool V_1 = false;
	{
		// CesiumGeoreference georeference = this.GetComponentInParent<CesiumGeoreference>();
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_0;
		L_0 = Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70(__this, Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var);
		V_0 = L_0;
		// if (georeference != null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// georeference.Initialize();
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_4 = V_0;
		NullCheck(L_4);
		CesiumGeoreference_Initialize_mCE868F703AAED6203BFC9A81B7B66154EC1F2237(L_4, NULL);
		// this.UpdateOrigin();
		CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16(__this, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_OnEnable_m669537F1251662E20310D7C5104902C6A13E576E (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F_m1ECCE5CC167145ECB331135801D9CD0061073EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_0 = NULL;
	CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* V_1 = NULL;
	bool V_2 = false;
	CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* V_3 = NULL;
	int32_t V_4 = 0;
	CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* V_5 = NULL;
	bool V_6 = false;
	{
		// CesiumGeoreference georeference = this.GetComponentInParent<CesiumGeoreference>();
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_0;
		L_0 = Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70(__this, Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var);
		V_0 = L_0;
		// if (georeference == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// throw new InvalidOperationException(
		//     "CesiumSubScene is not nested inside a game object with a CesiumGeoreference.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4011F90533DCBEE88324E4E10DAC70BB6B154FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CesiumSubScene_OnEnable_m669537F1251662E20310D7C5104902C6A13E576E_RuntimeMethod_var)));
	}

IL_001e:
	{
		// CesiumSubScene[] subscenes = georeference.GetComponentsInChildren<CesiumSubScene>();
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_5 = V_0;
		NullCheck(L_5);
		CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* L_6;
		L_6 = Component_GetComponentsInChildren_TisCesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F_m1ECCE5CC167145ECB331135801D9CD0061073EB9(L_5, Component_GetComponentsInChildren_TisCesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F_m1ECCE5CC167145ECB331135801D9CD0061073EB9_RuntimeMethod_var);
		V_1 = L_6;
		// foreach (CesiumSubScene scene in subscenes)
		CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* L_7 = V_1;
		V_3 = L_7;
		V_4 = 0;
		goto IL_0059;
	}

IL_002d:
	{
		// foreach (CesiumSubScene scene in subscenes)
		CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
		// if (scene == this)
		CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* L_12 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, __this, NULL);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0044;
		}
	}
	{
		// continue;
		goto IL_0053;
	}

IL_0044:
	{
		// scene.gameObject.SetActive(false);
		CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* L_15 = V_5;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0053:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		// foreach (CesiumSubScene scene in subscenes)
		int32_t L_18 = V_4;
		CesiumSubSceneU5BU5D_tAED01F126E4EF6DF967BD5A4B02D0D5C965F5E0F* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		// this.UpdateOrigin();
		CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::UpdateOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16 (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_5 = NULL;
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	{
		// if (this._originAuthority == CesiumGeoreferenceOriginAuthority.LongitudeLatitudeHeight)
		int32_t L_0 = __this->____originAuthority_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// double3 ecef = CesiumWgs84Ellipsoid.LongitudeLatitudeHeightToEarthCenteredEarthFixed(new double3(
		//     this._longitude,
		//     this._latitude,
		//     this._height
		// ));
		double L_2 = __this->____longitude_8;
		double L_3 = __this->____latitude_7;
		double L_4 = __this->____height_9;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6;
		L_6 = CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed_m6998B8AC075149178533D1C516FA95F8AA04EEA7(L_5, NULL);
		V_1 = L_6;
		// this._ecefX = ecef.x;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7 = V_1;
		double L_8 = L_7.___x_0;
		__this->____ecefX_10 = L_8;
		// this._ecefY = ecef.y;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9 = V_1;
		double L_10 = L_9.___y_1;
		__this->____ecefY_11 = L_10;
		// this._ecefZ = ecef.z;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_11 = V_1;
		double L_12 = L_11.___z_2;
		__this->____ecefZ_12 = L_12;
	}

IL_0051:
	{
		// if (this._originAuthority == CesiumGeoreferenceOriginAuthority.EarthCenteredEarthFixed)
		int32_t L_13 = __this->____originAuthority_6;
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		// double3 llh = CesiumWgs84Ellipsoid.EarthCenteredEarthFixedToLongitudeLatitudeHeight(new double3(
		//     this._ecefX,
		//     this._ecefY,
		//     this._ecefZ
		// ));
		double L_15 = __this->____ecefX_10;
		double L_16 = __this->____ecefY_11;
		double L_17 = __this->____ecefZ_12;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_18;
		memset((&L_18), 0, sizeof(L_18));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_18), L_15, L_16, L_17, /*hidden argument*/NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_19;
		L_19 = CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mBD814A88230A66A8651170CD363EE449BB144C12(L_18, NULL);
		V_3 = L_19;
		// this._longitude = llh.x;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_20 = V_3;
		double L_21 = L_20.___x_0;
		__this->____longitude_8 = L_21;
		// this._latitude = llh.y;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_22 = V_3;
		double L_23 = L_22.___y_1;
		__this->____latitude_7 = L_23;
		// this._height = llh.z;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_24 = V_3;
		double L_25 = L_24.___z_2;
		__this->____height_9 = L_25;
	}

IL_00a1:
	{
		// if (this.isActiveAndEnabled)
		bool L_26;
		L_26 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		V_4 = L_26;
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_0131;
		}
	}
	{
		// CesiumGeoreference georeference = this.GetComponentInParent<CesiumGeoreference>();
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_28;
		L_28 = Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70(__this, Component_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m47BADCB372038604B02CA8FE35482629C6A35B70_RuntimeMethod_var);
		V_5 = L_28;
		// if (georeference == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_29 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00d2;
		}
	}
	{
		// throw new InvalidOperationException("CesiumSubScene is not nested inside a game object with a CesiumGeoreference.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4011F90533DCBEE88324E4E10DAC70BB6B154FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CesiumSubScene_UpdateOrigin_m8EE1BE76D56461997D26717F1E0A0AA08261AD16_RuntimeMethod_var)));
	}

IL_00d2:
	{
		// double3 ecefPosition = new double3(
		//     this._ecefX,
		//     this._ecefY,
		//     this._ecefZ
		// );
		double L_33 = __this->____ecefX_10;
		double L_34 = __this->____ecefY_11;
		double L_35 = __this->____ecefZ_12;
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&V_6), L_33, L_34, L_35, NULL);
		// if (this.originAuthority == CesiumGeoreferenceOriginAuthority.EarthCenteredEarthFixed)
		int32_t L_36;
		L_36 = CesiumSubScene_get_originAuthority_mEF66B444989512F7573B2AAB231B0EEE2CB9E40F_inline(__this, NULL);
		V_8 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_0116;
		}
	}
	{
		// georeference.SetOriginEarthCenteredEarthFixed(
		//     this._ecefX,
		//     this._ecefY,
		//     this._ecefZ);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_38 = V_5;
		double L_39 = __this->____ecefX_10;
		double L_40 = __this->____ecefY_11;
		double L_41 = __this->____ecefZ_12;
		NullCheck(L_38);
		CesiumGeoreference_SetOriginEarthCenteredEarthFixed_m1F2192BF30202E41193DEC2B566A0870650F08A3(L_38, L_39, L_40, L_41, NULL);
		goto IL_0130;
	}

IL_0116:
	{
		// georeference.SetOriginLongitudeLatitudeHeight(
		//     this._longitude,
		//     this._latitude,
		//     this._height);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_42 = V_5;
		double L_43 = __this->____longitude_8;
		double L_44 = __this->____latitude_7;
		double L_45 = __this->____height_9;
		NullCheck(L_42);
		CesiumGeoreference_SetOriginLongitudeLatitudeHeight_mC4BF385DEE24B22CE38F079525B1A786E0961154(L_42, L_43, L_44, L_45, NULL);
	}

IL_0130:
	{
	}

IL_0131:
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumSubScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumSubScene__ctor_mE16F83913A2A748F55E4CB55D03B5FA22EEA108F (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// private double _activationRadius = 1000;
		__this->____activationRadius_4 = (1000.0);
		// private bool _showActivationRadius = true;
		__this->____showActivationRadius_5 = (bool)1;
		// private CesiumGeoreferenceOriginAuthority _originAuthority =
		//     CesiumGeoreferenceOriginAuthority.LongitudeLatitudeHeight;
		__this->____originAuthority_6 = 0;
		// private double _latitude = 39.736401;
		__this->____latitude_7 = (39.736401000000001);
		// private double _longitude = -105.25737;
		__this->____longitude_8 = (-105.25736999999999);
		// private double _height = 2250.0;
		__this->____height_9 = (2250.0);
		// private double _ecefX = 6378137.0;
		__this->____ecefX_10 = (6378137.0);
		// private double _ecefY = 0.0;
		__this->____ecefY_11 = (0.0);
		// private double _ecefZ = 0.0;
		__this->____ecefZ_12 = (0.0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.CesiumTileExcluder::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_OnEnable_mFF4A13B7E736F32BEE62818292AB6E2A4B42DDA6 (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* V_0 = NULL;
	Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* V_1 = NULL;
	int32_t V_2 = 0;
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_3 = NULL;
	{
		// Cesium3DTileset[] tilesets = this.GetComponentsInChildren<Cesium3DTileset>();
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_0;
		L_0 = Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F(__this, Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Cesium3DTileset tileset in tilesets)
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0021;
	}

IL_000f:
	{
		// foreach (Cesium3DTileset tileset in tilesets)
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// this.AddToTileset(tileset);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_6 = V_3;
		CesiumTileExcluder_AddToTileset_m0BCB0C9B2FE2FE4B3B869EB8E99E78583830EF23(__this, L_6, NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// foreach (Cesium3DTileset tileset in tilesets)
		int32_t L_8 = V_2;
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileExcluder::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_OnDisable_m1B3F4456992703073011ED2B21BEAD10FF78718D (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* V_0 = NULL;
	Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* V_1 = NULL;
	int32_t V_2 = 0;
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_3 = NULL;
	{
		// Cesium3DTileset[] tilesets = this.GetComponentsInChildren<Cesium3DTileset>();
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_0;
		L_0 = Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F(__this, Component_GetComponentsInChildren_TisCesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_mDCF7749C29EDEB48A678C6F570CC357C0B3DC91F_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Cesium3DTileset tileset in tilesets)
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0021;
	}

IL_000f:
	{
		// foreach (Cesium3DTileset tileset in tilesets)
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// this.RemoveFromTileset(tileset);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_6 = V_3;
		CesiumTileExcluder_RemoveFromTileset_mB8C2B223F4C6ED391F77219E76C4AC575F9F4717(__this, L_6, NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// foreach (Cesium3DTileset tileset in tilesets)
		int32_t L_8 = V_2;
		Cesium3DTilesetU5BU5D_t20C7BD2D6878B90AA36C5F4123785F341966A56D* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileExcluder::AddToTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_AddToTileset_m0BCB0C9B2FE2FE4B3B869EB8E99E78583830EF23 (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reinterop.ReinteropInitializer.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		ReinteropInitializer_Initialize_mC21B2A7426F23F6D19F90EB4462149EEC23CCF79(NULL);
		// DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset(Reinterop.ObjectHandleUtility.CreateHandle(this), Reinterop.ObjectHandleUtility.CreateHandle(tileset));
		intptr_t L_0;
		L_0 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_1 = ___0_tileset;
		intptr_t L_2;
		L_2 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_1, NULL);
		CesiumTileExcluder_DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset_mA26CFD34ED2F16147825AA156F341D6DA641E5C6(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileExcluder::RemoveFromTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_RemoveFromTileset_mB8C2B223F4C6ED391F77219E76C4AC575F9F4717 (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reinterop.ReinteropInitializer.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		ReinteropInitializer_Initialize_mC21B2A7426F23F6D19F90EB4462149EEC23CCF79(NULL);
		// DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset(Reinterop.ObjectHandleUtility.CreateHandle(this), Reinterop.ObjectHandleUtility.CreateHandle(tileset));
		intptr_t L_0;
		L_0 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_1 = ___0_tileset;
		intptr_t L_2;
		L_2 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_1, NULL);
		CesiumTileExcluder_DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset_m8734DF270B953FCD638EFA43FFE6014211D700B8(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileExcluder::DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset_mA26CFD34ED2F16147825AA156F341D6DA641E5C6 (intptr_t ___0_thiz, intptr_t ___1_tileset, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumTileExcluder_AddToTileset)(___0_thiz, ___1_tileset);
	#else
	il2cppPInvokeFunc(___0_thiz, ___1_tileset);
	#endif

}
// System.Void CesiumForUnity.CesiumTileExcluder::DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder_DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset_m8734DF270B953FCD638EFA43FFE6014211D700B8 (intptr_t ___0_thiz, intptr_t ___1_tileset, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumTileExcluder_RemoveFromTileset)(___0_thiz, ___1_tileset);
	#else
	il2cppPInvokeFunc(___0_thiz, ___1_tileset);
	#endif

}
// System.Void CesiumForUnity.CesiumTileExcluder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileExcluder__ctor_m14966A6BCD048E362AD35BE8A985F59242D8200B (CesiumTileExcluder_tF02993434E73D2A34893E5364363EFDD5078D4EC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CesiumForUnity.CesiumTileMapServiceRasterOverlay::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CesiumTileMapServiceRasterOverlay_get_url_mA3D90B423BF78649EB2D867D67F54F6E5D0D7FAF (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	{
		// get => this._url;
		String_t* L_0 = __this->____url_10;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_set_url_m6F575110A4C4E659FC0D4F499DE4A8CF861A89F8 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// this._url = value;
		String_t* L_0 = ___0_value;
		__this->____url_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____url_10), (void*)L_0);
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.CesiumTileMapServiceRasterOverlay::get_specifyZoomLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CesiumTileMapServiceRasterOverlay_get_specifyZoomLevels_m791B9557F009F4888E20D9E748DD78A52A0F672A (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	{
		// get => this._specifyZoomLevels;
		bool L_0 = __this->____specifyZoomLevels_11;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::set_specifyZoomLevels(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_set_specifyZoomLevels_mFA6D5C93ACF7CA9C9339DAEFA8B4FD60988BBE1F (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// this._specifyZoomLevels = value;
		bool L_0 = ___0_value;
		__this->____specifyZoomLevels_11 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumTileMapServiceRasterOverlay::get_minimumLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumTileMapServiceRasterOverlay_get_minimumLevel_m7DC6E298F3C460C63A25E8D0091E7E09E904D6F5 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	{
		// get => this._minimumLevel;
		int32_t L_0 = __this->____minimumLevel_12;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::set_minimumLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_set_minimumLevel_m2FB9DC98996C1141A9314A4ABE4B5029E5A05C29 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._minimumLevel = value;
		int32_t L_0 = ___0_value;
		__this->____minimumLevel_12 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumTileMapServiceRasterOverlay::get_maximumLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumTileMapServiceRasterOverlay_get_maximumLevel_m4C57B561BC7ABA0A9763D5787098AD2ED7FF5A14 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumLevel;
		int32_t L_0 = __this->____maximumLevel_13;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::set_maximumLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_set_maximumLevel_m78118F71A490D905C39F69509D6AF6789DA5B613 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._maximumLevel = value;
		int32_t L_0 = ___0_value;
		__this->____maximumLevel_13 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::AddToTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_AddToTileset_m599BEED2D3FA0E07382C7701588F69BE3AF73378 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation == null || this._implementation.IsInvalid)
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_0 = __this->____implementation_14;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_1 = __this->____implementation_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new NotImplementedException("The native implementation is missing so AddToTileset cannot be invoked. This may be caused by a missing call to CreateImplementation in one of your constructors, or it may be that the entire native implementation shared library is missing or out of date.");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5642CA1AC4A79EA83539EBB6D8B5E1410413E219)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CesiumTileMapServiceRasterOverlay_AddToTileset_m599BEED2D3FA0E07382C7701588F69BE3AF73378_RuntimeMethod_var)));
	}

IL_0027:
	{
		// DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset(Reinterop.ObjectHandleUtility.CreateHandle(this), _implementation, Reinterop.ObjectHandleUtility.CreateHandle(tileset));
		intptr_t L_5;
		L_5 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_6 = __this->____implementation_14;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_7 = ___0_tileset;
		intptr_t L_8;
		L_8 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_7, NULL);
		CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset_m6F396522416A1E7E4198D43A029CBAD32E4DC7A9(L_5, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::RemoveFromTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_RemoveFromTileset_m972E3917D80448731E8A78F0B7957EA8FF492296 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation == null || this._implementation.IsInvalid)
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_0 = __this->____implementation_14;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_1 = __this->____implementation_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new NotImplementedException("The native implementation is missing so RemoveFromTileset cannot be invoked. This may be caused by a missing call to CreateImplementation in one of your constructors, or it may be that the entire native implementation shared library is missing or out of date.");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48E8AB7247D551A29855167A89CC4504D9A5C00B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CesiumTileMapServiceRasterOverlay_RemoveFromTileset_m972E3917D80448731E8A78F0B7957EA8FF492296_RuntimeMethod_var)));
	}

IL_0027:
	{
		// DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset(Reinterop.ObjectHandleUtility.CreateHandle(this), _implementation, Reinterop.ObjectHandleUtility.CreateHandle(tileset));
		intptr_t L_5;
		L_5 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_6 = __this->____implementation_14;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_7 = ___0_tileset;
		intptr_t L_8;
		L_8 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_7, NULL);
		CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset_mD49D86C525AAF5EF0B2486D10BD7E62057AF5AC5(L_5, L_6, L_8, NULL);
		// }
		return;
	}
}
// CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle CesiumForUnity.CesiumTileMapServiceRasterOverlay::get_NativeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* CesiumTileMapServiceRasterOverlay_get_NativeImplementation_m5AC211029B05776F7E16F2CFA8403D4B4F978348 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* V_0 = NULL;
	{
		// get { return _implementation; }
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_0 = __this->____implementation_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _implementation; }
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_1 = V_0;
		return L_1;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::CreateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_CreateImplementation_mCC557FC1C6F43D141D3F03608BA759481F40C973 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reinterop.ReinteropInitializer.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		ReinteropInitializer_Initialize_mC21B2A7426F23F6D19F90EB4462149EEC23CCF79(NULL);
		// System.Diagnostics.Debug.Assert(this._implementation == null, "Implementation is already created. Be sure to call CreateImplementation only once.");
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_0 = __this->____implementation_14;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((RuntimeObject*)(ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), _stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC, NULL);
		// this._implementation = new ImplementationHandle(this);
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_1 = (ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD*)il2cpp_codegen_object_new(ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ImplementationHandle__ctor_m639BE448B6FF7F0ACD915173645BA90A04CB3FA0(L_1, __this, NULL);
		__this->____implementation_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_14), (void*)L_1);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DisposeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DisposeImplementation_mB4CF7C6F2CA318C79588547F710F681BAB34AFE3 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation != null && !this._implementation.IsInvalid)
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_0 = __this->____implementation_14;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_1 = __this->____implementation_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this._implementation.Dispose();
		ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* L_4 = __this->____implementation_14;
		NullCheck(L_4);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_4, NULL);
	}

IL_002a:
	{
		// this._implementation = null;
		__this->____implementation_14 = (ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_14), (void*)(ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD*)NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_Dispose_m36689D5180347F585C8D2C2D24E551C09C4A3113 (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	{
		// this.DisposeImplementation();
		CesiumTileMapServiceRasterOverlay_DisposeImplementation_mB4CF7C6F2CA318C79588547F710F681BAB34AFE3(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay__ctor_m13205A8D3C47824F0774F710E02E50E2A3B3F42B (CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _url = "";
		__this->____url_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____url_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private bool _specifyZoomLevels = false;
		__this->____specifyZoomLevels_11 = (bool)0;
		// private int _minimumLevel = 0;
		__this->____minimumLevel_12 = 0;
		// private int _maximumLevel = 10;
		__this->____maximumLevel_13 = ((int32_t)10);
		// private ImplementationHandle _implementation = null;
		__this->____implementation_14 = (ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_14), (void*)(ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD*)NULL);
		// public CesiumTileMapServiceRasterOverlay()
		CesiumRasterOverlay__ctor_mBF08B99B21CEFD240A84AE711451E8270BCE8FA1(__this, NULL);
		// CreateImplementation();
		CesiumTileMapServiceRasterOverlay_CreateImplementation_mCC557FC1C6F43D141D3F03608BA759481F40C973(__this, NULL);
		// }
		return;
	}
}
// System.IntPtr CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation_mA476AD27477286AD369C62D0E1FC2E48F5D0EEBF (intptr_t ___0_thiz, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation)(___0_thiz);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_thiz);
	#endif

	return returnValue;
}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation_m786E9D4A980EA7A9695BC389D40EFBB2FAD4FD44 (intptr_t ___0_implementation, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation)(___0_implementation);
	#else
	il2cppPInvokeFunc(___0_implementation);
	#endif

}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset(System.IntPtr,CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset_m6F396522416A1E7E4198D43A029CBAD32E4DC7A9 (intptr_t ___0_thiz, ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_implementation' to native representation
	void* ____1_implementation_marshaled = NULL;
	if (___1_implementation == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("implementation"), NULL);
	bool ___safeHandle_reference_incremented_for____1_implementation = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_implementation, (&___safeHandle_reference_incremented_for____1_implementation), NULL);
	____1_implementation_marshaled = reinterpret_cast<void*>((___1_implementation)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_AddToTileset)(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#else
	il2cppPInvokeFunc(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#endif

	// Marshaling cleanup of parameter '___1_implementation' native representation
	if (___safeHandle_reference_incremented_for____1_implementation)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_implementation, NULL);
	}

}
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset(System.IntPtr,CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset_mD49D86C525AAF5EF0B2486D10BD7E62057AF5AC5 (intptr_t ___0_thiz, ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_implementation' to native representation
	void* ____1_implementation_marshaled = NULL;
	if (___1_implementation == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("implementation"), NULL);
	bool ___safeHandle_reference_incremented_for____1_implementation = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_implementation, (&___safeHandle_reference_incremented_for____1_implementation), NULL);
	____1_implementation_marshaled = reinterpret_cast<void*>((___1_implementation)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_RemoveFromTileset)(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#else
	il2cppPInvokeFunc(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#endif

	// Marshaling cleanup of parameter '___1_implementation' native representation
	if (___safeHandle_reference_incremented_for____1_implementation)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_implementation, NULL);
	}

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle::.ctor(CesiumForUnity.CesiumTileMapServiceRasterOverlay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationHandle__ctor_m639BE448B6FF7F0ACD915173645BA90A04CB3FA0 (ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* __this, CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* ___0_managed, const RuntimeMethod* method) 
{
	{
		// public ImplementationHandle(CesiumTileMapServiceRasterOverlay managed) : base(true)
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// SetHandle(DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation(Reinterop.ObjectHandleUtility.CreateHandle(managed)));
		CesiumTileMapServiceRasterOverlay_t1F481EFD3D3A33A76BCB77EC506D7F63DF404AC2* L_0 = ___0_managed;
		intptr_t L_1;
		L_1 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_0, NULL);
		intptr_t L_2;
		L_2 = CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_CreateImplementation_mA476AD27477286AD369C62D0E1FC2E48F5D0EEBF(L_1, NULL);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.CesiumTileMapServiceRasterOverlay/ImplementationHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImplementationHandle_ReleaseHandle_m507421BB1C8AE94FBA67058C1B7F7920548F90C4 (ImplementationHandle_t15013B1F8138540C8B2BD19EF83A6D9A759D16FD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation(this.handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		CesiumTileMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumTileMapServiceRasterOverlay_DestroyImplementation_m786E9D4A980EA7A9695BC389D40EFBB2FAD4FD44(L_0, NULL);
		// return true;
		V_0 = (bool)1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_baseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CesiumWebMapServiceRasterOverlay_get_baseUrl_m428CDE8D19FD6288B3D8C7170CCB18B95DE92C86 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// get => this._baseUrl;
		String_t* L_0 = __this->____baseUrl_10;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::set_baseUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_set_baseUrl_m1187905A3A45CB2DA62E84BEE51C5B3A787BB45E (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// this._baseUrl = value;
		String_t* L_0 = ___0_value;
		__this->____baseUrl_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseUrl_10), (void*)L_0);
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.String CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_layers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CesiumWebMapServiceRasterOverlay_get_layers_m5790E71B0C9DEFE7E5178F58F8B38524DF7EA748 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// get => this._layers;
		String_t* L_0 = __this->____layers_11;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::set_layers(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_set_layers_m47E7FD4991C4725E238B10BBD972A7DCA4B4F3F0 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// this._layers = value;
		String_t* L_0 = ___0_value;
		__this->____layers_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____layers_11), (void*)L_0);
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_tileWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumWebMapServiceRasterOverlay_get_tileWidth_mD77847313E64AC4F0FD5C6A61E8B19A1BF6EB3F0 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// get => this._tileWidth;
		int32_t L_0 = __this->____tileWidth_12;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::set_tileWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_set_tileWidth_m675C115D64D4800BC268FC06D04649EE3719D4BA (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._tileWidth = value;
		int32_t L_0 = ___0_value;
		__this->____tileWidth_12 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_tileHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumWebMapServiceRasterOverlay_get_tileHeight_m3E5B11102C3DF748E68E8170CFD5933BFDF45497 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// get => this._tileHeight;
		int32_t L_0 = __this->____tileHeight_13;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::set_tileHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_set_tileHeight_m8EFB1BB63C57D8EDB972D947A656DB6DA54B9FAD (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._tileHeight = value;
		int32_t L_0 = ___0_value;
		__this->____tileHeight_13 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_minimumLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumWebMapServiceRasterOverlay_get_minimumLevel_m8641AD764BED9AD89D8F1C64379A8846F7E6290E (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// get => this._minimumLevel;
		int32_t L_0 = __this->____minimumLevel_14;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::set_minimumLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_set_minimumLevel_m644F7660404DF19CC475C965BC7B41A5B89F70EB (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._minimumLevel = value;
		int32_t L_0 = ___0_value;
		__this->____minimumLevel_14 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Int32 CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_maximumLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CesiumWebMapServiceRasterOverlay_get_maximumLevel_mF08915714AC067D8B4A5A74E04C67FE12D925B92 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumLevel;
		int32_t L_0 = __this->____maximumLevel_15;
		return L_0;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::set_maximumLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_set_maximumLevel_m975A6FCFB66A9652910DD81BCCD67B7A1CFBF660 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// this._maximumLevel = value;
		int32_t L_0 = ___0_value;
		__this->____maximumLevel_15 = L_0;
		// this.Refresh();
		CesiumRasterOverlay_Refresh_mB368EFFDB8862E09B85CE8716B13F6F0B75AA168(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::AddToTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_AddToTileset_m8536A1B6442E5F55E21D907844A475C36664B2CE (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation == null || this._implementation.IsInvalid)
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_0 = __this->____implementation_16;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_1 = __this->____implementation_16;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new NotImplementedException("The native implementation is missing so AddToTileset cannot be invoked. This may be caused by a missing call to CreateImplementation in one of your constructors, or it may be that the entire native implementation shared library is missing or out of date.");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5642CA1AC4A79EA83539EBB6D8B5E1410413E219)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CesiumWebMapServiceRasterOverlay_AddToTileset_m8536A1B6442E5F55E21D907844A475C36664B2CE_RuntimeMethod_var)));
	}

IL_0027:
	{
		// DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset(Reinterop.ObjectHandleUtility.CreateHandle(this), _implementation, Reinterop.ObjectHandleUtility.CreateHandle(tileset));
		intptr_t L_5;
		L_5 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_6 = __this->____implementation_16;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_7 = ___0_tileset;
		intptr_t L_8;
		L_8 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_7, NULL);
		CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset_mB480679FDE7D92759AA9E376B391BF7B156919E6(L_5, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::RemoveFromTileset(CesiumForUnity.Cesium3DTileset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_RemoveFromTileset_m4363EE36DD61D1399C010730170646DDDCCDF097 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* ___0_tileset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation == null || this._implementation.IsInvalid)
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_0 = __this->____implementation_16;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_1 = __this->____implementation_16;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new NotImplementedException("The native implementation is missing so RemoveFromTileset cannot be invoked. This may be caused by a missing call to CreateImplementation in one of your constructors, or it may be that the entire native implementation shared library is missing or out of date.");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48E8AB7247D551A29855167A89CC4504D9A5C00B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CesiumWebMapServiceRasterOverlay_RemoveFromTileset_m4363EE36DD61D1399C010730170646DDDCCDF097_RuntimeMethod_var)));
	}

IL_0027:
	{
		// DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset(Reinterop.ObjectHandleUtility.CreateHandle(this), _implementation, Reinterop.ObjectHandleUtility.CreateHandle(tileset));
		intptr_t L_5;
		L_5 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_6 = __this->____implementation_16;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_7 = ___0_tileset;
		intptr_t L_8;
		L_8 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_7, NULL);
		CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset_m1A2D9F6776AD725516EDD7943C0393311D83C5E5(L_5, L_6, L_8, NULL);
		// }
		return;
	}
}
// CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle CesiumForUnity.CesiumWebMapServiceRasterOverlay::get_NativeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* CesiumWebMapServiceRasterOverlay_get_NativeImplementation_mADDAE0F7EA8DCDB6F9B07DBA56E3F94CEB05228D (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* V_0 = NULL;
	{
		// get { return _implementation; }
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_0 = __this->____implementation_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _implementation; }
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_1 = V_0;
		return L_1;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::CreateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_CreateImplementation_m4C0860193FA4213D82AEB4121662E7253C2B2CB2 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reinterop.ReinteropInitializer.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		ReinteropInitializer_Initialize_mC21B2A7426F23F6D19F90EB4462149EEC23CCF79(NULL);
		// System.Diagnostics.Debug.Assert(this._implementation == null, "Implementation is already created. Be sure to call CreateImplementation only once.");
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_0 = __this->____implementation_16;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((RuntimeObject*)(ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), _stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC, NULL);
		// this._implementation = new ImplementationHandle(this);
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_1 = (ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59*)il2cpp_codegen_object_new(ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ImplementationHandle__ctor_m0DA922A43F88A0C9384EB9E2C0C697FDE330A999(L_1, __this, NULL);
		__this->____implementation_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_16), (void*)L_1);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DisposeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DisposeImplementation_m72AA46F7579DEB9E4D164CDE6EDCC54A0D75DC4A (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation != null && !this._implementation.IsInvalid)
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_0 = __this->____implementation_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_1 = __this->____implementation_16;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this._implementation.Dispose();
		ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* L_4 = __this->____implementation_16;
		NullCheck(L_4);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_4, NULL);
	}

IL_002a:
	{
		// this._implementation = null;
		__this->____implementation_16 = (ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_16), (void*)(ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59*)NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_Dispose_m8D6A038C4FBB42E3ADE9FDA4831097020DAB4997 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	{
		// this.DisposeImplementation();
		CesiumWebMapServiceRasterOverlay_DisposeImplementation_m72AA46F7579DEB9E4D164CDE6EDCC54A0D75DC4A(__this, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay__ctor_mD5F9C32A48396D1A8CD5B556C38AD6D474B985A3 (CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _baseUrl = "";
		__this->____baseUrl_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseUrl_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string _layers = "";
		__this->____layers_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____layers_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private int _tileWidth = 256;
		__this->____tileWidth_12 = ((int32_t)256);
		// private int _tileHeight = 256;
		__this->____tileHeight_13 = ((int32_t)256);
		// private int _minimumLevel = 0;
		__this->____minimumLevel_14 = 0;
		// private int _maximumLevel = 14;
		__this->____maximumLevel_15 = ((int32_t)14);
		// private ImplementationHandle _implementation = null;
		__this->____implementation_16 = (ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_16), (void*)(ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59*)NULL);
		// public CesiumWebMapServiceRasterOverlay()
		CesiumRasterOverlay__ctor_mBF08B99B21CEFD240A84AE711451E8270BCE8FA1(__this, NULL);
		// CreateImplementation();
		CesiumWebMapServiceRasterOverlay_CreateImplementation_m4C0860193FA4213D82AEB4121662E7253C2B2CB2(__this, NULL);
		// }
		return;
	}
}
// System.IntPtr CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation_m8C54A643D5AA0555D0E3037E3A975C1C9C5DDD54 (intptr_t ___0_thiz, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation)(___0_thiz);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_thiz);
	#endif

	return returnValue;
}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation_mB748C8C3EB397CE220E9FBBE9A2B4896772D7829 (intptr_t ___0_implementation, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation)(___0_implementation);
	#else
	il2cppPInvokeFunc(___0_implementation);
	#endif

}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset(System.IntPtr,CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset_mB480679FDE7D92759AA9E376B391BF7B156919E6 (intptr_t ___0_thiz, ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_implementation' to native representation
	void* ____1_implementation_marshaled = NULL;
	if (___1_implementation == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("implementation"), NULL);
	bool ___safeHandle_reference_incremented_for____1_implementation = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_implementation, (&___safeHandle_reference_incremented_for____1_implementation), NULL);
	____1_implementation_marshaled = reinterpret_cast<void*>((___1_implementation)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_AddToTileset)(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#else
	il2cppPInvokeFunc(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#endif

	// Marshaling cleanup of parameter '___1_implementation' native representation
	if (___safeHandle_reference_incremented_for____1_implementation)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_implementation, NULL);
	}

}
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay::DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset(System.IntPtr,CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset_m1A2D9F6776AD725516EDD7943C0393311D83C5E5 (intptr_t ___0_thiz, ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* ___1_implementation, intptr_t ___2_tileset, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_implementation' to native representation
	void* ____1_implementation_marshaled = NULL;
	if (___1_implementation == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("implementation"), NULL);
	bool ___safeHandle_reference_incremented_for____1_implementation = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_implementation, (&___safeHandle_reference_incremented_for____1_implementation), NULL);
	____1_implementation_marshaled = reinterpret_cast<void*>((___1_implementation)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_RemoveFromTileset)(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#else
	il2cppPInvokeFunc(___0_thiz, ____1_implementation_marshaled, ___2_tileset);
	#endif

	// Marshaling cleanup of parameter '___1_implementation' native representation
	if (___safeHandle_reference_incremented_for____1_implementation)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_implementation, NULL);
	}

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle::.ctor(CesiumForUnity.CesiumWebMapServiceRasterOverlay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationHandle__ctor_m0DA922A43F88A0C9384EB9E2C0C697FDE330A999 (ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* __this, CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* ___0_managed, const RuntimeMethod* method) 
{
	{
		// public ImplementationHandle(CesiumWebMapServiceRasterOverlay managed) : base(true)
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// SetHandle(DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation(Reinterop.ObjectHandleUtility.CreateHandle(managed)));
		CesiumWebMapServiceRasterOverlay_tAC8E1DB962910E2BD316ADEDF330D700184E662C* L_0 = ___0_managed;
		intptr_t L_1;
		L_1 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_0, NULL);
		intptr_t L_2;
		L_2 = CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_CreateImplementation_m8C54A643D5AA0555D0E3037E3A975C1C9C5DDD54(L_1, NULL);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.CesiumWebMapServiceRasterOverlay/ImplementationHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImplementationHandle_ReleaseHandle_m74017DF6755947C6CED32CE6196581C324413D1C (ImplementationHandle_t82F3C7DEC6674D08AA6A625530780417D8B48E59* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation(this.handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		CesiumWebMapServiceRasterOverlay_DotNet_CesiumForUnity_CesiumWebMapServiceRasterOverlay_DestroyImplementation_mB748C8C3EB397CE220E9FBBE9A2B4896772D7829(L_0, NULL);
		// return true;
		V_0 = (bool)1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::GetRadii()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_GetRadii_m10F8E0E42E21410101AB3F22EDFD1426645C43DD (const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var returnValue = new Unity.Mathematics.double3();
		il2cpp_codegen_initobj((&V_0), sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4));
		// DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii(&returnValue);
		CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii_m678096AAA73014B9DCF2EABF67B38ADE1CC4D61A((double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&V_0)), NULL);
		// return returnValue;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = V_0;
		V_1 = L_0;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = V_1;
		return L_1;
	}
}
// System.Double CesiumForUnity.CesiumWgs84Ellipsoid::GetMaximumRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumWgs84Ellipsoid_GetMaximumRadius_mAC46B7C010A616C1C451B4FA4FA5AC74CD2CEB32 (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// return math.cmax(CesiumWgs84Ellipsoid.GetRadii());
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0;
		L_0 = CesiumWgs84Ellipsoid_GetRadii_m10F8E0E42E21410101AB3F22EDFD1426645C43DD(NULL);
		double L_1;
		L_1 = math_cmax_mD1CA685960C6D3E73AE61E158449D1F136B2D8D9_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		double L_2 = V_0;
		return L_2;
	}
}
// System.Double CesiumForUnity.CesiumWgs84Ellipsoid::GetMinimumRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CesiumWgs84Ellipsoid_GetMinimumRadius_m4A64EF6A390B917F2FE8F1BA694D3206CDB6A2DA (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// return math.cmin(CesiumWgs84Ellipsoid.GetRadii());
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0;
		L_0 = CesiumWgs84Ellipsoid_GetRadii_m10F8E0E42E21410101AB3F22EDFD1426645C43DD(NULL);
		double L_1;
		L_1 = math_cmin_mD62CF2BF7B13402E46E966F3BED814004E5D8C65_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		double L_2 = V_0;
		return L_2;
	}
}
// System.Nullable`1<Unity.Mathematics.double3> CesiumForUnity.CesiumWgs84Ellipsoid::ScaleToGeodeticSurface(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 CesiumWgs84Ellipsoid_ScaleToGeodeticSurface_m08B146D48F8F71E0166878912AD2CD073D212C57 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_earthCenteredEarthFixed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0x0;
	Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var returnValue = new Unity.Mathematics.double3();
		il2cpp_codegen_initobj((&V_0), sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4));
		// var result = DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface(&earthCenteredEarthFixed, &returnValue);
		uint8_t L_0;
		L_0 = CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface_m593719466F71E4789AB1B165A587ACBD5B0809A1((double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&___0_earthCenteredEarthFixed)), (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&V_0)), NULL);
		V_1 = L_0;
		// return result == 1 ? returnValue : null;
		uint8_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8));
		Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 L_2 = V_2;
		G_B3_0 = L_2;
		goto IL_002b;
	}

IL_0025:
	{
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3 = V_0;
		Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mA6909A447FCEBF13D2C07AF3F2104AFE9167A93E_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_002b:
	{
		V_3 = G_B3_0;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		Nullable_1_t292B6499B4FB064453057DDA8BEED95AAE5424D8 L_5 = V_3;
		return L_5;
	}
}
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::GeodeticSurfaceNormal(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_GeodeticSurfaceNormal_m2A8AD10F5660C33A7CF43469CA09726F70E984B9 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_earthCenteredEarthFixed, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var returnValue = new Unity.Mathematics.double3();
		il2cpp_codegen_initobj((&V_0), sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4));
		// DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal(&earthCenteredEarthFixed, &returnValue);
		CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal_m8438EEC0C21734C52F3E4ECC866D40833412C4E7((double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&___0_earthCenteredEarthFixed)), (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&V_0)), NULL);
		// return returnValue;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = V_0;
		V_1 = L_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = V_1;
		return L_1;
	}
}
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::LongitudeLatitudeHeightToEarthCenteredEarthFixed(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed_m6998B8AC075149178533D1C516FA95F8AA04EEA7 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_longitudeLatitudeHeight, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var returnValue = new Unity.Mathematics.double3();
		il2cpp_codegen_initobj((&V_0), sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4));
		// DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed(&longitudeLatitudeHeight, &returnValue);
		CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed_mF5B0648E1CC82054D9ADDC8043EE9EF8DA9D8377((double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&___0_longitudeLatitudeHeight)), (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&V_0)), NULL);
		// return returnValue;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = V_0;
		V_1 = L_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = V_1;
		return L_1;
	}
}
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::EarthCenteredEarthFixedToLongitudeLatitudeHeight(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mBD814A88230A66A8651170CD363EE449BB144C12 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_earthCenteredEarthFixed, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var returnValue = new Unity.Mathematics.double3();
		il2cpp_codegen_initobj((&V_0), sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4));
		// DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight(&earthCenteredEarthFixed, &returnValue);
		CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mF73D8C75E992EE3265AA399BB86B63427CC7FD81((double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&___0_earthCenteredEarthFixed)), (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)((uintptr_t)(&V_0)), NULL);
		// return returnValue;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = V_0;
		V_1 = L_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = V_1;
		return L_1;
	}
}
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii(Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii_m678096AAA73014B9DCF2EABF67B38ADE1CC4D61A (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_pReturnValue, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GetRadii)(___0_pReturnValue);
	#else
	il2cppPInvokeFunc(___0_pReturnValue);
	#endif

}
// System.Byte CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface_m593719466F71E4789AB1B165A587ACBD5B0809A1 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_earthCenteredEarthFixed, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) 
{
	typedef uint8_t (CDECL *PInvokeFunc) (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*) + sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_ScaleToGeodeticSurface)(___0_earthCenteredEarthFixed, ___1_pReturnValue);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_earthCenteredEarthFixed, ___1_pReturnValue);
	#endif

	return returnValue;
}
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal_m8438EEC0C21734C52F3E4ECC866D40833412C4E7 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_earthCenteredEarthFixed, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*) + sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_GeodeticSurfaceNormal)(___0_earthCenteredEarthFixed, ___1_pReturnValue);
	#else
	il2cppPInvokeFunc(___0_earthCenteredEarthFixed, ___1_pReturnValue);
	#endif

}
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed_mF5B0648E1CC82054D9ADDC8043EE9EF8DA9D8377 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_longitudeLatitudeHeight, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*) + sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_LongitudeLatitudeHeightToEarthCenteredEarthFixed)(___0_longitudeLatitudeHeight, ___1_pReturnValue);
	#else
	il2cppPInvokeFunc(___0_longitudeLatitudeHeight, ___1_pReturnValue);
	#endif

}
// System.Void CesiumForUnity.CesiumWgs84Ellipsoid::DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight(Unity.Mathematics.double3*,Unity.Mathematics.double3*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid_DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mF73D8C75E992EE3265AA399BB86B63427CC7FD81 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___0_earthCenteredEarthFixed, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_pReturnValue, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*) + sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight)(___0_earthCenteredEarthFixed, ___1_pReturnValue);
	#else
	il2cppPInvokeFunc(___0_earthCenteredEarthFixed, ___1_pReturnValue);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CesiumForUnity.NativeDownloadHandler/ImplementationHandle CesiumForUnity.NativeDownloadHandler::get_NativeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* NativeDownloadHandler_get_NativeImplementation_m371EAC14A719C137F0FB8453568DC9FDD9EFE24A (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) 
{
	ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* V_0 = NULL;
	{
		// get { return _implementation; }
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_0 = __this->____implementation_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _implementation; }
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_1 = V_0;
		return L_1;
	}
}
// System.Void CesiumForUnity.NativeDownloadHandler::CreateImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_CreateImplementation_mC4E7F430EFD43A3C5F06DF67865DEF647C7A64CC (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reinterop.ReinteropInitializer.Initialize();
		il2cpp_codegen_runtime_class_init_inline(ReinteropInitializer_t4EA3C28134472D46B8485711894D636A4477E487_il2cpp_TypeInfo_var);
		ReinteropInitializer_Initialize_mC21B2A7426F23F6D19F90EB4462149EEC23CCF79(NULL);
		// System.Diagnostics.Debug.Assert(this._implementation == null, "Implementation is already created. Be sure to call CreateImplementation only once.");
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_0 = __this->____implementation_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((RuntimeObject*)(ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), _stringLiteral53EF56F9250EA1F3FB0DA7E5005D5985FBD45EBC, NULL);
		// this._implementation = new ImplementationHandle(this);
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_1 = (ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6*)il2cpp_codegen_object_new(ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ImplementationHandle__ctor_m07B970AC703BB29D300B6C1873ED2BC975E76143(L_1, __this, NULL);
		__this->____implementation_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void CesiumForUnity.NativeDownloadHandler::DisposeImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_DisposeImplementation_m618A868DEE8729DBA9D368FBE03466DE4A803EAA (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation != null && !this._implementation.IsInvalid)
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_0 = __this->____implementation_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_1 = __this->____implementation_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this._implementation.Dispose();
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_4 = __this->____implementation_1;
		NullCheck(L_4);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_4, NULL);
	}

IL_002a:
	{
		// this._implementation = null;
		__this->____implementation_1 = (ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_1), (void*)(ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6*)NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.NativeDownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_Dispose_m0BEE19D9E50054B8BB21635CFDE09CC918092FA6 (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) 
{
	{
		// base.Dispose();
		DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607(__this, NULL);
		// this.DisposeImplementation();
		NativeDownloadHandler_DisposeImplementation_m618A868DEE8729DBA9D368FBE03466DE4A803EAA(__this, NULL);
		// }
		return;
	}
}
// System.IntPtr CesiumForUnity.NativeDownloadHandler::DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation_mAF076FB4B78BE6C80021D63D06E57F3F133E4FBE (intptr_t ___0_thiz, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation)(___0_thiz);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_thiz);
	#endif

	return returnValue;
}
// System.Void CesiumForUnity.NativeDownloadHandler::DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation_m4E09345C0F5E07FBCE8E06E532695440C45BD9B5 (intptr_t ___0_implementation, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation)(___0_implementation);
	#else
	il2cppPInvokeFunc(___0_implementation);
	#endif

}
// System.Byte CesiumForUnity.NativeDownloadHandler::DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative(System.IntPtr,CesiumForUnity.NativeDownloadHandler/ImplementationHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative_mAB4ECF15CEBCBF80B4DF152C80C1E31C398B7B5B (intptr_t ___0_thiz, ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* ___1_implementation, intptr_t ___2_data, int32_t ___3_dataLength, const RuntimeMethod* method) 
{
	typedef uint8_t (CDECL *PInvokeFunc) (intptr_t, void*, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("CesiumForUnityNative-Runtime"), "DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_implementation' to native representation
	void* ____1_implementation_marshaled = NULL;
	if (___1_implementation == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("implementation"), NULL);
	bool ___safeHandle_reference_incremented_for____1_implementation = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___1_implementation, (&___safeHandle_reference_incremented_for____1_implementation), NULL);
	____1_implementation_marshaled = reinterpret_cast<void*>((___1_implementation)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CesiumForUnityNative_Runtime_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative)(___0_thiz, ____1_implementation_marshaled, ___2_data, ___3_dataLength);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_thiz, ____1_implementation_marshaled, ___2_data, ___3_dataLength);
	#endif

	// Marshaling cleanup of parameter '___1_implementation' native representation
	if (___safeHandle_reference_incremented_for____1_implementation)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___1_implementation, NULL);
	}

	return returnValue;
}
// System.Void CesiumForUnity.NativeDownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDownloadHandler__ctor_m1EF7F8652BA26CB5538E8B6C5A852FC1F31CE34C (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ImplementationHandle _implementation = null;
		__this->____implementation_1 = (ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____implementation_1), (void*)(ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6*)NULL);
		// : base(new byte[16384])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16384));
		DownloadHandlerScript__ctor_m67B5897E7D6354051F54E8EB70ACA62BA0EF264A(__this, L_0, NULL);
		// CreateImplementation();
		NativeDownloadHandler_CreateImplementation_mC4E7F430EFD43A3C5F06DF67865DEF647C7A64CC(__this, NULL);
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.NativeDownloadHandler::ReceiveData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeDownloadHandler_ReceiveData_mE09DFD8D9329D426AF1A3A7B0668A9EEE2BD01B7 (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_dataLength, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// fixed(byte* p = data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0011;
		}
	}

IL_000c:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001a;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001a:
	{
		// bool result = this.ReceiveDataNative((IntPtr)p, dataLength);
		uint8_t* L_4 = V_0;
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_4, NULL);
		int32_t L_6 = ___1_dataLength;
		bool L_7;
		L_7 = NativeDownloadHandler_ReceiveDataNative_mE2D779C1623184305ABC205471ADFE68142C8FBF(__this, L_5, L_6, NULL);
		V_2 = L_7;
		// return result;
		bool L_8 = V_2;
		V_3 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Boolean CesiumForUnity.NativeDownloadHandler::ReceiveDataNative(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeDownloadHandler_ReceiveDataNative_mE2D779C1623184305ABC205471ADFE68142C8FBF (NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* __this, intptr_t ___0_data, int32_t ___1_dataLength, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this._implementation == null || this._implementation.IsInvalid)
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_0 = __this->____implementation_1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_1 = __this->____implementation_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new NotImplementedException("The native implementation is missing so ReceiveDataNative cannot be invoked. This may be caused by a missing call to CreateImplementation in one of your constructors, or it may be that the entire native implementation shared library is missing or out of date.");
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral862F749F7B5B6DBD89A8EA5A639585899358F536)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeDownloadHandler_ReceiveDataNative_mE2D779C1623184305ABC205471ADFE68142C8FBF_RuntimeMethod_var)));
	}

IL_0027:
	{
		// var result = DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative(Reinterop.ObjectHandleUtility.CreateHandle(this), _implementation, data, dataLength);
		intptr_t L_5;
		L_5 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(__this, NULL);
		ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* L_6 = __this->____implementation_1;
		intptr_t L_7 = ___0_data;
		int32_t L_8 = ___1_dataLength;
		uint8_t L_9;
		L_9 = NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_ReceiveDataNative_mAB4ECF15CEBCBF80B4DF152C80C1E31C398B7B5B(L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// return result != 0;
		uint8_t L_10 = V_0;
		V_2 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_11 = V_2;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.NativeDownloadHandler/ImplementationHandle::.ctor(CesiumForUnity.NativeDownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImplementationHandle__ctor_m07B970AC703BB29D300B6C1873ED2BC975E76143 (ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* __this, NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* ___0_managed, const RuntimeMethod* method) 
{
	{
		// public ImplementationHandle(NativeDownloadHandler managed) : base(true)
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// SetHandle(DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation(Reinterop.ObjectHandleUtility.CreateHandle(managed)));
		NativeDownloadHandler_t407A6A51C207FA98FCAF956597D270E3CECF3091* L_0 = ___0_managed;
		intptr_t L_1;
		L_1 = ObjectHandleUtility_CreateHandle_mB79C62851E53353881B5E0377965190872787A0E(L_0, NULL);
		intptr_t L_2;
		L_2 = NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_CreateImplementation_mAF076FB4B78BE6C80021D63D06E57F3F133E4FBE(L_1, NULL);
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean CesiumForUnity.NativeDownloadHandler/ImplementationHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImplementationHandle_ReleaseHandle_mBD14B95F317788C5E36ED87A016043656071CDC7 (ImplementationHandle_t4B1675EF30A8FFA9AEEC0C5EEBC72592176309D6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation(this.handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		NativeDownloadHandler_DotNet_CesiumForUnity_NativeDownloadHandler_DestroyImplementation_m4E09345C0F5E07FBCE8E06E532695440C45BD9B5(L_0, NULL);
		// return true;
		V_0 = (bool)1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 CesiumForUnity.Helpers::FromMathematics(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Helpers_FromMathematics_m8CB96E41C8AFC98D3FBDBD51283C7A77D4655409 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_vector, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3((float)vector.x, (float)vector.y, (float)vector.z);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_vector;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_vector;
		double L_3 = L_2.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_vector;
		double L_5 = L_4.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)L_1), ((float)L_3), ((float)L_5), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector4 CesiumForUnity.Helpers::FromMathematics(Unity.Mathematics.double4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Helpers_FromMathematics_m480F9CECA74BED4970A73DA27BA2D8126C596BB8 (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_vector, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector4((float)vector.x, (float)vector.y, (float)vector.z, (float)vector.w);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_0 = ___0_vector;
		double L_1 = L_0.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_2 = ___0_vector;
		double L_3 = L_2.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4 = ___0_vector;
		double L_5 = L_4.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_6 = ___0_vector;
		double L_7 = L_6.___w_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), ((float)L_1), ((float)L_3), ((float)L_5), ((float)L_7), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
// Unity.Mathematics.double4x4 CesiumForUnity.Helpers::ToMathematics(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C Helpers_ToMathematics_m93248C8886F21E2C39A5DD66B5F3A44E0BBF0ABD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double4x4(
		//     matrix.m00, matrix.m01, matrix.m02, matrix.m03,
		//     matrix.m10, matrix.m11, matrix.m12, matrix.m13,
		//     matrix.m20, matrix.m21, matrix.m22, matrix.m23,
		//     matrix.m30, matrix.m31, matrix.m32, matrix.m33);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m02_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_matrix;
		float L_7 = L_6.___m03_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_matrix;
		float L_9 = L_8.___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_matrix;
		float L_11 = L_10.___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___0_matrix;
		float L_13 = L_12.___m12_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___0_matrix;
		float L_15 = L_14.___m13_13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___0_matrix;
		float L_17 = L_16.___m20_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = ___0_matrix;
		float L_19 = L_18.___m21_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = ___0_matrix;
		float L_21 = L_20.___m22_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ___0_matrix;
		float L_23 = L_22.___m23_14;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___0_matrix;
		float L_25 = L_24.___m30_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___0_matrix;
		float L_27 = L_26.___m31_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28 = ___0_matrix;
		float L_29 = L_28.___m32_11;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30 = ___0_matrix;
		float L_31 = L_30.___m33_15;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_32;
		memset((&L_32), 0, sizeof(L_32));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_32), ((double)L_1), ((double)L_3), ((double)L_5), ((double)L_7), ((double)L_9), ((double)L_11), ((double)L_13), ((double)L_15), ((double)L_17), ((double)L_19), ((double)L_21), ((double)L_23), ((double)L_25), ((double)L_27), ((double)L_29), ((double)L_31), /*hidden argument*/NULL);
		V_0 = L_32;
		goto IL_0079;
	}

IL_0079:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_33 = V_0;
		return L_33;
	}
}
// UnityEngine.Matrix4x4 CesiumForUnity.Helpers::FromMathematics(Unity.Mathematics.double4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Helpers_FromMathematics_m75193037A87DE03FFDF4C5047BC19EF64F70C038 (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_matrix, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Matrix4x4(FromMathematics(matrix.c0), FromMathematics(matrix.c1), FromMathematics(matrix.c2), FromMathematics(matrix.c3));
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0 = ___0_matrix;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = L_0.___c0_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Helpers_FromMathematics_m480F9CECA74BED4970A73DA27BA2D8126C596BB8(L_1, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_3 = ___0_matrix;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4 = L_3.___c1_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Helpers_FromMathematics_m480F9CECA74BED4970A73DA27BA2D8126C596BB8(L_4, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = ___0_matrix;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_7 = L_6.___c2_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Helpers_FromMathematics_m480F9CECA74BED4970A73DA27BA2D8126C596BB8(L_7, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9 = ___0_matrix;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_10 = L_9.___c3_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Helpers_FromMathematics_m480F9CECA74BED4970A73DA27BA2D8126C596BB8(L_10, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = V_0;
		return L_13;
	}
}
// Unity.Mathematics.double3x3 CesiumForUnity.Helpers::ToMathematicsDouble3x3(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 Helpers_ToMathematicsDouble3x3_m1F80F0DD792DD2610FF628FB6BF90D94158E8367 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double3x3(
		//     matrix.m00, matrix.m01, matrix.m02,
		//     matrix.m10, matrix.m11, matrix.m12,
		//     matrix.m20, matrix.m21, matrix.m22);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m02_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_matrix;
		float L_7 = L_6.___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_matrix;
		float L_9 = L_8.___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_matrix;
		float L_11 = L_10.___m12_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___0_matrix;
		float L_13 = L_12.___m20_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___0_matrix;
		float L_15 = L_14.___m21_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___0_matrix;
		float L_17 = L_16.___m22_10;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_18;
		memset((&L_18), 0, sizeof(L_18));
		double3x3__ctor_mBEE4C5D1CCF08BD6C8E94DD819F144FBC690E888_inline((&L_18), ((double)L_1), ((double)L_3), ((double)L_5), ((double)L_7), ((double)L_9), ((double)L_11), ((double)L_13), ((double)L_15), ((double)L_17), /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_19 = V_0;
		return L_19;
	}
}
// Unity.Mathematics.float3x3 CesiumForUnity.Helpers::ToMathematicsFloat3x3(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 Helpers_ToMathematicsFloat3x3_mF27E1692D7A87E7AA0DA230A59DF0F44C0C7D98D (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, const RuntimeMethod* method) 
{
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new float3x3(
		//     matrix.m00, matrix.m01, matrix.m02,
		//     matrix.m10, matrix.m11, matrix.m12,
		//     matrix.m20, matrix.m21, matrix.m22);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_matrix;
		float L_1 = L_0.___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_matrix;
		float L_3 = L_2.___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___0_matrix;
		float L_5 = L_4.___m02_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_matrix;
		float L_7 = L_6.___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_matrix;
		float L_9 = L_8.___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_matrix;
		float L_11 = L_10.___m12_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___0_matrix;
		float L_13 = L_12.___m20_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = ___0_matrix;
		float L_15 = L_14.___m21_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___0_matrix;
		float L_17 = L_16.___m22_10;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_18;
		memset((&L_18), 0, sizeof(L_18));
		float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline((&L_18), L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_19 = V_0;
		return L_19;
	}
}
// System.Void CesiumForUnity.Helpers::MatrixToRotationAndScale(Unity.Mathematics.double3x3,Unity.Mathematics.quaternion&,Unity.Mathematics.double3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_MatrixToRotationAndScale_mA7BA8F572035E772AB8B038C797831E630BDAC46 (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___0_matrix, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___1_rotation, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___2_scale, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// double lengthColumn0 = math.length(matrix.c0);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_0 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = L_0.___c0_0;
		double L_2;
		L_2 = math_length_m936CF76FF0C94E358B2193CFB59E41080B87E641_inline(L_1, NULL);
		V_0 = L_2;
		// double lengthColumn1 = math.length(matrix.c1);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_3 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = L_3.___c1_1;
		double L_5;
		L_5 = math_length_m936CF76FF0C94E358B2193CFB59E41080B87E641_inline(L_4, NULL);
		V_1 = L_5;
		// double lengthColumn2 = math.length(matrix.c2);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_6 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7 = L_6.___c2_2;
		double L_8;
		L_8 = math_length_m936CF76FF0C94E358B2193CFB59E41080B87E641_inline(L_7, NULL);
		V_2 = L_8;
		// float3x3 rotationMatrix = new float3x3(
		//     (float3)(matrix.c0 / lengthColumn0),
		//     (float3)(matrix.c1 / lengthColumn1),
		//     (float3)(matrix.c2 / lengthColumn2));
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_9 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = L_9.___c0_0;
		double L_11 = V_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_12;
		L_12 = double3_op_Division_mBFCCDD798F735189AE8D843BD014FCF5F1EEAD93_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Explicit_mC39F75EB64FD16249FAD573FD8B6ADB14F132D78_inline(L_12, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_14 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_15 = L_14.___c1_1;
		double L_16 = V_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_17;
		L_17 = double3_op_Division_mBFCCDD798F735189AE8D843BD014FCF5F1EEAD93_inline(L_15, L_16, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18;
		L_18 = float3_op_Explicit_mC39F75EB64FD16249FAD573FD8B6ADB14F132D78_inline(L_17, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_19 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_20 = L_19.___c2_2;
		double L_21 = V_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_22;
		L_22 = double3_op_Division_mBFCCDD798F735189AE8D843BD014FCF5F1EEAD93_inline(L_20, L_21, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_23;
		L_23 = float3_op_Explicit_mC39F75EB64FD16249FAD573FD8B6ADB14F132D78_inline(L_22, NULL);
		float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline((&V_3), L_13, L_18, L_23, NULL);
		// scale = new double3(lengthColumn0, lengthColumn1, lengthColumn2);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_24 = ___2_scale;
		double L_25 = V_0;
		double L_26 = V_1;
		double L_27 = V_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_28;
		memset((&L_28), 0, sizeof(L_28));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		*(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)L_24 = L_28;
		// double3 cross = math.cross(matrix.c0, matrix.c1);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_29 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_30 = L_29.___c0_0;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_31 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_32 = L_31.___c1_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_33;
		L_33 = math_cross_mD4DDFE34A1DA411148681014E59AEDC0655C0973_inline(L_30, L_32, NULL);
		V_4 = L_33;
		// if (math.dot(cross, matrix.c2) < 0.0)
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_34 = V_4;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_35 = ___0_matrix;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_36 = L_35.___c2_2;
		double L_37;
		L_37 = math_dot_m710CE5F525FC4891265B265568DE10C0100B509B_inline(L_34, L_36, NULL);
		V_5 = (bool)((((double)L_37) < ((double)(0.0)))? 1 : 0);
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_00c6;
		}
	}
	{
		// rotationMatrix *= -1.0f;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_39 = V_3;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_40;
		L_40 = float3x3_op_Multiply_mF3B9F7F790D87EFB7EBC38F26ABDC9305816484A_inline(L_39, (-1.0f), NULL);
		V_3 = L_40;
		// scale *= -1.0f;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_41 = ___2_scale;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_42 = ___2_scale;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_43 = (*(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)L_42);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_44;
		L_44 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_43, (-1.0), NULL);
		*(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)L_41 = L_44;
	}

IL_00c6:
	{
		// rotation = math.quaternion(rotationMatrix);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_45 = ___1_rotation;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_46 = V_3;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_47;
		L_47 = math_quaternion_mE9DBDC1E38A93968B447FF4D365823A7889B0749_inline(L_46, NULL);
		*(quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4*)L_45 = L_47;
		// }
		return;
	}
}
// System.Void CesiumForUnity.Helpers::MatrixToTranslationRotationAndScale(Unity.Mathematics.double4x4,Unity.Mathematics.double3&,Unity.Mathematics.quaternion&,Unity.Mathematics.double3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_MatrixToTranslationRotationAndScale_m75BA42D7D45EABCAEBD7A5489BEFDE8908D352CF (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_matrix, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___1_translation, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___2_rotation, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* ___3_scale, const RuntimeMethod* method) 
{
	{
		// translation = matrix.c3.xyz;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_0 = ___1_translation;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_1 = (&(&___0_matrix)->___c3_3);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2;
		L_2 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_1, NULL);
		*(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4*)L_0 = L_2;
		// Helpers.MatrixToRotationAndScale(
		//     new double3x3(matrix.c0.xyz, matrix.c1.xyz, matrix.c2.xyz),
		//     out rotation,
		//     out scale);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_3 = (&(&___0_matrix)->___c0_0);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4;
		L_4 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_3, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_5 = (&(&___0_matrix)->___c1_1);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6;
		L_6 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_5, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_7 = (&(&___0_matrix)->___c2_2);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8;
		L_8 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_7, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double3x3__ctor_m0BF27C1E4D2C1C4965521A8B3A919CF9DB11B305_inline((&L_9), L_4, L_6, L_8, /*hidden argument*/NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_10 = ___2_rotation;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_11 = ___3_scale;
		Helpers_MatrixToRotationAndScale_mA7BA8F572035E772AB8B038C797831E630BDAC46(L_9, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void CesiumForUnity.Helpers::MatrixToInaccurateRotationAndScale(Unity.Mathematics.double3x3,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_MatrixToInaccurateRotationAndScale_m47E8DEAED109886AABCC62F11B18860885F58EC6 (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___0_matrix, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_scale, const RuntimeMethod* method) 
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// MatrixToRotationAndScale(matrix, out rotationTemp, out scaleTemp);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_0 = ___0_matrix;
		Helpers_MatrixToRotationAndScale_mA7BA8F572035E772AB8B038C797831E630BDAC46(L_0, (&V_0), (&V_1), NULL);
		// rotation = rotationTemp;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___1_rotation;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = quaternion_op_Implicit_m78F07E28F5AB9C26F0EE997B2F12AF4A209FCD41(L_2, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_1 = L_3;
		// scale = (float3)scaleTemp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___2_scale;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = float3_op_Explicit_mC39F75EB64FD16249FAD573FD8B6ADB14F132D78_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = float3_op_Implicit_m9CC301DFD67EEFAA15CA05E91913E862B22326F6(L_6, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_7;
		// }
		return;
	}
}
// System.Void CesiumForUnity.Helpers::MatrixToInaccurateTranslationRotationAndScale(Unity.Mathematics.double4x4,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers_MatrixToInaccurateTranslationRotationAndScale_m7BBC31EED0356F7C67B2D1CC3C179E980110DA3E (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_matrix, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_translation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		// translation = Helpers.FromMathematics(matrix.c3.xyz);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_translation;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_1 = (&(&___0_matrix)->___c3_3);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2;
		L_2 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Helpers_FromMathematics_m8CB96E41C8AFC98D3FBDBD51283C7A77D4655409(L_2, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_3;
		// Helpers.MatrixToInaccurateRotationAndScale(
		//     new double3x3(matrix.c0.xyz, matrix.c1.xyz, matrix.c2.xyz),
		//     out rotation,
		//     out scale);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_4 = (&(&___0_matrix)->___c0_0);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5;
		L_5 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_4, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_6 = (&(&___0_matrix)->___c1_1);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7;
		L_7 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_6, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* L_8 = (&(&___0_matrix)->___c2_2);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9;
		L_9 = double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline(L_8, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		double3x3__ctor_m0BF27C1E4D2C1C4965521A8B3A919CF9DB11B305_inline((&L_10), L_5, L_7, L_9, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___3_scale;
		Helpers_MatrixToInaccurateRotationAndScale_m47E8DEAED109886AABCC62F11B18860885F58EC6(L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// Unity.Mathematics.double4x4 CesiumForUnity.Helpers::TranslationRotationAndScaleToMatrix(Unity.Mathematics.double3,Unity.Mathematics.quaternion,Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C Helpers_TranslationRotationAndScaleToMatrix_m16B1C0AC46551F519EE951D24DEAD7B3C225EE50 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_translation, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___1_rotation, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___2_scale, const RuntimeMethod* method) 
{
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// double3x3 scaleMatrix = new double3x3(
		//     new double3(scale.x, 0.0, 0.0),
		//     new double3(0.0, scale.y, 0.0),
		//     new double3(0.0, 0.0, scale.z));
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___2_scale;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_2), L_1, (0.0), (0.0), /*hidden argument*/NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3 = ___2_scale;
		double L_4 = L_3.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_5), (0.0), L_4, (0.0), /*hidden argument*/NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___2_scale;
		double L_7 = L_6.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_8), (0.0), (0.0), L_7, /*hidden argument*/NULL);
		double3x3__ctor_m0BF27C1E4D2C1C4965521A8B3A919CF9DB11B305_inline((&V_0), L_2, L_5, L_8, NULL);
		// double3x3 rotationMatrix = new float3x3(rotation);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_9 = ___1_rotation;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_10;
		memset((&L_10), 0, sizeof(L_10));
		float3x3__ctor_mF94488DFF7867CFC89648E024FA89A19F23E2FAE((&L_10), L_9, /*hidden argument*/NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_11;
		L_11 = double3x3_op_Implicit_mDE9DBCF7F737C1128250D072AF94867314B7FAA1_inline(L_10, NULL);
		V_1 = L_11;
		// double3x3 scaleAndRotate = math.mul(rotationMatrix, scaleMatrix);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_12 = V_1;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_13 = V_0;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_14;
		L_14 = math_mul_m8006A1F722590AD2791FB2B506A1A74A0816494F_inline(L_12, L_13, NULL);
		V_2 = L_14;
		// return new double4x4(
		//     new double4(scaleAndRotate.c0, 0.0),
		//     new double4(scaleAndRotate.c1, 0.0),
		//     new double4(scaleAndRotate.c2, 0.0),
		//     new double4(translation, 1.0));
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_15 = V_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_16 = L_15.___c0_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_17;
		memset((&L_17), 0, sizeof(L_17));
		double4__ctor_mAAB30D5A18E63BBEB9AD9B98E95D510784E64B26_inline((&L_17), L_16, (0.0), /*hidden argument*/NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_18 = V_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_19 = L_18.___c1_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_20;
		memset((&L_20), 0, sizeof(L_20));
		double4__ctor_mAAB30D5A18E63BBEB9AD9B98E95D510784E64B26_inline((&L_20), L_19, (0.0), /*hidden argument*/NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_21 = V_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_22 = L_21.___c2_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_23;
		memset((&L_23), 0, sizeof(L_23));
		double4__ctor_mAAB30D5A18E63BBEB9AD9B98E95D510784E64B26_inline((&L_23), L_22, (0.0), /*hidden argument*/NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_24 = ___0_translation;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_25;
		memset((&L_25), 0, sizeof(L_25));
		double4__ctor_mAAB30D5A18E63BBEB9AD9B98E95D510784E64B26_inline((&L_25), L_24, (1.0), /*hidden argument*/NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_26;
		memset((&L_26), 0, sizeof(L_26));
		double4x4__ctor_mC28DA9877244770A1E61E41A50DF95F405AFD34B_inline((&L_26), L_17, L_20, L_23, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_27 = V_3;
		return L_27;
	}
}
// System.Void CesiumForUnity.Helpers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers__ctor_m22DFC8AF24CE9030865949917647F23F28DE5D43 (Helpers_tF67CB24E1B3D10F6E551B7D1DC5ED497AC3E1DD2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.NativeCoroutine::.ctor(System.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCoroutine__ctor_mBE7299BB32AE69B10EF1F1EF12B6DD132CC4CCCF (NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___0_callback, const RuntimeMethod* method) 
{
	{
		// public NativeCoroutine(Func<object, object> callback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _callback = callback;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = ___0_callback;
		__this->____callback_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callback_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator CesiumForUnity.NativeCoroutine::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCoroutine_GetEnumerator_mA9822DAE36EB6BBB6847643335C2B1277C7FE47D (NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* L_0 = (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__2__ctor_m33BA9725115B0FB505A76B96DF2E1D9827F32492(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m33BA9725115B0FB505A76B96DF2E1D9827F32492 (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_mA4D8FBD867DF73ED5662B1A48C95A0C6D44D2E23 (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m3C91BF9AD8A40BFB7684936B2817712917402DF9 (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0065;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// object sentinel = this._callback;
		NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = L_3->____callback_0;
		__this->___U3CsentinelU3E5__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsentinelU3E5__1_3), (void*)L_4);
		// object next = this._callback(sentinel);
		NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_6 = L_5->____callback_0;
		RuntimeObject* L_7 = __this->___U3CsentinelU3E5__1_3;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_6, L_7, NULL);
		__this->___U3CnextU3E5__2_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnextU3E5__2_4), (void*)L_8);
		goto IL_0089;
	}

IL_004f:
	{
		// yield return next;
		RuntimeObject* L_9 = __this->___U3CnextU3E5__2_4;
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0065:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// next = this._callback(sentinel);
		NativeCoroutine_tF6B751502085E2D89100E3ACC4597DF6F792DC34* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = L_10->____callback_0;
		RuntimeObject* L_12 = __this->___U3CsentinelU3E5__1_3;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, NULL);
		__this->___U3CnextU3E5__2_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnextU3E5__2_4), (void*)L_13);
	}

IL_0089:
	{
		// while (next != sentinel)
		RuntimeObject* L_14 = __this->___U3CnextU3E5__2_4;
		RuntimeObject* L_15 = __this->___U3CsentinelU3E5__1_3;
		V_1 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79E3EC97A8C06FF6AE7658DF0D312D44DA8AD6AA (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mE8E016962F281593E81FBD2CD898B99EC0D7E49F (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mE8E016962F281593E81FBD2CD898B99EC0D7E49F_RuntimeMethod_var)));
	}
}
// System.Object CesiumForUnity.NativeCoroutine/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_mAFD1F581B3125BCFB1F33C43240DD11A27F36C0B (U3CGetEnumeratorU3Ed__2_t5DF868267473826A8EB41B24EB481BB92CBC82A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CesiumForUnity.UnityLifetime::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifetime_Destroy_m1312A10229B3838AB3A5EBE00C70E55733D94FA9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(o);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_o;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_baseResolution_mFD5D3C436B9F91B755BDD00642DEFAE96D357179_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._baseResolution;
		float L_0 = __this->____baseResolution_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Cesium3DTileset_get_maximumScreenSpaceError_mB22DE8413F7ECBDB115000F86812A28C7DB114CC_inline (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumScreenSpaceError;
		float L_0 = __this->____maximumScreenSpaceError_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* Cesium3DTileset_get_pointCloudShading_mC8CB3275DDCAA3A3A8F19844E4E6BF4CB1202BC1_inline (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, const RuntimeMethod* method) 
{
	{
		// get => this._pointCloudShading;
		CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* L_0 = __this->____pointCloudShading_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_maximumAttenuation_m31ADCE81E474DC690FA833A627EA1ED5E6C5B842_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._maximumAttenuation;
		float L_0 = __this->____maximumAttenuation_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CesiumPointCloudShading_get_geometricErrorScale_m2182592AF3E9909EA5327FC630AFFE6597788C2C_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._geometricErrorScale;
		float L_0 = __this->____geometricErrorScale_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CesiumPointCloudShading_get_attenuation_mF662032A72CCC8B9FF7DE1C4B29CAFD0A34A01A5_inline (CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5* __this, const RuntimeMethod* method) 
{
	{
		// get => this._attenuation;
		bool L_0 = __this->____attenuation_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RasterOverlayLoadFailureDelegate_Invoke_m60F27809E037FD856656FA127F093CD60F9AEA6F_inline (RasterOverlayLoadFailureDelegate_t46B22A97C2253043583D4F95F5C25CD7E1FC4A28* __this, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572 ___0_details, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CesiumRasterOverlayLoadFailureDetails_t038637622F46FE20628BC906EA7932002A9CA572, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_details, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, double ___0_x, double ___1_y, double ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		double L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		double L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		double L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CesiumSubScene_get_originAuthority_mEF66B444989512F7573B2AAB231B0EEE2CB9E40F_inline (CesiumSubScene_tD780858144A9B3675944EE893AB2046C8D8D7F5F* __this, const RuntimeMethod* method) 
{
	{
		// get => this._originAuthority;
		int32_t L_0 = __this->____originAuthority_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		__this->___handle_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_cmax_mD1CA685960C6D3E73AE61E158449D1F136B2D8D9_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// public static double cmax(double3 x) { return max(max(x.x, x.y), x.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_x;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_x;
		double L_3 = L_2.___y_1;
		double L_4;
		L_4 = math_max_m8830F8721EFC73BCF991CD497115A103B86BF3BE_inline(L_1, L_3, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5 = ___0_x;
		double L_6 = L_5.___z_2;
		double L_7;
		L_7 = math_max_m8830F8721EFC73BCF991CD497115A103B86BF3BE_inline(L_4, L_6, NULL);
		V_0 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		// public static double cmax(double3 x) { return max(max(x.x, x.y), x.z); }
		double L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_cmin_mD62CF2BF7B13402E46E966F3BED814004E5D8C65_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// public static double cmin(double3 x) { return min(min(x.x, x.y), x.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_x;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_x;
		double L_3 = L_2.___y_1;
		double L_4;
		L_4 = math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline(L_1, L_3, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5 = ___0_x;
		double L_6 = L_5.___z_2;
		double L_7;
		L_7 = math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline(L_4, L_6, NULL);
		V_0 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		// public static double cmin(double3 x) { return min(min(x.x, x.y), x.z); }
		double L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* __this, double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m03, double ___4_m10, double ___5_m11, double ___6_m12, double ___7_m13, double ___8_m20, double ___9_m21, double ___10_m22, double ___11_m23, double ___12_m30, double ___13_m31, double ___14_m32, double ___15_m33, const RuntimeMethod* method) 
{
	{
		// this.c0 = new double4(m00, m10, m20, m30);
		double L_0 = ___0_m00;
		double L_1 = ___4_m10;
		double L_2 = ___8_m20;
		double L_3 = ___12_m30;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4;
		memset((&L_4), 0, sizeof(L_4));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->___c0_0 = L_4;
		// this.c1 = new double4(m01, m11, m21, m31);
		double L_5 = ___1_m01;
		double L_6 = ___5_m11;
		double L_7 = ___9_m21;
		double L_8 = ___13_m31;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_9), L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___c1_1 = L_9;
		// this.c2 = new double4(m02, m12, m22, m32);
		double L_10 = ___2_m02;
		double L_11 = ___6_m12;
		double L_12 = ___10_m22;
		double L_13 = ___14_m32;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_14), L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->___c2_2 = L_14;
		// this.c3 = new double4(m03, m13, m23, m33);
		double L_15 = ___3_m03;
		double L_16 = ___7_m13;
		double L_17 = ___11_m23;
		double L_18 = ___15_m33;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_19;
		memset((&L_19), 0, sizeof(L_19));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_19), L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		__this->___c3_3 = L_19;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3x3__ctor_mBEE4C5D1CCF08BD6C8E94DD819F144FBC690E888_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0* __this, double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m10, double ___4_m11, double ___5_m12, double ___6_m20, double ___7_m21, double ___8_m22, const RuntimeMethod* method) 
{
	{
		// this.c0 = new double3(m00, m10, m20);
		double L_0 = ___0_m00;
		double L_1 = ___3_m10;
		double L_2 = ___6_m20;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___c0_0 = L_3;
		// this.c1 = new double3(m01, m11, m21);
		double L_4 = ___1_m01;
		double L_5 = ___4_m11;
		double L_6 = ___7_m21;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7;
		memset((&L_7), 0, sizeof(L_7));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___c1_1 = L_7;
		// this.c2 = new double3(m02, m12, m22);
		double L_8 = ___2_m02;
		double L_9 = ___5_m12;
		double L_10 = ___8_m22;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_11;
		memset((&L_11), 0, sizeof(L_11));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->___c2_2 = L_11;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float ___0_m00, float ___1_m01, float ___2_m02, float ___3_m10, float ___4_m11, float ___5_m12, float ___6_m20, float ___7_m21, float ___8_m22, const RuntimeMethod* method) 
{
	{
		// this.c0 = new float3(m00, m10, m20);
		float L_0 = ___0_m00;
		float L_1 = ___3_m10;
		float L_2 = ___6_m20;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___c0_0 = L_3;
		// this.c1 = new float3(m01, m11, m21);
		float L_4 = ___1_m01;
		float L_5 = ___4_m11;
		float L_6 = ___7_m21;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		memset((&L_7), 0, sizeof(L_7));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___c1_1 = L_7;
		// this.c2 = new float3(m02, m12, m22);
		float L_8 = ___2_m02;
		float L_9 = ___5_m12;
		float L_10 = ___8_m22;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		memset((&L_11), 0, sizeof(L_11));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->___c2_2 = L_11;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_length_m936CF76FF0C94E358B2193CFB59E41080B87E641_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// public static double length(double3 x) { return sqrt(dot(x, x)); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_x;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = ___0_x;
		double L_2;
		L_2 = math_dot_m710CE5F525FC4891265B265568DE10C0100B509B_inline(L_0, L_1, NULL);
		double L_3;
		L_3 = math_sqrt_mA3A9D5DFDF6841F8836E3ECD5D83555842383F36_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// public static double length(double3 x) { return sqrt(dot(x, x)); }
		double L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Division_mBFCCDD798F735189AE8D843BD014FCF5F1EEAD93_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double ___1_rhs, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double3 operator / (double3 lhs, double rhs) { return new double3 (lhs.x / rhs, lhs.y / rhs, lhs.z / rhs); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double L_2 = ___1_rhs;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3 = ___0_lhs;
		double L_4 = L_3.___y_1;
		double L_5 = ___1_rhs;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___0_lhs;
		double L_7 = L_6.___z_2;
		double L_8 = ___1_rhs;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_9), ((double)(L_1/L_2)), ((double)(L_4/L_5)), ((double)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		// public static double3 operator / (double3 lhs, double rhs) { return new double3 (lhs.x / rhs, lhs.y / rhs, lhs.z / rhs); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Explicit_mC39F75EB64FD16249FAD573FD8B6ADB14F132D78_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_v, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static explicit operator float3(double3 v) { return new float3(v); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float3__ctor_mD7BFFAB3D7057D71DB7B2F5A50788D197E1AA49B_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static explicit operator float3(double3 v) { return new float3(v); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_c0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_c1, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___2_c2, const RuntimeMethod* method) 
{
	{
		// this.c0 = c0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_c0;
		__this->___c0_0 = L_0;
		// this.c1 = c1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_c1;
		__this->___c1_1 = L_1;
		// this.c2 = c2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___2_c2;
		__this->___c2_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 math_cross_mD4DDFE34A1DA411148681014E59AEDC0655C0973_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_y, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public static double3 cross(double3 x, double3 y) { return (x * y.yzx - x.yzx * y).yzx; }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_x;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1;
		L_1 = double3_get_yzx_mFEFD36EE9E6E6470EDDCF595DEAAB85FCBAC2795_inline((&___1_y), NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2;
		L_2 = double3_op_Multiply_mFF3B33CAB54AB767C1B7927B97658C307150BCA9_inline(L_0, L_1, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3;
		L_3 = double3_get_yzx_mFEFD36EE9E6E6470EDDCF595DEAAB85FCBAC2795_inline((&___0_x), NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___1_y;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5;
		L_5 = double3_op_Multiply_mFF3B33CAB54AB767C1B7927B97658C307150BCA9_inline(L_3, L_4, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6;
		L_6 = double3_op_Subtraction_m22E94C140DA02DCD57ADB54B6DEEFA271AEB82A0_inline(L_2, L_5, NULL);
		V_0 = L_6;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7;
		L_7 = double3_get_yzx_mFEFD36EE9E6E6470EDDCF595DEAAB85FCBAC2795_inline((&V_0), NULL);
		V_1 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		// public static double3 cross(double3 x, double3 y) { return (x * y.yzx - x.yzx * y).yzx; }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_dot_m710CE5F525FC4891265B265568DE10C0100B509B_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_x, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_y, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// public static double dot(double3 x, double3 y) { return x.x * y.x + x.y * y.y + x.z * y.z; }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_x;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___1_y;
		double L_3 = L_2.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_x;
		double L_5 = L_4.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___1_y;
		double L_7 = L_6.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8 = ___0_x;
		double L_9 = L_8.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = ___1_y;
		double L_11 = L_10.___z_2;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))), ((double)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		// public static double dot(double3 x, double3 y) { return x.x * y.x + x.y * y.y + x.z * y.z; }
		double L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 float3x3_op_Multiply_mF3B9F7F790D87EFB7EBC38F26ABDC9305816484A_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static float3x3 operator * (float3x3 lhs, float rhs) { return new float3x3 (lhs.c0 * rhs, lhs.c1 * rhs, lhs.c2 * rhs); }
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_0 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = L_0.___c0_0;
		float L_2 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		L_3 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_1, L_2, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_4 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = L_4.___c1_1;
		float L_6 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		L_7 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_5, L_6, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_8 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9 = L_8.___c2_2;
		float L_10 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		L_11 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_9, L_10, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline((&L_12), L_3, L_7, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_002d;
	}

IL_002d:
	{
		// public static float3x3 operator * (float3x3 lhs, float rhs) { return new float3x3 (lhs.c0 * rhs, lhs.c1 * rhs, lhs.c2 * rhs); }
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double ___1_rhs, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double3 operator * (double3 lhs, double rhs) { return new double3 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double L_2 = ___1_rhs;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3 = ___0_lhs;
		double L_4 = L_3.___y_1;
		double L_5 = ___1_rhs;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___0_lhs;
		double L_7 = L_6.___z_2;
		double L_8 = ___1_rhs;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_9), ((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		// public static double3 operator * (double3 lhs, double rhs) { return new double3 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_mE9DBDC1E38A93968B447FF4D365823A7889B0749_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_m, const RuntimeMethod* method) 
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static quaternion quaternion(float3x3 m) { return new quaternion(m); }
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_0 = ___0_m;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		quaternion__ctor_m354F09C0E50CA59DA43037E9993EAE9BF97E9120((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static quaternion quaternion(float3x3 m) { return new quaternion(m); }
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double4_get_xyz_m1535A1EC6086B24AB7C384EF03935A4133194425_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return new double3(x, y, z); }
		double L_0 = __this->___x_0;
		double L_1 = __this->___y_1;
		double L_2 = __this->___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// get { return new double3(x, y, z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3x3__ctor_m0BF27C1E4D2C1C4965521A8B3A919CF9DB11B305_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_c0, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_c1, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___2_c2, const RuntimeMethod* method) 
{
	{
		// this.c0 = c0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_c0;
		__this->___c0_0 = L_0;
		// this.c1 = c1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = ___1_c1;
		__this->___c1_1 = L_1;
		// this.c2 = c2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___2_c2;
		__this->___c2_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 double3x3_op_Implicit_mDE9DBCF7F737C1128250D072AF94867314B7FAA1_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_v, const RuntimeMethod* method) 
{
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static implicit operator double3x3(float3x3 v) { return new double3x3(v); }
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_0 = ___0_v;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		double3x3__ctor_m4A89254CD6C32BCF5BCEBC60A4E712E2360DD972_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static implicit operator double3x3(float3x3 v) { return new double3x3(v); }
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 math_mul_m8006A1F722590AD2791FB2B506A1A74A0816494F_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___0_a, double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 ___1_b, const RuntimeMethod* method) 
{
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return double3x3(
		//     a.c0 * b.c0.x + a.c1 * b.c0.y + a.c2 * b.c0.z,
		//     a.c0 * b.c1.x + a.c1 * b.c1.y + a.c2 * b.c1.z,
		//     a.c0 * b.c2.x + a.c1 * b.c2.y + a.c2 * b.c2.z);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_0 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = L_0.___c0_0;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_2 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3 = L_2.___c0_0;
		double L_4 = L_3.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5;
		L_5 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_1, L_4, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_6 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7 = L_6.___c1_1;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_8 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9 = L_8.___c0_0;
		double L_10 = L_9.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_11;
		L_11 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_7, L_10, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_12;
		L_12 = double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline(L_5, L_11, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_13 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_14 = L_13.___c2_2;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_15 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_16 = L_15.___c0_0;
		double L_17 = L_16.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_18;
		L_18 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_14, L_17, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_19;
		L_19 = double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline(L_12, L_18, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_20 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_21 = L_20.___c0_0;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_22 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_23 = L_22.___c1_1;
		double L_24 = L_23.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_25;
		L_25 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_21, L_24, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_26 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_27 = L_26.___c1_1;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_28 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_29 = L_28.___c1_1;
		double L_30 = L_29.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_31;
		L_31 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_27, L_30, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_32;
		L_32 = double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline(L_25, L_31, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_33 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_34 = L_33.___c2_2;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_35 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_36 = L_35.___c1_1;
		double L_37 = L_36.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_38;
		L_38 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_34, L_37, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_39;
		L_39 = double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline(L_32, L_38, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_40 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_41 = L_40.___c0_0;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_42 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_43 = L_42.___c2_2;
		double L_44 = L_43.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_45;
		L_45 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_41, L_44, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_46 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_47 = L_46.___c1_1;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_48 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_49 = L_48.___c2_2;
		double L_50 = L_49.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_51;
		L_51 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_47, L_50, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_52;
		L_52 = double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline(L_45, L_51, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_53 = ___0_a;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_54 = L_53.___c2_2;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_55 = ___1_b;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_56 = L_55.___c2_2;
		double L_57 = L_56.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_58;
		L_58 = double3_op_Multiply_mF18D6011FB9D647C1F1A430FA272B91736A07AC8_inline(L_54, L_57, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_59;
		L_59 = double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline(L_52, L_58, NULL);
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_60;
		L_60 = math_double3x3_mDEDFD3D5E0FAD4EC0550DE55A86A7D199B3CC61B_inline(L_19, L_39, L_59, NULL);
		V_0 = L_60;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_61 = V_0;
		return L_61;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4__ctor_mAAB30D5A18E63BBEB9AD9B98E95D510784E64B26_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_xyz, double ___1_w, const RuntimeMethod* method) 
{
	{
		// this.x = xyz.x;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_xyz;
		double L_1 = L_0.___x_0;
		__this->___x_0 = L_1;
		// this.y = xyz.y;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_xyz;
		double L_3 = L_2.___y_1;
		__this->___y_1 = L_3;
		// this.z = xyz.z;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_xyz;
		double L_5 = L_4.___z_2;
		__this->___z_2 = L_5;
		// this.w = w;
		double L_6 = ___1_w;
		__this->___w_3 = L_6;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4x4__ctor_mC28DA9877244770A1E61E41A50DF95F405AFD34B_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* __this, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_c0, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_c1, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___2_c2, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___3_c3, const RuntimeMethod* method) 
{
	{
		// this.c0 = c0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_0 = ___0_c0;
		__this->___c0_0 = L_0;
		// this.c1 = c1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = ___1_c1;
		__this->___c1_1 = L_1;
		// this.c2 = c2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_2 = ___2_c2;
		__this->___c2_2 = L_2;
		// this.c3 = c3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_3 = ___3_c3;
		__this->___c3_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_max_m8830F8721EFC73BCF991CD497115A103B86BF3BE_inline (double ___0_x, double ___1_y, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double G_B4_0 = 0.0;
	{
		// public static double max(double x, double y) { return double.IsNaN(y) || x > y ? x : y; }
		double L_0 = ___1_y;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___0_x;
		double L_3 = ___1_y;
		if ((((double)L_2) > ((double)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		double L_4 = ___1_y;
		G_B4_0 = L_4;
		goto IL_0011;
	}

IL_0010:
	{
		double L_5 = ___0_x;
		G_B4_0 = L_5;
	}

IL_0011:
	{
		V_0 = G_B4_0;
		goto IL_0014;
	}

IL_0014:
	{
		// public static double max(double x, double y) { return double.IsNaN(y) || x > y ? x : y; }
		double L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline (double ___0_x, double ___1_y, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double G_B4_0 = 0.0;
	{
		// public static double min(double x, double y) { return double.IsNaN(y) || x < y ? x : y; }
		double L_0 = ___1_y;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___0_x;
		double L_3 = ___1_y;
		if ((((double)L_2) < ((double)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		double L_4 = ___1_y;
		G_B4_0 = L_4;
		goto IL_0011;
	}

IL_0010:
	{
		double L_5 = ___0_x;
		G_B4_0 = L_5;
	}

IL_0011:
	{
		V_0 = G_B4_0;
		goto IL_0014;
	}

IL_0014:
	{
		// public static double min(double x, double y) { return double.IsNaN(y) || x < y ? x : y; }
		double L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, double ___0_x, double ___1_y, double ___2_z, double ___3_w, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		double L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		double L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		double L_2 = ___2_z;
		__this->___z_2 = L_2;
		// this.w = w;
		double L_3 = ___3_w;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_sqrt_mA3A9D5DFDF6841F8836E3ECD5D83555842383F36_inline (double ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// public static double sqrt(double x) { return System.Math.Sqrt(x); }
		double L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static double sqrt(double x) { return System.Math.Sqrt(x); }
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mD7BFFAB3D7057D71DB7B2F5A50788D197E1AA49B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_v, const RuntimeMethod* method) 
{
	{
		// this.x = (float)v.x;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_v;
		double L_1 = L_0.___x_0;
		__this->___x_0 = ((float)L_1);
		// this.y = (float)v.y;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_v;
		double L_3 = L_2.___y_1;
		__this->___y_1 = ((float)L_3);
		// this.z = (float)v.z;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_v;
		double L_5 = L_4.___z_2;
		__this->___z_2 = ((float)L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_get_yzx_mFEFD36EE9E6E6470EDDCF595DEAAB85FCBAC2795_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return new double3(y, z, x); }
		double L_0 = __this->___y_1;
		double L_1 = __this->___z_2;
		double L_2 = __this->___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// get { return new double3(y, z, x); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Multiply_mFF3B33CAB54AB767C1B7927B97658C307150BCA9_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_rhs, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double3 operator * (double3 lhs, double3 rhs) { return new double3 (lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___1_rhs;
		double L_3 = L_2.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_lhs;
		double L_5 = L_4.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___1_rhs;
		double L_7 = L_6.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8 = ___0_lhs;
		double L_9 = L_8.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = ___1_rhs;
		double L_11 = L_10.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_12;
		memset((&L_12), 0, sizeof(L_12));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_12), ((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)), ((double)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		// public static double3 operator * (double3 lhs, double3 rhs) { return new double3 (lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Subtraction_m22E94C140DA02DCD57ADB54B6DEEFA271AEB82A0_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_rhs, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double3 operator - (double3 lhs, double3 rhs) { return new double3 (lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___1_rhs;
		double L_3 = L_2.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_lhs;
		double L_5 = L_4.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___1_rhs;
		double L_7 = L_6.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8 = ___0_lhs;
		double L_9 = L_8.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = ___1_rhs;
		double L_11 = L_10.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_12;
		memset((&L_12), 0, sizeof(L_12));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_12), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), ((double)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		// public static double3 operator - (double3 lhs, double3 rhs) { return new double3 (lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static float3 operator * (float3 lhs, float rhs) { return new float3 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_lhs;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___0_lhs;
		float L_7 = L_6.___z_2;
		float L_8 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		// public static float3 operator * (float3 lhs, float rhs) { return new float3 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3x3__ctor_m4A89254CD6C32BCF5BCEBC60A4E712E2360DD972_inline (double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0* __this, float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___0_v, const RuntimeMethod* method) 
{
	{
		// this.c0 = v.c0;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_0 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = L_0.___c0_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2;
		L_2 = double3_op_Implicit_m5DCE807570E8C929820AE8D221FFEE4861D9D5D9_inline(L_1, NULL);
		__this->___c0_0 = L_2;
		// this.c1 = v.c1;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_3 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = L_3.___c1_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5;
		L_5 = double3_op_Implicit_m5DCE807570E8C929820AE8D221FFEE4861D9D5D9_inline(L_4, NULL);
		__this->___c1_1 = L_5;
		// this.c2 = v.c2;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_6 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = L_6.___c2_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8;
		L_8 = double3_op_Implicit_m5DCE807570E8C929820AE8D221FFEE4861D9D5D9_inline(L_7, NULL);
		__this->___c2_2 = L_8;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Addition_mBAAE8EB7B08FA0F788CDC40FB633F4ACC0089DCA_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_lhs, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_rhs, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double3 operator + (double3 lhs, double3 rhs) { return new double3 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___1_rhs;
		double L_3 = L_2.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_lhs;
		double L_5 = L_4.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___1_rhs;
		double L_7 = L_6.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_8 = ___0_lhs;
		double L_9 = L_8.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = ___1_rhs;
		double L_11 = L_10.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_12;
		memset((&L_12), 0, sizeof(L_12));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_12), ((double)il2cpp_codegen_add(L_1, L_3)), ((double)il2cpp_codegen_add(L_5, L_7)), ((double)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		// public static double3 operator + (double3 lhs, double3 rhs) { return new double3 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 math_double3x3_mDEDFD3D5E0FAD4EC0550DE55A86A7D199B3CC61B_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_c0, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_c1, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___2_c2, const RuntimeMethod* method) 
{
	double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double3x3 double3x3(double3 c0, double3 c1, double3 c2) { return new double3x3(c0, c1, c2); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_c0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1 = ___1_c1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___2_c2;
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		double3x3__ctor_m0BF27C1E4D2C1C4965521A8B3A919CF9DB11B305_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		// public static double3x3 double3x3(double3 c0, double3 c1, double3 c2) { return new double3x3(c0, c1, c2); }
		double3x3_t3FC5A5668AD878A74586326751AF9BE7B1CEBBB0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 double3_op_Implicit_m5DCE807570E8C929820AE8D221FFEE4861D9D5D9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static implicit operator double3(float3 v) { return new double3(v); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_v;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		double3__ctor_m246C72AEDE9AC7E52CF7DF7FEE065D66EF96AB8A_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static implicit operator double3(float3 v) { return new double3(v); }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3__ctor_m246C72AEDE9AC7E52CF7DF7FEE065D66EF96AB8A_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_v, const RuntimeMethod* method) 
{
	{
		// this.x = v.x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		__this->___x_0 = ((double)L_1);
		// this.y = v.y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		__this->___y_1 = ((double)L_3);
		// this.z = v.z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_v;
		float L_5 = L_4.___z_2;
		__this->___z_2 = ((double)L_5);
		// }
		return;
	}
}
