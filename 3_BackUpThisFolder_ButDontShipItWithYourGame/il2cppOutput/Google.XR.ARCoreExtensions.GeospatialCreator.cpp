#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.HashSet`1<CesiumForUnity.CesiumGlobeAnchor>
struct HashSet_1_t4EBB7FFFC2C24145546AEE4DEF0DE46813887C67;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<Unity.Mathematics.double4x4>
struct List_1_t6D81254724F3D681C217D109C6625D5546B0E83F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// CesiumForUnity.CesiumGeoreference[]
struct CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.Mathematics.double4x4[]
struct double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor
struct ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin
struct ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CesiumForUnity.Cesium3DTileset
struct Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA;
// CesiumForUnity.CesiumGeoreference
struct CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268;
// CesiumForUnity.CesiumPointCloudShading
struct CesiumPointCloudShading_t0A4B38FD790EAFF27C00F7BC17FAC74DB4634CA5;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.CesiumWgs84Ellipsoid
struct CesiumWgs84Ellipsoid_t4246599A46369C1B05E29AA972616D5585034170;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor
struct GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference
struct GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint
struct GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint
struct LoadingPoint_tDA546B3819D8AF956BF33F5B7FC592CA0E187B79;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack
struct MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise
struct ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77;
// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult
struct ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE;
// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise
struct ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9;
// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult
struct ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24
struct U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF;
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23
struct U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4;
// CesiumForUnity.Cesium3DTileset/ImplementationHandle
struct ImplementationHandle_t685BC708FB0C8850A500FC041F737C2710BD78FC;
// CesiumForUnity.Cesium3DTileset/TilesetLoadFailureDelegate
struct TilesetLoadFailureDelegate_t6E00F7291205D117E7E5713F818BCEB6A898C0F9;
// CesiumForUnity.CesiumGeoreference/ImplementationHandle
struct ImplementationHandle_t4087DC3CB078155FA3EFE95CB797A103DB3E326A;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D81254724F3D681C217D109C6625D5546B0E83F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F651D4EEFEE935935DB26EAF34852BDAA290384;
IL2CPP_EXTERN_C String_t* _stringLiteral167E0E60C80E4379ADB2C61F2596983EFF2493CD;
IL2CPP_EXTERN_C String_t* _stringLiteral178E2B054598EB61E3A6A0BD6CEFD3ECDD3E0C16;
IL2CPP_EXTERN_C String_t* _stringLiteral2891EDC0F3253DBF60F4A46DAEAB13E574F33184;
IL2CPP_EXTERN_C String_t* _stringLiteral4944ED8F73D8862F38A9B81FEF79F8F71BC3522C;
IL2CPP_EXTERN_C String_t* _stringLiteral72D43635D032EFE8ABD52D38AF1CC1C32DF21E54;
IL2CPP_EXTERN_C String_t* _stringLiteralC1A498C718E65F7506D2F8A136DB178751B64C9C;
IL2CPP_EXTERN_C String_t* _stringLiteralD28F184E39190D1F844C57D8F7621E7CEA288E50;
IL2CPP_EXTERN_C String_t* _stringLiteralD497806D9990B499E542954455C1415F4C7774E6;
IL2CPP_EXTERN_C String_t* _stringLiteralD6523ED0005C63F48818BE83D2AF462B33881083;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B8B90A1837CF408F12C4EED1A5893D8666277C;
IL2CPP_EXTERN_C const RuntimeMethod* ARGeospatialCreatorOrigin_AddNewGeoreferenceComponent_mF5D131639113C51E3823CE1D7491E99F68891B92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m2F87BE2B19A47ADDAF4E4ED69766C18E4F381976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m6664EDBA0DB508BC3A47605C3D438541E5F00F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResolveRooftopAnchorU3Ed__24_System_Collections_IEnumerator_Reset_m7B9A59FF1583430CF1629BE1E10D7FDCF618EAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResolveTerrainAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m82E47329070B44D3CCB8D4FAAE755AEB7B73854B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t318AF21F6E4D82A702C9B615A331747C5E18C54C 
{
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.Mathematics.double4x4>
struct List_1_t6D81254724F3D681C217D109C6625D5546B0E83F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.CesiumWgs84Ellipsoid
struct CesiumWgs84Ellipsoid_t4246599A46369C1B05E29AA972616D5585034170  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor
struct GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA  : public RuntimeObject
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::Height
	double ___Height_2;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference
struct GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419  : public RuntimeObject
{
	// CesiumForUnity.CesiumGeoreference Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::geoReference
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* ___geoReference_0;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint
struct GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C  : public RuntimeObject
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint::Height
	double ___Height_2;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack
struct MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.Mathematics.double4x4> Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::Stack
	List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* ___Stack_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult
struct ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE  : public RuntimeObject
{
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult::_anchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ____anchor_0;
	// Google.XR.ARCoreExtensions.RooftopAnchorState Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult::_state
	int32_t ____state_1;
};

// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult
struct ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC  : public RuntimeObject
{
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult::_anchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ____anchor_0;
	// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult::_state
	int32_t ____state_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24
struct U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::anchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager_2;
	// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::<>4__this
	ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* ___U3CU3E4__this_3;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::<anchor>5__1
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___U3CanchorU3E5__1_4;
	// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::<promise>5__2
	ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77* ___U3CpromiseU3E5__2_5;
	// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::<result>5__3
	ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* ___U3CresultU3E5__3_6;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23
struct U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::anchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager_2;
	// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::<>4__this
	ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* ___U3CU3E4__this_3;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::<anchor>5__1
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___U3CanchorU3E5__1_4;
	// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::<promise>5__2
	ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9* ___U3CpromiseU3E5__2_5;
	// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::<result>5__3
	ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* ___U3CresultU3E5__3_6;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult>
struct InterruptiblePromise_1_tA2891267C9BC379BC47B218FC5E3F0565652B4B9  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_state
	int32_t ____state_0;
	// T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_result
	ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* ____result_1;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_future
	intptr_t ____future_2;
};

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult>
struct InterruptiblePromise_1_t66FAB53D78EBDDC28EFE1CD0EE3BEBB3730D9266  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_state
	int32_t ____state_0;
	// T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_result
	ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* ____result_1;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_future
	intptr_t ____future_2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint
struct LoadingPoint_tDA546B3819D8AF956BF33F5B7FC592CA0E187B79  : public RuntimeObject
{
	// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::PositionInECEF
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___PositionInECEF_0;
	// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::PositionInUnityWorldSpace
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___PositionInUnityWorldSpace_1;
	// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::PositionInGLTFSpace
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___PositionInGLTFSpace_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::Radius
	double ___Radius_3;
	// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::LatLongGeoCoor
	GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* ___LatLongGeoCoor_4;
	// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::bbToEUNPos
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___bbToEUNPos_5;
	// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::bbToEUNRot
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___bbToEUNRot_6;
	// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::meshEUNPos
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___meshEUNPos_7;
};

// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise
struct ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77  : public InterruptiblePromise_1_tA2891267C9BC379BC47B218FC5E3F0565652B4B9
{
};

// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise
struct ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9  : public InterruptiblePromise_1_t66FAB53D78EBDDC28EFE1CD0EE3BEBB3730D9266
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349* ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9* ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ____cachedFilter_17;
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor
struct ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/AltitudeType Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::AltType
	int32_t ___AltType_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::_latitude
	double ____latitude_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::_longitude
	double ____longitude_6;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::_altitude
	double ____altitude_7;
	// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::_altitudeOffset
	double ____altitudeOffset_8;
	// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/AnchorResolutionState Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::_anchorResolution
	int32_t ____anchorResolution_9;
};

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin
struct ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
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

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>

// System.Collections.Generic.List`1<Unity.Mathematics.double4x4>
struct List_1_t6D81254724F3D681C217D109C6625D5546B0E83F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Mathematics.double4x4>

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.CesiumWgs84Ellipsoid

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.CesiumWgs84Ellipsoid

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult

// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult

// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult

// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

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

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult>

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult>

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult>

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Mathematics.double4x4
struct double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_StaticFields
{
	// Unity.Mathematics.double4x4 Unity.Mathematics.double4x4::identity
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___identity_4;
	// Unity.Mathematics.double4x4 Unity.Mathematics.double4x4::zero
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___zero_5;
};

// Unity.Mathematics.double4x4

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint

// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise
struct ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise::_rooftopAnchorName
	String_t* ____rooftopAnchorName_3;
};

// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise

// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise
struct ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise::_terrainAnchorName
	String_t* ____terrainAnchorName_3;
};

// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_18;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions

// Google.XR.ARCoreExtensions.ARGeospatialAnchor

// Google.XR.ARCoreExtensions.ARGeospatialAnchor

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin

// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.XR.ARFoundation.ARSessionOrigin

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

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARAnchorManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CesiumForUnity.CesiumGeoreference[]
struct CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* m_Items[1];

	inline CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Mathematics.double4x4[]
struct double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216  : public RuntimeArray
{
	ALIGN_FIELD (8) double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C m_Items[1];

