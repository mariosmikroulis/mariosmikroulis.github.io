#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<InventoryItem>
struct List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// InventoryItem[]
struct InventoryItemU5BU5D_tBBC14DEDB2D2B9596D9584C8C174E1057F39C972;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// CameraHandler
struct CameraHandler_tB0FF41C1BCF50E836092F27F951A4CFDCB93F564;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GoldMining
struct GoldMining_t941EB3B932C37E20614BCDDBF9B46002A983BC84;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574;
// InventoryItem
struct InventoryItem_t8517153591805278C8567DD20BC40055682E5334;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Mining
struct Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MysteryBoxScript
struct MysteryBoxScript_tA862ECEC2877AEBEA99F08C78D3B5898B3BD2EFF;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OxygenController
struct OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneTeleportation
struct SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Mining/<pickup>d__19
struct U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027;
// Mining/<reward>d__20
struct U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryItem_t8517153591805278C8567DD20BC40055682E5334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03828A345D1ECB77E451B6B25C0EEE3A89A1BBFB;
IL2CPP_EXTERN_C String_t* _stringLiteral0598190E4CAF8BFE9CC29FA8911B602F97DF30C1;
IL2CPP_EXTERN_C String_t* _stringLiteral086C22DEC9EBC41B06D67EB8F496AFBDD926A44F;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF;
IL2CPP_EXTERN_C String_t* _stringLiteral0EB7478718871DE20A9AF36AEC9D3DF8A6AA7785;
IL2CPP_EXTERN_C String_t* _stringLiteral11CEB11AC5D73409AAE5F0010AC3B26ADD3FAB31;
IL2CPP_EXTERN_C String_t* _stringLiteral142BDE0F4FA783688F0B1084963FBECCF324C413;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3C3054D4C08D66041CD9784B24DC3E2A88E358;
IL2CPP_EXTERN_C String_t* _stringLiteral20BADD8EB7EE793570704B05366AF5F68E6C0E41;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3545DA5D9727E81D86C83B287766AF771C5C7D69;
IL2CPP_EXTERN_C String_t* _stringLiteral37A4950B0646CCFBBBFA426E5A70BB92A01027BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3DE56C7ACE6A3DF9498D20F3E5CC06B541C64D1E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1D0F387FBB99221E02121F5F45EE2D25F61B3B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A21E07717BDD98B3090E78E3D89442825961B87;
IL2CPP_EXTERN_C String_t* _stringLiteral5D0346AB24AAE4B96F7AD6C7718D58D73BC67733;
IL2CPP_EXTERN_C String_t* _stringLiteral64F7F456765296CE39F8C5F783545831D5E2B7F2;
IL2CPP_EXTERN_C String_t* _stringLiteral67A61073C8C54F9293DA87CE648EFABCDE865DE9;
IL2CPP_EXTERN_C String_t* _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05;
IL2CPP_EXTERN_C String_t* _stringLiteral6E16C39088ABDDFA3AA555B51E0BE9EFA901A344;
IL2CPP_EXTERN_C String_t* _stringLiteral6E6524529295569593B47E4F1F36EA05D698C84B;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral761E4A660B7B0BE233BC0D06B9EAF4710219BB47;
IL2CPP_EXTERN_C String_t* _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral84E55D25555E55D7B75510DC96A052D9A837BC88;
IL2CPP_EXTERN_C String_t* _stringLiteral85FD9A1D78A8C47059F31A97BE6A415D14C78CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral87EFB2BA0EC9A5E0902755D7B9D9FCD37AA07A8B;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437;
IL2CPP_EXTERN_C String_t* _stringLiteral90B737D0D7D19E9A1FC475409EAE0D0F8BF72A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9;
IL2CPP_EXTERN_C String_t* _stringLiteral98D738C566E2806926E6640415EBAAF0839AD52A;
IL2CPP_EXTERN_C String_t* _stringLiteral9B0845BE9A2125CC691C778E0A14445B46E19BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9C785F2CB339BEC4D27817F74AFCB4B9E996C233;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralAA16AE46FE6216F390B6D41858C59B929B8EC68B;
IL2CPP_EXTERN_C String_t* _stringLiteralAD62374EBB356019EEF418D566653488910FABAD;
IL2CPP_EXTERN_C String_t* _stringLiteralB58B7B51BBBAD2951E89E5A00E3C9960469A97FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D69B1F6EC649DA41A75FB1ACC5E2BDCFA81A73;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC226747D22C6A146802B06B78F0867FF695AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3881B8B32D60E77D9544D6EC0DC98AE4D8E96CF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralDE087ED75CFAE0825827246769DE2906C97C7E76;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319;
IL2CPP_EXTERN_C String_t* _stringLiteralFCB9A57E0FF8D789CC584C4CE92C1285B13A27CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFFB78E925E11C59166E0EE5430A0545B36460C25;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m17DAB8A7C2C426869D4B1A838DB79864D172DDE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m81D588A236F15D109E1E3FC9EDBB595D7B74AE03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m59EC1DC7153CEF2F566D158747378EC0DF54C7A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m96FC81A76DED86C50DA6D78679FE5EF693DB2CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m73DF93F0D7C5E45A33001917D457D8917F9C0A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpickupU3Ed__19_System_Collections_IEnumerator_Reset_m8A2FDC99AB83EDE37452C257363A07852FAF0577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CrewardU3Ed__20_System_Collections_IEnumerator_Reset_m03B6FBCD442248D3F941B2902709891AF24E566C_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<InventoryItem>
struct List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InventoryItemU5BU5D_tBBC14DEDB2D2B9596D9584C8C174E1057F39C972* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InventoryItemU5BU5D_tBBC14DEDB2D2B9596D9584C8C174E1057F39C972* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574  : public RuntimeObject
{
	// System.Collections.Generic.List`1<InventoryItem> Inventory::allItems
	List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* ___allItems_0;
};

