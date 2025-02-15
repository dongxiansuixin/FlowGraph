// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#pragma once

#include "FlowDataPinPropertyCustomizationBase.h"

#include "Types/FlowDataPinProperties.h"

// Consider implementing details customization... for every EFlowPinType
FLOW_ASSERT_ENUM_MAX(EFlowPinType, 16);

typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Bool> FFlowDataPinOutputProperty_BoolCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Int64> FFlowDataPinOutputProperty_Int64Customization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Int32> FFlowDataPinOutputProperty_Int32Customization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Double> FFlowDataPinOutputProperty_DoubleCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Float> FFlowDataPinOutputProperty_FloatCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Name> FFlowDataPinOutputProperty_NameCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_String> FFlowDataPinOutputProperty_StringCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinOutputProperty_Text> FFlowDataPinOutputProperty_TextCustomization;

typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Bool> FFlowDataPinInputProperty_BoolCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Int64> FFlowDataPinInputProperty_Int64Customization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Int32> FFlowDataPinInputProperty_Int32Customization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Double> FFlowDataPinInputProperty_DoubleCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Float> FFlowDataPinInputProperty_FloatCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Name> FFlowDataPinInputProperty_NameCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_String> FFlowDataPinInputProperty_StringCustomization;
typedef TFlowDataPinPropertyCustomization<FFlowDataPinInputProperty_Text> FFlowDataPinInputProperty_TextCustomization;

// NOTE (gtaylor) Enum is defined separately, because it's quite a bit more complex
// NOTE (gtaylor) Class, Object are also defined separately as they are also more complex
// NOTE (gtaylor) BaseStruct types like FVector don't customize well using this technique, so I am leaving their default details handler in-place