	inline double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4_gshared (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_gshared_inline (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_gshared_inline (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_gshared (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE_gshared (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_gshared (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, int32_t ___0_index, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m080DDCB03E6111A6FB7C8A5BC2CD1CCBFBE3BECC_gshared (bool ___0_includeInactive, const RuntimeMethod* method) ;

// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline (const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthTrackingState_m7B98827AB1AB75158CEFC85D4B6B873F5617240A (intptr_t ___0_sessionHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::ResolveTerrainAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARGeospatialCreatorAnchor_ResolveTerrainAnchor_mF597996D2B3324B6D5F2DA773D8D52B31CE2CD28 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::ResolveRooftopAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARGeospatialCreatorAnchor_ResolveRooftopAnchor_m9520D72E485465AC79F3246B9CF407BF55EF8BC5 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::ResolveManualAltitudeAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_ResolveManualAltitudeAnchor_m7ABB0116DAFC81C8676419B4025EF0E5280F48AD (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_Latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Latitude_mADA1C45336A23FD5A49555D7056B124C26C97A8F_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) ;
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_Longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Longitude_m1DD692ED45E247B9E6E7752A3B9572CA8C4E2F14_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) ;
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_Altitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Altitude_m99F0029B7D099B31F3062EFA4E3470D6768BAA0B_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, double ___1_latitude, double ___2_longitude, double ___3_altitude, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4_eunRotation, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::FinishAnchor(Google.XR.ARCoreExtensions.ARGeospatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_FinishAnchor_mFBF76EAE91EC4688101C9FE5B19FBA5999E4194D (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___0_resolvedAnchor, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveTerrainAnchorU3Ed__23__ctor_mA3CFC67D666846589246FF451B2807DFA10F66D1 (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveRooftopAnchorU3Ed__24__ctor_m3301F8C762E4CFFADA9E74395C7747409D930B33 (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::AddGeoAnchorAtRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_AddGeoAnchorAtRuntime_m0B7B0264D8334BFA485B3F9A1E3EEEFF262EC3A4 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_AltitudeOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_AltitudeOffset_mD2D1468D0C17222AC636C7AEEABBACDCF7CBB2BE_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainPromise Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveAnchorOnTerrainAsync(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9* ARAnchorManagerExtensions_ResolveAnchorOnTerrainAsync_m18C6AF69E828BE53098DE9D07350D3CB7E26C6F6 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, double ___1_latitude, double ___2_longitude, double ___3_altitudeAboveTerrain, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4_eunRotation, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult::get_TerrainAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResolveAnchorOnTerrainResult_get_TerrainAnchorState_m5FC9B7EE4F49F0A5660E126E8ED6E9BFAAE6107B (ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult::get_Anchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ResolveAnchorOnTerrainResult_get_Anchor_mF8373E457A4231D3C902D4884951BAB0F65A2E15 (ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopPromise Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveAnchorOnRooftopAsync(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77* ARAnchorManagerExtensions_ResolveAnchorOnRooftopAsync_m8419751F38260476CF68CFEACF2848704673FD64 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, double ___1_latitude, double ___2_longitude, double ___3_altitudeAboveRooftop, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4_eunRotation, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RooftopAnchorState Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult::get_RooftopAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResolveAnchorOnRooftopResult_get_RooftopAnchorState_m742CFE1AFAA4FFCBF8DF0D171F40FBAA125534E7 (ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult::get_Anchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ResolveAnchorOnRooftopResult_get_Anchor_m0BAD30FBB879AB87E30164968B1BB1835A119F6C (ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::HasGeoreference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARGeospatialCreatorOrigin_HasGeoreference_mD8BF9A5D12EAD768DACB459FF07493379926CA42 (ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_componentType, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.Cesium3DTileset::set_tilesetSource(CesiumForUnity.CesiumDataSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cesium3DTileset_set_tilesetSource_m2A6E100199E62248002E745EB03B9139EA9D38BF (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.Cesium3DTileset::set_showCreditsOnScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cesium3DTileset_set_showCreditsOnScreen_m983B6E97CF824353B1B54B5C1EC1632497578F26 (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.Cesium3DTileset::set_createPhysicsMeshes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cesium3DTileset_set_createPhysicsMeshes_mB4CB6022CC60EFB706B72B759A9204988FC7D106 (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponentInChildren_m29091882C8D5FDCDD7C7634D8BC740ED6B464A27 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.String CesiumForUnity.Cesium3DTileset::get_url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cesium3DTileset_get_url_m1EF8B79AF228F1A1C494F97E437496255A06936C_inline (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::ApiKeyFromTilesetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARGeospatialCreatorOrigin_ApiKeyFromTilesetUrl_m7EA3D4CA80EEC3883FED4C6FC6B6D3019D94B7C3 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::TilesApiUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARGeospatialCreatorOrigin_TilesApiUrl_m329DC36E99173839FC56A1E27BD0DF1AE009B458 (String_t* ___0_apiKey, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void CesiumForUnity.Cesium3DTileset::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cesium3DTileset_set_url_mB782B8374C5D9B75FEB3113BB356B2DB24E84F15 (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::sgn(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeoCoor_sgn_m14F5BE51B7FBF3F65A78208A64D174ABB94891CE (double ___0_val, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoCoor__ctor_mD699A38AEF1622E57E7B6485634354E55097B06E (GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* __this, double ___0__Latitude, double ___1__Longitude, double ___2__Height, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::GeoCoorToECEF(Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 GeoCoor_GeoCoorToECEF_m91F775E4B683D08C74B99A6C942E0D9819AF164E (GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* ___0_Coor, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double3::.ctor(System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, double ___0_x, double ___1_y, double ___2_z, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack__ctor_m02C17824F5217F2B81CA2D938BC5D4E8F7923E4E (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_PushMatrix_mBACE602BC613A62D6443FE2147C29A727FAA23D7 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.math::sincos(System.Double,System.Double&,System.Double&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline (double ___0_x, double* ___1_s, double* ___2_c, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double4x4::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* __this, double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m03, double ___4_m10, double ___5_m11, double ___6_m12, double ___7_m13, double ___8_m20, double ___9_m21, double ___10_m22, double ___11_m23, double ___12_m30, double ___13_m31, double ___14_m32, double ___15_m33, const RuntimeMethod* method) ;
// Unity.Mathematics.double4x4 Unity.Mathematics.math::inverse(Unity.Mathematics.double4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_inverse_m57DA93D98330B95887CFBFC00A7D6394A567D2F3 (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_m, const RuntimeMethod* method) ;
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::Translate(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_Translate_m015ECF5F3FA74C195B1C1B6DF60CB4655DBAAD4E (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_vector, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultMatrix(Unity.Mathematics.double4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_m, const RuntimeMethod* method) ;
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_GetMatrix_m5D5BBEBD7918A125CA5EAD9C7931408BAAE97294 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_PopMatrix_m6FBFEAD9C6568A4854C7FE45719411352587B332 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::.ctor()
inline void List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4 (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, const RuntimeMethod*))List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::Add(T)
inline void List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_inline (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C, const RuntimeMethod*))List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::get_Count()
inline int32_t List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, const RuntimeMethod*))List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::get_Item(System.Int32)
inline double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, int32_t, const RuntimeMethod*))List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE_gshared)(__this, ___0_index, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// Unity.Mathematics.double4x4 Unity.Mathematics.math::transpose(Unity.Mathematics.double4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_transpose_mA6CBDA629756DA5259C33936C0843AFE06B29442_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_v, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Mathematics.double4x4>::set_Item(System.Int32,T)
inline void List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7 (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, int32_t ___0_index, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, int32_t, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C, const RuntimeMethod*))List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_gshared)(__this, ___0_index, ___1_value, method);
}
// Unity.Mathematics.double4x4 Unity.Mathematics.math::mul(Unity.Mathematics.double4x4,Unity.Mathematics.double4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_mul_m50A1B4F116C12B9D7A4525963841E7A7D3F592D4_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_a, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
inline int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
inline double List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  double (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, int32_t, const RuntimeMethod*))List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_gshared)(__this, ___0_index, method);
}
// System.Void Unity.Mathematics.double4::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, double ___0_x, double ___1_y, double ___2_z, double ___3_w, const RuntimeMethod* method) ;
// Unity.Mathematics.double4 Unity.Mathematics.math::mul(Unity.Mathematics.double4x4,Unity.Mathematics.double4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 math_mul_m15697BA79A02858D72C9114C635AF321624CBD0D_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_a, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_b, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.double3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.double4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5 (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double4x4::.ctor(Unity.Mathematics.double4,Unity.Mathematics.double4,Unity.Mathematics.double4,Unity.Mathematics.double4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double4x4__ctor_mC28DA9877244770A1E61E41A50DF95F405AFD34B_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C* __this, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_c0, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_c1, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___2_c2, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___3_c3, const RuntimeMethod* method) ;
// CesiumForUnity.CesiumGeoreference Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::GetReference(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584 (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// System.Double CesiumForUnity.CesiumGeoreference::get_latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CesiumGeoreference_get_latitude_m8C90C4AB329B14C76BF77578CCC329359EB09813_inline (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) ;
// System.Double CesiumForUnity.CesiumGeoreference::get_longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CesiumGeoreference_get_longitude_m210F8A0262C00066F16E2F6066F93BCF08F92FA9_inline (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) ;
// System.Double CesiumForUnity.CesiumGeoreference::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CesiumGeoreference_get_height_m5E80EBABC7E1CCC7DD30C5E23242D511FAAE2220_inline (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReferencePoint__ctor_m9F7BCABAEDA08CC0F96B4318068EE599A143CC92 (GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* __this, double ___0_latitude, double ___1_longitude, double ___2_height, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::SetGameLayerRecursive(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReference_SetGameLayerRecursive_mFAFDB95226DEC4C61CA376A35400646FC84142D3 (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0__go, int32_t ___1__layer, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInParent<CesiumForUnity.CesiumGeoreference>()
inline CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GameObject_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m2F87BE2B19A47ADDAF4E4ED69766C18E4F381976 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// CesiumForUnity.CesiumGeoreference Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::FindFirstGeoreference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GeoTilesReference_FindFirstGeoreference_mCD61823867BF1474F73E5EF8774D1948399F309C (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<CesiumForUnity.CesiumGeoreference>(System.Boolean)
inline CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B* Object_FindObjectsOfType_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m6664EDBA0DB508BC3A47605C3D438541E5F00F00 (bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B* (*) (bool, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m080DDCB03E6111A6FB7C8A5BC2CD1CCBFBE3BECC_gshared)(___0_includeInactive, method);
}
// Unity.Mathematics.double3 CesiumForUnity.CesiumWgs84Ellipsoid::EarthCenteredEarthFixedToLongitudeLatitudeHeight(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mBD814A88230A66A8651170CD363EE449BB144C12 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_earthCenteredEarthFixed, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::sin(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_sin_mECAF323FE370428B2881CCEF886F462DB089ECF3_inline (double ___0_x, const RuntimeMethod* method) ;
// System.Double Unity.Mathematics.math::cos(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_cos_m59BA9F1A619ADBD65046E69D6B86149133801789_inline (double ___0_x, const RuntimeMethod* method) ;
// Unity.Mathematics.double4x4 Unity.Mathematics.math::double4x4(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_double4x4_mE09AF571F7B474DAF15C89D63C9688587DCE4FC6_inline (double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m03, double ___4_m10, double ___5_m11, double ___6_m12, double ___7_m13, double ___8_m20, double ___9_m21, double ___10_m22, double ___11_m23, double ___12_m30, double ___13_m31, double ___14_m32, double ___15_m33, const RuntimeMethod* method) ;
// Unity.Mathematics.double4 Unity.Mathematics.double4::op_Multiply(Unity.Mathematics.double4,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_lhs, double ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.double4 Unity.Mathematics.double4::op_Addition(Unity.Mathematics.double4,Unity.Mathematics.double4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_lhs, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.double4x4 Unity.Mathematics.math::double4x4(Unity.Mathematics.double4,Unity.Mathematics.double4,Unity.Mathematics.double4,Unity.Mathematics.double4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_double4x4_m4B7FDA54BD0CA73F1DCF27FB0CC01C4A850F90F2_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_c0, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_c1, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___2_c2, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___3_c3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Latitude_mADA1C45336A23FD5A49555D7056B124C26C97A8F (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._latitude;
		double L_0 = __this->____latitude_5;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::set_Latitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_set_Latitude_m1C096D926BB3D3D5413F9173FB8E8328B864D8A8 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// set { this._latitude = value; }
		double L_0 = ___0_value;
		__this->____latitude_5 = L_0;
		// set { this._latitude = value; }
		return;
	}
}
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Longitude_m1DD692ED45E247B9E6E7752A3B9572CA8C4E2F14 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._longitude;
		double L_0 = __this->____longitude_6;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::set_Longitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_set_Longitude_mC740DC9DFB2DAC89B02CEBEDCE87352F686BE67D (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// set { this._longitude = value; }
		double L_0 = ___0_value;
		__this->____longitude_6 = L_0;
		// set { this._longitude = value; }
		return;
	}
}
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_Altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Altitude_m99F0029B7D099B31F3062EFA4E3470D6768BAA0B (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._altitude;
		double L_0 = __this->____altitude_7;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::set_Altitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_set_Altitude_mD0634D9934FDF82A24B852508D98CFD074EB3365 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// set { this._altitude = value; }
		double L_0 = ___0_value;
		__this->____altitude_7 = L_0;
		// set { this._altitude = value; }
		return;
	}
}
// System.Double Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::get_AltitudeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_AltitudeOffset_mD2D1468D0C17222AC636C7AEEABBACDCF7CBB2BE (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._altitudeOffset;
		double L_0 = __this->____altitudeOffset_8;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::set_AltitudeOffset(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_set_AltitudeOffset_mB8B7CA1C10FE7DCCAE629958FEFB819ADA4B1A0D (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// set { this._altitudeOffset = value; }
		double L_0 = ___0_value;
		__this->____altitudeOffset_8 = L_0;
		// set { this._altitudeOffset = value; }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::AddGeoAnchorAtRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_AddGeoAnchorAtRuntime_m0B7B0264D8334BFA485B3F9A1E3EEEFF262EC3A4 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D43635D032EFE8ABD52D38AF1CC1C32DF21E54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B8B90A1837CF408F12C4EED1A5893D8666277C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// IntPtr sessionHandle = ARCoreExtensions._instance.currentARCoreSessionHandle;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		V_0 = L_1;
		// if (sessionHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_00d1;
	}

IL_0021:
	{
		// if (EarthApi.GetEarthTrackingState(sessionHandle) != TrackingState.Tracking)
		intptr_t L_6 = V_0;
		int32_t L_7;
		L_7 = EarthApi_GetEarthTrackingState_m7B98827AB1AB75158CEFC85D4B6B873F5617240A(L_6, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.Log("Waiting for AR Session to become stable (earthTrackingState != TrackingState.Tracking)");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral72D43635D032EFE8ABD52D38AF1CC1C32DF21E54, NULL);
		// return;
		goto IL_00d1;
	}

IL_0042:
	{
		// ARAnchorManager anchorManager =
		//     ARCoreExtensions._instance.SessionOrigin.GetComponent<ARAnchorManager>();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_9;
		L_9 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_9);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_10 = L_9->___SessionOrigin_5;
		NullCheck(L_10);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_11;
		L_11 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(L_10, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		V_1 = L_11;
		// if (anchorManager == null)
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		// Debug.LogError(
		//     "The Session Origin has no Anchor Manager. " +
		//     "Unable to place Geospatial Creator Anchor " +
		//     name);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE3B8B90A1837CF408F12C4EED1A5893D8666277C, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
		// _anchorResolution = AnchorResolutionState.Complete;
		__this->____anchorResolution_9 = 2;
		// return;
		goto IL_00d1;
	}

IL_007f:
	{
		// _anchorResolution = AnchorResolutionState.InProgress;
		__this->____anchorResolution_9 = 1;
		// switch (this.AltType)
		int32_t L_17 = __this->___AltType_4;
		V_6 = L_17;
		int32_t L_18 = V_6;
		V_5 = L_18;
		int32_t L_19 = V_5;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00c7;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_00b7;
			}
		}
	}
	{
		goto IL_00d1;
	}

IL_00a7:
	{
		// StartCoroutine(ResolveTerrainAnchor(anchorManager));
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_20 = V_1;
		RuntimeObject* L_21;
		L_21 = ARGeospatialCreatorAnchor_ResolveTerrainAnchor_mF597996D2B3324B6D5F2DA773D8D52B31CE2CD28(__this, L_20, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_21, NULL);
		// break;
		goto IL_00d1;
	}

IL_00b7:
	{
		// StartCoroutine(ResolveRooftopAnchor(anchorManager));
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_23 = V_1;
		RuntimeObject* L_24;
		L_24 = ARGeospatialCreatorAnchor_ResolveRooftopAnchor_m9520D72E485465AC79F3246B9CF407BF55EF8BC5(__this, L_23, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_24, NULL);
		// break;
		goto IL_00d1;
	}

IL_00c7:
	{
		// ResolveManualAltitudeAnchor(anchorManager);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_26 = V_1;
		ARGeospatialCreatorAnchor_ResolveManualAltitudeAnchor_m7ABB0116DAFC81C8676419B4025EF0E5280F48AD(__this, L_26, NULL);
		// break;
		goto IL_00d1;
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::FinishAnchor(Google.XR.ARCoreExtensions.ARGeospatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_FinishAnchor_mFBF76EAE91EC4688101C9FE5B19FBA5999E4194D (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___0_resolvedAnchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral167E0E60C80E4379ADB2C61F2596983EFF2493CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178E2B054598EB61E3A6A0BD6CEFD3ECDD3E0C16);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (resolvedAnchor == null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_0 = ___0_resolvedAnchor;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.LogError("Failed to make Geospatial Anchor for " + name);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral178E2B054598EB61E3A6A0BD6CEFD3ECDD3E0C16, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// _anchorResolution = AnchorResolutionState.Complete;
		__this->____anchorResolution_9 = 2;
		// return;
		goto IL_008d;
	}

IL_002c:
	{
		// transform.position = new Vector3(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// transform.SetParent(resolvedAnchor.transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_10 = ___0_resolvedAnchor;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_11, (bool)0, NULL);
		// _anchorResolution = AnchorResolutionState.Complete;
		__this->____anchorResolution_9 = 2;
		// Debug.Log("Geospatial Anchor resolved: " + name);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral167E0E60C80E4379ADB2C61F2596983EFF2493CD, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::ResolveManualAltitudeAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_ResolveManualAltitudeAnchor_m7ABB0116DAFC81C8676419B4025EF0E5280F48AD (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_0 = NULL;
	{
		// ARGeospatialAnchor anchor = anchorManager.AddAnchor(
		//         Latitude, Longitude, Altitude, transform.rotation);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_0 = ___0_anchorManager;
		double L_1;
		L_1 = ARGeospatialCreatorAnchor_get_Latitude_mADA1C45336A23FD5A49555D7056B124C26C97A8F_inline(__this, NULL);
		double L_2;
		L_2 = ARGeospatialCreatorAnchor_get_Longitude_m1DD692ED45E247B9E6E7752A3B9572CA8C4E2F14_inline(__this, NULL);
		double L_3;
		L_3 = ARGeospatialCreatorAnchor_get_Altitude_m99F0029B7D099B31F3062EFA4E3470D6768BAA0B_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_6;
		L_6 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_0, L_1, L_2, L_3, L_5, NULL);
		V_0 = L_6;
		// FinishAnchor(anchor);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_7 = V_0;
		ARGeospatialCreatorAnchor_FinishAnchor_mFBF76EAE91EC4688101C9FE5B19FBA5999E4194D(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::ResolveTerrainAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARGeospatialCreatorAnchor_ResolveTerrainAnchor_mF597996D2B3324B6D5F2DA773D8D52B31CE2CD28 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* L_0 = (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4*)il2cpp_codegen_object_new(U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CResolveTerrainAnchorU3Ed__23__ctor_mA3CFC67D666846589246FF451B2807DFA10F66D1(L_0, 0, NULL);
		U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* L_2 = L_1;
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_3 = ___0_anchorManager;
		NullCheck(L_2);
		L_2->___anchorManager_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___anchorManager_2), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::ResolveRooftopAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARGeospatialCreatorAnchor_ResolveRooftopAnchor_m9520D72E485465AC79F3246B9CF407BF55EF8BC5 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* L_0 = (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF*)il2cpp_codegen_object_new(U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CResolveRooftopAnchorU3Ed__24__ctor_m3301F8C762E4CFFADA9E74395C7747409D930B33(L_0, 0, NULL);
		U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* L_2 = L_1;
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_3 = ___0_anchorManager;
		NullCheck(L_2);
		L_2->___anchorManager_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___anchorManager_2), (void*)L_3);
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor_Update_m57ABE22847514D497C24E4A73E152F5CB336524D (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0026;
	}

IL_0010:
	{
		// if (_anchorResolution == AnchorResolutionState.NotStarted)
		int32_t L_2 = __this->____anchorResolution_9;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// AddGeoAnchorAtRuntime();
		ARGeospatialCreatorAnchor_AddGeoAnchorAtRuntime_m0B7B0264D8334BFA485B3F9A1E3EEEFF262EC3A4(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorAnchor__ctor_m0239CC19CA18709BBA10A0A10B637EE9C0D7D965 (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// public AltitudeType AltType = AltitudeType.ManualAltitude;
		__this->___AltType_4 = 0;
		// private AnchorResolutionState _anchorResolution = AnchorResolutionState.NotStarted;
		__this->____anchorResolution_9 = 0;
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveTerrainAnchorU3Ed__23__ctor_mA3CFC67D666846589246FF451B2807DFA10F66D1 (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveTerrainAnchorU3Ed__23_System_IDisposable_Dispose_m9097DBAA75162810A8B73498B2812BE0BA6470D5 (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResolveTerrainAnchorU3Ed__23_MoveNext_m01A1428F33369BF171FEB2AF8FAE003DF6E3D1A7 (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
		goto IL_007e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ARGeospatialAnchor anchor = null;
		__this->___U3CanchorU3E5__1_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanchorU3E5__1_4), (void*)(ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL);
		// ResolveAnchorOnTerrainPromise promise =
		//             anchorManager.ResolveAnchorOnTerrainAsync(
		//                 Latitude, Longitude, AltitudeOffset, transform.rotation);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_3 = __this->___anchorManager_2;
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_4 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		double L_5;
		L_5 = ARGeospatialCreatorAnchor_get_Latitude_mADA1C45336A23FD5A49555D7056B124C26C97A8F_inline(L_4, NULL);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_6 = __this->___U3CU3E4__this_3;
		NullCheck(L_6);
		double L_7;
		L_7 = ARGeospatialCreatorAnchor_get_Longitude_m1DD692ED45E247B9E6E7752A3B9572CA8C4E2F14_inline(L_6, NULL);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		double L_9;
		L_9 = ARGeospatialCreatorAnchor_get_AltitudeOffset_mD2D1468D0C17222AC636C7AEEABBACDCF7CBB2BE_inline(L_8, NULL);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9* L_13;
		L_13 = ARAnchorManagerExtensions_ResolveAnchorOnTerrainAsync_m18C6AF69E828BE53098DE9D07350D3CB7E26C6F6(L_3, L_5, L_7, L_9, L_12, NULL);
		__this->___U3CpromiseU3E5__2_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpromiseU3E5__2_5), (void*)L_13);
		// yield return promise;
		ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9* L_14 = __this->___U3CpromiseU3E5__2_5;
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var result = promise.Result;
		ResolveAnchorOnTerrainPromise_tF93A57CF7328C710A21330EBA79D0CA807A805D9* L_15 = __this->___U3CpromiseU3E5__2_5;
		NullCheck(L_15);
		ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* L_16;
		L_16 = VirtualFuncInvoker0< ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* >::Invoke(9 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnTerrainResult>::get_Result() */, L_15);
		__this->___U3CresultU3E5__3_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_6), (void*)L_16);
		// if (result.TerrainAnchorState == TerrainAnchorState.Success)
		ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* L_17 = __this->___U3CresultU3E5__3_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ResolveAnchorOnTerrainResult_get_TerrainAnchorState_m5FC9B7EE4F49F0A5660E126E8ED6E9BFAAE6107B(L_17, NULL);
		V_1 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		// anchor = result.Anchor;
		ResolveAnchorOnTerrainResult_t3839063A94F326D2A1CC5B574A8690B0BCEE58AC* L_20 = __this->___U3CresultU3E5__3_6;
		NullCheck(L_20);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_21;
		L_21 = ResolveAnchorOnTerrainResult_get_Anchor_mF8373E457A4231D3C902D4884951BAB0F65A2E15(L_20, NULL);
		__this->___U3CanchorU3E5__1_4 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanchorU3E5__1_4), (void*)L_21);
	}

IL_00bb:
	{
		// FinishAnchor(anchor);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_22 = __this->___U3CU3E4__this_3;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_23 = __this->___U3CanchorU3E5__1_4;
		NullCheck(L_22);
		ARGeospatialCreatorAnchor_FinishAnchor_mFBF76EAE91EC4688101C9FE5B19FBA5999E4194D(L_22, L_23, NULL);
		// yield break;
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResolveTerrainAnchorU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6AC6283C7AE8AD8DA2DF4439BE535A436F92B527 (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveTerrainAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m82E47329070B44D3CCB8D4FAAE755AEB7B73854B (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveTerrainAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m82E47329070B44D3CCB8D4FAAE755AEB7B73854B_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveTerrainAnchor>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResolveTerrainAnchorU3Ed__23_System_Collections_IEnumerator_get_Current_m0A1484BB267ABEC80689F135CC63060CE76ABFEE (U3CResolveTerrainAnchorU3Ed__23_t11DA7D46936B1B2B95D3FB7B7EAA0788AC130CA4* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveRooftopAnchorU3Ed__24__ctor_m3301F8C762E4CFFADA9E74395C7747409D930B33 (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveRooftopAnchorU3Ed__24_System_IDisposable_Dispose_m263A8727AEEBA9D51C3392E6A41FF674C4978BF7 (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResolveRooftopAnchorU3Ed__24_MoveNext_m868A2D8F5D28CDDF4B37184B9DA6223B126D858D (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
		goto IL_007e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ARGeospatialAnchor anchor = null;
		__this->___U3CanchorU3E5__1_4 = (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanchorU3E5__1_4), (void*)(ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL);
		// ResolveAnchorOnRooftopPromise promise =
		//             anchorManager.ResolveAnchorOnRooftopAsync(
		//                 Latitude, Longitude, AltitudeOffset, transform.rotation);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_3 = __this->___anchorManager_2;
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_4 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		double L_5;
		L_5 = ARGeospatialCreatorAnchor_get_Latitude_mADA1C45336A23FD5A49555D7056B124C26C97A8F_inline(L_4, NULL);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_6 = __this->___U3CU3E4__this_3;
		NullCheck(L_6);
		double L_7;
		L_7 = ARGeospatialCreatorAnchor_get_Longitude_m1DD692ED45E247B9E6E7752A3B9572CA8C4E2F14_inline(L_6, NULL);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		double L_9;
		L_9 = ARGeospatialCreatorAnchor_get_AltitudeOffset_mD2D1468D0C17222AC636C7AEEABBACDCF7CBB2BE_inline(L_8, NULL);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77* L_13;
		L_13 = ARAnchorManagerExtensions_ResolveAnchorOnRooftopAsync_m8419751F38260476CF68CFEACF2848704673FD64(L_3, L_5, L_7, L_9, L_12, NULL);
		__this->___U3CpromiseU3E5__2_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpromiseU3E5__2_5), (void*)L_13);
		// yield return promise;
		ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77* L_14 = __this->___U3CpromiseU3E5__2_5;
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var result = promise.Result;
		ResolveAnchorOnRooftopPromise_t13EFF2E18A2D3A2971B67157D7AE7FDAD9F8DB77* L_15 = __this->___U3CpromiseU3E5__2_5;
		NullCheck(L_15);
		ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* L_16;
		L_16 = VirtualFuncInvoker0< ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* >::Invoke(9 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.ResolveAnchorOnRooftopResult>::get_Result() */, L_15);
		__this->___U3CresultU3E5__3_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_6), (void*)L_16);
		// if (result.RooftopAnchorState == RooftopAnchorState.Success)
		ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* L_17 = __this->___U3CresultU3E5__3_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ResolveAnchorOnRooftopResult_get_RooftopAnchorState_m742CFE1AFAA4FFCBF8DF0D171F40FBAA125534E7(L_17, NULL);
		V_1 = (bool)((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		// anchor = result.Anchor;
		ResolveAnchorOnRooftopResult_t7A3B468849DFBC02D87CDC521E3B4FDC026B15FE* L_20 = __this->___U3CresultU3E5__3_6;
		NullCheck(L_20);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_21;
		L_21 = ResolveAnchorOnRooftopResult_get_Anchor_m0BAD30FBB879AB87E30164968B1BB1835A119F6C(L_20, NULL);
		__this->___U3CanchorU3E5__1_4 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanchorU3E5__1_4), (void*)L_21);
	}

IL_00bb:
	{
		// FinishAnchor(anchor);
		ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* L_22 = __this->___U3CU3E4__this_3;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_23 = __this->___U3CanchorU3E5__1_4;
		NullCheck(L_22);
		ARGeospatialCreatorAnchor_FinishAnchor_mFBF76EAE91EC4688101C9FE5B19FBA5999E4194D(L_22, L_23, NULL);
		// yield break;
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResolveRooftopAnchorU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFAD6FD083E5E22040D36E7538DA2E41B7E3F0ACD (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveRooftopAnchorU3Ed__24_System_Collections_IEnumerator_Reset_m7B9A59FF1583430CF1629BE1E10D7FDCF618EAF8 (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveRooftopAnchorU3Ed__24_System_Collections_IEnumerator_Reset_m7B9A59FF1583430CF1629BE1E10D7FDCF618EAF8_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorAnchor/<ResolveRooftopAnchor>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResolveRooftopAnchorU3Ed__24_System_Collections_IEnumerator_get_Current_m0EF39D3409618F5045B3C848E4ABCF02F0FC0E13 (U3CResolveRooftopAnchorU3Ed__24_t07505F977406A50356CB074CF4EB6065488ED5BF* __this, const RuntimeMethod* method) 
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
// System.String Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::ApiKeyFromTilesetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARGeospatialCreatorOrigin_ApiKeyFromTilesetUrl_m7EA3D4CA80EEC3883FED4C6FC6B6D3019D94B7C3 (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD497806D9990B499E542954455C1415F4C7774E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		// char[] delimeters = { '&', '?' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)63));
		V_0 = L_2;
		// foreach (string urlPart in url.Split(delimeters))
		String_t* L_3 = ___0_url;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0046;
	}

IL_001f:
	{
		// foreach (string urlPart in url.Split(delimeters))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (urlPart.StartsWith("key="))
		String_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_10, _stringLiteralD497806D9990B499E542954455C1415F4C7774E6, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		// return urlPart.Substring(4);
		String_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, 4, NULL);
		V_5 = L_14;
		goto IL_0055;
	}

IL_0041:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0046:
	{
		// foreach (string urlPart in url.Split(delimeters))
		int32_t L_16 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// return "";
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		String_t* L_18 = V_5;
		return L_18;
	}
}
// System.String Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::TilesApiUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARGeospatialCreatorOrigin_TilesApiUrl_m329DC36E99173839FC56A1E27BD0DF1AE009B458 (String_t* ___0_apiKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6523ED0005C63F48818BE83D2AF462B33881083);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("https://tile.googleapis.com/v1/3dtiles/root?key={0}", apiKey);
		String_t* L_0 = ___0_apiKey;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6523ED0005C63F48818BE83D2AF462B33881083, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::HasGeoreference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARGeospatialCreatorOrigin_HasGeoreference_mD8BF9A5D12EAD768DACB459FF07493379926CA42 (ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return (gameObject.GetComponent(typeof(CesiumGeoreference)) != null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::AddNewGeoreferenceComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorOrigin_AddNewGeoreferenceComponent_mF5D131639113C51E3823CE1D7491E99F68891B92 (ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1A498C718E65F7506D2F8A136DB178751B64C9C);
		s_Il2CppMethodInitialized = true;
	}
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_2 = NULL;
	bool V_3 = false;
	{
		// if (HasGeoreference())
		bool L_0;
		L_0 = ARGeospatialCreatorOrigin_HasGeoreference_mD8BF9A5D12EAD768DACB459FF07493379926CA42(__this, NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new Exception(
		//     "Geospatial Creator georeference already exists, could not create another.");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4944ED8F73D8862F38A9B81FEF79F8F71BC3522C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARGeospatialCreatorOrigin_AddNewGeoreferenceComponent_mF5D131639113C51E3823CE1D7491E99F68891B92_RuntimeMethod_var)));
	}

IL_0017:
	{
		// CesiumGeoreference georeference =
		//     gameObject.AddComponent(typeof(CesiumGeoreference)) as CesiumGeoreference;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6;
		L_6 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_3, L_5, NULL);
		V_0 = ((CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268*)IsInstClass((RuntimeObject*)L_6, CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_il2cpp_TypeInfo_var));
		// GameObject tilesetObject = new GameObject("Cesium3DTileset");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_7, _stringLiteralC1A498C718E65F7506D2F8A136DB178751B64C9C, NULL);
		V_1 = L_7;
		// tilesetObject.transform.SetParent(georeference.gameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_10 = V_0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_12, NULL);
		// Cesium3DTileset tileset =
		//     tilesetObject.AddComponent(typeof(Cesium3DTileset)) as Cesium3DTileset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_16;
		L_16 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_13, L_15, NULL);
		V_2 = ((Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA*)IsInstClass((RuntimeObject*)L_16, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var));
		// tileset.name = tilesetObject.name;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_17 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		NullCheck(L_17);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_17, L_19, NULL);
		// tileset.tilesetSource = CesiumDataSource.FromUrl;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_20 = V_2;
		NullCheck(L_20);
		Cesium3DTileset_set_tilesetSource_m2A6E100199E62248002E745EB03B9139EA9D38BF(L_20, 1, NULL);
		// tileset.showCreditsOnScreen = true;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_21 = V_2;
		NullCheck(L_21);
		Cesium3DTileset_set_showCreditsOnScreen_m983B6E97CF824353B1B54B5C1EC1632497578F26(L_21, (bool)1, NULL);
		// tileset.createPhysicsMeshes = false;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_22 = V_2;
		NullCheck(L_22);
		Cesium3DTileset_set_createPhysicsMeshes_mB4CB6022CC60EFB706B72B759A9204988FC7D106(L_22, (bool)0, NULL);
		// }
		return;
	}
}
// System.String Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::Get3DTilesApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARGeospatialCreatorOrigin_Get3DTilesApiKey_m0D637D7F0749F988BEFFD16688A9C85D69F496EF (ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// Cesium3DTileset tileset =
		//     gameObject.GetComponentInChildren(typeof(Cesium3DTileset)) as Cesium3DTileset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponentInChildren_m29091882C8D5FDCDD7C7634D8BC740ED6B464A27(L_0, L_2, NULL);
		V_0 = ((Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA*)IsInstClass((RuntimeObject*)L_3, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var));
		// if (tileset == null)
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// return "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_003e;
	}

IL_0030:
	{
		// return ApiKeyFromTilesetUrl(tileset.url);
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Cesium3DTileset_get_url_m1EF8B79AF228F1A1C494F97E437496255A06936C_inline(L_7, NULL);
		String_t* L_9;
		L_9 = ARGeospatialCreatorOrigin_ApiKeyFromTilesetUrl_m7EA3D4CA80EEC3883FED4C6FC6B6D3019D94B7C3(L_8, NULL);
		V_2 = L_9;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		String_t* L_10 = V_2;
		return L_10;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::Set3DTileApiKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorOrigin_Set3DTileApiKey_m58902AF60A846C0770F32DC27575AD912416F438 (ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2891EDC0F3253DBF60F4A46DAEAB13E574F33184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28F184E39190D1F844C57D8F7621E7CEA288E50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* G_B5_0 = NULL;
	{
		// Cesium3DTileset tileset =
		//     gameObject.GetComponentInChildren(typeof(Cesium3DTileset)) as Cesium3DTileset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponentInChildren_m29091882C8D5FDCDD7C7634D8BC740ED6B464A27(L_0, L_2, NULL);
		V_0 = ((Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA*)IsInstClass((RuntimeObject*)L_3, Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA_il2cpp_TypeInfo_var));
		// if (tileset == null)
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogError(
		//     "Attempted to set Map Tiles API key on a missing Cesium3DTileset component.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD28F184E39190D1F844C57D8F7621E7CEA288E50, NULL);
		// return;
		goto IL_0076;
	}

IL_0035:
	{
		// String url = String.IsNullOrEmpty(key) ? "" : TilesApiUrl(key);
		String_t* L_7 = ___0_key;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_9 = ___0_key;
		String_t* L_10;
		L_10 = ARGeospatialCreatorOrigin_TilesApiUrl_m329DC36E99173839FC56A1E27BD0DF1AE009B458(L_9, NULL);
		G_B5_0 = L_10;
		goto IL_004a;
	}

IL_0045:
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_004a:
	{
		V_1 = G_B5_0;
		// if (url != tileset.url)
		String_t* L_11 = V_1;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Cesium3DTileset_get_url_m1EF8B79AF228F1A1C494F97E437496255A06936C_inline(L_12, NULL);
		bool L_14;
		L_14 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		// Debug.Log("Setting new URL for Map Tiles API: " + url);
		String_t* L_16 = V_1;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2891EDC0F3253DBF60F4A46DAEAB13E574F33184, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// tileset.url = url;
		Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* L_18 = V_0;
		String_t* L_19 = V_1;
		NullCheck(L_18);
		Cesium3DTileset_set_url_mB782B8374C5D9B75FEB3113BB356B2DB24E84F15(L_18, L_19, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.ARGeospatialCreatorOrigin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialCreatorOrigin__ctor_mC79D609785C994824A8BC630EFB9EA43C63C7D2D (ARGeospatialCreatorOrigin_t4250B17BDCA3C0697F075F1B9C0C2CB900CECD10* __this, const RuntimeMethod* method) 
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoCoor__ctor_mD699A38AEF1622E57E7B6485634354E55097B06E (GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* __this, double ___0__Latitude, double ___1__Longitude, double ___2__Height, const RuntimeMethod* method) 
{
	{
		// public GeoCoor(double _Latitude, double _Longitude, double _Height)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Latitude = _Latitude;
		double L_0 = ___0__Latitude;
		__this->___Latitude_0 = L_0;
		// Longitude = _Longitude;
		double L_1 = ___1__Longitude;
		__this->___Longitude_1 = L_1;
		// Height = _Height;
		double L_2 = ___2__Height;
		__this->___Height_2 = L_2;
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::ECEFToGeoCoor(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* GeoCoor_ECEFToGeoCoor_mD4C7DF3675F282D5787196D19596C7212353C6D6 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_ecef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	bool V_9 = false;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* V_13 = NULL;
	{
		// var A = 6378137.0; // equatorial radius in meters
		V_0 = (6378137.0);
		// var B = 6356752.314245179; // Polar radius in meters
		V_1 = (6356752.3142451793);
		// var p = Math.Sqrt(ecef.x * ecef.x + ecef.y * ecef.y); // Temporary value
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_ecef;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_ecef;
		double L_3 = L_2.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_ecef;
		double L_5 = L_4.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_6 = ___0_ecef;
		double L_7 = L_6.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7)))));
		V_2 = L_8;
		// var q = Math.Atan2((ecef.z * A), (p * B)); // Temporary value
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9 = ___0_ecef;
		double L_10 = L_9.___z_2;
		double L_11 = V_0;
		double L_12 = V_2;
		double L_13 = V_1;
		double L_14;
		L_14 = atan2(((double)il2cpp_codegen_multiply(L_10, L_11)), ((double)il2cpp_codegen_multiply(L_12, L_13)));
		V_3 = L_14;
		// var epsilon = 1e-10;
		V_4 = (1.0E-10);
		// if (p < epsilon)
		double L_15 = V_2;
		double L_16 = V_4;
		V_9 = (bool)((((double)L_15) < ((double)L_16))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_00d1;
		}
	}
	{
		// var lng = 0.0;
		V_10 = (0.0);
		// var lat = (Math.PI / 2.0) * sgn(ecef.z);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_18 = ___0_ecef;
		double L_19 = L_18.___z_2;
		int32_t L_20;
		L_20 = GeoCoor_sgn_m14F5BE51B7FBF3F65A78208A64D174ABB94891CE(L_19, NULL);
		V_11 = ((double)il2cpp_codegen_multiply((1.5707963267948966), ((double)L_20)));
		// var alt = Math.Sqrt(ecef.z * ecef.z) - B;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_21 = ___0_ecef;
		double L_22 = L_21.___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_23 = ___0_ecef;
		double L_24 = L_23.___z_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_25;
		L_25 = sqrt(((double)il2cpp_codegen_multiply(L_22, L_24)));
		double L_26 = V_1;
		V_12 = ((double)il2cpp_codegen_subtract(L_25, L_26));
		// return new GeoCoor(lat * 180.0 / Math.PI, lng * 180.0 / Math.PI, alt);
		double L_27 = V_11;
		double L_28 = V_10;
		double L_29 = V_12;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_30 = (GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA*)il2cpp_codegen_object_new(GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		GeoCoor__ctor_mD699A38AEF1622E57E7B6485634354E55097B06E(L_30, ((double)(((double)il2cpp_codegen_multiply(L_27, (180.0)))/(3.1415926535897931))), ((double)(((double)il2cpp_codegen_multiply(L_28, (180.0)))/(3.1415926535897931))), L_29, NULL);
		V_13 = L_30;
		goto IL_01c8;
	}

IL_00d1:
	{
		// var longitude = Math.Atan2(ecef.y, ecef.x);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_31 = ___0_ecef;
		double L_32 = L_31.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_33 = ___0_ecef;
		double L_34 = L_33.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = atan2(L_32, L_34);
		V_5 = L_35;
		// var latitude = Math.Atan2(
		//     (ecef.z + ((A * A - B * B) / B) * Math.Pow(Math.Sin(q), 3.0)),
		//     (p - ((A * A - B * B) / A) * Math.Pow(Math.Cos(q), 3.0))
		// );
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_36 = ___0_ecef;
		double L_37 = L_36.___z_2;
		double L_38 = V_0;
		double L_39 = V_0;
		double L_40 = V_1;
		double L_41 = V_1;
		double L_42 = V_1;
		double L_43 = V_3;
		double L_44;
		L_44 = sin(L_43);
		double L_45;
		L_45 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_44, (3.0), NULL);
		double L_46 = V_2;
		double L_47 = V_0;
		double L_48 = V_0;
		double L_49 = V_1;
		double L_50 = V_1;
		double L_51 = V_0;
		double L_52 = V_3;
		double L_53;
		L_53 = cos(L_52);
		double L_54;
		L_54 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_53, (3.0), NULL);
		double L_55;
		L_55 = atan2(((double)il2cpp_codegen_add(L_37, ((double)il2cpp_codegen_multiply(((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_38, L_39)), ((double)il2cpp_codegen_multiply(L_40, L_41))))/L_42)), L_45)))), ((double)il2cpp_codegen_subtract(L_46, ((double)il2cpp_codegen_multiply(((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_47, L_48)), ((double)il2cpp_codegen_multiply(L_49, L_50))))/L_51)), L_54)))));
		V_6 = L_55;
		// var N =
		//     A
		//     / Math.Sqrt(
		//         1.0 - (1.0 - (B * B) / (A * A)) * Math.Sin(latitude) * Math.Sin(latitude)
		//     );
		double L_56 = V_0;
		double L_57 = V_1;
		double L_58 = V_1;
		double L_59 = V_0;
		double L_60 = V_0;
		double L_61 = V_6;
		double L_62;
		L_62 = sin(L_61);
		double L_63 = V_6;
		double L_64;
		L_64 = sin(L_63);
		double L_65;
		L_65 = sqrt(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_multiply(L_57, L_58))/((double)il2cpp_codegen_multiply(L_59, L_60)))))), L_62)), L_64)))));
		V_7 = ((double)(L_56/L_65));
		// var altitude = Math.Sqrt(ecef.x * ecef.x + ecef.y * ecef.y) / Math.Cos(latitude) - N;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_66 = ___0_ecef;
		double L_67 = L_66.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_68 = ___0_ecef;
		double L_69 = L_68.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_70 = ___0_ecef;
		double L_71 = L_70.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_72 = ___0_ecef;
		double L_73 = L_72.___y_1;
		double L_74;
		L_74 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_67, L_69)), ((double)il2cpp_codegen_multiply(L_71, L_73)))));
		double L_75 = V_6;
		double L_76;
		L_76 = cos(L_75);
		double L_77 = V_7;
		V_8 = ((double)il2cpp_codegen_subtract(((double)(L_74/L_76)), L_77));
		// return new GeoCoor(latitude * 180.0 / Math.PI, longitude * 180.0 / Math.PI, altitude);
		double L_78 = V_6;
		double L_79 = V_5;
		double L_80 = V_8;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_81 = (GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA*)il2cpp_codegen_object_new(GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		GeoCoor__ctor_mD699A38AEF1622E57E7B6485634354E55097B06E(L_81, ((double)(((double)il2cpp_codegen_multiply(L_78, (180.0)))/(3.1415926535897931))), ((double)(((double)il2cpp_codegen_multiply(L_79, (180.0)))/(3.1415926535897931))), L_80, NULL);
		V_13 = L_81;
		goto IL_01c8;
	}