// InventoryItem
struct InventoryItem_t8517153591805278C8567DD20BC40055682E5334  : public RuntimeObject
{
	// System.String InventoryItem::id
	String_t* ___id_0;
	// System.String InventoryItem::name
	String_t* ___name_1;
	// System.String InventoryItem::description
	String_t* ___description_2;
	// System.Int32 InventoryItem::amount
	int32_t ___amount_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Mining/<pickup>d__19
struct U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027  : public RuntimeObject
{
	// System.Int32 Mining/<pickup>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mining/<pickup>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Mining Mining/<pickup>d__19::<>4__this
	Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* ___U3CU3E4__this_2;
};

// Mining/<reward>d__20
struct U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE  : public RuntimeObject
{
	// System.Int32 Mining/<reward>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mining/<reward>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Mining Mining/<reward>d__20::<>4__this
	Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* ___U3CU3E4__this_2;
	// System.String Mining/<reward>d__20::<txt>5__2
	String_t* ___U3CtxtU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<InventoryItem>
struct Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// CameraModes
struct CameraModes_tDA802737E8741D45272A22A2E61CDCADD063EFDA 
{
	// System.Int32 CameraModes::value__
	int32_t ___value___2;
};

// UnityEngine.CollisionFlags
struct CollisionFlags_t3132E5D974C485D3F3C97B7AF475965AB0C3F9C1 
{
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;
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

// UnityEngine.CursorLockMode
struct CursorLockMode_tB70C7D1B9208B821C1C8A614BE904500B92C47D2 
{
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.ForceMode
struct ForceMode_t603F3ECB085E4FDD30C91273A469047EA64F4459 
{
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;
};

// Generic
struct Generic_t986F778CC2F65FB8D394006B965C1DF783507F78  : public RuntimeObject
{
};

struct Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields
{
	// UnityEngine.Vector3 Generic::<enterance>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CenteranceU3Ek__BackingField_0;
	// Inventory Generic::<inventory>k__BackingField
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___U3CinventoryU3Ek__BackingField_1;
	// System.Int32 Generic::difficultyLevelSet
	int32_t ___difficultyLevelSet_2;
	// System.Int32 Generic::oxygenLevel
	int32_t ___oxygenLevel_3;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_t3E17ADA25A3C4F14ECF6026741219437DA054963 
{
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraController::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_5;
};

// CameraHandler
struct CameraHandler_tB0FF41C1BCF50E836092F27F951A4CFDCB93F564  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraHandler::mouseSensitivity
	float ___mouseSensitivity_4;
	// System.Single CameraHandler::x_rotation
	float ___x_rotation_5;
	// UnityEngine.Transform CameraHandler::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_6;
};

// Mining
struct Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Mining::actionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___actionText_4;
	// System.Boolean Mining::isInArea
	bool ___isInArea_5;
	// System.Boolean Mining::hasAxe
	bool ___hasAxe_6;
	// System.Boolean Mining::isMining
	bool ___isMining_7;
	// System.String Mining::materialName
	String_t* ___materialName_8;
	// System.Single Mining::respawnTime
	float ___respawnTime_9;
	// System.Single Mining::easyPickupTime
	float ___easyPickupTime_10;
	// System.Single Mining::mediumPickupTime
	float ___mediumPickupTime_11;
	// System.Single Mining::hardPickupTime
	float ___hardPickupTime_12;
	// System.Int32 Mining::minDropEasy
	int32_t ___minDropEasy_13;
	// System.Int32 Mining::maxDropEasy
	int32_t ___maxDropEasy_14;
	// System.Int32 Mining::minDropMedium
	int32_t ___minDropMedium_15;
	// System.Int32 Mining::maxDropMedium
	int32_t ___maxDropMedium_16;
	// System.Int32 Mining::minDropHard
	int32_t ___minDropHard_17;
	// System.Int32 Mining::maxDropHard
	int32_t ___maxDropHard_18;
};

// MysteryBoxScript
struct MysteryBoxScript_tA862ECEC2877AEBEA99F08C78D3B5898B3BD2EFF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MysteryBoxScript::announcementsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___announcementsText_4;
};

// OxygenController
struct OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OxygenController::timer
	float ___timer_4;
	// UnityEngine.UI.Text OxygenController::oxygenText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___oxygenText_5;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 PlayerController::moveValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___moveValue_4;
	// System.Single PlayerController::speed
	float ___speed_5;
	// UnityEngine.Vector2 PlayerController::mouseMovement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mouseMovement_6;
	// System.Boolean PlayerController::issue1Fixer
	bool ___issue1Fixer_7;
	// System.Boolean PlayerController::issue2Fixer
	bool ___issue2Fixer_8;
	// System.Boolean PlayerController::oxygenArea
	bool ___oxygenArea_9;
	// System.Boolean PlayerController::issue1Area
	bool ___issue1Area_10;
	// System.Boolean PlayerController::issue2Area
	bool ___issue2Area_11;
	// System.Boolean PlayerController::doorArea
	bool ___doorArea_12;
	// UnityEngine.UI.Text PlayerController::oxygenText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___oxygenText_13;
	// OxygenController PlayerController::oxygenController
	OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691* ___oxygenController_14;
	// UnityEngine.UI.Text PlayerController::announcementsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___announcementsText_15;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;
	// System.Single PlayerMovement::gravity
	float ___gravity_6;
	// System.Single PlayerMovement::jumpHeight
	float ___jumpHeight_7;
	// System.Single PlayerMovement::currentSpeed
	float ___currentSpeed_8;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_9;
	// System.Single PlayerMovement::groundDistance
	float ___groundDistance_10;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_11;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_12;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_13;
};

// SceneTeleportation
struct SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SceneTeleportation::teleportationId
	int32_t ___teleportationId_4;
	// System.Boolean SceneTeleportation::isOnTheOutside
	bool ___isOnTheOutside_5;
	// UnityEngine.UI.Text SceneTeleportation::actionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___actionText_6;
	// System.Boolean SceneTeleportation::isOnShipPortal
	bool ___isOnShipPortal_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GoldMining
struct GoldMining_t941EB3B932C37E20614BCDDBF9B46002A983BC84  : public Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5
{
	// System.String GoldMining::_materialName
	String_t* ____materialName_19;
	// System.Single GoldMining::_respawnTime
	float ____respawnTime_20;
	// System.Single GoldMining::_easyPickupTime
	float ____easyPickupTime_21;
	// System.Single GoldMining::_mediumPickupTime
	float ____mediumPickupTime_22;
	// System.Single GoldMining::_hardPickupTime
	float ____hardPickupTime_23;
	// System.Int32 GoldMining::_minDropEasy
	int32_t ____minDropEasy_24;
	// System.Int32 GoldMining::_maxDropEasy
	int32_t ____maxDropEasy_25;
	// System.Int32 GoldMining::_minDropMedium
	int32_t ____minDropMedium_26;
	// System.Int32 GoldMining::_maxDropMedium
	int32_t ____maxDropMedium_27;
	// System.Int32 GoldMining::_minDropHard
	int32_t ____minDropHard_28;
	// System.Int32 GoldMining::_maxDropHard
	int32_t ____maxDropHard_29;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// Inventory Generic::get_inventory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* Generic_get_inventory_mEF57DB6605F45A29A182C7CE0E47A67379883AF3_inline (const RuntimeMethod* method) ;
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mEC4DABB7AD987F2E1734A9D27C46087E24DFECC0 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) ;
// System.Void Generic::set_inventory(Inventory)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Generic_set_inventory_m54F6DE8B6FC2FC4A3DEB696298D0D34786D29A51_inline (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<InventoryItem>::.ctor()
inline void List_1__ctor_m73DF93F0D7C5E45A33001917D457D8917F9C0A68 (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// InventoryItem Inventory::createItem(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItem_t8517153591805278C8567DD20BC40055682E5334* Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<InventoryItem>::Add(T)
inline void List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* __this, InventoryItem_t8517153591805278C8567DD20BC40055682E5334* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52*, InventoryItem_t8517153591805278C8567DD20BC40055682E5334*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void InventoryItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem__ctor_m775807C9917B41C904F5B88DD55F6771AC7A8AB5 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) ;
// System.Void InventoryItem::setId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setId_m8949B1D18CCBD7388D908F5E10D07B8D1B6AFDCE_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____id0, const RuntimeMethod* method) ;
// System.Void InventoryItem::setName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setName_m82EDCD2588D7B7F36427ADAA6FBC72107459E15A_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____name0, const RuntimeMethod* method) ;
// System.Void InventoryItem::setDescription(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setDescription_m57096DB8B836EDFE54D38D3E4F39D11094FB0882_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____desc0, const RuntimeMethod* method) ;
// InventoryItem Inventory::getItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItem_t8517153591805278C8567DD20BC40055682E5334* Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void InventoryItem::add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_add_m58B4741FD1BE4D0A49CCBC2F69DAD19A8C4FF170 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) ;
// System.Void InventoryItem::remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_remove_mEBB84E8594477C4A83AD255C8DD0DC6CEC4BE7A2 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) ;
// System.Void InventoryItem::setAmount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setAmount_m7FC2E5DF79A02F80C401667F97FAE358DD673B67_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InventoryItem>::GetEnumerator()
inline Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034 List_1_GetEnumerator_m96FC81A76DED86C50DA6D78679FE5EF693DB2CE7 (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034 (*) (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<InventoryItem>::Dispose()
inline void Enumerator_Dispose_m17DAB8A7C2C426869D4B1A838DB79864D172DDE4 (Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<InventoryItem>::get_Current()
inline InventoryItem_t8517153591805278C8567DD20BC40055682E5334* Enumerator_get_Current_m59EC1DC7153CEF2F566D158747378EC0DF54C7A6_inline (Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034* __this, const RuntimeMethod* method)
{
	return ((  InventoryItem_t8517153591805278C8567DD20BC40055682E5334* (*) (Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String InventoryItem::getId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InventoryItem_getId_m29F6E7DED21BF363C04D3BD525C0EEE0C0C5A63C_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<InventoryItem>::MoveNext()
inline bool Enumerator_MoveNext_m81D588A236F15D109E1E3FC9EDBB595D7B74AE03 (Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 InventoryItem::getAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InventoryItem_getAmount_m713FF72CA2554B0B05DF2B155A6282406FD759A8_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) ;
// System.Boolean Inventory::hasItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inventory_hasItem_mF970374CC908221EF0A5FDE1AD32C4E9CE0A0750 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, int32_t ___amount1, const RuntimeMethod* method) ;
// System.Void Mining::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mining__ctor_m1FEA5BCE8A85457022283B6E6148E415720643C5 (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Mining::pickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mining_pickup_mA4A40141D4BD43F67FAEBE78CE76C63FB24D84C8 (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// Inventory Generic::getInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* Generic_getInventory_m2EAA4066A3C40E433EE89499912BCEC0884E9723 (const RuntimeMethod* method) ;
// System.String InventoryItem::getName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InventoryItem_getName_mEEDD267A4541BCFD35EF1FF0953D206A684291D4_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void Mining/<pickup>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpickupU3Ed__19__ctor_mC5CBCD5CC3975288CED4852A13C9C9BE726A76F5 (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Mining/<reward>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrewardU3Ed__20__ctor_mFBBBD48078E3ED4394C5B8489B7378B90ECA79E7 (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Mining::reward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mining_reward_m41DB865C4AB2CC53D2BA13C30D03478292425F2E (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void Inventory::addItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_addItem_m7BD00BB4C2A7E2B122939134168F26C6140ED0F1 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, int32_t ___amount1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void Generic::set_enterance(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Generic_set_enterance_m9840A719D265964A9D91F43CDA52FF3F695CEED4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Generic::get_enterance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Generic_get_enterance_mAE124316ED91CDECF35776E8A06E351613C2EABB_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean SceneTeleportation::makeGenericChecks(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTeleportation_makeGenericChecks_m48FF350453D9027F1A64A99093D32A2770649846 (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// offset = transform.position - player.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_4, NULL);
		__this->___offset_5 = L_5;
		// }
		return;
	}
}
// System.Void CameraController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_LateUpdate_mC14DB0924E6F67288113AA92B3345A9B0ACEA27F (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = player.transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// transform.eulerAngles = player.transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
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
// System.Void MysteryBoxScript::OnTriggerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MysteryBoxScript_OnTriggerEnter_mE64A19D0EC0989FEBBFDD25AF8C866E64654CA8C (MysteryBoxScript_tA862ECEC2877AEBEA99F08C78D3B5898B3BD2EFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B737D0D7D19E9A1FC475409EAE0D0F8BF72A9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// announcementsText.text = "Press F to open the box";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___announcementsText_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral90B737D0D7D19E9A1FC475409EAE0D0F8BF72A9E);
		// }
		return;
	}
}
// System.Void MysteryBoxScript::OnTriggerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MysteryBoxScript_OnTriggerExit_mE905E3B50C710A9A5B4D4891BA0620E32936FFD4 (MysteryBoxScript_tA862ECEC2877AEBEA99F08C78D3B5898B3BD2EFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// announcementsText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___announcementsText_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void MysteryBoxScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MysteryBoxScript__ctor_m7246A4AE98F61BA7E2BC691A536289B4CFBFBDEC (MysteryBoxScript_tA862ECEC2877AEBEA99F08C78D3B5898B3BD2EFF* __this, const RuntimeMethod* method) 
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
// System.Void OxygenController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OxygenController_Start_m795F6415B34E05A8E616EBD85110713DEB7B9EEC (OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFB78E925E11C59166E0EE5430A0545B36460C25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oxygenText.text = "Oxygen: 100";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___oxygenText_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralFFB78E925E11C59166E0EE5430A0545B36460C25);
		// }
		return;
	}
}
// System.Void OxygenController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OxygenController_Update_m7238A9A8B256BADA1D066E614DAD0AF41F0FCFF5 (OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3881B8B32D60E77D9544D6EC0DC98AE4D8E96CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->___timer_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if(timer<=0){
		float L_2 = __this->___timer_4;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// Generic.oxygenLevel -=1;
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___oxygenLevel_3;
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___oxygenLevel_3 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// oxygenText.text = "Oxygen: " + Generic.oxygenLevel;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___oxygenText_5;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___oxygenLevel_3), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD3881B8B32D60E77D9544D6EC0DC98AE4D8E96CF, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// timer = 10.0f;
		__this->___timer_4 = (10.0f);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void OxygenController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OxygenController__ctor_m140B48E57F85FD3FDC5D901B8F506D2AF622672B (OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691* __this, const RuntimeMethod* method) 
{
	{
		// public float timer = 10.0f;
		__this->___timer_4 = (10.0f);
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
// System.Void PlayerController::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnMove_m26350714C4683F0DAE28FDBBB49112254AF9E2B1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveValue = value.Get<Vector2>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		__this->___moveValue_4 = L_1;
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter_mF2704872AEA62333341DCBEA2831320C385701D1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11CEB11AC5D73409AAE5F0010AC3B26ADD3FAB31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F7F456765296CE39F8C5F783545831D5E2B7F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85FD9A1D78A8C47059F31A97BE6A415D14C78CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58B7B51BBBAD2951E89E5A00E3C9960469A97FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE087ED75CFAE0825827246769DE2906C97C7E76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Oxygen"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral11CEB11AC5D73409AAE5F0010AC3B26ADD3FAB31, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// oxygenArea = true;
		__this->___oxygenArea_9 = (bool)1;
		// announcementsText.text = "Press F to get Oxygen";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___announcementsText_15;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral64F7F456765296CE39F8C5F783545831D5E2B7F2);
	}

IL_002e:
	{
		// if(other.gameObject.tag == "Issue1"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralB58B7B51BBBAD2951E89E5A00E3C9960469A97FC, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// issue1Area = true;
		__this->___issue1Area_10 = (bool)1;
	}

IL_004c:
	{
		// if(other.gameObject.tag == "Issue2"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralDE087ED75CFAE0825827246769DE2906C97C7E76, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// issue2Area = true;
		__this->___issue2Area_11 = (bool)1;
	}

IL_006a:
	{
		// if(other.gameObject.tag == "Door"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437, NULL);
		if (!L_16)
		{
			goto IL_0098;
		}
	}
	{
		// doorArea = true;
		__this->___doorArea_12 = (bool)1;
		// announcementsText.text = "Press F to go outside";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___announcementsText_15;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteral85FD9A1D78A8C47059F31A97BE6A415D14C78CC9);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerExit_m0A2DB7CCC3CDB222AAF6BCE476CCEEBFDF3FC136 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11CEB11AC5D73409AAE5F0010AC3B26ADD3FAB31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58B7B51BBBAD2951E89E5A00E3C9960469A97FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE087ED75CFAE0825827246769DE2906C97C7E76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Oxygen"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral11CEB11AC5D73409AAE5F0010AC3B26ADD3FAB31, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// oxygenArea = false;
		__this->___oxygenArea_9 = (bool)0;
		// announcementsText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___announcementsText_15;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_002e:
	{
		// if(other.gameObject.tag == "Issue1"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralB58B7B51BBBAD2951E89E5A00E3C9960469A97FC, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// issue1Area = false;
		__this->___issue1Area_10 = (bool)0;
	}

IL_004c:
	{
		// if(other.gameObject.tag == "Issue2"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		String_t* L_11;
		L_11 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralDE087ED75CFAE0825827246769DE2906C97C7E76, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// issue2Area = false;
		__this->___issue2Area_11 = (bool)0;
	}

IL_006a:
	{
		// if(other.gameObject.tag == "Door"){
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437, NULL);
		if (!L_16)
		{
			goto IL_0098;
		}
	}
	{
		// doorArea = false;
		__this->___doorArea_12 = (bool)0;
		// announcementsText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___announcementsText_15;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCB9A57E0FF8D789CC584C4CE92C1285B13A27CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFB78E925E11C59166E0EE5430A0545B36460C25);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// GetComponent<Rigidbody>().velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_1, NULL);
		// Vector3 forward = Camera.main.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		V_0 = L_4;
		// Vector3 right = Camera.main.transform.right;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_6, NULL);
		V_1 = L_7;
		// Vector3 downDir = new Vector3(0,-0.5f,0).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		V_6 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_2 = L_9;
		// Vector3 forwardDir = new Vector3(forward.x, 0, forward.z).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_11, (0.0f), L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_3 = L_15;
		// Vector3 rightDir = new Vector3(right.x, 0, right.z).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_17, (0.0f), L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_4 = L_21;
		// GetComponent<Rigidbody>().AddForce(downDir,ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22;
		L_22 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_22, L_23, 2, NULL);
		// if (Input.GetKey("w"))
		bool L_24;
		L_24 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		// GetComponent<Rigidbody>().AddForce(forwardDir * 350f * Time.deltaTime,
		//      ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25;
		L_25 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, (350.0f), NULL);
		float L_28;
		L_28 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_27, L_28, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_25, L_29, 2, NULL);
	}

