#include "Header.h"

char inputCount[15]{};

UINT16 indexMetalType{};
UINT16 indexItems{};
UINT16 index{};

bool msgLengthOrWeight{};

void CalculateResult(HWND msgResult)
{
	static float kgInMeter{};

	if (indexItems == IRON::Items::ItemArmature)
	{
		switch (index)
		{
		case IRON::ArmatureDiameter::D6:		kgInMeter = 0.222f;		break;
		case IRON::ArmatureDiameter::D6_5:		kgInMeter = 0.261f;		break;
		case IRON::ArmatureDiameter::D8:		kgInMeter = 0.395f;		break;
		case IRON::ArmatureDiameter::D10:		kgInMeter = 0.617f;		break;
		case IRON::ArmatureDiameter::D12:		kgInMeter = 0.888f;		break;
		case IRON::ArmatureDiameter::D14:		kgInMeter = 1.210f;		break;
		case IRON::ArmatureDiameter::D16:		kgInMeter = 1.580f;		break;
		case IRON::ArmatureDiameter::D18:		kgInMeter = 2.000f;		break;
		case IRON::ArmatureDiameter::D20:		kgInMeter = 2.470f;		break;
		case IRON::ArmatureDiameter::D22:		kgInMeter = 2.980f;		break;
		case IRON::ArmatureDiameter::D25:		kgInMeter = 3.850f;		break;
		case IRON::ArmatureDiameter::D28:		kgInMeter = 4.830f;		break;
		case IRON::ArmatureDiameter::D32:		kgInMeter = 6.310f;		break;
		case IRON::ArmatureDiameter::D36:		kgInMeter = 7.990f;		break;
		case IRON::ArmatureDiameter::D40:		kgInMeter = 9.870f;		break;
		case IRON::ArmatureDiameter::D45:		kgInMeter = 12.480f;	break;
		case IRON::ArmatureDiameter::D50:		kgInMeter = 15.410f;	break;
		case IRON::ArmatureDiameter::D55:		kgInMeter = 18.650f;	break;
		case IRON::ArmatureDiameter::D60:		kgInMeter = 22.190f;	break;
		case IRON::ArmatureDiameter::D70:		kgInMeter = 30.210f;	break;
		case IRON::ArmatureDiameter::D80:		kgInMeter = 39.460f;	break;
		default:								kgInMeter = 0.f;		break;
		}
	}
	else if (indexItems == IRON::Items::ItemBeamGost8239_89)
	{
		switch (index)
		{
		case IRON::BeamGost8239_89::N10:     kgInMeter = 9.46f;		break;
		case IRON::BeamGost8239_89::N12:     kgInMeter = 11.5f;		break;
		case IRON::BeamGost8239_89::N14:     kgInMeter = 13.7f;		break;
		case IRON::BeamGost8239_89::N16:     kgInMeter = 15.9f;		break;
		case IRON::BeamGost8239_89::N18:     kgInMeter = 18.4f;		break;
		case IRON::BeamGost8239_89::N20:     kgInMeter = 21.0f;		break;
		case IRON::BeamGost8239_89::N22:     kgInMeter = 24.0f;		break;
		case IRON::BeamGost8239_89::N24:     kgInMeter = 27.3f;		break;
		case IRON::BeamGost8239_89::N27:     kgInMeter = 31.5f;		break;
		case IRON::BeamGost8239_89::N30:     kgInMeter = 36.5f;		break;
		case IRON::BeamGost8239_89::N33:     kgInMeter = 42.2f;		break;
		case IRON::BeamGost8239_89::N36:     kgInMeter = 48.6f;		break;
		case IRON::BeamGost8239_89::N40:     kgInMeter = 57.0f;		break;
		case IRON::BeamGost8239_89::N45:     kgInMeter = 66.5f;		break;
		case IRON::BeamGost8239_89::N50:     kgInMeter = 78.5f;		break;
		case IRON::BeamGost8239_89::N55:     kgInMeter = 92.6f;		break;
		case IRON::BeamGost8239_89::N60:     kgInMeter = 108.f;		break;
		default:							 kgInMeter = 0.f;		break;
		}
	}
	else if (indexItems == IRON::Items::ItemBeamNormal)
	{
		switch (index)
		{
		case IRON::BeamNormal::t10B1:			kgInMeter = 8.1f;			break;
		case IRON::BeamNormal::t12B1:			kgInMeter = 8.7f;			break;
		case IRON::BeamNormal::t12B2:			kgInMeter = 10.4f;			break;
		case IRON::BeamNormal::t14B1:			kgInMeter = 10.5f;			break;
		case IRON::BeamNormal::t14B2:			kgInMeter = 12.9f;			break;
		case IRON::BeamNormal::t16B1:			kgInMeter = 12.7f;			break;
		case IRON::BeamNormal::t16B2:			kgInMeter = 15.8f;			break;
		case IRON::BeamNormal::t18B1:			kgInMeter = 15.4f;			break;
		case IRON::BeamNormal::t18B2:			kgInMeter = 18.8f;			break;
		case IRON::BeamNormal::t20B1:			kgInMeter = 22.4f;			break;
		case IRON::BeamNormal::t23B1:			kgInMeter = 25.8f;			break;
		case IRON::BeamNormal::t26B1:			kgInMeter = 28.0f;			break;
		case IRON::BeamNormal::t26B2:			kgInMeter = 31.2f;			break;
		case IRON::BeamNormal::t30B1:			kgInMeter = 32.9f;			break;
		case IRON::BeamNormal::t30B2:			kgInMeter = 36.6f;			break;
		case IRON::BeamNormal::t35B1:			kgInMeter = 38.9f;			break;
		case IRON::BeamNormal::t35B2:			kgInMeter = 43.3f;			break;
		case IRON::BeamNormal::t40B1:			kgInMeter = 48.1f;			break;
		case IRON::BeamNormal::t40B2:			kgInMeter = 54.7f;			break;
		case IRON::BeamNormal::t45B1:			kgInMeter = 59.8f;			break;
		case IRON::BeamNormal::t45B2:			kgInMeter = 67.5f;			break;
		case IRON::BeamNormal::t50B1:			kgInMeter = 73.0f;			break;
		case IRON::BeamNormal::t50B2:			kgInMeter = 80.7f;			break;
		case IRON::BeamNormal::t55B1:			kgInMeter = 89.0f;			break;
		case IRON::BeamNormal::t55B2:			kgInMeter = 97.9f;			break;
		case IRON::BeamNormal::t60B1:			kgInMeter = 106.2f;			break;
		case IRON::BeamNormal::t60B2:			kgInMeter = 115.6f;			break;
		case IRON::BeamNormal::t70B1:			kgInMeter = 129.3f;			break;
		case IRON::BeamNormal::t70B2:			kgInMeter = 144.2f;			break;
		case IRON::BeamNormal::t80B1:			kgInMeter = 159.5f;			break;
		case IRON::BeamNormal::t80B2:			kgInMeter = 177.9f;			break;
		case IRON::BeamNormal::t90B1:			kgInMeter = 194.0f;			break;
		case IRON::BeamNormal::t90B2:			kgInMeter = 213.8f;			break;
		case IRON::BeamNormal::t100B1:			kgInMeter = 230.6f;			break;
		case IRON::BeamNormal::t100B2:			kgInMeter = 258.2f;			break;
		case IRON::BeamNormal::t100B3:			kgInMeter = 285.7f;			break;
		case IRON::BeamNormal::t100B4:			kgInMeter = 314.5f;			break;
		default:								kgInMeter = 0.f;	    	break;
		}
	}
	else if (indexItems == IRON::Items::ItemBeamWide)
	{
		switch (index)
		{
		case IRON::BeamWide::t20SH1:			kgInMeter = 30.6f;			break;
		case IRON::BeamWide::t23SH1:			kgInMeter = 36.2f;			break;
		case IRON::BeamWide::t26SH1:			kgInMeter = 42.7f;			break;
		case IRON::BeamWide::t26SH2:			kgInMeter = 49.2f;			break;
		case IRON::BeamWide::t30SH1:			kgInMeter = 53.6f;			break;
		case IRON::BeamWide::t30SH2:			kgInMeter = 61.0f;			break;
		case IRON::BeamWide::t30SH3:			kgInMeter = 68.3f;			break;
		case IRON::BeamWide::t35SH1:			kgInMeter = 75.1f;			break;
		case IRON::BeamWide::t35SH2:			kgInMeter = 82.2f;			break;
		case IRON::BeamWide::t35SH3:			kgInMeter = 91.3f;			break;
		case IRON::BeamWide::t40SH1:			kgInMeter = 96.1f;			break;
		case IRON::BeamWide::t40SH2:			kgInMeter = 111.1f;			break;
		case IRON::BeamWide::t40SH3:			kgInMeter = 123.4f;			break;
		case IRON::BeamWide::t50SH1:			kgInMeter = 114.4f;			break;
		case IRON::BeamWide::t50SH2:			kgInMeter = 138.7f;			break;
		case IRON::BeamWide::t50SH3:			kgInMeter = 156.4f;			break;
		case IRON::BeamWide::t50SH4:			kgInMeter = 174.1f;			break;
		case IRON::BeamWide::t60SH1:			kgInMeter = 142.1f;			break;
		case IRON::BeamWide::t60SH2:			kgInMeter = 176.9f;			break;
		case IRON::BeamWide::t60SH3:			kgInMeter = 205.5f;			break;
		case IRON::BeamWide::t60SH4:			kgInMeter = 234.2f;			break;
		case IRON::BeamWide::t70SH1:			kgInMeter = 169.9f;			break;
		case IRON::BeamWide::t70SH2:			kgInMeter = 197.6f;			break;
		case IRON::BeamWide::t70SH3:			kgInMeter = 235.4f;			break;
		case IRON::BeamWide::t70SH4:			kgInMeter = 268.1f;			break;
		case IRON::BeamWide::t70SH5:			kgInMeter = 305.9f;			break;
		default:								kgInMeter = 0.f;	    	break;
		}
	}
	else if (indexItems == IRON::Items::ItemBeamColumn)
	{
		switch (index)
		{
		case IRON::BeamColumn::t20K1:			kgInMeter = 41.5f;			break;
		case IRON::BeamColumn::t20K2:			kgInMeter = 46.9f;			break;
		case IRON::BeamColumn::t23K1:			kgInMeter = 52.2f;			break;
		case IRON::BeamColumn::t23K2:			kgInMeter = 59.5f;			break;
		case IRON::BeamColumn::t26K1:			kgInMeter = 65.2f;			break;
		case IRON::BeamColumn::t26K2:			kgInMeter = 73.2f;			break;
		case IRON::BeamColumn::t26K3:			kgInMeter = 83.1f;			break;
		case IRON::BeamColumn::t30K1:			kgInMeter = 84.8f;			break;
		case IRON::BeamColumn::t30K2:			kgInMeter = 96.3f;			break;
		case IRON::BeamColumn::t30K3:			kgInMeter = 108.9f;			break;
		case IRON::BeamColumn::t35K1:			kgInMeter = 109.7f;			break;
		case IRON::BeamColumn::t35K2:			kgInMeter = 125.9f;			break;
		case IRON::BeamColumn::t35K3:			kgInMeter = 144.5f;			break;
		case IRON::BeamColumn::t40K1:			kgInMeter = 138.0f;			break;
		case IRON::BeamColumn::t40K2:			kgInMeter = 165.6f;			break;
		case IRON::BeamColumn::t40K3:			kgInMeter = 202.3f;			break;
		case IRON::BeamColumn::t40K4:			kgInMeter = 242.2f;			break;
		case IRON::BeamColumn::t40K5:			kgInMeter = 291.2f;			break;
		default:								kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemBeamAdditionSeries)
	{
		switch (index)
		{
		case IRON::BeamAdditionSeries::t24DB1:		kgInMeter = 27.8f;		break;
		case IRON::BeamAdditionSeries::t27DB1:		kgInMeter = 31.9f;		break;
		case IRON::BeamAdditionSeries::t36DB1:		kgInMeter = 49.1f;		break;
		case IRON::BeamAdditionSeries::t35BD1:		kgInMeter = 33.6f;		break;
		case IRON::BeamAdditionSeries::t40DB1:		kgInMeter = 39.7f;		break;
		case IRON::BeamAdditionSeries::t45DB1:		kgInMeter = 52.6f;		break;
		case IRON::BeamAdditionSeries::t45DB2:		kgInMeter = 65.0f;		break;
		case IRON::BeamAdditionSeries::t30DSH1:		kgInMeter = 72.7f;		break;
		case IRON::BeamAdditionSeries::t40DSH1:		kgInMeter = 124.0f;		break;
		case IRON::BeamAdditionSeries::t50DSH1:		kgInMeter = 155.0f;		break;
		default:									kgInMeter = 0.f;		break;
		}
	}
	else if (indexItems == IRON::Items::ItemSquare)
	{
		switch (index)
		{
		case IRON::SquareSize::t3:			kgInMeter = 0.071f;		    break;
		case IRON::SquareSize::t3_2:		kgInMeter = 0.08f;		    break;
		case IRON::SquareSize::t3_5:		kgInMeter = 0.096f;		    break;
		case IRON::SquareSize::t4:			kgInMeter = 0.126f;		    break;
		case IRON::SquareSize::t4_5:		kgInMeter = 0.159f;		    break;
		case IRON::SquareSize::t5:			kgInMeter = 0.196f;		    break;
		case IRON::SquareSize::t5_5:		kgInMeter = 0.237f;		    break;
		case IRON::SquareSize::t6:			kgInMeter = 0.283f;		    break;
		case IRON::SquareSize::t7:			kgInMeter = 0.385f;		    break;
		case IRON::SquareSize::t8:			kgInMeter = 0.502f;		    break;
		case IRON::SquareSize::t9:			kgInMeter = 0.636f;		    break;
		case IRON::SquareSize::t10:			kgInMeter = 0.785f;		    break;
		case IRON::SquareSize::t11:			kgInMeter = 0.95f;		    break;
		case IRON::SquareSize::t12:			kgInMeter = 1.13f;		    break;
		case IRON::SquareSize::t13:			kgInMeter = 1.327f;		    break;
		case IRON::SquareSize::t14:			kgInMeter = 1.539f;		    break;
		case IRON::SquareSize::t15:			kgInMeter = 1.766f;		    break;
		case IRON::SquareSize::t16:			kgInMeter = 2.01f;		    break;
		case IRON::SquareSize::t17:			kgInMeter = 2.269f;		    break;
		case IRON::SquareSize::t18:			kgInMeter = 2.543f;		    break;
		case IRON::SquareSize::t19:			kgInMeter = 2.834f;		    break;
		case IRON::SquareSize::t20:			kgInMeter = 3.14f;		    break;
		case IRON::SquareSize::t21:			kgInMeter = 3.462f;		    break;
		case IRON::SquareSize::t22:			kgInMeter = 3.799f;		    break;
		case IRON::SquareSize::t23:			kgInMeter = 4.153f;		    break;
		case IRON::SquareSize::t24:			kgInMeter = 4.522f;		    break;
		case IRON::SquareSize::t25:			kgInMeter = 4.906f;		    break;
		case IRON::SquareSize::t26:			kgInMeter = 5.307f;		    break;
		case IRON::SquareSize::t27:			kgInMeter = 5.723f;		    break;
		case IRON::SquareSize::t28:			kgInMeter = 6.154f;		    break;
		case IRON::SquareSize::t29:			kgInMeter = 6.602f;		    break;
		case IRON::SquareSize::t30:			kgInMeter = 7.065f;		    break;
		case IRON::SquareSize::t32:			kgInMeter = 8.038f;		    break;
		case IRON::SquareSize::t34:			kgInMeter = 9.075f;		    break;
		case IRON::SquareSize::t35:			kgInMeter = 9.616f;		    break;
		case IRON::SquareSize::t36:			kgInMeter = 10.174f;	    break;
		case IRON::SquareSize::t38:			kgInMeter = 11.335f;	    break;
		case IRON::SquareSize::t40:			kgInMeter = 12.56f;		    break;
		case IRON::SquareSize::t42:			kgInMeter = 13.847f;	    break;
		case IRON::SquareSize::t45:			kgInMeter = 15.896f;	    break;
		case IRON::SquareSize::t46:			kgInMeter = 16.611f;	    break;
		case IRON::SquareSize::t48:			kgInMeter = 18.086f;	    break;
		case IRON::SquareSize::t50:			kgInMeter = 19.625f;	    break;
		case IRON::SquareSize::t52:			kgInMeter = 21.226f;	    break;
		case IRON::SquareSize::t55:			kgInMeter = 23.746f;	    break;
		case IRON::SquareSize::t58:			kgInMeter = 26.407f;	    break;
		case IRON::SquareSize::t60:			kgInMeter = 28.26f;		    break;
		case IRON::SquareSize::t63:			kgInMeter = 31.157f;	    break;
		case IRON::SquareSize::t65:			kgInMeter = 33.166f;	    break;
		case IRON::SquareSize::t70:			kgInMeter = 38.465f;	    break;
		case IRON::SquareSize::t75:			kgInMeter = 44.156f;	    break;
		case IRON::SquareSize::t80:			kgInMeter = 50.24f;		    break;
		case IRON::SquareSize::t85:			kgInMeter = 56.716f;	    break;
		case IRON::SquareSize::t90:			kgInMeter = 63.585f;	    break;
		case IRON::SquareSize::t93:			kgInMeter = 67.895f;	    break;
		case IRON::SquareSize::t95:			kgInMeter = 70.846f;	    break;
		case IRON::SquareSize::t100:		kgInMeter = 78.5f;			break;
		case IRON::SquareSize::t105:		kgInMeter = 86.546f;	    break;
		case IRON::SquareSize::t110:		kgInMeter = 94.985f;	    break;
		case IRON::SquareSize::t115:		kgInMeter = 103.816f;	    break;
		case IRON::SquareSize::t120:		kgInMeter = 113.04f;	    break;
		case IRON::SquareSize::t125:		kgInMeter = 122.656f;	    break;
		case IRON::SquareSize::t130:		kgInMeter = 132.665f;	    break;
		case IRON::SquareSize::t135:		kgInMeter = 143.066f;	    break;
		case IRON::SquareSize::t140:		kgInMeter = 153.86f;	    break;
		case IRON::SquareSize::t145:		kgInMeter = 165.046f;	    break;
		case IRON::SquareSize::t150:		kgInMeter = 176.625f;	    break;
		case IRON::SquareSize::t160:		kgInMeter = 200.96f;	    break;
		case IRON::SquareSize::t170:		kgInMeter = 226.865f;	    break;
		case IRON::SquareSize::t180:		kgInMeter = 254.34f;	    break;
		case IRON::SquareSize::t190:		kgInMeter = 283.385f;	    break;
		case IRON::SquareSize::t200:		kgInMeter = 314.f;			break;
		default:							kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemCircle)
	{
		switch (index)
		{
		case IRON::Circle::d5:				kgInMeter = 0.154f;				break;
		case IRON::Circle::d5_5:			kgInMeter = 0.187f;				break;
		case IRON::Circle::d6:				kgInMeter = 0.222f;				break;
		case IRON::Circle::d6_3:			kgInMeter = 0.245f;				break;
		case IRON::Circle::d6_5:			kgInMeter = 0.261f;				break;
		case IRON::Circle::d7:				kgInMeter = 0.302f;				break;
		case IRON::Circle::d8:				kgInMeter = 0.395f;				break;
		case IRON::Circle::d9:				kgInMeter = 0.499f;				break;
		case IRON::Circle::d10:				kgInMeter = 0.617f;				break;
		case IRON::Circle::d11:				kgInMeter = 0.746f;				break;
		case IRON::Circle::d12:				kgInMeter = 0.888f;				break;
		case IRON::Circle::d13:				kgInMeter = 1.042f;				break;
		case IRON::Circle::d14:				kgInMeter = 1.208f;				break;
		case IRON::Circle::d15:				kgInMeter = 1.387f;				break;
		case IRON::Circle::d16:				kgInMeter = 1.578f;				break;
		case IRON::Circle::d17:				kgInMeter = 1.782f;				break;
		case IRON::Circle::d18:				kgInMeter = 1.998f;				break;
		case IRON::Circle::d19:				kgInMeter = 2.226f;				break;
		case IRON::Circle::d20:				kgInMeter = 2.466f;				break;
		case IRON::Circle::d21:				kgInMeter = 2.719f;				break;
		case IRON::Circle::d22:				kgInMeter = 2.984f;				break;
		case IRON::Circle::d23:				kgInMeter = 3.262f;				break;
		case IRON::Circle::d24:				kgInMeter = 3.551f;				break;
		case IRON::Circle::d25:				kgInMeter = 3.853f;				break;
		case IRON::Circle::d26:				kgInMeter = 4.168f;				break;
		case IRON::Circle::d27:				kgInMeter = 4.495f;				break;
		case IRON::Circle::d28:				kgInMeter = 4.834f;				break;
		case IRON::Circle::d29:				kgInMeter = 5.185f;				break;
		case IRON::Circle::d30:				kgInMeter = 5.549f;				break;
		case IRON::Circle::d31:				kgInMeter = 5.925f;				break;
		case IRON::Circle::d32:				kgInMeter = 6.313f;				break;
		case IRON::Circle::d33:				kgInMeter = 6.714f;				break;
		case IRON::Circle::d34:				kgInMeter = 7.127f;				break;
		case IRON::Circle::d35:				kgInMeter = 7.553f;				break;
		case IRON::Circle::d36:				kgInMeter = 7.990f;				break;
		case IRON::Circle::d37:				kgInMeter = 8.440f;				break;
		case IRON::Circle::d38:				kgInMeter = 8.903f;				break;
		case IRON::Circle::d39:				kgInMeter = 9.378f;				break;
		case IRON::Circle::d40:				kgInMeter = 9.865f;				break;
		case IRON::Circle::d41:				kgInMeter = 10.364f;			break;
		case IRON::Circle::d42:				kgInMeter = 10.876f;			break;
		case IRON::Circle::d43:				kgInMeter = 11.400f;			break;
		case IRON::Circle::d44:				kgInMeter = 11.936f;			break;
		case IRON::Circle::d45:				kgInMeter = 12.485f;			break;
		case IRON::Circle::d46:				kgInMeter = 13.046f;			break;
		case IRON::Circle::d47:				kgInMeter = 13.619f;			break;
		case IRON::Circle::d48:				kgInMeter = 14.205f;			break;
		case IRON::Circle::d50:				kgInMeter = 15.413f;			break;
		case IRON::Circle::d52:				kgInMeter = 16.671f;			break;
		case IRON::Circle::d53:				kgInMeter = 17.319f;			break;
		case IRON::Circle::d54:				kgInMeter = 17.978f;			break;
		case IRON::Circle::d55:				kgInMeter = 18.650f;			break;
		case IRON::Circle::d56:				kgInMeter = 19.335f;			break;
		case IRON::Circle::d58:				kgInMeter = 20.740f;			break;
		case IRON::Circle::d60:				kgInMeter = 22.195f;			break;
		case IRON::Circle::d62:				kgInMeter = 23.700f;			break;
		case IRON::Circle::d63:				kgInMeter = 24.470f;			break;
		case IRON::Circle::d65:				kgInMeter = 26.049f;			break;
		case IRON::Circle::d67:				kgInMeter = 27.676f;			break;
		case IRON::Circle::d68:				kgInMeter = 28.509f;			break;
		case IRON::Circle::d70:				kgInMeter = 30.210f;			break;
		case IRON::Circle::d72:				kgInMeter = 31.961f;			break;
		case IRON::Circle::d73:				kgInMeter = 32.855f;			break;
		case IRON::Circle::d75:				kgInMeter = 34.680f;			break;
		case IRON::Circle::d78:				kgInMeter = 37.510f;			break;
		case IRON::Circle::d80:				kgInMeter = 39.458f;			break;
		case IRON::Circle::d82:				kgInMeter = 41.456f;			break;
		case IRON::Circle::d85:				kgInMeter = 44.545f;			break;
		case IRON::Circle::d87:				kgInMeter = 46.666f;			break;
		case IRON::Circle::d90:				kgInMeter = 49.940f;			break;
		case IRON::Circle::d92:				kgInMeter = 52.184f;			break;
		case IRON::Circle::d95:				kgInMeter = 55.643f;			break;
		case IRON::Circle::d97:				kgInMeter = 58.010f;			break;
		case IRON::Circle::d100:			kgInMeter = 61.654f;			break;
		case IRON::Circle::d105:			kgInMeter = 67.973f;			break;
		case IRON::Circle::d110:			kgInMeter = 74.601f;			break;
		case IRON::Circle::d115:			kgInMeter = 81.537f;			break;
		case IRON::Circle::d120:			kgInMeter = 88.781f;			break;
		case IRON::Circle::d125:			kgInMeter = 96.334f;			break;
		case IRON::Circle::d130:			kgInMeter = 104.195f;			break;
		case IRON::Circle::d135:			kgInMeter = 112.364f;			break;
		case IRON::Circle::d140:			kgInMeter = 120.841f;			break;
		case IRON::Circle::d145:			kgInMeter = 129.627f;			break;
		case IRON::Circle::d150:			kgInMeter = 138.721f;			break;
		case IRON::Circle::d155:			kgInMeter = 148.123f;			break;
		case IRON::Circle::d160:			kgInMeter = 157.834f;			break;
		case IRON::Circle::d165:			kgInMeter = 167.852f;			break;
		case IRON::Circle::d170:			kgInMeter = 178.179f;			break;
		case IRON::Circle::d175:			kgInMeter = 188.815f;			break;
		case IRON::Circle::d180:			kgInMeter = 199.758f;			break;
		case IRON::Circle::d185:			kgInMeter = 211.010f;			break;
		case IRON::Circle::d190:			kgInMeter = 222.570f;			break;
		case IRON::Circle::d195:			kgInMeter = 234.438f;			break;
		case IRON::Circle::d200:			kgInMeter = 246.615f;			break;
		case IRON::Circle::d210:			kgInMeter = 271.893f;			break;
		case IRON::Circle::d220:			kgInMeter = 298.404f;			break;
		case IRON::Circle::d230:			kgInMeter = 326.148f;			break;
		case IRON::Circle::d240:			kgInMeter = 355.126f;			break;
		case IRON::Circle::d250:			kgInMeter = 385.336f;			break;
		case IRON::Circle::d260:			kgInMeter = 416.779f;			break;
		case IRON::Circle::d270:			kgInMeter = 449.456f;			break;
		default:							kgInMeter = 0.f;				break;
		}
	}
	else if (indexItems == IRON::Items::ItemCulvertCircle)
	{
		switch (index)
		{
		case IRON::CulvertCircle::t6x10_2x1_8:			kgInMeter = 0.38f;			break;
		case IRON::CulvertCircle::t8x13_5x2:			kgInMeter = 0.59f;			break;
		case IRON::CulvertCircle::t10x17x2:				kgInMeter = 0.76f;			break;
		case IRON::CulvertCircle::t15x21_3x2_35:		kgInMeter = 1.13f;			break;
		case IRON::CulvertCircle::t15x21_3x2_5:			kgInMeter = 1.19f;			break;
		case IRON::CulvertCircle::t20x26_8x2_35:		kgInMeter = 1.46f;			break;
		case IRON::CulvertCircle::t20x26_8x2_5:			kgInMeter = 1.55f;			break;
		case IRON::CulvertCircle::t25x33_5x2_8:			kgInMeter = 2.18f;			break;
		case IRON::CulvertCircle::t32x42_3x2_8:			kgInMeter = 2.81f;			break;
		case IRON::CulvertCircle::t40x48x3:				kgInMeter = 3.43f;			break;
		case IRON::CulvertCircle::t50x60x3:				kgInMeter = 4.35f;			break;
		case IRON::CulvertCircle::t65x75_5x3_3:			kgInMeter = 5.88f;			break;
		case IRON::CulvertCircle::t80x88_5x3_5:			kgInMeter = 7.56f;			break;
		case IRON::CulvertCircle::t90x101_3x3_5:		kgInMeter = 8.69f;			break;
		case IRON::CulvertCircle::t100x114x4:			kgInMeter = 11.18f;			break;
		case IRON::CulvertCircle::t125x140x4:			kgInMeter = 13.82f;			break;
		case IRON::CulvertCircle::t150x165x4:			kgInMeter = 16.36f;			break;
		case IRON::CulvertCircle::t6x10_2x2:			kgInMeter = 0.41f;			break;
		case IRON::CulvertCircle::t8x13_5x2_2:			kgInMeter = 0.63f;			break;
		case IRON::CulvertCircle::t10x17x2_2:			kgInMeter = 0.82f;			break;
		case IRON::CulvertCircle::t15x21_3x2_8:			kgInMeter = 1.32f;			break;
		case IRON::CulvertCircle::t20x26_8x2_8:			kgInMeter = 1.71f;			break;
		case IRON::CulvertCircle::t25x33_5x3_2:			kgInMeter = 2.46f;			break;
		case IRON::CulvertCircle::t32x42_3x3_2:			kgInMeter = 3.18f;			break;
		case IRON::CulvertCircle::t40x48x3_5:			kgInMeter = 3.96f;			break;
		case IRON::CulvertCircle::t50x60x3_5:			kgInMeter = 5.03f;			break;
		case IRON::CulvertCircle::t65x75_5x4:			kgInMeter = 7.26f;			break;
		case IRON::CulvertCircle::t80x88_5x4:			kgInMeter = 8.59f;			break;
		case IRON::CulvertCircle::t90x101_3x4:			kgInMeter = 9.89f;			break;
		case IRON::CulvertCircle::t100x114x4_5:			kgInMeter = 12.51f;			break;
		case IRON::CulvertCircle::t125x140x4_5:			kgInMeter = 15.49f;			break;
		case IRON::CulvertCircle::t150x165x4_5:			kgInMeter = 18.34f;			break;
		case IRON::CulvertCircle::t6x10_2x2_5:			kgInMeter = 0.48f;			break;
		case IRON::CulvertCircle::t8x13_5x2_8:			kgInMeter = 0.76f;			break;
		case IRON::CulvertCircle::t10x17x2_8:			kgInMeter = 1.01f;			break;
		case IRON::CulvertCircle::t15x21_3x3_2:			kgInMeter = 1.47f;			break;
		case IRON::CulvertCircle::t20x26_8x3_2:			kgInMeter = 1.92f;			break;
		case IRON::CulvertCircle::t25x33_5x4:			kgInMeter = 3.00f;			break;
		case IRON::CulvertCircle::t32x42_3x4:			kgInMeter = 3.89f;			break;
		case IRON::CulvertCircle::t40x48x4:				kgInMeter = 4.47f;			break;
		case IRON::CulvertCircle::t50x60x4_5:			kgInMeter = 6.34f;			break;
		case IRON::CulvertCircle::t65x75_5x4_5:			kgInMeter = 8.12f;			break;
		case IRON::CulvertCircle::t80x88_5x4_5:			kgInMeter = 9.60f;			break;
		case IRON::CulvertCircle::t90x101_3x4_5:		kgInMeter = 11.06f;			break;
		case IRON::CulvertCircle::t100x114x5:			kgInMeter = 13.84f;			break;
		case IRON::CulvertCircle::t125x140x5_5:			kgInMeter = 18.79f;			break;
		case IRON::CulvertCircle::t150x165x5_5:			kgInMeter = 22.28f;			break;
		default:										kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemCulvertProfileSq)
	{
		switch (index)
		{
		case IRON::CulvertProfileSq::cp10x0_8:				kgInMeter = 0.222f;			break;
		case IRON::CulvertProfileSq::cp10x0_9:				kgInMeter = 0.246f;			break;
		case IRON::CulvertProfileSq::cp10x1:				kgInMeter = 0.269f;			break;
		case IRON::CulvertProfileSq::cp10x1_2:				kgInMeter = 0.312f;			break;
		case IRON::CulvertProfileSq::cp10x1_4:				kgInMeter = 0.352f;			break;
		case IRON::CulvertProfileSq::cp15x0_8:				kgInMeter = 0.348f;			break;
		case IRON::CulvertProfileSq::cp15x0_9:				kgInMeter = 0.388f;			break;
		case IRON::CulvertProfileSq::cp15x1:				kgInMeter = 0.426f;			break;
		case IRON::CulvertProfileSq::cp15x1_2:				kgInMeter = 0.501f;			break;
		case IRON::CulvertProfileSq::cp15x1_4:				kgInMeter = 0.571f;			break;
		case IRON::CulvertProfileSq::cp15x1_5:				kgInMeter = 0.605f;			break;
		case IRON::CulvertProfileSq::cp20x0_8:				kgInMeter = 0.474f;			break;
		case IRON::CulvertProfileSq::cp20x0_9:				kgInMeter = 0.529f;			break;
		case IRON::CulvertProfileSq::cp20x1:				kgInMeter = 0.583f;			break;
		case IRON::CulvertProfileSq::cp20x1_2:				kgInMeter = 0.689f;			break;
		case IRON::CulvertProfileSq::cp20x1_4:				kgInMeter = 0.791f;			break;
		case IRON::CulvertProfileSq::cp20x1_5:				kgInMeter = 0.841f;			break;
		case IRON::CulvertProfileSq::cp20x2:				kgInMeter = 1.075f;			break;
		case IRON::CulvertProfileSq::cp25x0_8:				kgInMeter = 0.599f;			break;
		case IRON::CulvertProfileSq::cp25x0_9:				kgInMeter = 0.670f;			break;
		case IRON::CulvertProfileSq::cp25x1:				kgInMeter = 0.740f;			break;
		case IRON::CulvertProfileSq::cp25x1_2:				kgInMeter = 0.878f;			break;
		case IRON::CulvertProfileSq::cp25x1_4:				kgInMeter = 1.010f;			break;
		case IRON::CulvertProfileSq::cp25x1_5:				kgInMeter = 1.070f;			break;
		case IRON::CulvertProfileSq::cp25x2:				kgInMeter = 1.390f;			break;
		case IRON::CulvertProfileSq::cp25x2_5:				kgInMeter = 1.680f;			break;
		case IRON::CulvertProfileSq::cp25x3:				kgInMeter = 1.950f;			break;
		case IRON::CulvertProfileSq::cp30x0_8:				kgInMeter = 0.725f;			break;
		case IRON::CulvertProfileSq::cp30x0_9:				kgInMeter = 0.811f;			break;
		case IRON::CulvertProfileSq::cp30x1:				kgInMeter = 0.897f;			break;
		case IRON::CulvertProfileSq::cp30x1_2:				kgInMeter = 1.070f;			break;
		case IRON::CulvertProfileSq::cp30x1_3:				kgInMeter = 1.150f;			break;
		case IRON::CulvertProfileSq::cp30x1_4:				kgInMeter = 1.230f;			break;
		case IRON::CulvertProfileSq::cp30x1_5:				kgInMeter = 1.310f;			break;
		case IRON::CulvertProfileSq::cp30x2:				kgInMeter = 1.700f;			break;
		case IRON::CulvertProfileSq::cp30x2_5:				kgInMeter = 2.070f;			break;
		case IRON::CulvertProfileSq::cp30x3:				kgInMeter = 2.420f;			break;
		case IRON::CulvertProfileSq::cp30x3_5:				kgInMeter = 2.750f;			break;
		case IRON::CulvertProfileSq::cp30x4:				kgInMeter = 3.040f;			break;
		case IRON::CulvertProfileSq::cp32x4:				kgInMeter = 3.300f;			break;
		case IRON::CulvertProfileSq::cp35x0_8:				kgInMeter = 0.850f;			break;
		case IRON::CulvertProfileSq::cp35x0_9:				kgInMeter = 0.953f;			break;
		case IRON::CulvertProfileSq::cp35x1_4:				kgInMeter = 1.450f;			break;
		case IRON::CulvertProfileSq::cp35x1_5:				kgInMeter = 1.550f;			break;
		case IRON::CulvertProfileSq::cp35x2:				kgInMeter = 2.020f;			break;
		case IRON::CulvertProfileSq::cp35x2_5:				kgInMeter = 2.460f;			break;
		case IRON::CulvertProfileSq::cp35x3:				kgInMeter = 2.890f;			break;
		case IRON::CulvertProfileSq::cp35x3_5:				kgInMeter = 3.300f;			break;
		case IRON::CulvertProfileSq::cp35x4:				kgInMeter = 3.670f;			break;
		case IRON::CulvertProfileSq::cp35x5:				kgInMeter = 4.370f;			break;
		case IRON::CulvertProfileSq::cp36x4:				kgInMeter = 3.800f;			break;
		case IRON::CulvertProfileSq::cp40x1_4:				kgInMeter = 1.670f;			break;
		case IRON::CulvertProfileSq::cp40x1_5:				kgInMeter = 1.780f;			break;
		case IRON::CulvertProfileSq::cp40x2:				kgInMeter = 2.330f;			break;
		case IRON::CulvertProfileSq::cp40x2_5:				kgInMeter = 2.850f;			break;
		case IRON::CulvertProfileSq::cp40x3:				kgInMeter = 3.360f;			break;
		case IRON::CulvertProfileSq::cp40x3_5:				kgInMeter = 3.850f;			break;
		case IRON::CulvertProfileSq::cp40x4:				kgInMeter = 4.300f;			break;
		case IRON::CulvertProfileSq::cp40x5:				kgInMeter = 5.160f;			break;
		case IRON::CulvertProfileSq::cp40x6:				kgInMeter = 5.920f;			break;
		case IRON::CulvertProfileSq::cp42x3:				kgInMeter = 3.550f;			break;
		case IRON::CulvertProfileSq::cp42x3_5:				kgInMeter = 4.070f;			break;
		case IRON::CulvertProfileSq::cp42x4:				kgInMeter = 4.560f;			break;
		case IRON::CulvertProfileSq::cp42x5:				kgInMeter = 5.470f;			break;
		case IRON::CulvertProfileSq::cp42x6:				kgInMeter = 6.300f;			break;
		case IRON::CulvertProfileSq::cp45x2:				kgInMeter = 2.650f;			break;
		case IRON::CulvertProfileSq::cp45x3:				kgInMeter = 3.830f;			break;
		case IRON::CulvertProfileSq::cp45x3_5:				kgInMeter = 4.400f;			break;
		case IRON::CulvertProfileSq::cp45x4:				kgInMeter = 4.930f;			break;
		case IRON::CulvertProfileSq::cp45x5:				kgInMeter = 5.940f;			break;
		case IRON::CulvertProfileSq::cp45x6:				kgInMeter = 6.860f;			break;
		case IRON::CulvertProfileSq::cp45x7:				kgInMeter = 7.690f;			break;
		case IRON::CulvertProfileSq::cp45x8:				kgInMeter = 8.430f;			break;
		case IRON::CulvertProfileSq::cp50x2:				kgInMeter = 2.960f;			break;
		case IRON::CulvertProfileSq::cp50x2_5:				kgInMeter = 3.640f;			break;
		case IRON::CulvertProfileSq::cp50x3:				kgInMeter = 4.310f;			break;
		case IRON::CulvertProfileSq::cp50x3_5:				kgInMeter = 4.940f;			break;
		case IRON::CulvertProfileSq::cp50x4:				kgInMeter = 5.560f;			break;
		case IRON::CulvertProfileSq::cp50x4_5:				kgInMeter = 6.160f;			break;
		case IRON::CulvertProfileSq::cp50x5:				kgInMeter = 6.730f;			break;
		case IRON::CulvertProfileSq::cp50x6:				kgInMeter = 7.800f;			break;
		case IRON::CulvertProfileSq::cp50x7:				kgInMeter = 8.790f;			break;
		case IRON::CulvertProfileSq::cp50x8:				kgInMeter = 9.690f;			break;
		case IRON::CulvertProfileSq::cp55x3:				kgInMeter = 4.780f;			break;
		case IRON::CulvertProfileSq::cp60x2:				kgInMeter = 3.590f;			break;
		case IRON::CulvertProfileSq::cp60x2_5:				kgInMeter = 4.430f;			break;
		case IRON::CulvertProfileSq::cp60x3:				kgInMeter = 5.250f;			break;
		case IRON::CulvertProfileSq::cp60x3_5:				kgInMeter = 6.040f;			break;
		case IRON::CulvertProfileSq::cp60x4:				kgInMeter = 6.820f;			break;
		case IRON::CulvertProfileSq::cp60x5:				kgInMeter = 8.300f;			break;
		case IRON::CulvertProfileSq::cp60x6:				kgInMeter = 9.690f;			break;
		case IRON::CulvertProfileSq::cp60x7:				kgInMeter = 11.00f;			break;
		case IRON::CulvertProfileSq::cp60x8:				kgInMeter = 12.20f;			break;
		case IRON::CulvertProfileSq::cp65x6:				kgInMeter = 10.63f;			break;
		case IRON::CulvertProfileSq::cp70x3:				kgInMeter = 6.190f;			break;
		case IRON::CulvertProfileSq::cp70x3_5:				kgInMeter = 7.140f;			break;
		case IRON::CulvertProfileSq::cp70x4:				kgInMeter = 8.070f;			break;
		case IRON::CulvertProfileSq::cp70x5:				kgInMeter = 9.870f;			break;
		case IRON::CulvertProfileSq::cp70x6:				kgInMeter = 11.57f;			break;
		case IRON::CulvertProfileSq::cp70x7:				kgInMeter = 13.19f;			break;
		case IRON::CulvertProfileSq::cp70x8:				kgInMeter = 14.71f;			break;
		case IRON::CulvertProfileSq::cp80x3:				kgInMeter = 7.130f;			break;
		case IRON::CulvertProfileSq::cp80x3_5:				kgInMeter = 8.240f;			break;
		case IRON::CulvertProfileSq::cp80x4:				kgInMeter = 9.330f;			break;
		case IRON::CulvertProfileSq::cp80x5:				kgInMeter = 11.44f;			break;
		case IRON::CulvertProfileSq::cp80x6:				kgInMeter = 13.46f;			break;
		case IRON::CulvertProfileSq::cp80x7:				kgInMeter = 15.38f;			break;
		case IRON::CulvertProfileSq::cp80x8:				kgInMeter = 17.22f;			break;
		case IRON::CulvertProfileSq::cp80x9:				kgInMeter = 18.97f;			break;
		case IRON::CulvertProfileSq::cp80x10:				kgInMeter = 20.63f;			break;
		case IRON::CulvertProfileSq::cp80x11:				kgInMeter = 22.20f;			break;
		case IRON::CulvertProfileSq::cp90x3:				kgInMeter = 8.070f;			break;
		case IRON::CulvertProfileSq::cp90x4:				kgInMeter = 10.59f;			break;
		case IRON::CulvertProfileSq::cp90x5:				kgInMeter = 13.00f;			break;
		case IRON::CulvertProfileSq::cp90x6:				kgInMeter = 15.34f;			break;
		case IRON::CulvertProfileSq::cp90x7:				kgInMeter = 17.58f;			break;
		case IRON::CulvertProfileSq::cp90x8:				kgInMeter = 19.73f;			break;
		case IRON::CulvertProfileSq::cp100x3:				kgInMeter = 9.020f;			break;
		case IRON::CulvertProfileSq::cp100x4:				kgInMeter = 11.84f;			break;
		case IRON::CulvertProfileSq::cp100x5:				kgInMeter = 14.58f;			break;
		case IRON::CulvertProfileSq::cp100x6:				kgInMeter = 17.22f;			break;
		case IRON::CulvertProfileSq::cp100x7:				kgInMeter = 19.78f;			break;
		case IRON::CulvertProfileSq::cp100x8:				kgInMeter = 22.25f;			break;
		case IRON::CulvertProfileSq::cp100x9:				kgInMeter = 24.62f;			break;
		case IRON::CulvertProfileSq::cp110x6:				kgInMeter = 19.11f;			break;
		case IRON::CulvertProfileSq::cp110x7:				kgInMeter = 21.98f;			break;
		case IRON::CulvertProfileSq::cp110x8:				kgInMeter = 24.76f;			break;
		case IRON::CulvertProfileSq::cp110x9:				kgInMeter = 27.45f;			break;
		case IRON::CulvertProfileSq::cp120x6:				kgInMeter = 20.99f;			break;
		case IRON::CulvertProfileSq::cp120x7:				kgInMeter = 24.18f;			break;
		case IRON::CulvertProfileSq::cp120x8:				kgInMeter = 27.27f;			break;
		case IRON::CulvertProfileSq::cp120x9:				kgInMeter = 30.28f;			break;
		case IRON::CulvertProfileSq::cp140x6:				kgInMeter = 24.76f;			break;
		case IRON::CulvertProfileSq::cp140x7:				kgInMeter = 28.57f;			break;
		case IRON::CulvertProfileSq::cp140x8:				kgInMeter = 32.29f;			break;
		case IRON::CulvertProfileSq::cp140x9:				kgInMeter = 35.93f;			break;
		case IRON::CulvertProfileSq::cp150x7:				kgInMeter = 30.77f;			break;
		case IRON::CulvertProfileSq::cp150x8:				kgInMeter = 34.81f;			break;
		case IRON::CulvertProfileSq::cp150x9:				kgInMeter = 38.75f;			break;
		case IRON::CulvertProfileSq::cp150x10:				kgInMeter = 42.61f;			break;
		case IRON::CulvertProfileSq::cp180x8:				kgInMeter = 42.34f;			break;
		case IRON::CulvertProfileSq::cp180x9:				kgInMeter = 47.23f;			break;
		case IRON::CulvertProfileSq::cp180x10:				kgInMeter = 52.03f;			break;
		case IRON::CulvertProfileSq::cp180x12:				kgInMeter = 61.36f;			break;
		case IRON::CulvertProfileSq::cp180x14:				kgInMeter = 70.33f;			break;
		default:											kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemCulvertProfileRec)
	{
		switch (index)
		{
		case IRON::CulvertProfileRec::cpr15x10x1:			kgInMeter = 0.348f;			break;
		case IRON::CulvertProfileRec::cpr15x10x1_5:			kgInMeter = 0.488f;			break;
		case IRON::CulvertProfileRec::cpr15x10x2:			kgInMeter = 0.605f;			break;
		case IRON::CulvertProfileRec::cpr20x10x1:			kgInMeter = 0.426f;			break;
		case IRON::CulvertProfileRec::cpr20x10x1_2:			kgInMeter = 0.501f;			break;
		case IRON::CulvertProfileRec::cpr20x10x1_5:			kgInMeter = 0.605f;			break;
		case IRON::CulvertProfileRec::cpr20x10x2:			kgInMeter = 0.762f;			break;
		case IRON::CulvertProfileRec::cpr20x15x1:			kgInMeter = 0.505f;			break;
		case IRON::CulvertProfileRec::cpr20x15x1_2:			kgInMeter = 0.595f;			break;
		case IRON::CulvertProfileRec::cpr20x15x1_5:			kgInMeter = 0.723f;			break;
		case IRON::CulvertProfileRec::cpr20x15x2:			kgInMeter = 0.919f;			break;
		case IRON::CulvertProfileRec::cpr20x15x2_5:			kgInMeter = 1.090f;			break;
		case IRON::CulvertProfileRec::cpr25x10x1:			kgInMeter = 0.505f;			break;
		case IRON::CulvertProfileRec::cpr25x10x1_5:			kgInMeter = 0.723f;			break;
		case IRON::CulvertProfileRec::cpr25x10x2:			kgInMeter = 0.919f;			break;
		case IRON::CulvertProfileRec::cpr25x10x2_5:			kgInMeter = 1.090f;			break;
		case IRON::CulvertProfileRec::cpr25x15x0_8:			kgInMeter = 0.474f;			break;
		case IRON::CulvertProfileRec::cpr25x15x0_9:			kgInMeter = 0.529f;			break;
		case IRON::CulvertProfileRec::cpr25x15x1:			kgInMeter = 0.583f;			break;
		case IRON::CulvertProfileRec::cpr25x15x1_2:			kgInMeter = 0.689f;			break;
		case IRON::CulvertProfileRec::cpr25x15x1_5:			kgInMeter = 0.841f;			break;
		case IRON::CulvertProfileRec::cpr25x15x2:			kgInMeter = 1.080f;			break;
		case IRON::CulvertProfileRec::cpr25x15x2_5:			kgInMeter = 1.290f;			break;
		case IRON::CulvertProfileRec::cpr30x10x1:			kgInMeter = 0.583f;			break;
		case IRON::CulvertProfileRec::cpr30x10x1_5:			kgInMeter = 0.841f;			break;
		case IRON::CulvertProfileRec::cpr30x10x2:			kgInMeter = 1.080f;			break;
		case IRON::CulvertProfileRec::cpr30x10x2_5:			kgInMeter = 1.290f;			break;
		case IRON::CulvertProfileRec::cpr30x10x3:			kgInMeter = 1.480f;			break;
		case IRON::CulvertProfileRec::cpr30x15x0_8:			kgInMeter = 0.536f;			break;
		case IRON::CulvertProfileRec::cpr30x15x0_9:			kgInMeter = 0.600f;			break;
		case IRON::CulvertProfileRec::cpr30x15x1:			kgInMeter = 0.661f;			break;
		case IRON::CulvertProfileRec::cpr30x15x1_2:			kgInMeter = 0.783f;			break;
		case IRON::CulvertProfileRec::cpr30x15x1_5:			kgInMeter = 0.959f;			break;
		case IRON::CulvertProfileRec::cpr30x15x2:			kgInMeter = 1.230f;			break;
		case IRON::CulvertProfileRec::cpr30x15x2_5:			kgInMeter = 1.480f;			break;
		case IRON::CulvertProfileRec::cpr30x15x3:			kgInMeter = 1.710f;			break;
		case IRON::CulvertProfileRec::cpr30x20x0_8:			kgInMeter = 0.599f;			break;
		case IRON::CulvertProfileRec::cpr30x20x0_9:			kgInMeter = 0.670f;			break;
		case IRON::CulvertProfileRec::cpr30x20x1:			kgInMeter = 0.740f;			break;
		case IRON::CulvertProfileRec::cpr30x20x1_2:			kgInMeter = 0.877f;			break;
		case IRON::CulvertProfileRec::cpr30x20x1_5:			kgInMeter = 1.080f;			break;
		case IRON::CulvertProfileRec::cpr30x20x2:			kgInMeter = 1.390f;			break;
		case IRON::CulvertProfileRec::cpr30x20x2_5:			kgInMeter = 1.680f;			break;
		case IRON::CulvertProfileRec::cpr30x20x3:			kgInMeter = 1.950f;			break;
		case IRON::CulvertProfileRec::cpr35x15x0_8:			kgInMeter = 0.599f;			break;
		case IRON::CulvertProfileRec::cpr35x15x0_9:			kgInMeter = 0.670f;			break;
		case IRON::CulvertProfileRec::cpr35x15x1:			kgInMeter = 0.740f;			break;
		case IRON::CulvertProfileRec::cpr35x15x1_2:			kgInMeter = 0.877f;			break;
		case IRON::CulvertProfileRec::cpr35x15x1_5:			kgInMeter = 1.080f;			break;
		case IRON::CulvertProfileRec::cpr35x15x2:			kgInMeter = 1.390f;			break;
		case IRON::CulvertProfileRec::cpr35x15x2_5:			kgInMeter = 1.680f;			break;
		case IRON::CulvertProfileRec::cpr35x15x3:			kgInMeter = 1.950f;			break;
		case IRON::CulvertProfileRec::cpr35x15x3_5:			kgInMeter = 2.200f;			break;
		case IRON::CulvertProfileRec::cpr35x20x0_8:			kgInMeter = 0.662f;			break;
		case IRON::CulvertProfileRec::cpr35x20x0_9:			kgInMeter = 0.741f;			break;
		case IRON::CulvertProfileRec::cpr35x20x1:			kgInMeter = 0.819f;			break;
		case IRON::CulvertProfileRec::cpr35x20x1_2:			kgInMeter = 0.972f;			break;
		case IRON::CulvertProfileRec::cpr35x20x1_5:			kgInMeter = 1.190f;			break;
		case IRON::CulvertProfileRec::cpr35x20x2:			kgInMeter = 1.550f;			break;
		case IRON::CulvertProfileRec::cpr35x20x2_5:			kgInMeter = 1.880f;			break;
		case IRON::CulvertProfileRec::cpr35x20x3:			kgInMeter = 2.190f;			break;
		case IRON::CulvertProfileRec::cpr35x20x3_5:			kgInMeter = 2.470f;			break;
		case IRON::CulvertProfileRec::cpr35x25x1_5:			kgInMeter = 1.310f;			break;
		case IRON::CulvertProfileRec::cpr35x25x2:			kgInMeter = 1.700f;			break;
		case IRON::CulvertProfileRec::cpr35x25x2_5:			kgInMeter = 2.070f;			break;
		case IRON::CulvertProfileRec::cpr35x25x3:			kgInMeter = 2.420f;			break;
		case IRON::CulvertProfileRec::cpr35x25x3_5:			kgInMeter = 2.750f;			break;
		case IRON::CulvertProfileRec::cpr35x30x0_8:			kgInMeter = 0.788f;			break;
		case IRON::CulvertProfileRec::cpr35x30x0_9:			kgInMeter = 0.882f;			break;
		case IRON::CulvertProfileRec::cpr35x30x1:			kgInMeter = 0.976f;			break;
		case IRON::CulvertProfileRec::cpr35x30x1_2:			kgInMeter = 1.160f;			break;
		case IRON::CulvertProfileRec::cpr35x30x1_5:			kgInMeter = 1.430f;			break;
		case IRON::CulvertProfileRec::cpr35x30x2:			kgInMeter = 1.860f;			break;
		case IRON::CulvertProfileRec::cpr40x15x2:			kgInMeter = 1.550f;			break;
		case IRON::CulvertProfileRec::cpr40x15x2_5:			kgInMeter = 1.880f;			break;
		case IRON::CulvertProfileRec::cpr40x15x3:			kgInMeter = 2.190f;			break;
		case IRON::CulvertProfileRec::cpr40x15x3_5:			kgInMeter = 2.470f;			break;
		case IRON::CulvertProfileRec::cpr40x15x4:			kgInMeter = 2.730f;			break;
		case IRON::CulvertProfileRec::cpr40x20x0_8:			kgInMeter = 0.725f;			break;
		case IRON::CulvertProfileRec::cpr40x20x0_9:			kgInMeter = 0.811f;			break;
		case IRON::CulvertProfileRec::cpr40x20x1:			kgInMeter = 0.897f;			break;
		case IRON::CulvertProfileRec::cpr40x20x1_2:			kgInMeter = 1.070f;			break;
		case IRON::CulvertProfileRec::cpr40x20x1_5:			kgInMeter = 1.310f;			break;
		case IRON::CulvertProfileRec::cpr40x20x2:			kgInMeter = 1.700f;			break;
		case IRON::CulvertProfileRec::cpr40x20x2_5:			kgInMeter = 2.070f;			break;
		case IRON::CulvertProfileRec::cpr40x20x3:			kgInMeter = 2.420f;			break;
		case IRON::CulvertProfileRec::cpr40x20x3_5:			kgInMeter = 2.750f;			break;
		case IRON::CulvertProfileRec::cpr40x20x4:			kgInMeter = 3.050f;			break;
		case IRON::CulvertProfileRec::cpr40x25x1_5:			kgInMeter = 1.430f;			break;
		case IRON::CulvertProfileRec::cpr40x25x2:			kgInMeter = 1.860f;			break;
		case IRON::CulvertProfileRec::cpr40x25x2_5:			kgInMeter = 2.270f;			break;
		case IRON::CulvertProfileRec::cpr40x25x3:			kgInMeter = 2.660f;			break;
		case IRON::CulvertProfileRec::cpr40x25x3_5:			kgInMeter = 3.020f;			break;
		case IRON::CulvertProfileRec::cpr40x25x4:			kgInMeter = 3.360f;			break;
		case IRON::CulvertProfileRec::cpr40x30x1_5:			kgInMeter = 1.550f;			break;
		case IRON::CulvertProfileRec::cpr40x30x2:			kgInMeter = 2.020f;			break;
		case IRON::CulvertProfileRec::cpr40x30x2_5:			kgInMeter = 2.470f;			break;
		case IRON::CulvertProfileRec::cpr40x30x3:			kgInMeter = 2.890f;			break;
		case IRON::CulvertProfileRec::cpr40x30x3_5:			kgInMeter = 3.300f;			break;
		case IRON::CulvertProfileRec::cpr40x30x4:			kgInMeter = 3.680f;			break;
		case IRON::CulvertProfileRec::cpr42x20x2:			kgInMeter = 1.770f;			break;
		case IRON::CulvertProfileRec::cpr42x20x2_5:			kgInMeter = 2.150f;			break;
		case IRON::CulvertProfileRec::cpr42x20x3:			kgInMeter = 2.520f;			break;
		case IRON::CulvertProfileRec::cpr42x20x3_5:			kgInMeter = 2.860f;			break;
		case IRON::CulvertProfileRec::cpr42x20x4:			kgInMeter = 3.170f;			break;
		case IRON::CulvertProfileRec::cpr42x30x2:			kgInMeter = 2.080f;			break;
		case IRON::CulvertProfileRec::cpr42x30x2_5:			kgInMeter = 2.540f;			break;
		case IRON::CulvertProfileRec::cpr50x25x4:			kgInMeter = 2.990f;			break;
		case IRON::CulvertProfileRec::cpr42x30x3:			kgInMeter = 3.410f;			break;
		case IRON::CulvertProfileRec::cpr42x30x3_5:			kgInMeter = 3.800f;			break;
		case IRON::CulvertProfileRec::cpr42x30x4:			kgInMeter = 1.860f;			break;
		case IRON::CulvertProfileRec::cpr45x20x2:			kgInMeter = 2.270f;			break;
		case IRON::CulvertProfileRec::cpr45x20x2_5:			kgInMeter = 2.660f;			break;
		case IRON::CulvertProfileRec::cpr45x20x3:			kgInMeter = 3.020f;			break;
		case IRON::CulvertProfileRec::cpr45x20x3_5:			kgInMeter = 3.360f;			break;
		case IRON::CulvertProfileRec::cpr45x20x4:			kgInMeter = 2.170f;			break;
		case IRON::CulvertProfileRec::cpr45x30x2:			kgInMeter = 2.660f;			break;
		case IRON::CulvertProfileRec::cpr45x30x2_5:			kgInMeter = 3.130f;			break;
		case IRON::CulvertProfileRec::cpr45x30x3:			kgInMeter = 3.570f;			break;
		case IRON::CulvertProfileRec::cpr45x30x3_5:			kgInMeter = 3.990f;			break;
		case IRON::CulvertProfileRec::cpr45x30x4:			kgInMeter = 1.670f;			break;
		case IRON::CulvertProfileRec::cpr50x25x1_5:			kgInMeter = 2.170f;			break;
		case IRON::CulvertProfileRec::cpr50x25x2:			kgInMeter = 2.660f;			break;
		case IRON::CulvertProfileRec::cpr50x25x2_5:			kgInMeter = 3.130f;			break;
		case IRON::CulvertProfileRec::cpr50x25x3:			kgInMeter = 3.570f;			break;
		case IRON::CulvertProfileRec::cpr50x25x3_5:			kgInMeter = 3.990f;			break;
		case IRON::CulvertProfileRec::cpr50x30x1_5:			kgInMeter = 1.780f;			break;
		case IRON::CulvertProfileRec::cpr50x30x2:			kgInMeter = 2.320f;			break;
		case IRON::CulvertProfileRec::cpr50x30x2_5:			kgInMeter = 2.860f;			break;
		case IRON::CulvertProfileRec::cpr50x30x3:			kgInMeter = 3.360f;			break;
		case IRON::CulvertProfileRec::cpr50x30x3_5:			kgInMeter = 3.850f;			break;
		case IRON::CulvertProfileRec::cpr50x30x4:			kgInMeter = 4.300f;			break;
		case IRON::CulvertProfileRec::cpr50x35x1_5:			kgInMeter = 1.900f;			break;
		case IRON::CulvertProfileRec::cpr50x35x2:			kgInMeter = 2.490f;			break;
		case IRON::CulvertProfileRec::cpr50x35x2_2:			kgInMeter = 2.720f;			break;
		case IRON::CulvertProfileRec::cpr50x35x2_5:			kgInMeter = 3.090f;			break;
		case IRON::CulvertProfileRec::cpr50x35x3:			kgInMeter = 3.600f;			break;
		case IRON::CulvertProfileRec::cpr50x35x3_5:			kgInMeter = 4.120f;			break;
		case IRON::CulvertProfileRec::cpr50x35x4:			kgInMeter = 4.620f;			break;
		case IRON::CulvertProfileRec::cpr50x40x2:			kgInMeter = 2.650f;			break;
		case IRON::CulvertProfileRec::cpr50x40x2_5:			kgInMeter = 3.250f;			break;
		case IRON::CulvertProfileRec::cpr50x40x3:			kgInMeter = 3.830f;			break;
		case IRON::CulvertProfileRec::cpr50x40x3_5:			kgInMeter = 4.390f;			break;
		case IRON::CulvertProfileRec::cpr50x40x4:			kgInMeter = 4.930f;			break;
		case IRON::CulvertProfileRec::cpr60x20x2:			kgInMeter = 2.330f;			break;
		case IRON::CulvertProfileRec::cpr60x25x2_5:			kgInMeter = 3.050f;			break;
		case IRON::CulvertProfileRec::cpr60x25x3:			kgInMeter = 3.600f;			break;
		case IRON::CulvertProfileRec::cpr60x25x3_5:			kgInMeter = 4.120f;			break;
		case IRON::CulvertProfileRec::cpr60x25x4:			kgInMeter = 4.620f;			break;
		case IRON::CulvertProfileRec::cpr60x25x5:			kgInMeter = 5.550f;			break;
		case IRON::CulvertProfileRec::cpr60x30x1_5:			kgInMeter = 2.020f;			break;
		case IRON::CulvertProfileRec::cpr60x30x2:			kgInMeter = 2.650f;			break;
		case IRON::CulvertProfileRec::cpr60x30x2_5:			kgInMeter = 3.250f;			break;
		case IRON::CulvertProfileRec::cpr60x30x3:			kgInMeter = 3.830f;			break;
		case IRON::CulvertProfileRec::cpr60x30x3_5:			kgInMeter = 4.390f;			break;
		case IRON::CulvertProfileRec::cpr60x30x4:			kgInMeter = 4.930f;			break;
		case IRON::CulvertProfileRec::cpr60x30x5:			kgInMeter = 5.940f;			break;
		case IRON::CulvertProfileRec::cpr60x40x1_5:			kgInMeter = 2.250f;			break;
		case IRON::CulvertProfileRec::cpr60x40x2:			kgInMeter = 2.960f;			break;
		case IRON::CulvertProfileRec::cpr60x40x2_5:			kgInMeter = 3.640f;			break;
		case IRON::CulvertProfileRec::cpr60x40x3:			kgInMeter = 4.300f;			break;
		case IRON::CulvertProfileRec::cpr60x40x3_5:			kgInMeter = 4.940f;			break;
		case IRON::CulvertProfileRec::cpr60x40x4:			kgInMeter = 5.560f;			break;
		case IRON::CulvertProfileRec::cpr60x40x5:			kgInMeter = 6.730f;			break;
		case IRON::CulvertProfileRec::cpr70x30x3:			kgInMeter = 4.300f;			break;
		case IRON::CulvertProfileRec::cpr70x30x3_5:			kgInMeter = 4.940f;			break;
		case IRON::CulvertProfileRec::cpr70x30x4:			kgInMeter = 5.560f;			break;
		case IRON::CulvertProfileRec::cpr70x30x5:			kgInMeter = 6.730f;			break;
		case IRON::CulvertProfileRec::cpr70x30x6:			kgInMeter = 7.800f;			break;
		case IRON::CulvertProfileRec::cpr70x40x3:			kgInMeter = 4.780f;			break;
		case IRON::CulvertProfileRec::cpr70x40x3_5:			kgInMeter = 5.490f;			break;
		case IRON::CulvertProfileRec::cpr70x40x4:			kgInMeter = 6.190f;			break;
		case IRON::CulvertProfileRec::cpr70x40x5:			kgInMeter = 7.510f;			break;
		case IRON::CulvertProfileRec::cpr70x40x6:			kgInMeter = 8.750f;			break;
		case IRON::CulvertProfileRec::cpr70x50x3:			kgInMeter = 5.250f;			break;
		case IRON::CulvertProfileRec::cpr70x50x3_5:			kgInMeter = 6.040f;			break;
		case IRON::CulvertProfileRec::cpr70x50x4:			kgInMeter = 6.820f;			break;
		case IRON::CulvertProfileRec::cpr70x50x5:			kgInMeter = 8.300f;			break;
		case IRON::CulvertProfileRec::cpr70x50x6:			kgInMeter = 9.690f;			break;
		case IRON::CulvertProfileRec::cpr80x40x2:			kgInMeter = 3.590f;			break;
		case IRON::CulvertProfileRec::cpr80x40x3:			kgInMeter = 5.250f;			break;
		case IRON::CulvertProfileRec::cpr80x40x3_5:			kgInMeter = 6.040f;			break;
		case IRON::CulvertProfileRec::cpr80x40x4:			kgInMeter = 6.820f;			break;
		case IRON::CulvertProfileRec::cpr80x40x5:			kgInMeter = 8.300f;			break;
		case IRON::CulvertProfileRec::cpr80x40x6:			kgInMeter = 9.690f;			break;
		case IRON::CulvertProfileRec::cpr80x40x7:			kgInMeter = 10.99f;			break;
		case IRON::CulvertProfileRec::cpr80x50x3:			kgInMeter = 5.720f;			break;
		case IRON::CulvertProfileRec::cpr80x50x3_5:			kgInMeter = 6.590f;			break;
		case IRON::CulvertProfileRec::cpr80x50x4:			kgInMeter = 7.440f;			break;
		case IRON::CulvertProfileRec::cpr80x60x3_5:			kgInMeter = 7.140f;			break;
		case IRON::CulvertProfileRec::cpr80x60x4:			kgInMeter = 8.070f;			break;
		case IRON::CulvertProfileRec::cpr80x60x5:			kgInMeter = 9.870f;			break;
		case IRON::CulvertProfileRec::cpr80x60x6:			kgInMeter = 11.57f;			break;
		case IRON::CulvertProfileRec::cpr80x60x7:			kgInMeter = 13.19f;			break;
		case IRON::CulvertProfileRec::cpr90x40x3_5:			kgInMeter = 6.590f;			break;
		case IRON::CulvertProfileRec::cpr90x40x4:			kgInMeter = 7.440f;			break;
		case IRON::CulvertProfileRec::cpr90x40x5:			kgInMeter = 9.080f;			break;
		case IRON::CulvertProfileRec::cpr90x40x6:			kgInMeter = 10.63f;			break;
		case IRON::CulvertProfileRec::cpr90x40x7:			kgInMeter = 12.09f;			break;
		case IRON::CulvertProfileRec::cpr90x60x4:			kgInMeter = 8.700f;			break;
		case IRON::CulvertProfileRec::cpr90x60x5:			kgInMeter = 10.65f;			break;
		case IRON::CulvertProfileRec::cpr90x60x6:			kgInMeter = 12.51f;			break;
		case IRON::CulvertProfileRec::cpr90x60x7:			kgInMeter = 14.29f;			break;
		case IRON::CulvertProfileRec::cpr100x40x4:			kgInMeter = 8.070f;			break;
		case IRON::CulvertProfileRec::cpr100x40x5:			kgInMeter = 9.870f;			break;
		case IRON::CulvertProfileRec::cpr100x40x6:			kgInMeter = 11.57f;			break;
		case IRON::CulvertProfileRec::cpr100x40x7:			kgInMeter = 13.19f;			break;
		case IRON::CulvertProfileRec::cpr100x50x4:			kgInMeter = 8.700f;			break;
		case IRON::CulvertProfileRec::cpr100x50x5:			kgInMeter = 10.65f;			break;
		case IRON::CulvertProfileRec::cpr100x50x6:			kgInMeter = 12.51f;			break;
		case IRON::CulvertProfileRec::cpr100x50x7:			kgInMeter = 14.29f;			break;
		case IRON::CulvertProfileRec::cpr100x60x3:			kgInMeter = 7.130f;			break;
		case IRON::CulvertProfileRec::cpr100x60x3_5:		kgInMeter = 8.240f;			break;
		case IRON::CulvertProfileRec::cpr100x60x4:			kgInMeter = 9.330f;			break;
		case IRON::CulvertProfileRec::cpr100x70x4:			kgInMeter = 9.960f;			break;
		case IRON::CulvertProfileRec::cpr100x70x5:			kgInMeter = 12.22f;			break;
		case IRON::CulvertProfileRec::cpr100x70x6:			kgInMeter = 14.40f;			break;
		case IRON::CulvertProfileRec::cpr100x70x7:			kgInMeter = 16.48f;			break;
		case IRON::CulvertProfileRec::cpr110x40x4:			kgInMeter = 8.700f;			break;
		case IRON::CulvertProfileRec::cpr110x40x5:			kgInMeter = 10.65f;			break;
		case IRON::CulvertProfileRec::cpr110x40x6:			kgInMeter = 12.51f;			break;
		case IRON::CulvertProfileRec::cpr110x40x7:			kgInMeter = 14.29f;			break;
		case IRON::CulvertProfileRec::cpr110x50x4:			kgInMeter = 9.330f;			break;
		case IRON::CulvertProfileRec::cpr110x50x5:			kgInMeter = 11.44f;			break;
		case IRON::CulvertProfileRec::cpr110x50x6:			kgInMeter = 13.46f;			break;
		case IRON::CulvertProfileRec::cpr110x50x7:			kgInMeter = 15.38f;			break;
		case IRON::CulvertProfileRec::cpr110x60x4:			kgInMeter = 9.960f;			break;
		case IRON::CulvertProfileRec::cpr110x60x5:			kgInMeter = 12.22f;			break;
		case IRON::CulvertProfileRec::cpr110x60x6:			kgInMeter = 14.40f;			break;
		case IRON::CulvertProfileRec::cpr110x60x7:			kgInMeter = 16.48f;			break;
		case IRON::CulvertProfileRec::cpr120x40x5:			kgInMeter = 11.44f;			break;
		case IRON::CulvertProfileRec::cpr120x40x6:			kgInMeter = 13.46f;			break;
		case IRON::CulvertProfileRec::cpr120x40x7:			kgInMeter = 15.38f;			break;
		case IRON::CulvertProfileRec::cpr120x40x8:			kgInMeter = 17.22f;			break;
		case IRON::CulvertProfileRec::cpr120x60x5:			kgInMeter = 13.00f;			break;
		case IRON::CulvertProfileRec::cpr120x60x6:			kgInMeter = 15.34f;			break;
		case IRON::CulvertProfileRec::cpr120x60x7:			kgInMeter = 17.58f;			break;
		case IRON::CulvertProfileRec::cpr120x60x8:			kgInMeter = 19.73f;			break;
		case IRON::CulvertProfileRec::cpr120x80x5:			kgInMeter = 14.58f;			break;
		case IRON::CulvertProfileRec::cpr120x80x6:			kgInMeter = 17.22f;			break;
		case IRON::CulvertProfileRec::cpr120x80x7:			kgInMeter = 19.78f;			break;
		case IRON::CulvertProfileRec::cpr120x80x8:			kgInMeter = 22.25f;			break;
		case IRON::CulvertProfileRec::cpr140x60x5:			kgInMeter = 14.58f;			break;
		case IRON::CulvertProfileRec::cpr140x60x6:			kgInMeter = 17.22f;			break;
		case IRON::CulvertProfileRec::cpr140x60x7:			kgInMeter = 19.78f;			break;
		case IRON::CulvertProfileRec::cpr140x60x8:			kgInMeter = 22.25f;			break;
		case IRON::CulvertProfileRec::cpr140x80x5:			kgInMeter = 16.15f;			break;
		case IRON::CulvertProfileRec::cpr140x80x6:			kgInMeter = 19.11f;			break;
		case IRON::CulvertProfileRec::cpr140x80x7:			kgInMeter = 21.98f;			break;
		case IRON::CulvertProfileRec::cpr140x80x8:			kgInMeter = 24.76f;			break;
		case IRON::CulvertProfileRec::cpr140x120x6:			kgInMeter = 22.88f;			break;
		case IRON::CulvertProfileRec::cpr140x120x7:			kgInMeter = 26.37f;			break;
		case IRON::CulvertProfileRec::cpr140x120x8:			kgInMeter = 29.78f;			break;
		case IRON::CulvertProfileRec::cpr140x120x9:			kgInMeter = 33.10f;			break;
		case IRON::CulvertProfileRec::cpr150x80x7:			kgInMeter = 20.05f;			break;
		case IRON::CulvertProfileRec::cpr150x80x6:			kgInMeter = 23.08f;			break;
		case IRON::CulvertProfileRec::cpr150x80x8:			kgInMeter = 26.01f;			break;
		case IRON::CulvertProfileRec::cpr150x80x9:			kgInMeter = 28.86f;			break;
		case IRON::CulvertProfileRec::cpr150x80x10:			kgInMeter = 31.62f;			break;
		case IRON::CulvertProfileRec::cpr150x100x6:			kgInMeter = 21.93f;			break;
		case IRON::CulvertProfileRec::cpr150x100x7:			kgInMeter = 25.28f;			break;
		case IRON::CulvertProfileRec::cpr150x100x8:			kgInMeter = 28.53f;			break;
		case IRON::CulvertProfileRec::cpr150x100x9:			kgInMeter = 31.69f;			break;
		case IRON::CulvertProfileRec::cpr150x100x10:		kgInMeter = 34.76f;			break;
		case IRON::CulvertProfileRec::cpr180x80x7:			kgInMeter = 26.37f;			break;
		case IRON::CulvertProfileRec::cpr180x80x8:			kgInMeter = 29.78f;			break;
		case IRON::CulvertProfileRec::cpr180x80x9:			kgInMeter = 33.10f;			break;
		case IRON::CulvertProfileRec::cpr180x80x10:			kgInMeter = 36.33f;			break;
		case IRON::CulvertProfileRec::cpr180x80x12:			kgInMeter = 42.52f;			break;
		case IRON::CulvertProfileRec::cpr180x100x8:			kgInMeter = 32.29f;			break;
		case IRON::CulvertProfileRec::cpr180x100x9:			kgInMeter = 35.93f;			break;
		case IRON::CulvertProfileRec::cpr180x100x10:		kgInMeter = 39.47f;			break;
		case IRON::CulvertProfileRec::cpr180x100x12:		kgInMeter = 46.29f;			break;
		case IRON::CulvertProfileRec::cpr180x150x8:			kgInMeter = 38.57f;			break;
		case IRON::CulvertProfileRec::cpr180x150x9:			kgInMeter = 42.99f;			break;
		case IRON::CulvertProfileRec::cpr180x150x10:		kgInMeter = 47.32f;			break;
		case IRON::CulvertProfileRec::cpr180x150x12:		kgInMeter = 55.71f;			break;
		case IRON::CulvertProfileRec::cpr28x25x0_8:			kgInMeter = 0.637f;			break;
		case IRON::CulvertProfileRec::cpr28x25x0_9:			kgInMeter = 0.713f;			break;
		case IRON::CulvertProfileRec::cpr28x25x1:			kgInMeter = 0.787f;			break;
		case IRON::CulvertProfileRec::cpr28x25x1_2:			kgInMeter = 0.934f;			break;
		case IRON::CulvertProfileRec::cpr28x25x1_5:			kgInMeter = 1.150f;			break;
		case IRON::CulvertProfileRec::cpr28x25x2:			kgInMeter = 1.490f;			break;
		case IRON::CulvertProfileRec::cpr28x25x2_5:			kgInMeter = 1.800f;			break;
		case IRON::CulvertProfileRec::cpr40x28x1_5:			kgInMeter = 1.500f;			break;
		case IRON::CulvertProfileRec::cpr40x28x2:			kgInMeter = 1.950f;			break;
		case IRON::CulvertProfileRec::cpr40x28x2_5:			kgInMeter = 2.390f;			break;
		case IRON::CulvertProfileRec::cpr70x50x7:			kgInMeter = 10.99f;			break;
		case IRON::CulvertProfileRec::cpr90x50x3:			kgInMeter = 6.190f;			break;
		case IRON::CulvertProfileRec::cpr140x60x3:			kgInMeter = 9.020f;			break;
		case IRON::CulvertProfileRec::cpr150x60x7:			kgInMeter = 20.88f;			break;
		case IRON::CulvertProfileRec::cpr160x130x8:			kgInMeter = 33.55f;			break;
		case IRON::CulvertProfileRec::cpr180x145x20:		kgInMeter = 84.10f;			break;
		case IRON::CulvertProfileRec::cpr190x120x12:		kgInMeter = 51.94f;			break;
		case IRON::CulvertProfileRec::cpr195x170x18:		kgInMeter = 88.99f;			break;
		case IRON::CulvertProfileRec::cpr200x120x8:			kgInMeter = 37.32f;			break;
		case IRON::CulvertProfileRec::cpr230x100x8:			kgInMeter = 38.57f;			break;
		default:											kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemAngle1)
	{
		switch (index)
		{
		case IRON::AngleType1::a1t32x25x2:			kgInMeter = 0.840f;			break;
		case IRON::AngleType1::a1t32x25x2_5:		kgInMeter = 1.030f;			break;
		case IRON::AngleType1::a1t40x25x2_5:		kgInMeter = 1.160f;			break;
		case IRON::AngleType1::a1t50x35x3_2:		kgInMeter = 1.980f;			break;
		case IRON::AngleType1::a1t60x40x3:			kgInMeter = 2.230f;			break;
		case IRON::AngleType1::a1t70x50x4:			kgInMeter = 3.530f;			break;
		case IRON::AngleType1::a1t80x63x4:			kgInMeter = 4.260f;			break;
		case IRON::AngleType1::a1t85x35x4:			kgInMeter = 3.530f;			break;
		case IRON::AngleType1::a1t85x67x4:			kgInMeter = 4.740f;			break;
		case IRON::AngleType1::a1t90x70x4:			kgInMeter = 4.790f;			break;
		case IRON::AngleType1::a1t100x65x4:			kgInMeter = 4.950f;			break;
		case IRON::AngleType1::a1t105x100x3:		kgInMeter = 4.690f;			break;
		case IRON::AngleType1::a1t110x90x5:			kgInMeter = 7.440f;			break;
		case IRON::AngleType1::a1t115x65x5:			kgInMeter = 6.710f;			break;
		case IRON::AngleType1::a1t120x100x8:		kgInMeter = 12.88f;			break;
		case IRON::AngleType1::a1t147x125x8:		kgInMeter = 15.93f;			break;
		case IRON::AngleType1::a1t152x100x5_5:		kgInMeter = 10.37f;			break;
		case IRON::AngleType1::a1t155x100x6:		kgInMeter = 11.38f;			break;
		case IRON::AngleType1::a1t180x140x6:		kgInMeter = 14.55f;			break;
		default:									kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemAngle2)
	{
		switch (index)
		{
		case IRON::AngleType2::a2t25x16x3:			kgInMeter = 0.910f;			break;
		case IRON::AngleType2::a2t30x20x3:			kgInMeter = 1.120f;			break;
		case IRON::AngleType2::a2t30x20x4:			kgInMeter = 1.460f;			break;
		case IRON::AngleType2::a2t32x20x3:			kgInMeter = 1.170f;			break;
		case IRON::AngleType2::a2t32x20x4:			kgInMeter = 1.520f;			break;
		case IRON::AngleType2::a2t40x25x3:			kgInMeter = 1.480f;			break;
		case IRON::AngleType2::a2t40x25x4:			kgInMeter = 1.940f;			break;
		case IRON::AngleType2::a2t40x25x5:			kgInMeter = 2.370f;			break;
		case IRON::AngleType2::a2t40x30x4:			kgInMeter = 2.260f;			break;
		case IRON::AngleType2::a2t40x30x5:			kgInMeter = 2.460f;			break;
		case IRON::AngleType2::a2t45x28x3:			kgInMeter = 1.680f;			break;
		case IRON::AngleType2::a2t45x28x4:			kgInMeter = 2.200f;			break;
		case IRON::AngleType2::a2t50x32x3:			kgInMeter = 1.900f;			break;
		case IRON::AngleType2::a2t50x32x4:			kgInMeter = 2.400f;			break;
		case IRON::AngleType2::a2t56x36x4:			kgInMeter = 2.810f;			break;
		case IRON::AngleType2::a2t56x36x5:			kgInMeter = 3.460f;			break;
		case IRON::AngleType2::a2t63x40x4:			kgInMeter = 3.170f;			break;
		case IRON::AngleType2::a2t63x40x5:			kgInMeter = 3.910f;			break;
		case IRON::AngleType2::a2t63x40x6:			kgInMeter = 4.630f;			break;
		case IRON::AngleType2::a2t63x40x8:			kgInMeter = 6.030f;			break;
		case IRON::AngleType2::a2t65x50x5:			kgInMeter = 4.360f;			break;
		case IRON::AngleType2::a2t65x50x6:			kgInMeter = 5.180f;			break;
		case IRON::AngleType2::a2t65x50x7:			kgInMeter = 5.980f;			break;
		case IRON::AngleType2::a2t65x50x8:			kgInMeter = 6.770f;			break;
		case IRON::AngleType2::a2t70x45x5:			kgInMeter = 4.390f;			break;
		case IRON::AngleType2::a2t75x50x5:			kgInMeter = 4.790f;			break;
		case IRON::AngleType2::a2t75x50x6:			kgInMeter = 5.690f;			break;
		case IRON::AngleType2::a2t75x50x7:			kgInMeter = 6.570f;			break;
		case IRON::AngleType2::a2t75x50x8:			kgInMeter = 7.430f;			break;
		case IRON::AngleType2::a2t80x50x5:			kgInMeter = 4.490f;			break;
		case IRON::AngleType2::a2t80x50x6:			kgInMeter = 5.920f;			break;
		case IRON::AngleType2::a2t80x60x6:			kgInMeter = 6.390f;			break;
		case IRON::AngleType2::a2t80x60x7:			kgInMeter = 7.390f;			break;
		case IRON::AngleType2::a2t80x60x8:			kgInMeter = 8.370f;			break;
		case IRON::AngleType2::a2t90x56x5_5:		kgInMeter = 6.170f;			break;
		case IRON::AngleType2::a2t90x56x6:			kgInMeter = 6.700f;			break;
		case IRON::AngleType2::a2t90x56x8:			kgInMeter = 8.770f;			break;
		case IRON::AngleType2::a2t100x63x6:			kgInMeter = 7.530f;			break;
		case IRON::AngleType2::a2t100x63x7:			kgInMeter = 8.700f;			break;
		case IRON::AngleType2::a2t100x63x8:			kgInMeter = 9.870f;			break;
		case IRON::AngleType2::a2t100x63x10:		kgInMeter = 12.14f;			break;
		case IRON::AngleType2::a2t100x65x7:			kgInMeter = 8.810f;			break;
		case IRON::AngleType2::a2t100x65x8:			kgInMeter = 9.990f;			break;
		case IRON::AngleType2::a2t100x65x10:		kgInMeter = 12.30f;			break;
		case IRON::AngleType2::a2t110x70x6_5:		kgInMeter = 8.980f;			break;
		case IRON::AngleType2::a2t110x70x8:			kgInMeter = 10.93f;			break;
		case IRON::AngleType2::a2t125x80x7:			kgInMeter = 11.04f;			break;
		case IRON::AngleType2::a2t125x80x8:			kgInMeter = 12.58f;			break;
		case IRON::AngleType2::a2t125x80x10:		kgInMeter = 15.47f;			break;
		case IRON::AngleType2::a2t125x80x12:		kgInMeter = 18.34f;			break;
		case IRON::AngleType2::a2t140x90x8:			kgInMeter = 14.13f;			break;
		case IRON::AngleType2::a2t140x90x10:		kgInMeter = 17.46f;			break;
		case IRON::AngleType2::a2t160x100x9:		kgInMeter = 17.96f;			break;
		case IRON::AngleType2::a2t160x100x10:		kgInMeter = 19.85f;			break;
		case IRON::AngleType2::a2t160x100x12:		kgInMeter = 23.58f;			break;
		case IRON::AngleType2::a2t160x100x14:		kgInMeter = 27.26f;			break;
		case IRON::AngleType2::a2t180x110x10:		kgInMeter = 22.20f;			break;
		case IRON::AngleType2::a2t180x110x11:		kgInMeter = 26.40f;			break;
		case IRON::AngleType2::a2t180x110x12:		kgInMeter = 27.37f;			break;
		case IRON::AngleType2::a2t200x125x12:		kgInMeter = 29.74f;			break;
		case IRON::AngleType2::a2t200x125x14:		kgInMeter = 34.43f;			break;
		case IRON::AngleType2::a2t200x125x16:		kgInMeter = 39.07f;			break;
		default:									kgInMeter = 0.f;			break;
		}
	}
	else if (indexItems == IRON::Items::ItemAngle3)
	{
		switch (index)
		{
		case IRON::AngleType3::a3t20x3:			kgInMeter = 0.8900f;			break;
		case IRON::AngleType3::a3t20x4:			kgInMeter = 1.1500f;			break;
		case IRON::AngleType3::a3t25x3:			kgInMeter = 1.1200f;			break;
		case IRON::AngleType3::a3t25x4:			kgInMeter = 1.4600f;			break;
		case IRON::AngleType3::a3t28x3:			kgInMeter = 1.2700f;			break;
		case IRON::AngleType3::a3t30x3:			kgInMeter = 1.3600f;			break;
		case IRON::AngleType3::a3t30x4:			kgInMeter = 1.7800f;			break;
		case IRON::AngleType3::a3t32x3:			kgInMeter = 1.4600f;			break;
		case IRON::AngleType3::a3t32x4:			kgInMeter = 1.9100f;			break;
		case IRON::AngleType3::a3t35x3:			kgInMeter = 1.6000f;			break;
		case IRON::AngleType3::a3t35x4:			kgInMeter = 2.1000f;			break;
		case IRON::AngleType3::a3t35x5:			kgInMeter = 2.5800f;			break;
		case IRON::AngleType3::a3t40x3:			kgInMeter = 1.8500f;			break;
		case IRON::AngleType3::a3t40x4:			kgInMeter = 2.4200f;			break;
		case IRON::AngleType3::a3t40x5:			kgInMeter = 2.9800f;			break;
		case IRON::AngleType3::a3t45x3:			kgInMeter = 2.0800f;			break;
		case IRON::AngleType3::a3t45x4:			kgInMeter = 2.7300f;			break;
		case IRON::AngleType3::a3t45x5:			kgInMeter = 3.3700f;			break;
		case IRON::AngleType3::a3t50x3:			kgInMeter = 2.3200f;			break;
		case IRON::AngleType3::a3t50x4:			kgInMeter = 3.0500f;			break;
		case IRON::AngleType3::a3t50x5:			kgInMeter = 3.7700f;			break;
		case IRON::AngleType3::a3t50x6:			kgInMeter = 4.4700f;			break;
		case IRON::AngleType3::a3t56x4:			kgInMeter = 3.4400f;			break;
		case IRON::AngleType3::a3t56x5:			kgInMeter = 4.2500f;			break;
		case IRON::AngleType3::a3t63x4:			kgInMeter = 3.9000f;			break;
		case IRON::AngleType3::a3t63x5:			kgInMeter = 4.8100f;			break;
		case IRON::AngleType3::a3t63x6:			kgInMeter = 5.7200f;			break;
		case IRON::AngleType3::a3t70x4_5:		kgInMeter = 4.8700f;			break;
		case IRON::AngleType3::a3t70x5:			kgInMeter = 5.3800f;			break;
		case IRON::AngleType3::a3t70x6:			kgInMeter = 6.3900f;			break;
		case IRON::AngleType3::a3t70x7:			kgInMeter = 7.3900f;			break;
		case IRON::AngleType3::a3t70x8:			kgInMeter = 8.3700f;			break;
		case IRON::AngleType3::a3t75x5:			kgInMeter = 5.8000f;			break;
		case IRON::AngleType3::a3t75x6:			kgInMeter = 6.8900f;			break;
		case IRON::AngleType3::a3t75x7:			kgInMeter = 7.9600f;			break;
		case IRON::AngleType3::a3t75x8:			kgInMeter = 9.0200f;			break;
		case IRON::AngleType3::a3t75x9:			kgInMeter = 10.070f;			break;
		case IRON::AngleType3::a3t80x5_5:		kgInMeter = 6.7800f;			break;
		case IRON::AngleType3::a3t80x6:			kgInMeter = 7.3600f;			break;
		case IRON::AngleType3::a3t80x7:			kgInMeter = 8.5100f;			break;
		case IRON::AngleType3::a3t80x8:			kgInMeter = 9.6500f;			break;
		case IRON::AngleType3::a3t90x6:			kgInMeter = 8.3300f;			break;
		case IRON::AngleType3::a3t90x7:			kgInMeter = 9.6400f;			break;
		case IRON::AngleType3::a3t90x8:			kgInMeter = 10.930f;			break;
		case IRON::AngleType3::a3t90x9:			kgInMeter = 12.200f;			break;
		case IRON::AngleType3::a3t100x6_5:		kgInMeter = 10.060f;			break;
		case IRON::AngleType3::a3t100x7:		kgInMeter = 10.790f;			break;
		case IRON::AngleType3::a3t100x8:		kgInMeter = 12.250f;			break;
		case IRON::AngleType3::a3t100x10:		kgInMeter = 15.100f;			break;
		case IRON::AngleType3::a3t100x12:		kgInMeter = 17.900f;			break;
		case IRON::AngleType3::a3t100x14:		kgInMeter = 20.630f;			break;
		case IRON::AngleType3::a3t100x16:		kgInMeter = 23.300f;			break;
		case IRON::AngleType3::a3t110x7:		kgInMeter = 11.890f;			break;
		case IRON::AngleType3::a3t110x8:		kgInMeter = 13.500f;			break;
		case IRON::AngleType3::a3t125x8:		kgInMeter = 15.460f;			break;
		case IRON::AngleType3::a3t125x9:		kgInMeter = 17.300f;			break;
		case IRON::AngleType3::a3t125x10:		kgInMeter = 19.100f;			break;
		case IRON::AngleType3::a3t125x12:		kgInMeter = 22.680f;			break;
		case IRON::AngleType3::a3t125x14:		kgInMeter = 26.200f;			break;
		case IRON::AngleType3::a3t125x16:		kgInMeter = 29.650f;			break;
		case IRON::AngleType3::a3t140x9:		kgInMeter = 19.410f;			break;
		case IRON::AngleType3::a3t140x10:		kgInMeter = 21.450f;			break;
		case IRON::AngleType3::a3t140x12:		kgInMeter = 25.500f;			break;
		case IRON::AngleType3::a3t160x10:		kgInMeter = 24.670f;			break;
		case IRON::AngleType3::a3t160x11:		kgInMeter = 27.020f;			break;
		case IRON::AngleType3::a3t160x12:		kgInMeter = 29.350f;			break;
		case IRON::AngleType3::a3t160x14:		kgInMeter = 34.200f;			break;
		case IRON::AngleType3::a3t160x16:		kgInMeter = 38.520f;			break;
		case IRON::AngleType3::a3t160x18:		kgInMeter = 43.010f;			break;
		case IRON::AngleType3::a3t160x20:		kgInMeter = 47.410f;			break;
		case IRON::AngleType3::a3t180x11:		kgInMeter = 30.470f;			break;
		case IRON::AngleType3::a3t180x12:		kgInMeter = 33.120f;			break;
		case IRON::AngleType3::a3t200x12:		kgInMeter = 36.970f;			break;
		case IRON::AngleType3::a3t200x13:		kgInMeter = 39.920f;			break;
		case IRON::AngleType3::a3t200x14:		kgInMeter = 42.800f;			break;
		case IRON::AngleType3::a3t200x16:		kgInMeter = 48.650f;			break;
		case IRON::AngleType3::a3t200x20:		kgInMeter = 60.080f;			break;
		case IRON::AngleType3::a3t200x25:		kgInMeter = 74.020f;			break;
		case IRON::AngleType3::a3t200x30:		kgInMeter = 87.560f;			break;
		case IRON::AngleType3::a3t220x14:		kgInMeter = 47.400f;			break;
		case IRON::AngleType3::a3t220x16:		kgInMeter = 53.830f;			break;
		case IRON::AngleType3::a3t250x16:		kgInMeter = 61.550f;			break;
		case IRON::AngleType3::a3t250x18:		kgInMeter = 68.860f;			break;
		case IRON::AngleType3::a3t250x20:		kgInMeter = 76.110f;			break;
		case IRON::AngleType3::a3t250x22:		kgInMeter = 83.310f;			break;
		case IRON::AngleType3::a3t250x25:		kgInMeter = 93.970f;			break;
		case IRON::AngleType3::a3t250x28:		kgInMeter = 104.50f;			break;
		case IRON::AngleType3::a3t250x30:		kgInMeter = 111.44f;			break;
		case IRON::AngleType3::a3t250x35:		kgInMeter = 128.51f;			break;
		default:								kgInMeter = 0.f;				break;
		}
	}
	else if (indexItems == IRON::Items::ItemAngle4)
	{
		switch (index)
		{
		case IRON::AngleType4::a4t36x3:			kgInMeter = 1.570f;				break;
		case IRON::AngleType4::a4t40x2_5:		kgInMeter = 1.480f;				break;
		case IRON::AngleType4::a4t40x3:			kgInMeter = 1.760f;				break;
		case IRON::AngleType4::a4t50x3:			kgInMeter = 2.230f;				break;
		case IRON::AngleType4::a4t50x4:			kgInMeter = 2.900f;				break;
		case IRON::AngleType4::a4t55x3:			kgInMeter = 2.430f;				break;
		case IRON::AngleType4::a4t60x3:			kgInMeter = 2.700f;				break;
		case IRON::AngleType4::a4t60x4:			kgInMeter = 3.530f;				break;
		case IRON::AngleType4::a4t70x4:			kgInMeter = 4.160f;				break;
		case IRON::AngleType4::a4t80x3:			kgInMeter = 3.640f;				break;
		case IRON::AngleType4::a4t80x4:			kgInMeter = 4.790f;				break;
		case IRON::AngleType4::a4t80x5:			kgInMeter = 5.920f;				break;
		case IRON::AngleType4::a4t80x6:			kgInMeter = 7.010f;				break;
		case IRON::AngleType4::a4t80x7:			kgInMeter = 8.110f;				break;
		case IRON::AngleType4::a4t100x4:		kgInMeter = 6.050f;				break;
		case IRON::AngleType4::a4t100x5:		kgInMeter = 7.490f;				break;
		case IRON::AngleType4::a4t100x6:		kgInMeter = 8.890f;				break;
		case IRON::AngleType4::a4t100x7:		kgInMeter = 10.31f;				break;
		case IRON::AngleType4::a4t120x5:		kgInMeter = 9.060f;				break;
		case IRON::AngleType4::a4t120x6:		kgInMeter = 10.78f;				break;
		case IRON::AngleType4::a4t160x4:		kgInMeter = 9.760f;				break;
		default:								kgInMeter = 0.f;				break;
		}
	}
	else
	{

		//resultFloat = std::stof(resultMsg) * indexItems + indexCB2;
	}

	std::string resultMsg { inputCount };
	float resultFloat{};

	if (!msgLengthOrWeight)
		resultFloat = std::stof(resultMsg) * kgInMeter / 100;	// ¬вод сантиметры вывод кг, поэтому kgInMeter / 100 
	else
		resultFloat = std::stof(resultMsg) / kgInMeter;			// ¬вод в кг вывод метры, если надо сантиметры умножай на 100

	resultMsg = std::to_string(resultFloat);

	SetWindowTextA(msgResult, resultMsg.c_str());
}