IL_01c8:
	{
		// }
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_82 = V_13;
		return L_82;
	}
}
// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::GeoCoorToECEF(Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 GeoCoor_GeoCoorToECEF_m91F775E4B683D08C74B99A6C942E0D9819AF164E (GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* ___0_Coor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_22;
	memset((&V_22), 0, sizeof(V_22));
	{
		// double3 ret = new double3();
		il2cpp_codegen_initobj((&V_0), sizeof(double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4));
		// var a = 6378137.0; // equatorial radius in meters
		V_1 = (6378137.0);
		// var b = 6356752.314245179; // Polar radius in meters
		V_2 = (6356752.3142451793);
		// var rlong = Math.PI * Coor.Longitude / 180.0;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_0 = ___0_Coor;
		NullCheck(L_0);
		double L_1 = L_0->___Longitude_1;
		V_3 = ((double)(((double)il2cpp_codegen_multiply((3.1415926535897931), L_1))/(180.0)));
		// var rlat = Math.PI * Coor.Latitude / 180.0;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_2 = ___0_Coor;
		NullCheck(L_2);
		double L_3 = L_2->___Latitude_0;
		V_4 = ((double)(((double)il2cpp_codegen_multiply((3.1415926535897931), L_3))/(180.0)));
		// var coslong = Math.Cos(rlong);
		double L_4 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = cos(L_4);
		V_5 = L_5;
		// var sinlong = Math.Sin(rlong);
		double L_6 = V_3;
		double L_7;
		L_7 = sin(L_6);
		V_6 = L_7;
		// var coslat = Math.Cos(rlat);
		double L_8 = V_4;
		double L_9;
		L_9 = cos(L_8);
		V_7 = L_9;
		// var sinlat = Math.Sin(rlat);
		double L_10 = V_4;
		double L_11;
		L_11 = sin(L_10);
		V_8 = L_11;
		// var a2 = a * a;
		double L_12 = V_1;
		double L_13 = V_1;
		V_9 = ((double)il2cpp_codegen_multiply(L_12, L_13));
		// var b2 = b * b;
		double L_14 = V_2;
		double L_15 = V_2;
		V_10 = ((double)il2cpp_codegen_multiply(L_14, L_15));
		// var f = 1 - (b / a);
		double L_16 = V_2;
		double L_17 = V_1;
		V_11 = ((double)il2cpp_codegen_subtract((1.0), ((double)(L_16/L_17))));
		// var e2 = 1 - (b2 / a2);
		double L_18 = V_10;
		double L_19 = V_9;
		V_12 = ((double)il2cpp_codegen_subtract((1.0), ((double)(L_18/L_19))));
		// var n_2 = a2 / Math.Sqrt((a2 * (coslat * coslat)) + ((b2) * (sinlat * sinlat)));
		double L_20 = V_9;
		double L_21 = V_9;
		double L_22 = V_7;
		double L_23 = V_7;
		double L_24 = V_10;
		double L_25 = V_8;
		double L_26 = V_8;
		double L_27;
		L_27 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_21, ((double)il2cpp_codegen_multiply(L_22, L_23)))), ((double)il2cpp_codegen_multiply(L_24, ((double)il2cpp_codegen_multiply(L_25, L_26)))))));
		V_13 = ((double)(L_20/L_27));
		// var n = a / Math.Sqrt(1 - (e2 * sinlat * sinlat));
		double L_28 = V_1;
		double L_29 = V_12;
		double L_30 = V_8;
		double L_31 = V_8;
		double L_32;
		L_32 = sqrt(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_29, L_30)), L_31)))));
		V_14 = ((double)(L_28/L_32));
		// var x = (n + Coor.Height) * coslat * coslong;
		double L_33 = V_14;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_34 = ___0_Coor;
		NullCheck(L_34);
		double L_35 = L_34->___Height_2;
		double L_36 = V_7;
		double L_37 = V_5;
		V_15 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_33, L_35)), L_36)), L_37));
		// var y = (n + Coor.Height) * coslat * sinlong;
		double L_38 = V_14;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_39 = ___0_Coor;
		NullCheck(L_39);
		double L_40 = L_39->___Height_2;
		double L_41 = V_7;
		double L_42 = V_6;
		V_16 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_38, L_40)), L_41)), L_42));
		// var neg1f2 = (1 - f) * (1 - f);
		double L_43 = V_11;
		double L_44 = V_11;
		V_17 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), L_43)), ((double)il2cpp_codegen_subtract((1.0), L_44))));
		// var neg1e2 = 1 - e2;
		double L_45 = V_12;
		V_18 = ((double)il2cpp_codegen_subtract((1.0), L_45));
		// var z = (neg1f2 * n + Coor.Height) * sinlat;
		double L_46 = V_17;
		double L_47 = V_14;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_48 = ___0_Coor;
		NullCheck(L_48);
		double L_49 = L_48->___Height_2;
		double L_50 = V_8;
		V_19 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_46, L_47)), L_49)), L_50));
		// var z_2 = (neg1e2 * n + Coor.Height) * sinlat;
		double L_51 = V_18;
		double L_52 = V_14;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_53 = ___0_Coor;
		NullCheck(L_53);
		double L_54 = L_53->___Height_2;
		double L_55 = V_8;
		V_20 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_51, L_52)), L_54)), L_55));
		// var iszero = (x / coslong) - (y / sinlong);
		double L_56 = V_15;
		double L_57 = V_5;
		double L_58 = V_16;
		double L_59 = V_6;
		V_21 = ((double)il2cpp_codegen_subtract(((double)(L_56/L_57)), ((double)(L_58/L_59))));
		// ret.x = x;
		double L_60 = V_15;
		(&V_0)->___x_0 = L_60;
		// ret.y = y;
		double L_61 = V_16;
		(&V_0)->___y_1 = L_61;
		// ret.z = z;
		double L_62 = V_19;
		(&V_0)->___z_2 = L_62;
		// return ret;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_63 = V_0;
		V_22 = L_63;
		goto IL_0170;
	}