IL_00c9:
	{
		// if (Input.GetKey("a"))
		bool L_30;
		L_30 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		// GetComponent<Rigidbody>().AddForce(rightDir * -250f * Time.deltaTime,
		//      ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31;
		L_31 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, (-250.0f), NULL);
		float L_34;
		L_34 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, L_34, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_31, L_35, 2, NULL);
	}

IL_00f7:
	{
		// if (Input.GetKey("s"))
		bool L_36;
		L_36 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		if (!L_36)
		{
			goto IL_0124;
		}
	}
	{
		// GetComponent<Rigidbody>().AddForce(forwardDir * -250f * Time.deltaTime,
		//      ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37;
		L_37 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_38, (-250.0f), NULL);
		float L_40;
		L_40 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_39, L_40, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_37, L_41, 2, NULL);
	}

IL_0124:
	{
		// if (Input.GetKey("d"))
		bool L_42;
		L_42 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (!L_42)
		{
			goto IL_0152;
		}
	}
	{
		// GetComponent<Rigidbody>().AddForce(rightDir * 250f * Time.deltaTime,
		//      ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43;
		L_43 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_44, (250.0f), NULL);
		float L_46;
		L_46 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_45, L_46, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_43, L_47, 2, NULL);
	}

IL_0152:
	{
		// if (Input.GetKey("f"))
		bool L_48;
		L_48 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
		if (!L_48)
		{
			goto IL_01be;
		}
	}
	{
		// if(doorArea){
		bool L_49 = __this->___doorArea_12;
		if (!L_49)
		{
			goto IL_0178;
		}
	}
	{
		// SceneManager.LoadScene("SceneOutside", LoadSceneMode.Additive);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(_stringLiteralFCB9A57E0FF8D789CC584C4CE92C1285B13A27CA, 1, NULL);
		// doorArea = false;
		__this->___doorArea_12 = (bool)0;
	}

IL_0178:
	{
		// if(oxygenArea){
		bool L_50 = __this->___oxygenArea_9;
		if (!L_50)
		{
			goto IL_01a0;
		}
	}
	{
		// oxygenText.text = "Oxygen: 100";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = __this->___oxygenText_13;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, _stringLiteralFFB78E925E11C59166E0EE5430A0545B36460C25);
		// oxygenController.timer = 10.0f;
		OxygenController_t1D8D12BF1A0E2C6099E6AAF95BA60803C020B691* L_52 = __this->___oxygenController_14;
		L_52->___timer_4 = (10.0f);
	}

IL_01a0:
	{
		// if(issue1Area){
		bool L_53 = __this->___issue1Area_10;
		if (!L_53)
		{
			goto IL_01af;
		}
	}
	{
		// if(issue1Fixer){
		bool L_54 = __this->___issue1Fixer_7;
	}

IL_01af:
	{
		// if(issue2Area){
		bool L_55 = __this->___issue2Area_11;
		if (!L_55)
		{
			goto IL_01be;
		}
	}
	{
		// if(issue2Fixer){
		bool L_56 = __this->___issue2Fixer_8;
	}

IL_01be:
	{
		// mouseMovement.x += Input.GetAxis("Mouse X")*350;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___mouseMovement_6);
		float* L_58 = (&L_57->___x_0);
		float* L_59 = L_58;
		float L_60 = *((float*)L_59);
		float L_61;
		L_61 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		*((float*)L_59) = (float)((float)il2cpp_codegen_add(L_60, ((float)il2cpp_codegen_multiply(L_61, (350.0f)))));
		// mouseMovement.y += Input.GetAxis("Mouse Y")*-175;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_62 = (&__this->___mouseMovement_6);
		float* L_63 = (&L_62->___y_1);
		float* L_64 = L_63;
		float L_65 = *((float*)L_64);
		float L_66;
		L_66 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		*((float*)L_64) = (float)((float)il2cpp_codegen_add(L_65, ((float)il2cpp_codegen_multiply(L_66, (-175.0f)))));
		// float y = Mathf.Clamp(mouseMovement.y*Time.deltaTime,-40,40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = (&__this->___mouseMovement_6);
		float L_68 = L_67->___y_1;
		float L_69;
		L_69 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_70;
		L_70 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_multiply(L_68, L_69)), (-40.0f), (40.0f), NULL);
		V_5 = L_70;
		// transform.localRotation = Quaternion.Euler(y, mouseMovement.x*Time.deltaTime,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_72 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (&__this->___mouseMovement_6);
		float L_74 = L_73->___x_0;
		float L_75;
		L_75 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_72, ((float)il2cpp_codegen_multiply(L_74, L_75)), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_71, L_76, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector3 Generic::get_enterance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Generic_get_enterance_mAE124316ED91CDECF35776E8A06E351613C2EABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 enterance {get; set;}
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CenteranceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Generic::set_enterance(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generic_set_enterance_m9840A719D265964A9D91F43CDA52FF3F695CEED4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 enterance {get; set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CenteranceU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Inventory Generic::get_inventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* Generic_get_inventory_mEF57DB6605F45A29A182C7CE0E47A67379883AF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Inventory inventory {get; set;}
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CinventoryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Generic::set_inventory(Inventory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generic_set_inventory_m54F6DE8B6FC2FC4A3DEB696298D0D34786D29A51 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Inventory inventory {get; set;}
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CinventoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CinventoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Inventory Generic::getInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* Generic_getInventory_m2EAA4066A3C40E433EE89499912BCEC0884E9723 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(inventory == null) {
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0;
		L_0 = Generic_get_inventory_mEF57DB6605F45A29A182C7CE0E47A67379883AF3_inline(NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// inventory = new Inventory();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_1 = (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574*)il2cpp_codegen_object_new(Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574_il2cpp_TypeInfo_var);
		Inventory__ctor_mEC4DABB7AD987F2E1734A9D27C46087E24DFECC0(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Generic_set_inventory_m54F6DE8B6FC2FC4A3DEB696298D0D34786D29A51_inline(L_1, NULL);
	}

IL_0011:
	{
		// return inventory;
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_2;
		L_2 = Generic_get_inventory_mEF57DB6605F45A29A182C7CE0E47A67379883AF3_inline(NULL);
		return L_2;
	}
}
// System.Void Generic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generic__cctor_mE9F2E8D2AF5486A31F69DCB444088E81E8328CFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int difficultyLevelSet = 0;
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2 = 0;
		// public static int oxygenLevel = 100;
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___oxygenLevel_3 = ((int32_t)100);
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
// System.Void CameraHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHandler_Start_m855E109E881288B5A18216C4783E076E2B20C9DA (CameraHandler_tB0FF41C1BCF50E836092F27F951A4CFDCB93F564* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// transform.localRotation = Quaternion.Euler(0f, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CameraHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHandler_Update_m6C0FD08089B5CA224DE6D2078D30731B347C2EED (CameraHandler_tB0FF41C1BCF50E836092F27F951A4CFDCB93F564* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x_mouse = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseSensitivity_4;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float y_mouse = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseSensitivity_4;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// x_rotation -= y_mouse;
		float L_6 = __this->___x_rotation_5;
		float L_7 = V_1;
		__this->___x_rotation_5 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// x_rotation = Mathf.Clamp(x_rotation, -90f, 90f);
		float L_8 = __this->___x_rotation_5;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___x_rotation_5 = L_9;
		// transform.localRotation = Quaternion.Euler(x_rotation, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___x_rotation_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_11, (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		// playerBody.Rotate(Vector3.up * x_mouse);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___playerBody_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void CameraHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHandler__ctor_mF7C22089FC81E4381E612B8554FA549D732E81FB (CameraHandler_tB0FF41C1BCF50E836092F27F951A4CFDCB93F564* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseSensitivity = 300f;
		__this->___mouseSensitivity_4 = (300.0f);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mEC4DABB7AD987F2E1734A9D27C46087E24DFECC0 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m73DF93F0D7C5E45A33001917D457D8917F9C0A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03828A345D1ECB77E451B6B25C0EEE3A89A1BBFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0598190E4CAF8BFE9CC29FA8911B602F97DF30C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EB7478718871DE20A9AF36AEC9D3DF8A6AA7785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral142BDE0F4FA783688F0B1084963FBECCF324C413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3C3054D4C08D66041CD9784B24DC3E2A88E358);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3545DA5D9727E81D86C83B287766AF771C5C7D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D1D0F387FBB99221E02121F5F45EE2D25F61B3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D0346AB24AAE4B96F7AD6C7718D58D73BC67733);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A61073C8C54F9293DA87CE648EFABCDE865DE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E16C39088ABDDFA3AA555B51E0BE9EFA901A344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84E55D25555E55D7B75510DC96A052D9A837BC88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D738C566E2806926E6640415EBAAF0839AD52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B0845BE9A2125CC691C778E0A14445B46E19BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C785F2CB339BEC4D27817F74AFCB4B9E996C233);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA16AE46FE6216F390B6D41858C59B929B8EC68B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEC226747D22C6A146802B06B78F0867FF695AB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Inventory() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// allItems = new List<InventoryItem>();
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_0 = (List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52*)il2cpp_codegen_object_new(List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52_il2cpp_TypeInfo_var);
		List_1__ctor_m73DF93F0D7C5E45A33001917D457D8917F9C0A68(L_0, List_1__ctor_m73DF93F0D7C5E45A33001917D457D8917F9C0A68_RuntimeMethod_var);
		__this->___allItems_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allItems_0), (void*)L_0);
		// allItems.Add(createItem("unknown", "Unknown Item", "If you see this item, then something goes wrong."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_1 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_2;
		L_2 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, _stringLiteral5D0346AB24AAE4B96F7AD6C7718D58D73BC67733, _stringLiteral9C785F2CB339BEC4D27817F74AFCB4B9E996C233, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_1, L_2, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// allItems.Add(createItem("gold", "Gold", "This gold is a material to be used for something."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_3 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_4;
		L_4 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, _stringLiteral6853B00927EB8BAE6FD25AE411383457D8EC0D05, _stringLiteralCEC226747D22C6A146802B06B78F0867FF695AB1, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_3, L_4, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// allItems.Add(createItem("silver", "Silver", "This silver is a material to be used for something."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_5 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_6;
		L_6 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteral9B0845BE9A2125CC691C778E0A14445B46E19BFE, _stringLiteral0598190E4CAF8BFE9CC29FA8911B602F97DF30C1, _stringLiteral03828A345D1ECB77E451B6B25C0EEE3A89A1BBFB, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_5, L_6, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// allItems.Add(createItem("stone", "Stone", "This stone is a material to be used for something."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_7 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_8;
		L_8 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9, _stringLiteral142BDE0F4FA783688F0B1084963FBECCF324C413, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_7, L_8, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// allItems.Add(createItem("axe", "Axe Pickup", "The axe is used for mining."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_9 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_10;
		L_10 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteral67A61073C8C54F9293DA87CE648EFABCDE865DE9, _stringLiteral98D738C566E2806926E6640415EBAAF0839AD52A, _stringLiteral0EB7478718871DE20A9AF36AEC9D3DF8A6AA7785, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_9, L_10, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// allItems.Add(createItem("shovel", "Shovel", "The shovel is used for looking for rare materials."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_11 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_12;
		L_12 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteral4D1D0F387FBB99221E02121F5F45EE2D25F61B3B, _stringLiteral1B3C3054D4C08D66041CD9784B24DC3E2A88E358, _stringLiteral3545DA5D9727E81D86C83B287766AF771C5C7D69, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_11, L_12, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// allItems.Add(createItem("tourch", "Tourch", "This is used to make your area brighter."));
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_13 = __this->___allItems_0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_14;
		L_14 = Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0(__this, _stringLiteral84E55D25555E55D7B75510DC96A052D9A837BC88, _stringLiteralAA16AE46FE6216F390B6D41858C59B929B8EC68B, _stringLiteral6E16C39088ABDDFA3AA555B51E0BE9EFA901A344, NULL);
		List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_inline(L_13, L_14, List_1_Add_mC81F4B743DACA98CD862BB7BAA8145B0753F7763_RuntimeMethod_var);
		// }
		return;
	}
}
// InventoryItem Inventory::createItem(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItem_t8517153591805278C8567DD20BC40055682E5334* Inventory_createItem_m5BA5480ACC7990C06EF51E47069D100052219AC0 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryItem_t8517153591805278C8567DD20BC40055682E5334_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InventoryItem item = new InventoryItem();
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_0 = (InventoryItem_t8517153591805278C8567DD20BC40055682E5334*)il2cpp_codegen_object_new(InventoryItem_t8517153591805278C8567DD20BC40055682E5334_il2cpp_TypeInfo_var);
		InventoryItem__ctor_m775807C9917B41C904F5B88DD55F6771AC7A8AB5(L_0, NULL);
		// item.setId(id);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_1 = L_0;
		String_t* L_2 = ___id0;
		InventoryItem_setId_m8949B1D18CCBD7388D908F5E10D07B8D1B6AFDCE_inline(L_1, L_2, NULL);
		// item.setName(name);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_3 = L_1;
		String_t* L_4 = ___name1;
		InventoryItem_setName_m82EDCD2588D7B7F36427ADAA6FBC72107459E15A_inline(L_3, L_4, NULL);
		// item.setDescription(description);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_5 = L_3;
		String_t* L_6 = ___description2;
		InventoryItem_setDescription_m57096DB8B836EDFE54D38D3E4F39D11094FB0882_inline(L_5, L_6, NULL);
		// return item;
		return L_5;
	}
}
// System.Void Inventory::addItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_addItem_m7BD00BB4C2A7E2B122939134168F26C6140ED0F1 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, int32_t ___amount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_0 = NULL;
	{
		// InventoryItem item = getItem(id);
		String_t* L_0 = ___id0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_1;
		L_1 = Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E(__this, L_0, NULL);
		V_0 = L_1;
		// if(item == null) {
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_2 = V_0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.LogError("Couldn't find " + id + " on the item list.");
		String_t* L_3 = ___id0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D, L_3, _stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// item.add(amount);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_5 = V_0;
		int32_t L_6 = ___amount1;
		InventoryItem_add_m58B4741FD1BE4D0A49CCBC2F69DAD19A8C4FF170(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Inventory::removeItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_removeItem_mE470DC79571B7B0FFF760BF0426D360546F7FBE1 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, int32_t ___amount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_0 = NULL;
	{
		// InventoryItem item = getItem(id);
		String_t* L_0 = ___id0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_1;
		L_1 = Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E(__this, L_0, NULL);
		V_0 = L_1;
		// if(item == null) {
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_2 = V_0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.LogError("Couldn't find " + id + " on the item list.");
		String_t* L_3 = ___id0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D, L_3, _stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// item.remove(amount);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_5 = V_0;
		int32_t L_6 = ___amount1;
		InventoryItem_remove_mEBB84E8594477C4A83AD255C8DD0DC6CEC4BE7A2(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Inventory::setItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_setItem_mA8EAEC0F05CFB6BA967203465B2D1BCE120CB1A9 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, int32_t ___amount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_0 = NULL;
	{
		// InventoryItem item = getItem(id);
		String_t* L_0 = ___id0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_1;
		L_1 = Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E(__this, L_0, NULL);
		V_0 = L_1;
		// if(item == null) {
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_2 = V_0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.LogError("Couldn't find " + id + " on the item list.");
		String_t* L_3 = ___id0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralCE76E2B6CFC02BFDBDB87428AD3511E4463CA31D, L_3, _stringLiteral0B4F2FBEEBA73F27EC464C94CEC9B2265422BFAF, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// item.setAmount(amount);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_5 = V_0;
		int32_t L_6 = ___amount1;
		InventoryItem_setAmount_m7FC2E5DF79A02F80C401667F97FAE358DD673B67_inline(L_5, L_6, NULL);
		// }
		return;
	}
}
// InventoryItem Inventory::getItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InventoryItem_t8517153591805278C8567DD20BC40055682E5334* Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m17DAB8A7C2C426869D4B1A838DB79864D172DDE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m81D588A236F15D109E1E3FC9EDBB595D7B74AE03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m59EC1DC7153CEF2F566D158747378EC0DF54C7A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m96FC81A76DED86C50DA6D78679FE5EF693DB2CE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034 V_0;
	memset((&V_0), 0, sizeof(V_0));
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_1 = NULL;
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_2 = NULL;
	{
		// foreach(InventoryItem item in allItems) {
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_0 = __this->___allItems_0;
		Enumerator_tCF1F65E5658DF4DAC6D7C21FF537D4610B606034 L_1;
		L_1 = List_1_GetEnumerator_m96FC81A76DED86C50DA6D78679FE5EF693DB2CE7(L_0, List_1_GetEnumerator_m96FC81A76DED86C50DA6D78679FE5EF693DB2CE7_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m17DAB8A7C2C426869D4B1A838DB79864D172DDE4((&V_0), Enumerator_Dispose_m17DAB8A7C2C426869D4B1A838DB79864D172DDE4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_000e_1:
			{
				// foreach(InventoryItem item in allItems) {
				InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_2;
				L_2 = Enumerator_get_Current_m59EC1DC7153CEF2F566D158747378EC0DF54C7A6_inline((&V_0), Enumerator_get_Current_m59EC1DC7153CEF2F566D158747378EC0DF54C7A6_RuntimeMethod_var);
				V_1 = L_2;
				// if(item.getId() == id) {
				InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_3 = V_1;
				String_t* L_4;
				L_4 = InventoryItem_getId_m29F6E7DED21BF363C04D3BD525C0EEE0C0C5A63C_inline(L_3, NULL);
				String_t* L_5 = ___id0;
				bool L_6;
				L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0028_1;
				}
			}
			{
				// return item;
				InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_7 = V_1;
				V_2 = L_7;
				goto IL_0043;
			}

IL_0028_1:
			{
				// foreach(InventoryItem item in allItems) {
				bool L_8;
				L_8 = Enumerator_MoveNext_m81D588A236F15D109E1E3FC9EDBB595D7B74AE03((&V_0), Enumerator_MoveNext_m81D588A236F15D109E1E3FC9EDBB595D7B74AE03_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return null;
		return (InventoryItem_t8517153591805278C8567DD20BC40055682E5334*)NULL;
	}

IL_0043:
	{
		// }
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_9 = V_2;
		return L_9;
	}
}
// System.Boolean Inventory::hasItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inventory_hasItem_mF970374CC908221EF0A5FDE1AD32C4E9CE0A0750 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, int32_t ___amount1, const RuntimeMethod* method) 
{
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_0 = NULL;
	{
		// InventoryItem item = getItem(id);
		String_t* L_0 = ___id0;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_1;
		L_1 = Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E(__this, L_0, NULL);
		V_0 = L_1;
		// return (item != null && item.getAmount() >= amount);
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_3 = V_0;
		int32_t L_4;
		L_4 = InventoryItem_getAmount_m713FF72CA2554B0B05DF2B155A6282406FD759A8_inline(L_3, NULL);
		int32_t L_5 = ___amount1;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Inventory::hasItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inventory_hasItem_m802EFD5600F5C2EF63F5D75DC13D3C820517F995 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// return hasItem(id, 0);
		String_t* L_0 = ___id0;
		bool L_1;
		L_1 = Inventory_hasItem_mF970374CC908221EF0A5FDE1AD32C4E9CE0A0750(__this, L_0, 0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<InventoryItem> Inventory::getItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* Inventory_getItems_m8FD207CD608A397D2588DA3086CB75DEC657E045 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	{
		// return allItems;
		List_1_tBF49C1528E192065C8FE76A88D01EE189D61BA52* L_0 = __this->___allItems_0;
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
// System.Void InventoryItem::add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_add_m58B4741FD1BE4D0A49CCBC2F69DAD19A8C4FF170 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) 
{
	{
		// amount += _amount;
		int32_t L_0 = __this->___amount_3;
		int32_t L_1 = ____amount0;
		__this->___amount_3 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void InventoryItem::remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_remove_mEBB84E8594477C4A83AD255C8DD0DC6CEC4BE7A2 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) 
{
	{
		// amount -= _amount;
		int32_t L_0 = __this->___amount_3;
		int32_t L_1 = ____amount0;
		__this->___amount_3 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void InventoryItem::setAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_setAmount_m7FC2E5DF79A02F80C401667F97FAE358DD673B67 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) 
{
	{
		// amount = _amount;
		int32_t L_0 = ____amount0;
		__this->___amount_3 = L_0;
		// }
		return;
	}
}
// System.Int32 InventoryItem::getAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InventoryItem_getAmount_m713FF72CA2554B0B05DF2B155A6282406FD759A8 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return amount;
		int32_t L_0 = __this->___amount_3;
		return L_0;
	}
}
// System.Void InventoryItem::setId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_setId_m8949B1D18CCBD7388D908F5E10D07B8D1B6AFDCE (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____id0, const RuntimeMethod* method) 
{
	{
		// id = _id;
		String_t* L_0 = ____id0;
		__this->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)L_0);
		// }
		return;
	}
}
// System.String InventoryItem::getId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InventoryItem_getId_m29F6E7DED21BF363C04D3BD525C0EEE0C0C5A63C (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		String_t* L_0 = __this->___id_0;
		return L_0;
	}
}
// System.Void InventoryItem::setName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_setName_m82EDCD2588D7B7F36427ADAA6FBC72107459E15A (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____name0, const RuntimeMethod* method) 
{
	{
		// name = _name;
		String_t* L_0 = ____name0;
		__this->___name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_0);
		// }
		return;
	}
}
// System.String InventoryItem::getName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InventoryItem_getName_mEEDD267A4541BCFD35EF1FF0953D206A684291D4 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return name;
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
// System.Void InventoryItem::setDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem_setDescription_m57096DB8B836EDFE54D38D3E4F39D11094FB0882 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____desc0, const RuntimeMethod* method) 
{
	{
		// description = _desc;
		String_t* L_0 = ____desc0;
		__this->___description_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_2), (void*)L_0);
		// }
		return;
	}
}
// System.String InventoryItem::getDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InventoryItem_getDescription_m02031125CBB7746CA36F99DE711E0204E5F293CD (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return description;
		String_t* L_0 = __this->___description_2;
		return L_0;
	}
}
// System.Void InventoryItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem__ctor_m775807C9917B41C904F5B88DD55F6771AC7A8AB5 (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string id = "";
		__this->___id_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string name = "";
		__this->___name_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string description = "";
		__this->___description_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void GoldMining::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldMining_Start_mA956CE6E6092441D7BA73EB448A7A4686F05B213 (GoldMining_t941EB3B932C37E20614BCDDBF9B46002A983BC84* __this, const RuntimeMethod* method) 
{
	{
		// materialName = _materialName;
		String_t* L_0 = __this->____materialName_19;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___materialName_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___materialName_8), (void*)L_0);
		// respawnTime = _respawnTime;
		float L_1 = __this->____respawnTime_20;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___respawnTime_9 = L_1;
		// easyPickupTime = _easyPickupTime;
		float L_2 = __this->____easyPickupTime_21;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___easyPickupTime_10 = L_2;
		// mediumPickupTime = _mediumPickupTime;
		float L_3 = __this->____mediumPickupTime_22;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___mediumPickupTime_11 = L_3;
		// hardPickupTime = _hardPickupTime;
		float L_4 = __this->____hardPickupTime_23;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___hardPickupTime_12 = L_4;
		// minDropEasy = _minDropEasy;
		int32_t L_5 = __this->____minDropEasy_24;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___minDropEasy_13 = L_5;
		// maxDropMedium = _maxDropMedium;
		int32_t L_6 = __this->____maxDropMedium_27;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___maxDropMedium_16 = L_6;
		// minDropMedium = _minDropMedium;
		int32_t L_7 = __this->____minDropMedium_26;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___minDropMedium_15 = L_7;
		// maxDropMedium = _maxDropMedium;
		int32_t L_8 = __this->____maxDropMedium_27;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___maxDropMedium_16 = L_8;
		// minDropHard = _minDropHard;
		int32_t L_9 = __this->____minDropHard_28;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___minDropHard_17 = L_9;
		// maxDropHard = _maxDropHard;
		int32_t L_10 = __this->____maxDropHard_29;
		((Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5*)__this)->___maxDropHard_18 = L_10;
		// }
		return;
	}
}
// System.Void GoldMining::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldMining__ctor_m3F7AC9F61C1FECD74F347519C27DC9B55D04259A (GoldMining_t941EB3B932C37E20614BCDDBF9B46002A983BC84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string _materialName = "gold";
		__this->____materialName_19 = _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____materialName_19), (void*)_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		// public float _respawnTime = 10.0f;
		__this->____respawnTime_20 = (10.0f);
		// public float _easyPickupTime = 3.0f;
		__this->____easyPickupTime_21 = (3.0f);
		// public float _mediumPickupTime = 6.0f;
		__this->____mediumPickupTime_22 = (6.0f);
		// public float _hardPickupTime = 10.0f;
		__this->____hardPickupTime_23 = (10.0f);
		// public int _minDropEasy = 3;
		__this->____minDropEasy_24 = 3;
		// public int _maxDropEasy = 6;
		__this->____maxDropEasy_25 = 6;
		// public int _minDropMedium = 2;
		__this->____minDropMedium_26 = 2;
		// public int _maxDropMedium = 4;
		__this->____maxDropMedium_27 = 4;
		// public int _minDropHard = 1;
		__this->____minDropHard_28 = 1;
		// public int _maxDropHard = 2;
		__this->____maxDropHard_29 = 2;
		Mining__ctor_m1FEA5BCE8A85457022283B6E6148E415720643C5(__this, NULL);
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
// System.Void Mining::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mining_Start_mAEDF6B4EF7796C0391B3B6BB7F1853625B43EDCD (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D69B1F6EC649DA41A75FB1ACC5E2BDCFA81A73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("mining");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC8D69B1F6EC649DA41A75FB1ACC5E2BDCFA81A73, NULL);
		// }
		return;
	}
}
// System.Void Mining::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mining_Update_mA0FE582A9136CA71C89AC7956DB3E6D3D6466782 (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) 
{
	{
		// if(isInArea && hasAxe && !isMining && Input.GetKeyUp(KeyCode.F)) {
		bool L_0 = __this->___isInArea_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->___hasAxe_6;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		bool L_2 = __this->___isMining_7;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)102), NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// StartCoroutine(pickup());
		RuntimeObject* L_4;
		L_4 = Mining_pickup_mA4A40141D4BD43F67FAEBE78CE76C63FB24D84C8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Mining::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mining_OnTriggerEnter_m86AD999A073763F234C3AB43AFDA2A57A922CE27 (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A21E07717BDD98B3090E78E3D89442825961B87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A61073C8C54F9293DA87CE648EFABCDE865DE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EFB2BA0EC9A5E0902755D7B9D9FCD37AA07A8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD62374EBB356019EEF418D566653488910FABAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItem_t8517153591805278C8567DD20BC40055682E5334* V_0 = NULL;
	{
		// isInArea = true;
		__this->___isInArea_5 = (bool)1;
		// hasAxe = Generic.getInventory().hasItem("axe", 1);
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0;
		L_0 = Generic_getInventory_m2EAA4066A3C40E433EE89499912BCEC0884E9723(NULL);
		bool L_1;
		L_1 = Inventory_hasItem_mF970374CC908221EF0A5FDE1AD32C4E9CE0A0750(L_0, _stringLiteral67A61073C8C54F9293DA87CE648EFABCDE865DE9, 1, NULL);
		__this->___hasAxe_6 = L_1;
		// InventoryItem item = Generic.getInventory().getItem(materialName);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_2;
		L_2 = Generic_getInventory_m2EAA4066A3C40E433EE89499912BCEC0884E9723(NULL);
		String_t* L_3 = __this->___materialName_8;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_4;
		L_4 = Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E(L_2, L_3, NULL);
		V_0 = L_4;
		// if(hasAxe)
		bool L_5 = __this->___hasAxe_6;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// actionText.text = "PRESS [F] TO MINE " + item.getName().ToUpper() + ".";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___actionText_4;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_7 = V_0;
		String_t* L_8;
		L_8 = InventoryItem_getName_mEEDD267A4541BCFD35EF1FF0953D206A684291D4_inline(L_7, NULL);
		String_t* L_9;
		L_9 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralAD62374EBB356019EEF418D566653488910FABAD, L_9, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		goto IL_0082;
	}

IL_005d:
	{
		// actionText.text = "YOU NEED A MINING AXE TO MINE THE " + item.getName().ToUpper() + " MATERIAL.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___actionText_4;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_12 = V_0;
		String_t* L_13;
		L_13 = InventoryItem_getName_mEEDD267A4541BCFD35EF1FF0953D206A684291D4_inline(L_12, NULL);
		String_t* L_14;
		L_14 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral87EFB2BA0EC9A5E0902755D7B9D9FCD37AA07A8B, L_14, _stringLiteral5A21E07717BDD98B3090E78E3D89442825961B87, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_15);
	}