IL_0170:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_64 = V_22;
		return L_64;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor::sgn(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeoCoor_sgn_m14F5BE51B7FBF3F65A78208A64D174ABB94891CE (double ___0_val, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return val < 0 ? -1 : 1;
		double L_0 = ___0_val;
		if ((((double)L_0) < ((double)(0.0))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = (-1);
	}

IL_0011:
	{
		V_0 = G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_1 = V_0;
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.LoadingPoint::.ctor(Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoCoor,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPoint__ctor_m85998513F991C76B136C54FA25B9A3F3DEDA407D (LoadingPoint_tDA546B3819D8AF956BF33F5B7FC592CA0E187B79* __this, GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* ___0_coor, double ___1_radius, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_5;
	memset((&V_5), 0, sizeof(V_5));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_6;
	memset((&V_6), 0, sizeof(V_6));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_7;
	memset((&V_7), 0, sizeof(V_7));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_8;
	memset((&V_8), 0, sizeof(V_8));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_9;
	memset((&V_9), 0, sizeof(V_9));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_10;
	memset((&V_10), 0, sizeof(V_10));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_11;
	memset((&V_11), 0, sizeof(V_11));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_12;
	memset((&V_12), 0, sizeof(V_12));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_13;
	memset((&V_13), 0, sizeof(V_13));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_14;
	memset((&V_14), 0, sizeof(V_14));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_15;
	memset((&V_15), 0, sizeof(V_15));
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// public LoadingPoint(GeoCoor coor, double radius)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LatLongGeoCoor = coor;
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_0 = ___0_coor;
		__this->___LatLongGeoCoor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LatLongGeoCoor_4), (void*)L_0);
		// PositionInECEF = GeoCoor.GeoCoorToECEF(coor);
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_1 = ___0_coor;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2;
		L_2 = GeoCoor_GeoCoorToECEF_m91F775E4B683D08C74B99A6C942E0D9819AF164E(L_1, NULL);
		__this->___PositionInECEF_0 = L_2;
		// PositionInUnityWorldSpace = new double3(
		//     -PositionInECEF.y,
		//     PositionInECEF.z,
		//     PositionInECEF.x
		// );
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_3 = (&__this->___PositionInECEF_0);
		double L_4 = L_3->___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_5 = (&__this->___PositionInECEF_0);
		double L_6 = L_5->___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_7 = (&__this->___PositionInECEF_0);
		double L_8 = L_7->___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_9), ((-L_4)), L_6, L_8, /*hidden argument*/NULL);
		__this->___PositionInUnityWorldSpace_1 = L_9;
		// PositionInGLTFSpace = new double3(
		//     -PositionInECEF.x,
		//     PositionInECEF.z,
		//     -PositionInECEF.y
		// );
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_10 = (&__this->___PositionInECEF_0);
		double L_11 = L_10->___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_12 = (&__this->___PositionInECEF_0);
		double L_13 = L_12->___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_14 = (&__this->___PositionInECEF_0);
		double L_15 = L_14->___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_16;
		memset((&L_16), 0, sizeof(L_16));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_16), ((-L_11)), L_13, ((-L_15)), /*hidden argument*/NULL);
		__this->___PositionInGLTFSpace_2 = L_16;
		// Radius = radius;
		double L_17 = ___1_radius;
		__this->___Radius_3 = L_17;
		// MatrixStack _matrixStack = new MatrixStack();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_18 = (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9*)il2cpp_codegen_object_new(MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		MatrixStack__ctor_m02C17824F5217F2B81CA2D938BC5D4E8F7923E4E(L_18, NULL);
		V_0 = L_18;
		// _matrixStack.PushMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_19 = V_0;
		NullCheck(L_19);
		MatrixStack_PushMatrix_mBACE602BC613A62D6443FE2147C29A727FAA23D7(L_19, NULL);
		// math.sincos(LatLongGeoCoor.Latitude / 180 * Math.PI, out latSin, out latCos);
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_20 = __this->___LatLongGeoCoor_4;
		NullCheck(L_20);
		double L_21 = L_20->___Latitude_0;
		math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline(((double)il2cpp_codegen_multiply(((double)(L_21/(180.0))), (3.1415926535897931))), (&V_1), (&V_2), NULL);
		// math.sincos(LatLongGeoCoor.Longitude / 180 * Math.PI, out lngSin, out lngCos);
		GeoCoor_t8584399C9FD6A70AF7AE0F72621D4D60DD1DFCDA* L_22 = __this->___LatLongGeoCoor_4;
		NullCheck(L_22);
		double L_23 = L_22->___Longitude_1;
		math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline(((double)il2cpp_codegen_multiply(((double)(L_23/(180.0))), (3.1415926535897931))), (&V_3), (&V_4), NULL);
		// double4x4 ECEFToENU = new double4x4(
		//     -lngSin,
		//     lngCos,
		//     0.0,
		//     0.0,
		//     -latSin * lngCos,
		//     -latSin * lngSin,
		//     latCos,
		//     0.0,
		//     latCos * lngCos,
		//     latCos * lngSin,
		//     latSin,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double L_24 = V_3;
		double L_25 = V_4;
		double L_26 = V_1;
		double L_27 = V_4;
		double L_28 = V_1;
		double L_29 = V_3;
		double L_30 = V_2;
		double L_31 = V_2;
		double L_32 = V_4;
		double L_33 = V_2;
		double L_34 = V_3;
		double L_35 = V_1;
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&V_5), ((-L_24)), L_25, (0.0), (0.0), ((double)il2cpp_codegen_multiply(((-L_26)), L_27)), ((double)il2cpp_codegen_multiply(((-L_28)), L_29)), L_30, (0.0), ((double)il2cpp_codegen_multiply(L_31, L_32)), ((double)il2cpp_codegen_multiply(L_33, L_34)), L_35, (0.0), (0.0), (0.0), (0.0), (1.0), NULL);
		// double4x4 ENUToECEF = math.inverse(ECEFToENU);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_36 = V_5;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_37;
		L_37 = math_inverse_m57DA93D98330B95887CFBFC00A7D6394A567D2F3(L_36, NULL);
		V_6 = L_37;
		// double4x4 ECEFToESU = new double4x4(
		//     -lngSin,
		//     -lngCos,
		//     0.0,
		//     0.0,
		//     -latSin * lngCos,
		//     latSin * lngSin,
		//     latCos,
		//     0.0,
		//     latCos * lngCos,
		//     -latCos * lngSin,
		//     latSin,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double L_38 = V_3;
		double L_39 = V_4;
		double L_40 = V_1;
		double L_41 = V_4;
		double L_42 = V_1;
		double L_43 = V_3;
		double L_44 = V_2;
		double L_45 = V_2;
		double L_46 = V_4;
		double L_47 = V_2;
		double L_48 = V_3;
		double L_49 = V_1;
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&V_7), ((-L_38)), ((-L_39)), (0.0), (0.0), ((double)il2cpp_codegen_multiply(((-L_40)), L_41)), ((double)il2cpp_codegen_multiply(L_42, L_43)), L_44, (0.0), ((double)il2cpp_codegen_multiply(L_45, L_46)), ((double)il2cpp_codegen_multiply(((-L_47)), L_48)), L_49, (0.0), (0.0), (0.0), (0.0), (1.0), NULL);
		// double4x4 ESUToECEF = math.inverse(ECEFToENU);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_50 = V_5;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_51;
		L_51 = math_inverse_m57DA93D98330B95887CFBFC00A7D6394A567D2F3(L_50, NULL);
		V_8 = L_51;
		// double4x4 GLTFToENU = new double4x4(
		//     -1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     -1.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&V_9), (-1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (-1.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (1.0), NULL);
		// double4x4 ENUToGLTF = math.inverse(GLTFToENU);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_52 = V_9;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_53;
		L_53 = math_inverse_m57DA93D98330B95887CFBFC00A7D6394A567D2F3(L_52, NULL);
		V_10 = L_53;
		// double4x4 GLTFToECEF = GLTFToENU;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_54 = V_9;
		V_11 = L_54;
		// double4x4 ECEFToGLTF = ENUToGLTF;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_55 = V_10;
		V_12 = L_55;
		// double4x4 WUSToEUN = new double4x4(
		//     -1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     -1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&V_13), (-1.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (-1.0), (0.0), (0.0), (0.0), (0.0), (1.0), NULL);
		// double4x4 EUNToWUS = math.inverse(WUSToEUN);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_56 = V_13;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_57;
		L_57 = math_inverse_m57DA93D98330B95887CFBFC00A7D6394A567D2F3(L_56, NULL);
		V_14 = L_57;
		// double4x4 ENUToEUN = new double4x4(
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&V_15), (1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (1.0), NULL);
		// double4x4 EUNToENU = math.inverse(ENUToEUN);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_58 = V_15;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_59;
		L_59 = math_inverse_m57DA93D98330B95887CFBFC00A7D6394A567D2F3(L_58, NULL);
		V_16 = L_59;
		// _matrixStack.MultMatrix(
		//     MatrixStack.Translate(
		//         new double3(-PositionInECEF.x, -PositionInECEF.y, -PositionInECEF.z)
		//     )
		// );
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_60 = V_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_61 = (&__this->___PositionInECEF_0);
		double L_62 = L_61->___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_63 = (&__this->___PositionInECEF_0);
		double L_64 = L_63->___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_65 = (&__this->___PositionInECEF_0);
		double L_66 = L_65->___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_67;
		memset((&L_67), 0, sizeof(L_67));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_67), ((-L_62)), ((-L_64)), ((-L_66)), /*hidden argument*/NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_68;
		L_68 = MatrixStack_Translate_m015ECF5F3FA74C195B1C1B6DF60CB4655DBAAD4E(L_67, NULL);
		NullCheck(L_60);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_60, L_68, NULL);
		// _matrixStack.MultMatrix(ECEFToENU);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_69 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_70 = V_5;
		NullCheck(L_69);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_69, L_70, NULL);
		// _matrixStack.MultMatrix(ENUToEUN);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_71 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_72 = V_15;
		NullCheck(L_71);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_71, L_72, NULL);
		// bbToEUNPos = _matrixStack.GetMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_73 = V_0;
		NullCheck(L_73);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_74;
		L_74 = MatrixStack_GetMatrix_m5D5BBEBD7918A125CA5EAD9C7931408BAAE97294(L_73, NULL);
		__this->___bbToEUNPos_5 = L_74;
		// _matrixStack.PopMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_75 = V_0;
		NullCheck(L_75);
		MatrixStack_PopMatrix_m6FBFEAD9C6568A4854C7FE45719411352587B332(L_75, NULL);
		// _matrixStack.PushMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_76 = V_0;
		NullCheck(L_76);
		MatrixStack_PushMatrix_mBACE602BC613A62D6443FE2147C29A727FAA23D7(L_76, NULL);
		// _matrixStack.MultMatrix(ECEFToENU);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_77 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_78 = V_5;
		NullCheck(L_77);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_77, L_78, NULL);
		// _matrixStack.MultMatrix(ENUToEUN);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_79 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_80 = V_15;
		NullCheck(L_79);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_79, L_80, NULL);
		// bbToEUNRot = _matrixStack.GetMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_81 = V_0;
		NullCheck(L_81);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_82;
		L_82 = MatrixStack_GetMatrix_m5D5BBEBD7918A125CA5EAD9C7931408BAAE97294(L_81, NULL);
		__this->___bbToEUNRot_6 = L_82;
		// _matrixStack.PopMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_83 = V_0;
		NullCheck(L_83);
		MatrixStack_PopMatrix_m6FBFEAD9C6568A4854C7FE45719411352587B332(L_83, NULL);
		// _matrixStack.PushMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_84 = V_0;
		NullCheck(L_84);
		MatrixStack_PushMatrix_mBACE602BC613A62D6443FE2147C29A727FAA23D7(L_84, NULL);
		// _matrixStack.MultMatrix(GLTFToECEF);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_85 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_86 = V_11;
		NullCheck(L_85);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_85, L_86, NULL);
		// _matrixStack.MultMatrix(
		//     MatrixStack.Translate(
		//         new double3(-PositionInECEF.x, -PositionInECEF.y, -PositionInECEF.z)
		//     )
		// );
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_87 = V_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_88 = (&__this->___PositionInECEF_0);
		double L_89 = L_88->___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_90 = (&__this->___PositionInECEF_0);
		double L_91 = L_90->___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4* L_92 = (&__this->___PositionInECEF_0);
		double L_93 = L_92->___z_2;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_94;
		memset((&L_94), 0, sizeof(L_94));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_94), ((-L_89)), ((-L_91)), ((-L_93)), /*hidden argument*/NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_95;
		L_95 = MatrixStack_Translate_m015ECF5F3FA74C195B1C1B6DF60CB4655DBAAD4E(L_94, NULL);
		NullCheck(L_87);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_87, L_95, NULL);
		// _matrixStack.MultMatrix(ECEFToENU);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_96 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_97 = V_5;
		NullCheck(L_96);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_96, L_97, NULL);
		// _matrixStack.MultMatrix(ENUToGLTF);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_98 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_99 = V_10;
		NullCheck(L_98);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_98, L_99, NULL);
		// _matrixStack.MultMatrix(WUSToEUN);
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_100 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_101 = V_13;
		NullCheck(L_100);
		MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7(L_100, L_101, NULL);
		// meshEUNPos = _matrixStack.GetMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_102 = V_0;
		NullCheck(L_102);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_103;
		L_103 = MatrixStack_GetMatrix_m5D5BBEBD7918A125CA5EAD9C7931408BAAE97294(L_102, NULL);
		__this->___meshEUNPos_7 = L_103;
		// _matrixStack.PopMatrix();
		MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* L_104 = V_0;
		NullCheck(L_104);
		MatrixStack_PopMatrix_m6FBFEAD9C6568A4854C7FE45719411352587B332(L_104, NULL);
		// }
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack__ctor_m02C17824F5217F2B81CA2D938BC5D4E8F7923E4E (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D81254724F3D681C217D109C6625D5546B0E83F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<double4x4> Stack = new List<double4x4>();
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*)il2cpp_codegen_object_new(List_1_t6D81254724F3D681C217D109C6625D5546B0E83F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4(L_0, List_1__ctor_mC6EA4032048EFCCFA50E7F18B761095E38FCB3A4_RuntimeMethod_var);
		__this->___Stack_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stack_0), (void*)L_0);
		// public MatrixStack()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Stack.Add(double4x4.identity);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_1 = __this->___Stack_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_2 = ((double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_StaticFields*)il2cpp_codegen_static_fields_for(double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_il2cpp_TypeInfo_var))->___identity_4;
		NullCheck(L_1);
		List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_inline(L_1, L_2, List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_PushMatrix_mBACE602BC613A62D6443FE2147C29A727FAA23D7 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stack.Add(Stack[Stack.Count - 1]);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_1 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_2, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_1);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_4;
		L_4 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_inline(L_0, L_4, List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::PushIdentityMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_PushIdentityMatrix_m5962199FDCC67717228F810FC8822F8AC26A3BBB (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stack.Add(double4x4.identity);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_1 = ((double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_StaticFields*)il2cpp_codegen_static_fields_for(double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_il2cpp_TypeInfo_var))->___identity_4;
		NullCheck(L_0);
		List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_inline(L_0, L_1, List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_PopMatrix_m6FBFEAD9C6568A4854C7FE45719411352587B332 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(Stack.Count >= 2);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// Stack.RemoveAt(Stack.Count - 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_3 = __this->___Stack_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_3, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_RemoveAt_m2F46B2249BF4992472CD37D4610D24E64E4CD3FE_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_GetMatrix_m5D5BBEBD7918A125CA5EAD9C7931408BAAE97294 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// return Stack[Stack.Count - 1];
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_3 = __this->___Stack_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_3, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_2);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5;
		L_5 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Quaternion Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::GetRotation(Unity.Mathematics.double4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MatrixStack_GetRotation_m1E4C47A439CDE0DF52D44B6AB293319ADB9184FC (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_m, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// forward.x = (float)m.c2.x;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0 = ___0_m;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = L_0.___c2_2;
		double L_2 = L_1.___x_0;
		(&V_0)->___x_2 = ((float)L_2);
		// forward.y = (float)m.c2.y;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_3 = ___0_m;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4 = L_3.___c2_2;
		double L_5 = L_4.___y_1;
		(&V_0)->___y_3 = ((float)L_5);
		// forward.z = (float)m.c2.z;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = ___0_m;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_7 = L_6.___c2_2;
		double L_8 = L_7.___z_2;
		(&V_0)->___z_4 = ((float)L_8);
		// upwards.x = (float)m.c1.x;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9 = ___0_m;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_10 = L_9.___c1_1;
		double L_11 = L_10.___x_0;
		(&V_1)->___x_2 = ((float)L_11);
		// upwards.y = (float)m.c1.y;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_12 = ___0_m;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_13 = L_12.___c1_1;
		double L_14 = L_13.___y_1;
		(&V_1)->___y_3 = ((float)L_14);
		// upwards.z = (float)m.c1.z;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_15 = ___0_m;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_16 = L_15.___c1_1;
		double L_17 = L_16.___z_2;
		(&V_1)->___z_4 = ((float)L_17);
		// return Quaternion.LookRotation(forward, upwards);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_18, L_19, NULL);
		V_2 = L_20;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		return L_21;
	}
}
// UnityEngine.Quaternion Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::GetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MatrixStack_GetRotation_mA853975F8E979AEC577C007F18C31C5A251CD9D6 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// double4x4 m = Stack[Stack.Count - 1];
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_1 = __this->___Stack_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_1, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_0);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_3;
		L_3 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		V_0 = L_3;
		// forward.x = (float)m.c2.x;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_4 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_5 = L_4.___c2_2;
		double L_6 = L_5.___x_0;
		(&V_1)->___x_2 = ((float)L_6);
		// forward.y = (float)m.c2.y;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_7 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_8 = L_7.___c2_2;
		double L_9 = L_8.___y_1;
		(&V_1)->___y_3 = ((float)L_9);
		// forward.z = (float)m.c2.z;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_10 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_11 = L_10.___c2_2;
		double L_12 = L_11.___z_2;
		(&V_1)->___z_4 = ((float)L_12);
		// upwards.x = (float)m.c1.x;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_13 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_14 = L_13.___c1_1;
		double L_15 = L_14.___x_0;
		(&V_2)->___x_2 = ((float)L_15);
		// upwards.y = (float)m.c1.y;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_16 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_17 = L_16.___c1_1;
		double L_18 = L_17.___y_1;
		(&V_2)->___y_3 = ((float)L_18);
		// upwards.z = (float)m.c1.z;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_19 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_20 = L_19.___c1_1;
		double L_21 = L_20.___z_2;
		(&V_2)->___z_4 = ((float)L_21);
		// return Quaternion.LookRotation(forward, upwards);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_22, L_23, NULL);
		V_3 = L_24;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_3;
		return L_25;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_Transpose_m64956FF148036AE162408DC3FFDAC8EABAED02F4 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// Stack[Stack.Count - 1] = math.transpose(Stack[Stack.Count - 1]);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_3 = __this->___Stack_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_3, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_5 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_6 = __this->___Stack_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_6, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_5);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_8;
		L_8 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9;
		L_9 = math_transpose_mA6CBDA629756DA5259C33936C0843AFE06B29442_inline(L_8, NULL);
		NullCheck(L_2);
		List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), L_9, List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::PreMultMatrix(Unity.Mathematics.double4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_PreMultMatrix_mD9DCE837AC108FD03935DC562EADD4F19A790AAE (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// Stack[Stack.Count - 1] = math.mul(Stack[Stack.Count - 1], m);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_3 = __this->___Stack_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_3, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_5 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_6 = __this->___Stack_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_6, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_5);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_8;
		L_8 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9 = ___0_m;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_10;
		L_10 = math_mul_m50A1B4F116C12B9D7A4525963841E7A7D3F592D4_inline(L_8, L_9, NULL);
		NullCheck(L_2);
		List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), L_10, List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultMatrix(Unity.Mathematics.double4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_MultMatrix_m39C621D670411933D2575DDFBE26AECA4CF5F0F7 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// Stack[Stack.Count - 1] = math.mul(m, Stack[Stack.Count - 1]);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_3 = __this->___Stack_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_3, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5 = ___0_m;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_6 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_7 = __this->___Stack_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_7, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_6);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9;
		L_9 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_10;
		L_10 = math_mul_m50A1B4F116C12B9D7A4525963841E7A7D3F592D4_inline(L_5, L_9, NULL);
		NullCheck(L_2);
		List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), L_10, List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultMatrix(System.Collections.Generic.List`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStack_MultMatrix_m945A25BC4ACDBECFC8EB6B2F695D860DCE707234 (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// Debug.Assert(a.Count >= 16);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_2 = ___0_a;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_2, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// double4x4 m = new double4x4(
		//     a[0],
		//     a[4],
		//     a[8],
		//     a[12],
		//     a[1],
		//     a[5],
		//     a[9],
		//     a[13],
		//     a[2],
		//     a[6],
		//     a[10],
		//     a[14],
		//     a[3],
		//     a[7],
		//     a[11],
		//     a[15]
		// );
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_4 = ___0_a;
		NullCheck(L_4);
		double L_5;
		L_5 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_4, 0, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_6 = ___0_a;
		NullCheck(L_6);
		double L_7;
		L_7 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_6, 4, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_8 = ___0_a;
		NullCheck(L_8);
		double L_9;
		L_9 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_8, 8, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_10 = ___0_a;
		NullCheck(L_10);
		double L_11;
		L_11 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_10, ((int32_t)12), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_12 = ___0_a;
		NullCheck(L_12);
		double L_13;
		L_13 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_12, 1, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_14 = ___0_a;
		NullCheck(L_14);
		double L_15;
		L_15 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_14, 5, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_16 = ___0_a;
		NullCheck(L_16);
		double L_17;
		L_17 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_16, ((int32_t)9), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_18 = ___0_a;
		NullCheck(L_18);
		double L_19;
		L_19 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_18, ((int32_t)13), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_20 = ___0_a;
		NullCheck(L_20);
		double L_21;
		L_21 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_20, 2, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_22 = ___0_a;
		NullCheck(L_22);
		double L_23;
		L_23 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_22, 6, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_24 = ___0_a;
		NullCheck(L_24);
		double L_25;
		L_25 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_24, ((int32_t)10), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_26 = ___0_a;
		NullCheck(L_26);
		double L_27;
		L_27 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_26, ((int32_t)14), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_28 = ___0_a;
		NullCheck(L_28);
		double L_29;
		L_29 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_28, 3, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_30 = ___0_a;
		NullCheck(L_30);
		double L_31;
		L_31 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_30, 7, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_32 = ___0_a;
		NullCheck(L_32);
		double L_33;
		L_33 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_32, ((int32_t)11), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_34 = ___0_a;
		NullCheck(L_34);
		double L_35;
		L_35 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_34, ((int32_t)15), List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&V_0), L_5, L_7, L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, L_31, L_33, L_35, NULL);
		// Stack[Stack.Count - 1] = math.mul(Stack[Stack.Count - 1], m);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_36 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_37 = __this->___Stack_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_37, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_39 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_40 = __this->___Stack_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_40, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_39);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_42;
		L_42 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_39, ((int32_t)il2cpp_codegen_subtract(L_41, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_43 = V_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_44;
		L_44 = math_mul_m50A1B4F116C12B9D7A4525963841E7A7D3F592D4_inline(L_42, L_43, NULL);
		NullCheck(L_36);
		List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7(L_36, ((int32_t)il2cpp_codegen_subtract(L_38, 1)), L_44, List_1_set_Item_m2F60CAD2D7818DB15129C3C08D98EFC56D0D1EB7_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.Mathematics.double4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultPoints(System.Collections.Generic.List`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 MatrixStack_MultPoints_m3427DA33A09C7F31D39436E3D626B0131250273A (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// Debug.Assert(a.Count >= 4);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_2 = ___0_a;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_2, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_3) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// double4 v = new double4(a[0], a[1], a[2], 1.0);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_4 = ___0_a;
		NullCheck(L_4);
		double L_5;
		L_5 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_4, 0, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_6 = ___0_a;
		NullCheck(L_6);
		double L_7;
		L_7 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_6, 1, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_8 = ___0_a;
		NullCheck(L_8);
		double L_9;
		L_9 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_8, 2, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&V_0), L_5, L_7, L_9, (1.0), NULL);
		// return math.mul(Stack[Stack.Count - 1], v);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_10 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_11 = __this->___Stack_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_11, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_10);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_13;
		L_13 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_14 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_15;
		L_15 = math_mul_m15697BA79A02858D72C9114C635AF321624CBD0D_inline(L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_16 = V_1;
		return L_16;
	}
}
// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultPoint(Unity.Mathematics.double4x4,Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 MatrixStack_MultPoint_mFA6F1F9324FB33DA8B2FA1274008E86CFBA0FD7D (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_mat, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___1_a, const RuntimeMethod* method) 
{
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// double4 v = new double4(a[0], a[1], a[2], 1.0);
		double L_0;
		L_0 = double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B((&___1_a), 0, NULL);
		double L_1;
		L_1 = double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B((&___1_a), 1, NULL);
		double L_2;
		L_2 = double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B((&___1_a), 2, NULL);
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&V_0), L_0, L_1, L_2, (1.0), NULL);
		// double4 ret = math.mul(mat, v);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_3 = ___0_mat;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_5;
		L_5 = math_mul_m15697BA79A02858D72C9114C635AF321624CBD0D_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// return new double3(ret[0], ret[1], ret[2]);
		double L_6;
		L_6 = double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5((&V_1), 0, NULL);
		double L_7;
		L_7 = double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5((&V_1), 1, NULL);
		double L_8;
		L_8 = double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5((&V_1), 2, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_10 = V_2;
		return L_10;
	}
}
// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultPoint(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 MatrixStack_MultPoint_mE7D7D479AD51432919ECFFB7349DD17273C6143C (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// double4 v = new double4(a[0], a[1], a[2], 1.0);
		double L_2;
		L_2 = double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B((&___0_a), 0, NULL);
		double L_3;
		L_3 = double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B((&___0_a), 1, NULL);
		double L_4;
		L_4 = double3_get_Item_mB491AAABFCEB549B0ACFC3A0393285C818DDC95B((&___0_a), 2, NULL);
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&V_0), L_2, L_3, L_4, (1.0), NULL);
		// double4 ret = math.mul(Stack[Stack.Count - 1], v);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_5 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_6 = __this->___Stack_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_6, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_5);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_8;
		L_8 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_9 = V_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_10;
		L_10 = math_mul_m15697BA79A02858D72C9114C635AF321624CBD0D_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// return new double3(ret[0], ret[1], ret[2]);
		double L_11;
		L_11 = double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5((&V_1), 0, NULL);
		double L_12;
		L_12 = double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5((&V_1), 1, NULL);
		double L_13;
		L_13 = double4_get_Item_m6B6D3A1411C3B2DB22E22C17D14823BD5BA29AB5((&V_1), 2, NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_14;
		memset((&L_14), 0, sizeof(L_14));
		double3__ctor_mDF4F1B343383615E326E74EAE18FC4325F7367E1_inline((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_007f;
	}

IL_007f:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_15 = V_2;
		return L_15;
	}
}
// Unity.Mathematics.double4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::MultPoint(Unity.Mathematics.double4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 MatrixStack_MultPoint_mA4F5B6A48BE44E276B2E596F60AAFF1E2E4DE26D (MatrixStack_tEB2FFE540AB2D9A6B5A6D886B51BC3F2B28E23D9* __this, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Assert(Stack.Count >= 1);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_0 = __this->___Stack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_0, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// return math.mul(Stack[Stack.Count - 1], v);
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_2 = __this->___Stack_0;
		List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* L_3 = __this->___Stack_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_inline(L_3, List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_RuntimeMethod_var);
		NullCheck(L_2);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5;
		L_5 = List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_mD21E70868420E5EC56149EBE2C0399935C21861E_RuntimeMethod_var);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_6 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_7;
		L_7 = math_mul_m15697BA79A02858D72C9114C635AF321624CBD0D_inline(L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_8 = V_0;
		return L_8;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::YupToZupTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_YupToZupTest_mB5FADEBD42534ED09BED6FAFD7C52C5D8D5730DD (const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double4x4(
		//     -1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     -1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0;
		memset((&L_0), 0, sizeof(L_0));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_0), (-1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (-1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_1 = V_0;
		return L_1;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::YupToZup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_YupToZup_m618416743B0EACE0037302C7E476FBBCDE3666FA (const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double4x4(
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     -1.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0;
		memset((&L_0), 0, sizeof(L_0));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_0), (1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (-1.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_1 = V_0;
		return L_1;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::RotateX(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_RotateX_m818F90512BC8D8BEC0ADFDA349E485890ED00238 (double ___0_angle, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// math.sincos(angle, out s, out c);
		double L_0 = ___0_angle;
		math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline(L_0, (&V_0), (&V_1), NULL);
		// return new double4x4(
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     c,
		//     -s,
		//     0.0,
		//     0.0,
		//     s,
		//     c,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double L_1 = V_1;
		double L_2 = V_0;
		double L_3 = V_0;
		double L_4 = V_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5;
		memset((&L_5), 0, sizeof(L_5));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_5), (1.0), (0.0), (0.0), (0.0), (0.0), L_1, ((-L_2)), (0.0), (0.0), L_3, L_4, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0085;
	}

IL_0085:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = V_2;
		return L_6;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::RotateY(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_RotateY_m729266F6BAE8C1AC830EA9A7362D39C70191E401 (double ___0_angle, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// math.sincos(angle, out s, out c);
		double L_0 = ___0_angle;
		math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline(L_0, (&V_0), (&V_1), NULL);
		// return new double4x4(
		//     c,
		//     0.0,
		//     s,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     -s,
		//     0.0,
		//     c,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double L_1 = V_1;
		double L_2 = V_0;
		double L_3 = V_0;
		double L_4 = V_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5;
		memset((&L_5), 0, sizeof(L_5));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_5), L_1, (0.0), L_2, (0.0), (0.0), (1.0), (0.0), (0.0), ((-L_3)), (0.0), L_4, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0085;
	}

IL_0085:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = V_2;
		return L_6;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::RotateZ(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_RotateZ_m646DDA8B1B2554287EE9AB01128BBAAE061AEC09 (double ___0_angle, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// math.sincos(angle, out s, out c);
		double L_0 = ___0_angle;
		math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline(L_0, (&V_0), (&V_1), NULL);
		// return new double4x4(
		//     c,
		//     -s,
		//     0.0,
		//     0.0,
		//     s,
		//     c,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double L_1 = V_1;
		double L_2 = V_0;
		double L_3 = V_0;
		double L_4 = V_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5;
		memset((&L_5), 0, sizeof(L_5));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_5), L_1, ((-L_2)), (0.0), (0.0), L_3, L_4, (0.0), (0.0), (0.0), (0.0), (1.0), (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0085;
	}

IL_0085:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = V_2;
		return L_6;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::Scale(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_Scale_m41B094FA3604E0AFCE06270365C5A347FB28B67B (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_s, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double4x4(
		//     s.x,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     s.y,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     s.z,
		//     0.0,
		//     0.0,
		//     0.0,
		//     0.0,
		//     1.0
		// );
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_s;
		double L_1 = L_0.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = ___0_s;
		double L_3 = L_2.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_4 = ___0_s;
		double L_5 = L_4.___z_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6;
		memset((&L_6), 0, sizeof(L_6));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_6), L_1, (0.0), (0.0), (0.0), (0.0), L_3, (0.0), (0.0), (0.0), (0.0), L_5, (0.0), (0.0), (0.0), (0.0), (1.0), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0090;
	}

IL_0090:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_7 = V_0;
		return L_7;
	}
}
// Unity.Mathematics.double4x4 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.MatrixStack::Translate(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C MatrixStack_Translate_m015ECF5F3FA74C195B1C1B6DF60CB4655DBAAD4E (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_vector, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double4x4(
		//     new double4(1.0, 0.0, 0.0, 0.0),
		//     new double4(0.0, 1.0, 0.0, 0.0),
		//     new double4(0.0, 0.0, 1.0, 0.0),
		//     new double4(vector.x, vector.y, vector.z, 1.0)
		// );
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_0), (1.0), (0.0), (0.0), (0.0), /*hidden argument*/NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_1), (0.0), (1.0), (0.0), (0.0), /*hidden argument*/NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_2;
		memset((&L_2), 0, sizeof(L_2));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_2), (0.0), (0.0), (1.0), (0.0), /*hidden argument*/NULL);
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_3 = ___0_vector;
		double L_4 = L_3.___x_0;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_5 = ___0_vector;
		double L_6 = L_5.___y_1;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_7 = ___0_vector;
		double L_8 = L_7.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_9;
		memset((&L_9), 0, sizeof(L_9));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_9), L_4, L_6, L_8, (1.0), /*hidden argument*/NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_10;
		memset((&L_10), 0, sizeof(L_10));
		double4x4__ctor_mC28DA9877244770A1E61E41A50DF95F405AFD34B_inline((&L_10), L_0, L_1, L_2, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_11 = V_0;
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReferencePoint__ctor_mAE1CD4978E79450F6C8D000D6ED727FDCE765109 (GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* __this, const RuntimeMethod* method) 
{
	{
		// public GeoTilesReferencePoint()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Latitude = 0;
		__this->___Latitude_0 = (0.0);
		// Longitude = 0;
		__this->___Longitude_1 = (0.0);
		// Height = 0;
		__this->___Height_2 = (0.0);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReferencePoint__ctor_m9F7BCABAEDA08CC0F96B4318068EE599A143CC92 (GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* __this, double ___0_latitude, double ___1_longitude, double ___2_height, const RuntimeMethod* method) 
{
	{
		// public GeoTilesReferencePoint(double latitude, double longitude, double height)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Latitude = latitude;
		double L_0 = ___0_latitude;
		__this->___Latitude_0 = L_0;
		// Longitude = longitude;
		double L_1 = ___1_longitude;
		__this->___Longitude_1 = L_1;
		// Height = height;
		double L_2 = ___2_height;
		__this->___Height_2 = L_2;
		// }
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
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReference__ctor_m2EE7261D8A54AF9723FD6D75C770FC7FADDCA53C (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	{
		// private CesiumGeoreference geoReference = null;
		__this->___geoReference_0 = (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoReference_0), (void*)(CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268*)NULL);
		// public GeoTilesReference(GameObject gameObject)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// geoReference = GetReference(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_1;
		L_1 = GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584(__this, L_0, NULL);
		__this->___geoReference_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoReference_0), (void*)L_1);
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReferencePoint Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::GetTilesReferencePoint(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* GeoTilesReference_GetTilesReferencePoint_mA0474ACEDF8FF709BF7F3B78B0771C94695EB138 (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* V_3 = NULL;
	{
		// if (geoReference == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_0 = __this->___geoReference_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// geoReference = GetReference(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_gameObject;
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_4;
		L_4 = GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584(__this, L_3, NULL);
		__this->___geoReference_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoReference_0), (void*)L_4);
		// if (geoReference == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_5 = __this->___geoReference_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// return null;
		V_3 = (GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C*)NULL;
		goto IL_0060;
	}

IL_0034:
	{
	}

IL_0035:
	{
		// GeoTilesReferencePoint RefPoint = new GeoTilesReferencePoint(
		//     geoReference.latitude,
		//     geoReference.longitude,
		//     geoReference.height
		// );
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_8 = __this->___geoReference_0;
		NullCheck(L_8);
		double L_9;
		L_9 = CesiumGeoreference_get_latitude_m8C90C4AB329B14C76BF77578CCC329359EB09813_inline(L_8, NULL);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_10 = __this->___geoReference_0;
		NullCheck(L_10);
		double L_11;
		L_11 = CesiumGeoreference_get_longitude_m210F8A0262C00066F16E2F6066F93BCF08F92FA9_inline(L_10, NULL);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_12 = __this->___geoReference_0;
		NullCheck(L_12);
		double L_13;
		L_13 = CesiumGeoreference_get_height_m5E80EBABC7E1CCC7DD30C5E23242D511FAAE2220_inline(L_12, NULL);
		GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* L_14 = (GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C*)il2cpp_codegen_object_new(GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GeoTilesReferencePoint__ctor_m9F7BCABAEDA08CC0F96B4318068EE599A143CC92(L_14, L_9, L_11, L_13, NULL);
		V_0 = L_14;
		// return RefPoint;
		GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* L_15 = V_0;
		V_3 = L_15;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		GeoTilesReferencePoint_t96ECABDAF70F9C9253EEF952B2D9EC8D3295527C* L_16 = V_3;
		return L_16;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::SetGameLayer(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReference_SetGameLayer_m084D2B01DEF865337FAA8D01746D910C14C6479F (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, int32_t ___1__layer, const RuntimeMethod* method) 
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
		// if (geoReference == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_0 = __this->___geoReference_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// geoReference = GetReference(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_gameObject;
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_4;
		L_4 = GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584(__this, L_3, NULL);
		__this->___geoReference_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geoReference_0), (void*)L_4);
		// if (geoReference == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_5 = __this->___geoReference_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		goto IL_0046;
	}

IL_0032:
	{
	}

IL_0033:
	{
		// SetGameLayerRecursive(geoReference.gameObject, _layer);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_8 = __this->___geoReference_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		int32_t L_10 = ___1__layer;
		GeoTilesReference_SetGameLayerRecursive_mFAFDB95226DEC4C61CA376A35400646FC84142D3(__this, L_9, L_10, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::SetGameLayerRecursive(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoTilesReference_SetGameLayerRecursive_mFAFDB95226DEC4C61CA376A35400646FC84142D3 (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0__go, int32_t ___1__layer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		// _go.layer = _layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0__go;
		int32_t L_1 = ___1__layer;
		NullCheck(L_0);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_0, L_1, NULL);
		// foreach (Transform child in _go.transform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0__go;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_4;
					if (!L_6)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_7 = V_4;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0018_1:
			{
				// foreach (Transform child in _go.transform)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// child.gameObject.layer = _layer;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
				int32_t L_12 = ___1__layer;
				NullCheck(L_11);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, L_12, NULL);
				// Transform _HasChildren = child.GetComponentInChildren<Transform>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
				NullCheck(L_13);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0(L_13, Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
				V_2 = L_14;
				// if (_HasChildren != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_3 = L_16;
				bool L_17 = V_3;
				if (!L_17)
				{
					goto IL_0052_1;
				}
			}
			{
				// SetGameLayerRecursive(child.gameObject, _layer);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				int32_t L_20 = ___1__layer;
				GeoTilesReference_SetGameLayerRecursive_mFAFDB95226DEC4C61CA376A35400646FC84142D3(__this, L_19, L_20, NULL);
			}

IL_0052_1:
			{
			}

IL_0053_1:
			{
				// foreach (Transform child in _go.transform)
				RuntimeObject* L_21 = V_0;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// CesiumForUnity.CesiumGeoreference Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::GetReference(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584 (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m2F87BE2B19A47ADDAF4E4ED69766C18E4F381976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_3 = NULL;
	{
		// CesiumGeoreference geoRef = gameObject.GetComponentInParent<CesiumGeoreference>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_1;
		L_1 = GameObject_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m2F87BE2B19A47ADDAF4E4ED69766C18E4F381976(L_0, GameObject_GetComponentInParent_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m2F87BE2B19A47ADDAF4E4ED69766C18E4F381976_RuntimeMethod_var);
		V_0 = L_1;
		// if (geoRef == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// geoRef = FindFirstGeoreference();
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_5;
		L_5 = GeoTilesReference_FindFirstGeoreference_mCD61823867BF1474F73E5EF8774D1948399F309C(__this, NULL);
		V_0 = L_5;
	}

IL_001c:
	{
		// if (geoRef == null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// throw new InvalidOperationException(
		//     "Can't find CesiumGeoreference used to calculate latitude and longitude");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F651D4EEFEE935935DB26EAF34852BDAA290384)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GeoTilesReference_GetReference_m0ACC1F6F7F0245184600E604FBC9AA267D543584_RuntimeMethod_var)));
	}

IL_0033:
	{
		// return geoRef;
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_10 = V_0;
		V_3 = L_10;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_11 = V_3;
		return L_11;
	}
}
// CesiumForUnity.CesiumGeoreference Google.XR.ARCoreExtensions.GeospatialCreator.Internal.GeoTilesReference::FindFirstGeoreference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* GeoTilesReference_FindFirstGeoreference_mCD61823867BF1474F73E5EF8774D1948399F309C (GeoTilesReference_t6654EDCC9E4EF38DE0D23403E5FACBFF4E0FF419* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m6664EDBA0DB508BC3A47605C3D438541E5F00F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B* V_0 = NULL;
	int32_t V_1 = 0;
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_2 = NULL;
	bool V_3 = false;
	CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* V_4 = NULL;
	bool V_5 = false;
	{
		// CesiumForUnity.CesiumGeoreference[] georeferences =
		//     UnityEngine.Object.FindObjectsOfType<CesiumGeoreference>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B* L_0;
		L_0 = Object_FindObjectsOfType_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m6664EDBA0DB508BC3A47605C3D438541E5F00F00((bool)1, Object_FindObjectsOfType_TisCesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268_m6664EDBA0DB508BC3A47605C3D438541E5F00F00_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < georeferences.Length; i++)
		V_1 = 0;
		goto IL_0027;
	}

IL_000c:
	{
		// CesiumGeoreference georeference = georeferences[i];
		CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (georeference != null)
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return georeference;
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_8 = V_2;
		V_4 = L_8;
		goto IL_0038;
	}

IL_0022:
	{
		// for (int i = 0; i < georeferences.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < georeferences.Length; i++)
		int32_t L_10 = V_1;
		CesiumGeoreferenceU5BU5D_t6C2DD7C8E39744D070AB6EDB7263E6709E050B6B* L_11 = V_0;
		NullCheck(L_11);
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		V_4 = (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268*)NULL;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* L_13 = V_4;
		return L_13;
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
// Unity.Mathematics.double3 Google.XR.ARCoreExtensions.GeospatialCreator.Internal.CesiumWgs84Ellipsoid::EarthCenteredEarthFixedToLongitudeLatitudeHeight(Unity.Mathematics.double3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_m5786C56F645054582FB7571A6AB0FD6627381448 (double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 ___0_ecef, const RuntimeMethod* method) 
{
	double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return CesiumForUnity.CesiumWgs84Ellipsoid.EarthCenteredEarthFixedToLongitudeLatitudeHeight(
		//     ecef
		// );
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_0 = ___0_ecef;
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_1;
		L_1 = CesiumWgs84Ellipsoid_EarthCenteredEarthFixedToLongitudeLatitudeHeight_mBD814A88230A66A8651170CD363EE449BB144C12(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		double3_t4E22E063009822491E39D3E064709F4B4B9E6CF4 L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.GeospatialCreator.Internal.CesiumWgs84Ellipsoid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CesiumWgs84Ellipsoid__ctor_mDA7161398A7FF3E3E3C9450CE7F1B420A2433F49 (CesiumWgs84Ellipsoid_t4246599A46369C1B05E29AA972616D5585034170* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_18;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Latitude_mADA1C45336A23FD5A49555D7056B124C26C97A8F_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._latitude;
		double L_0 = __this->____latitude_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Longitude_m1DD692ED45E247B9E6E7752A3B9572CA8C4E2F14_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._longitude;
		double L_0 = __this->____longitude_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_Altitude_m99F0029B7D099B31F3062EFA4E3470D6768BAA0B_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._altitude;
		double L_0 = __this->____altitude_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ARGeospatialCreatorAnchor_get_AltitudeOffset_mD2D1468D0C17222AC636C7AEEABBACDCF7CBB2BE_inline (ARGeospatialCreatorAnchor_tEFD73D216CD347B15FAC6CF17E7CFF3419C82BDC* __this, const RuntimeMethod* method) 
{
	{
		// get => this._altitudeOffset;
		double L_0 = __this->____altitudeOffset_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cesium3DTileset_get_url_m1EF8B79AF228F1A1C494F97E437496255A06936C_inline (Cesium3DTileset_t5498D56ED52ABDDEE4DD3708E3D23458923859FA* __this, const RuntimeMethod* method) 
{
	{
		// get => this._url;
		String_t* L_0 = __this->____url_8;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void math_sincos_mA84E8A44CF0ACE24E3AC36D2769BE42D5B0DB8A0_inline (double ___0_x, double* ___1_s, double* ___2_c, const RuntimeMethod* method) 
{
	{
		// public static void sincos(double x, out double s, out double c) { s = sin(x); c = cos(x); }
		double* L_0 = ___1_s;
		double L_1 = ___0_x;
		double L_2;
		L_2 = math_sin_mECAF323FE370428B2881CCEF886F462DB089ECF3_inline(L_1, NULL);
		*((double*)L_0) = (double)L_2;
		// public static void sincos(double x, out double s, out double c) { s = sin(x); c = cos(x); }
		double* L_3 = ___2_c;
		double L_4 = ___0_x;
		double L_5;
		L_5 = math_cos_m59BA9F1A619ADBD65046E69D6B86149133801789_inline(L_4, NULL);
		*((double*)L_3) = (double)L_5;
		// public static void sincos(double x, out double s, out double c) { s = sin(x); c = cos(x); }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_transpose_mA6CBDA629756DA5259C33936C0843AFE06B29442_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_v, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return double4x4(
		//     v.c0.x, v.c0.y, v.c0.z, v.c0.w,
		//     v.c1.x, v.c1.y, v.c1.z, v.c1.w,
		//     v.c2.x, v.c2.y, v.c2.z, v.c2.w,
		//     v.c3.x, v.c3.y, v.c3.z, v.c3.w);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = L_0.___c0_0;
		double L_2 = L_1.___x_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_3 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4 = L_3.___c0_0;
		double L_5 = L_4.___y_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_7 = L_6.___c0_0;
		double L_8 = L_7.___z_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_10 = L_9.___c0_0;
		double L_11 = L_10.___w_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_12 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_13 = L_12.___c1_1;
		double L_14 = L_13.___x_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_15 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_16 = L_15.___c1_1;
		double L_17 = L_16.___y_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_18 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_19 = L_18.___c1_1;
		double L_20 = L_19.___z_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_21 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_22 = L_21.___c1_1;
		double L_23 = L_22.___w_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_24 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_25 = L_24.___c2_2;
		double L_26 = L_25.___x_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_27 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_28 = L_27.___c2_2;
		double L_29 = L_28.___y_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_30 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_31 = L_30.___c2_2;
		double L_32 = L_31.___z_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_33 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_34 = L_33.___c2_2;
		double L_35 = L_34.___w_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_36 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_37 = L_36.___c3_3;
		double L_38 = L_37.___x_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_39 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_40 = L_39.___c3_3;
		double L_41 = L_40.___y_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_42 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_43 = L_42.___c3_3;
		double L_44 = L_43.___z_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_45 = ___0_v;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_46 = L_45.___c3_3;
		double L_47 = L_46.___w_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_48;
		L_48 = math_double4x4_mE09AF571F7B474DAF15C89D63C9688587DCE4FC6_inline(L_2, L_5, L_8, L_11, L_14, L_17, L_20, L_23, L_26, L_29, L_32, L_35, L_38, L_41, L_44, L_47, NULL);
		V_0 = L_48;
		goto IL_00b9;
	}

IL_00b9:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_49 = V_0;
		return L_49;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_mul_m50A1B4F116C12B9D7A4525963841E7A7D3F592D4_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_a, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___1_b, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return double4x4(
		//     a.c0 * b.c0.x + a.c1 * b.c0.y + a.c2 * b.c0.z + a.c3 * b.c0.w,
		//     a.c0 * b.c1.x + a.c1 * b.c1.y + a.c2 * b.c1.z + a.c3 * b.c1.w,
		//     a.c0 * b.c2.x + a.c1 * b.c2.y + a.c2 * b.c2.z + a.c3 * b.c2.w,
		//     a.c0 * b.c3.x + a.c1 * b.c3.y + a.c2 * b.c3.z + a.c3 * b.c3.w);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = L_0.___c0_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_2 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_3 = L_2.___c0_0;
		double L_4 = L_3.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_5;
		L_5 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_1, L_4, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_6 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_7 = L_6.___c1_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_8 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_9 = L_8.___c0_0;
		double L_10 = L_9.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_11;
		L_11 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_7, L_10, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_12;
		L_12 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_5, L_11, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_13 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_14 = L_13.___c2_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_15 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_16 = L_15.___c0_0;
		double L_17 = L_16.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_18;
		L_18 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_14, L_17, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_19;
		L_19 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_12, L_18, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_20 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_21 = L_20.___c3_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_22 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_23 = L_22.___c0_0;
		double L_24 = L_23.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_25;
		L_25 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_21, L_24, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_26;
		L_26 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_19, L_25, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_27 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_28 = L_27.___c0_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_29 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_30 = L_29.___c1_1;
		double L_31 = L_30.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_32;
		L_32 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_28, L_31, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_33 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_34 = L_33.___c1_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_35 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_36 = L_35.___c1_1;
		double L_37 = L_36.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_38;
		L_38 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_34, L_37, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_39;
		L_39 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_32, L_38, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_40 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_41 = L_40.___c2_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_42 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_43 = L_42.___c1_1;
		double L_44 = L_43.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_45;
		L_45 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_41, L_44, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_46;
		L_46 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_39, L_45, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_47 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_48 = L_47.___c3_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_49 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_50 = L_49.___c1_1;
		double L_51 = L_50.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_52;
		L_52 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_48, L_51, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_53;
		L_53 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_46, L_52, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_54 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_55 = L_54.___c0_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_56 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_57 = L_56.___c2_2;
		double L_58 = L_57.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_59;
		L_59 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_55, L_58, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_60 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_61 = L_60.___c1_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_62 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_63 = L_62.___c2_2;
		double L_64 = L_63.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_65;
		L_65 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_61, L_64, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_66;
		L_66 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_59, L_65, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_67 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_68 = L_67.___c2_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_69 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_70 = L_69.___c2_2;
		double L_71 = L_70.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_72;
		L_72 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_68, L_71, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_73;
		L_73 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_66, L_72, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_74 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_75 = L_74.___c3_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_76 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_77 = L_76.___c2_2;
		double L_78 = L_77.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_79;
		L_79 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_75, L_78, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_80;
		L_80 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_73, L_79, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_81 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_82 = L_81.___c0_0;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_83 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_84 = L_83.___c3_3;
		double L_85 = L_84.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_86;
		L_86 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_82, L_85, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_87 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_88 = L_87.___c1_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_89 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_90 = L_89.___c3_3;
		double L_91 = L_90.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_92;
		L_92 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_88, L_91, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_93;
		L_93 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_86, L_92, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_94 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_95 = L_94.___c2_2;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_96 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_97 = L_96.___c3_3;
		double L_98 = L_97.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_99;
		L_99 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_95, L_98, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_100;
		L_100 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_93, L_99, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_101 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_102 = L_101.___c3_3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_103 = ___1_b;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_104 = L_103.___c3_3;
		double L_105 = L_104.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_106;
		L_106 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_102, L_105, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_107;
		L_107 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_100, L_106, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_108;
		L_108 = math_double4x4_m4B7FDA54BD0CA73F1DCF27FB0CC01C4A850F90F2_inline(L_26, L_53, L_80, L_107, NULL);
		V_0 = L_108;
		goto IL_01a5;
	}

IL_01a5:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_109 = V_0;
		return L_109;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 math_mul_m15697BA79A02858D72C9114C635AF321624CBD0D_inline (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_a, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_b, const RuntimeMethod* method) 
{
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return a.c0 * b.x + a.c1 * b.y + a.c2 * b.z + a.c3 * b.w;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_0 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = L_0.___c0_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_2 = ___1_b;
		double L_3 = L_2.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4;
		L_4 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_1, L_3, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_6 = L_5.___c1_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_7 = ___1_b;
		double L_8 = L_7.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_9;
		L_9 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_6, L_8, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_10;
		L_10 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_4, L_9, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_11 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_12 = L_11.___c2_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_13 = ___1_b;
		double L_14 = L_13.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_15;
		L_15 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_12, L_14, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_16;
		L_16 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_10, L_15, NULL);
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_17 = ___0_a;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_18 = L_17.___c3_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_19 = ___1_b;
		double L_20 = L_19.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_21;
		L_21 = double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline(L_18, L_20, NULL);
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_22;
		L_22 = double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline(L_16, L_21, NULL);
		V_0 = L_22;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_23 = V_0;
		return L_23;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CesiumGeoreference_get_latitude_m8C90C4AB329B14C76BF77578CCC329359EB09813_inline (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) 
{
	{
		// get => this._latitude;
		double L_0 = __this->____latitude_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CesiumGeoreference_get_longitude_m210F8A0262C00066F16E2F6066F93BCF08F92FA9_inline (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) 
{
	{
		// get => this._longitude;
		double L_0 = __this->____longitude_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double CesiumGeoreference_get_height_m5E80EBABC7E1CCC7DD30C5E23242D511FAAE2220_inline (CesiumGeoreference_t3EF79184698C34362ECCC345CE60756BF66AB268* __this, const RuntimeMethod* method) 
{
	{
		// get => this._height;
		double L_0 = __this->____height_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mBBD10506188AEA5037E2C560BB451682BDABC0A0_gshared_inline (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C ___0_item, const RuntimeMethod* method) 
{
	double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216* L_1 = (double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		double4x4U5BU5D_tF7A9CA77C6F2139EEBE70CD34C11FFD91C8C3216* L_6 = V_0;
		int32_t L_7 = V_1;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C)L_8);
		return;
	}

IL_0034:
	{
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_9 = ___0_item;
		((  void (*) (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F*, double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC5C710BE73158679210CFA07183656365A7A2A34_gshared_inline (List_1_t6D81254724F3D681C217D109C6625D5546B0E83F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_sin_mECAF323FE370428B2881CCEF886F462DB089ECF3_inline (double ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// public static double sin(double x) { return System.Math.Sin(x); }
		double L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sin(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static double sin(double x) { return System.Math.Sin(x); }
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_cos_m59BA9F1A619ADBD65046E69D6B86149133801789_inline (double ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// public static double cos(double x) { return System.Math.Cos(x); }
		double L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// public static double cos(double x) { return System.Math.Cos(x); }
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_double4x4_mE09AF571F7B474DAF15C89D63C9688587DCE4FC6_inline (double ___0_m00, double ___1_m01, double ___2_m02, double ___3_m03, double ___4_m10, double ___5_m11, double ___6_m12, double ___7_m13, double ___8_m20, double ___9_m21, double ___10_m22, double ___11_m23, double ___12_m30, double ___13_m31, double ___14_m32, double ___15_m33, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new double4x4(m00, m01, m02, m03,
		//                      m10, m11, m12, m13,
		//                      m20, m21, m22, m23,
		//                      m30, m31, m32, m33);
		double L_0 = ___0_m00;
		double L_1 = ___1_m01;
		double L_2 = ___2_m02;
		double L_3 = ___3_m03;
		double L_4 = ___4_m10;
		double L_5 = ___5_m11;
		double L_6 = ___6_m12;
		double L_7 = ___7_m13;
		double L_8 = ___8_m20;
		double L_9 = ___9_m21;
		double L_10 = ___10_m22;
		double L_11 = ___11_m23;
		double L_12 = ___12_m30;
		double L_13 = ___13_m31;
		double L_14 = ___14_m32;
		double L_15 = ___15_m33;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_16;
		memset((&L_16), 0, sizeof(L_16));
		double4x4__ctor_mDB1C9BED251AFC0CD16CA1D52545C5A1DAA6878F_inline((&L_16), L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 double4_op_Multiply_m7198FFA1CA9CECA269103FF59DDB9B17339C960E_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_lhs, double ___1_rhs, const RuntimeMethod* method) 
{
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double4 operator * (double4 lhs, double rhs) { return new double4 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs, lhs.w * rhs); }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double L_2 = ___1_rhs;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_3 = ___0_lhs;
		double L_4 = L_3.___y_1;
		double L_5 = ___1_rhs;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_6 = ___0_lhs;
		double L_7 = L_6.___z_2;
		double L_8 = ___1_rhs;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_9 = ___0_lhs;
		double L_10 = L_9.___w_3;
		double L_11 = ___1_rhs;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_12;
		memset((&L_12), 0, sizeof(L_12));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_12), ((double)il2cpp_codegen_multiply(L_1, L_2)), ((double)il2cpp_codegen_multiply(L_4, L_5)), ((double)il2cpp_codegen_multiply(L_7, L_8)), ((double)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		// public static double4 operator * (double4 lhs, double rhs) { return new double4 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs, lhs.w * rhs); }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 double4_op_Addition_m8AAE5EE5F10ABBC89E198D1A91BA868E8FF9AD90_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_lhs, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_rhs, const RuntimeMethod* method) 
{
	double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double4 operator + (double4 lhs, double4 rhs) { return new double4 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w); }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_0 = ___0_lhs;
		double L_1 = L_0.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_2 = ___1_rhs;
		double L_3 = L_2.___x_0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_4 = ___0_lhs;
		double L_5 = L_4.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_6 = ___1_rhs;
		double L_7 = L_6.___y_1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_8 = ___0_lhs;
		double L_9 = L_8.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_10 = ___1_rhs;
		double L_11 = L_10.___z_2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_12 = ___0_lhs;
		double L_13 = L_12.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_14 = ___1_rhs;
		double L_15 = L_14.___w_3;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_16;
		memset((&L_16), 0, sizeof(L_16));
		double4__ctor_m49D96B66F7E9E5F0783AA40FCBE7EC199F5C7C42_inline((&L_16), ((double)il2cpp_codegen_add(L_1, L_3)), ((double)il2cpp_codegen_add(L_5, L_7)), ((double)il2cpp_codegen_add(L_9, L_11)), ((double)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		// public static double4 operator + (double4 lhs, double4 rhs) { return new double4 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w); }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C math_double4x4_m4B7FDA54BD0CA73F1DCF27FB0CC01C4A850F90F2_inline (double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___0_c0, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___1_c1, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___2_c2, double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 ___3_c3, const RuntimeMethod* method) 
{
	double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static double4x4 double4x4(double4 c0, double4 c1, double4 c2, double4 c3) { return new double4x4(c0, c1, c2, c3); }
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_0 = ___0_c0;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_1 = ___1_c1;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_2 = ___2_c2;
		double4_t82EF3F10905F7357C3F8C08F83AB6F8EC776FDC5 L_3 = ___3_c3;
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_4;
		memset((&L_4), 0, sizeof(L_4));
		double4x4__ctor_mC28DA9877244770A1E61E41A50DF95F405AFD34B_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		// public static double4x4 double4x4(double4 c0, double4 c1, double4 c2, double4 c3) { return new double4x4(c0, c1, c2, c3); }
		double4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C L_5 = V_0;
		return L_5;
	}
}