IL_0082:
	{
		// actionText.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___actionText_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Mining::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mining_OnTriggerExit_m3B56A3AEF6E79A9859523691677DF86D61ABFECA (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!other.CompareTag("Player")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// isInArea = false;
		__this->___isInArea_5 = (bool)0;
		// actionText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___actionText_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Mining::pickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mining_pickup_mA4A40141D4BD43F67FAEBE78CE76C63FB24D84C8 (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* L_0 = (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027*)il2cpp_codegen_object_new(U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027_il2cpp_TypeInfo_var);
		U3CpickupU3Ed__19__ctor_mC5CBCD5CC3975288CED4852A13C9C9BE726A76F5(L_0, 0, NULL);
		U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Mining::reward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mining_reward_m41DB865C4AB2CC53D2BA13C30D03478292425F2E (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* L_0 = (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE*)il2cpp_codegen_object_new(U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE_il2cpp_TypeInfo_var);
		U3CrewardU3Ed__20__ctor_mFBBBD48078E3ED4394C5B8489B7378B90ECA79E7(L_0, 0, NULL);
		U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Mining::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mining__ctor_m1FEA5BCE8A85457022283B6E6148E415720643C5 (Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string materialName = "unknown";
		__this->___materialName_8 = _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialName_8), (void*)_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		// protected float respawnTime = 60.0f;
		__this->___respawnTime_9 = (60.0f);
		// protected float easyPickupTime = 1.0f;
		__this->___easyPickupTime_10 = (1.0f);
		// protected float mediumPickupTime = 2.0f;
		__this->___mediumPickupTime_11 = (2.0f);
		// protected float hardPickupTime = 4.0f;
		__this->___hardPickupTime_12 = (4.0f);
		// protected int minDropEasy = 3;
		__this->___minDropEasy_13 = 3;
		// protected int maxDropEasy = 6;
		__this->___maxDropEasy_14 = 6;
		// protected int minDropMedium = 2;
		__this->___minDropMedium_15 = 2;
		// protected int maxDropMedium = 4;
		__this->___maxDropMedium_16 = 4;
		// protected int minDropHard = 1;
		__this->___minDropHard_17 = 1;
		// protected int maxDropHard = 2;
		__this->___maxDropHard_18 = 2;
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
// System.Void Mining/<pickup>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpickupU3Ed__19__ctor_mC5CBCD5CC3975288CED4852A13C9C9BE726A76F5 (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Mining/<pickup>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpickupU3Ed__19_System_IDisposable_Dispose_mBBC9A18A352919A3A6791AAC1B0C5CE9CFE7807B (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Mining/<pickup>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpickupU3Ed__19_MoveNext_m6CAF0D2A8C886A07CEF1C603A9FEFEE13B35393D (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A4950B0646CCFBBBFA426E5A70BB92A01027BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_0094;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_0127;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isMining = true;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_3 = V_1;
		L_3->___isMining_7 = (bool)1;
		// actionText.text = "YOU ARE MINING...";
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_4 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___actionText_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral37A4950B0646CCFBBBFA426E5A70BB92A01027BC);
		// if(Generic.difficultyLevelSet == 0) {
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2;
		if (L_6)
		{
			goto IL_0072;
		}
	}
	{
		// yield return new WaitForSeconds(easyPickupTime);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_7 = V_1;
		float L_8 = L_7->___easyPickupTime_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00c6;
	}

IL_0072:
	{
		// else if(Generic.difficultyLevelSet == 1) {
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}
	{
		// yield return new WaitForSeconds(mediumPickupTime);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_11 = V_1;
		float L_12 = L_11->___mediumPickupTime_11;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, L_12, NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0094:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00c6;
	}

IL_009d:
	{
		// else if(Generic.difficultyLevelSet == 2) {
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00c6;
		}
	}
	{
		// yield return new WaitForSeconds(hardPickupTime);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_15 = V_1;
		float L_16 = L_15->___hardPickupTime_12;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00bf:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c6:
	{
		// if(isInArea) {
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_18 = V_1;
		bool L_19 = L_18->___isInArea_5;
		if (!L_19)
		{
			goto IL_015d;
		}
	}
	{
		// StartCoroutine(reward());
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_20 = V_1;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_21 = V_1;
		RuntimeObject* L_22;
		L_22 = Mining_reward_m41DB865C4AB2CC53D2BA13C30D03478292425F2E(L_21, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_20, L_22, NULL);
		// gameObject.transform.parent.gameObject.transform.Find("Model").gameObject.SetActive(false);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_24 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_29, _stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// yield return new WaitForSeconds(respawnTime);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_32 = V_1;
		float L_33 = L_32->___respawnTime_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, L_33, NULL);
		__this->___U3CU3E2__current_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0127:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.transform.parent.gameObject.transform.Find("Model").gameObject.SetActive(true);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_35 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_40, _stringLiteralF4B9DD325C5EA474FC144DF1A8EB1D0D574F2319, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
	}

IL_015d:
	{
		// isMining = false;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_43 = V_1;
		L_43->___isMining_7 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Mining/<pickup>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpickupU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9EEDB10E4739ADC4622CEC4C0FC0C2D8317CFCB9 (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Mining/<pickup>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpickupU3Ed__19_System_Collections_IEnumerator_Reset_m8A2FDC99AB83EDE37452C257363A07852FAF0577 (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpickupU3Ed__19_System_Collections_IEnumerator_Reset_m8A2FDC99AB83EDE37452C257363A07852FAF0577_RuntimeMethod_var)));
	}
}
// System.Object Mining/<pickup>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpickupU3Ed__19_System_Collections_IEnumerator_get_Current_mDF305A99A4B6156DD6337C40E4D96A8F9E3CDDC5 (U3CpickupU3Ed__19_t241D400AF3469F85BED3AB97AC8B6FAC37364027* __this, const RuntimeMethod* method) 
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
// System.Void Mining/<reward>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrewardU3Ed__20__ctor_mFBBBD48078E3ED4394C5B8489B7378B90ECA79E7 (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Mining/<reward>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrewardU3Ed__20_System_IDisposable_Dispose_m35B0517AD9B38D6B357DB3CEC118B838DD2DA7AD (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Mining/<reward>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CrewardU3Ed__20_MoveNext_mF0608A344E9DA89177865F58DC2FC62CA636B9C0 (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761E4A660B7B0BE233BC0D06B9EAF4710219BB47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ff;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int amount = 1;
		V_2 = 1;
		// if(Generic.difficultyLevelSet == 0)
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// amount = Random.Range(minDropEasy, maxDropEasy);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_5 = V_1;
		int32_t L_6 = L_5->___minDropEasy_13;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_7 = V_1;
		int32_t L_8 = L_7->___maxDropEasy_14;
		int32_t L_9;
		L_9 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_6, L_8, NULL);
		V_2 = L_9;
		goto IL_0074;
	}

IL_003e:
	{
		// else if(Generic.difficultyLevelSet == 1)
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_005a;
		}
	}
	{
		// amount = Random.Range(minDropMedium, maxDropMedium);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_11 = V_1;
		int32_t L_12 = L_11->___minDropMedium_15;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_13 = V_1;
		int32_t L_14 = L_13->___maxDropMedium_16;
		int32_t L_15;
		L_15 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_12, L_14, NULL);
		V_2 = L_15;
		goto IL_0074;
	}

IL_005a:
	{
		// else if(Generic.difficultyLevelSet == 2)
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		int32_t L_16 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___difficultyLevelSet_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0074;
		}
	}
	{
		// amount = Random.Range(minDropHard, maxDropHard);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_17 = V_1;
		int32_t L_18 = L_17->___minDropHard_17;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_19 = V_1;
		int32_t L_20 = L_19->___maxDropHard_18;
		int32_t L_21;
		L_21 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_18, L_20, NULL);
		V_2 = L_21;
	}

IL_0074:
	{
		// Generic.getInventory().addItem(materialName, amount);
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_22;
		L_22 = Generic_getInventory_m2EAA4066A3C40E433EE89499912BCEC0884E9723(NULL);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_23 = V_1;
		String_t* L_24 = L_23->___materialName_8;
		int32_t L_25 = V_2;
		Inventory_addItem_m7BD00BB4C2A7E2B122939134168F26C6140ED0F1(L_22, L_24, L_25, NULL);
		// string txt = "YOU MINED " + amount + " " + Generic.getInventory().getItem(materialName).getName().ToUpper() + ".";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		ArrayElementTypeCheck (L_27, _stringLiteral761E4A660B7B0BE233BC0D06B9EAF4710219BB47);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral761E4A660B7B0BE233BC0D06B9EAF4710219BB47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
		ArrayElementTypeCheck (L_30, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_32;
		L_32 = Generic_getInventory_m2EAA4066A3C40E433EE89499912BCEC0884E9723(NULL);
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_33 = V_1;
		String_t* L_34 = L_33->___materialName_8;
		InventoryItem_t8517153591805278C8567DD20BC40055682E5334* L_35;
		L_35 = Inventory_getItem_mCCF5BB0452750C1FF00561BD757531DCE37F156E(L_32, L_34, NULL);
		String_t* L_36;
		L_36 = InventoryItem_getName_mEEDD267A4541BCFD35EF1FF0953D206A684291D4_inline(L_35, NULL);
		String_t* L_37;
		L_37 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_36, NULL);
		ArrayElementTypeCheck (L_31, L_37);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_31;
		ArrayElementTypeCheck (L_38, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		String_t* L_39;
		L_39 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_38, NULL);
		__this->___U3CtxtU3E5__2_3 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtxtU3E5__2_3), (void*)L_39);
		// actionText.text = txt;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_40 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = L_40->___actionText_4;
		String_t* L_42 = __this->___U3CtxtU3E5__2_3;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_42);
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_43 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_43, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ff:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("test");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, NULL);
		// if(actionText.text == txt) {
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_44 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = L_44->___actionText_4;
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_45);
		String_t* L_47 = __this->___U3CtxtU3E5__2_3;
		bool L_48;
		L_48 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_0144;
		}
	}
	{
		// actionText.text = "";
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_49 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = L_49->___actionText_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// actionText.enabled = false;
		Mining_t8BE482547EE4F5A4559BA9E7D3E771B8F323CAC5* L_51 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_52 = L_51->___actionText_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_52, (bool)0, NULL);
	}

IL_0144:
	{
		// }
		return (bool)0;
	}
}
// System.Object Mining/<reward>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CrewardU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m91A28A1F92D5B66BBADA0F850CB5AEC3BD693EF1 (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Mining/<reward>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CrewardU3Ed__20_System_Collections_IEnumerator_Reset_m03B6FBCD442248D3F941B2902709891AF24E566C (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CrewardU3Ed__20_System_Collections_IEnumerator_Reset_m03B6FBCD442248D3F941B2902709891AF24E566C_RuntimeMethod_var)));
	}
}
// System.Object Mining/<reward>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CrewardU3Ed__20_System_Collections_IEnumerator_get_Current_m6F4F9254BC893AAF2C3FA92D36A66742468B628C (U3CrewardU3Ed__20_tAE80E6FED9F0187E45180AAACD616120155303AE* __this, const RuntimeMethod* method) 
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_m83FD44DCA324CE3D05A71FD2E2991FCD743F003A (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m5BB6CE35AF68EE00CFEB4BA5EBA17E10667551D3 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___groundCheck_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___groundDistance_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___groundMask_11;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_3, NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17(L_1, L_2, L_4, NULL);
		__this->___isGrounded_13 = L_5;
		// if(isGrounded && velocity.y < 0) {
		bool L_6 = __this->___isGrounded_13;
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___velocity_12);
		float L_8 = L_7->___y_3;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// velocity.y = -2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___velocity_12);
		L_9->___y_3 = (-2.0f);
		// currentSpeed = speed;
		float L_10 = __this->___speed_5;
		__this->___currentSpeed_8 = L_10;
	}

IL_005d:
	{
		// float x = Input.GetAxis("Horizontal");
		float L_11;
		L_11 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_11;
		// float z = Input.GetAxis("Vertical");
		float L_12;
		L_12 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_12;
		// if(Input.GetButtonDown("Jump") && isGrounded) {
		bool L_13;
		L_13 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_13)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_14 = __this->___isGrounded_13;
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		// velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___velocity_12);
		float L_16 = __this->___jumpHeight_7;
		float L_17 = __this->___gravity_6;
		float L_18;
		L_18 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, (-2.0f))), L_17)));
		L_15->___y_3 = L_18;
		// currentSpeed = (float)(speed * 0.7);
		float L_19 = __this->___speed_5;
		__this->___currentSpeed_8 = ((float)((double)il2cpp_codegen_multiply(((double)L_19), (0.69999999999999996))));
	}

IL_00c2:
	{
		// Vector3 move = transform.right * x + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_20, NULL);
		float L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_24, NULL);
		float L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_27, NULL);
		V_2 = L_28;
		// controller.Move(move * currentSpeed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_29 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		float L_31 = __this->___currentSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_30, L_31, NULL);
		float L_33;
		L_33 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		int32_t L_35;
		L_35 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_29, L_34, NULL);
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___velocity_12);
		float* L_37 = (&L_36->___y_3);
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		float L_40 = __this->___gravity_6;
		float L_41;
		L_41 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_38) = (float)((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_multiply(L_40, L_41))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_42 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___velocity_12;
		float L_44;
		L_44 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_43, L_44, NULL);
		int32_t L_46;
		L_46 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_42, L_45, NULL);
		// }
		return;
	}
}
// System.Boolean PlayerMovement::isInAir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_isInAir_mB86A9E5E404FAC4B92A6805BE0BC82B03778F0A4 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// return !isGrounded;
		bool L_0 = __this->___isGrounded_13;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 12f;
		__this->___speed_5 = (12.0f);
		// public float gravity = -19.62f;
		__this->___gravity_6 = (-19.6200008f);
		// public float jumpHeight = 3f;
		__this->___jumpHeight_7 = (3.0f);
		// public float currentSpeed = 12f;
		__this->___currentSpeed_8 = (12.0f);
		// public float groundDistance = 0.1f;
		__this->___groundDistance_10 = (0.100000001f);
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
// System.Void SceneTeleportation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTeleportation_Start_m730725BBEE0307E7AB68D5A505AEF00F2519DBFB (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneTeleportation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTeleportation_Update_mA4BF8E3B6E546E058FF958A8410B9D54B1B6DFD5 (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isOnShipPortal && Input.GetKeyUp(KeyCode.E)) {
		bool L_0 = __this->___isOnShipPortal_7;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)101), NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// if(isOnTheOutside) {
		bool L_2 = __this->___isOnTheOutside_5;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// Generic.enterance = GameObject.FindGameObjectWithTag("Player").transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Generic_set_enterance_m9840A719D265964A9D91F43CDA52FF3F695CEED4_inline(L_5, NULL);
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		return;
	}

IL_003d:
	{
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// if(Generic.enterance == null) {
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Generic_get_enterance_mAE124316ED91CDECF35776E8A06E351613C2EABB_inline(NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Boolean SceneTeleportation::makeGenericChecks(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTeleportation_makeGenericChecks_m48FF350453D9027F1A64A99093D32A2770649846 (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DE56C7ACE6A3DF9498D20F3E5CC06B541C64D1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E6524529295569593B47E4F1F36EA05D698C84B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!other.CompareTag("Player")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if(teleportationId == 0) {
		int32_t L_2 = __this->___teleportationId_4;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("You haven't entered a sufficient teleportation ID, therefore, this action was not successful!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral6E6524529295569593B47E4F1F36EA05D698C84B, NULL);
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// if(actionText == null) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___actionText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.LogError("You haven't defined the necessary UI Text child to get this working!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3DE56C7ACE6A3DF9498D20F3E5CC06B541C64D1E, NULL);
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void SceneTeleportation::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTeleportation_OnTriggerEnter_mC4800D5F5D5C2937E9FA1CCA34F90A5D9D5AB634 (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral086C22DEC9EBC41B06D67EB8F496AFBDD926A44F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20BADD8EB7EE793570704B05366AF5F68E6C0E41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!makeGenericChecks(other)) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = SceneTeleportation_makeGenericChecks_m48FF350453D9027F1A64A99093D32A2770649846(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// isOnShipPortal = true;
		__this->___isOnShipPortal_7 = (bool)1;
		// actionText.text = "PRESS [E] TO EXIT THE SPACESHIP.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___actionText_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral086C22DEC9EBC41B06D67EB8F496AFBDD926A44F);
		// if(isOnTheOutside) {
		bool L_3 = __this->___isOnTheOutside_5;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// actionText.text = "PRESS [E] TO ENTER THE SPACESHIP";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___actionText_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral20BADD8EB7EE793570704B05366AF5F68E6C0E41);
	}

IL_0039:
	{
		// actionText.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___actionText_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SceneTeleportation::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTeleportation_OnTriggerExit_m86AF48198DD5D89B75AEF9D36EBA3713D1BB6CF0 (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!makeGenericChecks(other)) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = SceneTeleportation_makeGenericChecks_m48FF350453D9027F1A64A99093D32A2770649846(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// isOnShipPortal = false;
		__this->___isOnShipPortal_7 = (bool)0;
		// actionText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___actionText_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// actionText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___actionText_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void SceneTeleportation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTeleportation__ctor_m3DA14C16DFA23EB8F0C90D66AB469B1A48B6C5FA (SceneTeleportation_t7C93DD03EC30C1F1A29B2A98772F639E6998704C* __this, const RuntimeMethod* method) 
{
	{
		// public bool isOnTheOutside = true;
		__this->___isOnTheOutside_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* Generic_get_inventory_mEF57DB6605F45A29A182C7CE0E47A67379883AF3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Inventory inventory {get; set;}
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CinventoryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Generic_set_inventory_m54F6DE8B6FC2FC4A3DEB696298D0D34786D29A51_inline (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Inventory inventory {get; set;}
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CinventoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CinventoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setId_m8949B1D18CCBD7388D908F5E10D07B8D1B6AFDCE_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____id0, const RuntimeMethod* method) 
{
	{
		// id = _id;
		String_t* L_0 = ____id0;
		__this->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setName_m82EDCD2588D7B7F36427ADAA6FBC72107459E15A_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____name0, const RuntimeMethod* method) 
{
	{
		// name = _name;
		String_t* L_0 = ____name0;
		__this->___name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setDescription_m57096DB8B836EDFE54D38D3E4F39D11094FB0882_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, String_t* ____desc0, const RuntimeMethod* method) 
{
	{
		// description = _desc;
		String_t* L_0 = ____desc0;
		__this->___description_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_2), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InventoryItem_setAmount_m7FC2E5DF79A02F80C401667F97FAE358DD673B67_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, int32_t ____amount0, const RuntimeMethod* method) 
{
	{
		// amount = _amount;
		int32_t L_0 = ____amount0;
		__this->___amount_3 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InventoryItem_getId_m29F6E7DED21BF363C04D3BD525C0EEE0C0C5A63C_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return id;
		String_t* L_0 = __this->___id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InventoryItem_getAmount_m713FF72CA2554B0B05DF2B155A6282406FD759A8_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return amount;
		int32_t L_0 = __this->___amount_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InventoryItem_getName_mEEDD267A4541BCFD35EF1FF0953D206A684291D4_inline (InventoryItem_t8517153591805278C8567DD20BC40055682E5334* __this, const RuntimeMethod* method) 
{
	{
		// return name;
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Generic_set_enterance_m9840A719D265964A9D91F43CDA52FF3F695CEED4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 enterance {get; set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CenteranceU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Generic_get_enterance_mAE124316ED91CDECF35776E8A06E351613C2EABB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 enterance {get; set;}
		il2cpp_codegen_runtime_class_init_inline(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_StaticFields*)il2cpp_codegen_static_fields_for(Generic_t986F778CC2F65FB8D394006B965C1DF783507F78_il2cpp_TypeInfo_var))->___U3CenteranceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
