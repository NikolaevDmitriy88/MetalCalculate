#pragma once

#include <Windows.h>
#include <string>

extern HWND hwnd;
extern HWND comboBoxMetalType;
extern HWND comboBoxItems;
extern HWND comboBoxArmature;
extern HWND comboBoxBeamGOST;
extern HWND comboBoxBeamNormal;
extern HWND comboBoxBeamWide;
extern HWND comboBoxBeamColumn;
extern HWND comboBoxBeamASeries;
extern HWND comboBoxSquare;
extern HWND comboBoxCircle;
extern HWND comboBoxCulvertCircle;
extern HWND comboBoxCulvertProfileSq;
extern HWND comboBoxCulvertProfileRec;
extern HWND comboBoxAngle1;
extern HWND comboBoxAngle2;
extern HWND comboBoxAngle3;
extern HWND comboBoxAngle4;
extern HWND comboBoxChannel1;
extern HWND comboBoxChannel2;
extern HWND comboBoxChannel3;

extern HWND comboBoxTape;
extern HWND comboBoxList;

extern HWND msg;
extern HWND msg2;
extern HWND edit;
extern HWND msgResult;
extern HWND buttonLengthOrWeight;

extern char inputCount[15];

extern UINT16 indexMetalType;
extern UINT16 index;
extern UINT16 indexItems;

extern bool msgLengthOrWeight;

void CalculateResult(HWND msgResult);

void buildGUI();

namespace IRON
{
	enum comboBoxID
	{
		buttonQuitID = 1, buttonCalcID, buttonLengthOrWeightID, editID, comboBoxItemsID,
		comboBoxMetalTypeID, comboBoxArmatureID, comboBoxBeamGOSTID, comboBoxBeamNormalID,
		comboBoxBeamWideID, comboBoxBeamColumnID, comboBoxBeamASeriesID, comboBoxSquareID,
		comboBoxCircleID, comboBoxCulvertCircleID, comboBoxCulvertProfileSqID,
		comboBoxCulvertProfileRecID, comboBoxAngle1ID, comboBoxAngle2ID, comboBoxAngle3ID,
		comboBoxAngle4ID, comboBoxChannel1ID, comboBoxChannel2ID, comboBoxChannel3ID,
		comboBoxTapeID, comboBoxListID
	};

	enum Items
	{
		ItemArmature = 0, ItemBeamGost8239_89, ItemBeamNormal, ItemBeamWide, ItemBeamColumn,
		ItemBeamAdditionSeries, ItemSquare, ItemCircle, ItemCulvertCircle, ItemCulvertProfileSq,
		ItemCulvertProfileRec, ItemAngle1, ItemAngle2, ItemAngle3, ItemAngle4, ItemChannel1,
		ItemChannel2, ItemChannel3, ItemTape, ItemList
	};
	//============================ ���� ����� =================================
	enum MetalType
	{
		mtST_3 = 0, mt10, mt20, mt40H, mt45, mt65, mt65G, mt09G2S, mt15H5M, mt10HSND,
		mt12H1MF, mtSHH15, mtR6M5, mtU7, mtU8, mtU8A, mtU10, mtU10A, mtU12A
	};
	//=========================== �������� ====================================
	enum ArmatureDiameter
	{
		D6 = 0, D6_5, D8, D10, D12, D14, D16, D18, D20, D22, D25, D28, D32,
		D36, D40, D45, D50, D55, D60, D70, D80
	};

	//====================== ���� �����/������� ===============================
	enum BeamGost8239_89
	{
		N10 = 0, N12, N14, N16, N18, N20, N22, N24, N27,
		N30, N33, N36, N40, N45, N50, N55, N60
	};

	enum BeamNormal
	{
		t10B1 = 0, t12B1, t12B2, t14B1, t14B2, t16B1, t16B2, t18B1, t18B2, t20B1,
		t23B1, t26B1, t26B2, t30B1, t30B2, t35B1, t35B2, t40B1, t40B2, t45B1,
		t45B2, t50B1, t50B2, t55B1, t55B2, t60B1, t60B2, t70B1, t70B2, t80B1,
		t80B2, t90B1, t90B2, t100B1, t100B2, t100B3, t100B4
	};

	enum BeamWide
	{
		t20SH1 = 0, t23SH1, t26SH1, t26SH2, t30SH1, t30SH2, t30SH3, t35SH1, t35SH2,
		t35SH3, t40SH1, t40SH2, t40SH3, t50SH1, t50SH2, t50SH3, t50SH4, t60SH1,
		t60SH2, t60SH3, t60SH4, t70SH1, t70SH2, t70SH3, t70SH4, t70SH5
	};

	enum BeamColumn
	{
		t20K1 = 0, t20K2, t23K1, t23K2, t26K1, t26K2, t26K3, t30K1, t30K2,
		t30K3, t35K1, t35K2, t35K3, t40K1, t40K2, t40K3, t40K4, t40K5
	};

	enum BeamAdditionSeries
	{
		t24DB1 = 0, t27DB1, t36DB1, t35BD1, t40DB1, t45DB1, t45DB2,
		t30DSH1, t40DSH1, t50DSH1
	};

	enum SquareSize
	{
		t3 = 0, t3_2, t3_5, t4, t4_5, t5, t5_5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17,
		t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t32, t34, t35, t36, t38, t40,
		t42, t45, t46, t48, t50, t52, t55, t58, t60, t63, t65, t70, t75, t80, t85, t90, t93, t95, t100,
		t105, t110, t115, t120, t125, t130, t135, t140, t145, t150, t160, t170, t180, t190, t200

	};

	enum Circle
	{
		d5 = 0, d5_5, d6, d6_3, d6_5, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18,
		d19, d20, d21, d22, d23, d24, d25, d26, d27, d28, d29, d30, d31, d32, d33, d34, d35, d36,
		d37, d38, d39, d40, d41, d42, d43, d44, d45, d46, d47, d48, d50, d52, d53, d54, d55, d56,
		d58, d60, d62, d63, d65, d67, d68, d70, d72, d73, d75, d78, d80, d82, d85, d87, d90, d92,
		d95, d97, d100, d105, d110, d115, d120, d125, d130, d135, d140, d145, d150, d155, d160,
		d165, d170, d175, d180, d185, d190, d195, d200, d210, d220, d230, d240, d250, d260, d270
	};

	enum CulvertCircle
	{
		t6x10_2x1_8 = 0, t8x13_5x2, t10x17x2, t15x21_3x2_35, t15x21_3x2_5, t20x26_8x2_35, t20x26_8x2_5,
		t25x33_5x2_8, t32x42_3x2_8, t40x48x3, t50x60x3, t65x75_5x3_3, t80x88_5x3_5, t90x101_3x3_5,
		t100x114x4, t125x140x4, t150x165x4, t6x10_2x2, t8x13_5x2_2, t10x17x2_2, t15x21_3x2_8,
		t20x26_8x2_8, t25x33_5x3_2, t32x42_3x3_2, t40x48x3_5, t50x60x3_5, t65x75_5x4, t80x88_5x4,
		t90x101_3x4, t100x114x4_5, t125x140x4_5, t150x165x4_5, t6x10_2x2_5, t8x13_5x2_8, t10x17x2_8,
		t15x21_3x3_2, t20x26_8x3_2, t25x33_5x4, t32x42_3x4, t40x48x4, t50x60x4_5, t65x75_5x4_5,
		t80x88_5x4_5, t90x101_3x4_5, t100x114x5, t125x140x5_5, t150x165x5_5
	};

	enum CulvertProfileSq
	{
		cp10x0_8 = 0, cp10x0_9, cp10x1, cp10x1_2, cp10x1_4, cp15x0_8, cp15x0_9, cp15x1, cp15x1_2, cp15x1_4, cp15x1_5,
		cp20x0_8, cp20x0_9, cp20x1, cp20x1_2, cp20x1_4, cp20x1_5, cp20x2, cp25x0_8, cp25x0_9, cp25x1, cp25x1_2,
		cp25x1_4, cp25x1_5, cp25x2, cp25x2_5, cp25x3, cp30x0_8, cp30x0_9, cp30x1, cp30x1_2, cp30x1_3, cp30x1_4,
		cp30x1_5, cp30x2, cp30x2_5, cp30x3, cp30x3_5, cp30x4, cp32x4, cp35x0_8, cp35x0_9, cp35x1_4, cp35x1_5,
		cp35x2, cp35x2_5, cp35x3, cp35x3_5, cp35x4, cp35x5, cp36x4, cp40x1_4, cp40x1_5, cp40x2, cp40x2_5, cp40x3,
		cp40x3_5, cp40x4, cp40x5, cp40x6, cp42x3, cp42x3_5, cp42x4, cp42x5, cp42x6, cp45x2, cp45x3, cp45x3_5,
		cp45x4, cp45x5, cp45x6, cp45x7, cp45x8, cp50x2, cp50x2_5, cp50x3, cp50x3_5, cp50x4, cp50x4_5, cp50x5,
		cp50x6, cp50x7, cp50x8, cp55x3, cp60x2, cp60x2_5, cp60x3, cp60x3_5, cp60x4, cp60x5, cp60x6, cp60x7,
		cp60x8, cp65x6, cp70x3, cp70x3_5, cp70x4, cp70x5, cp70x6, cp70x7, cp70x8, cp80x3, cp80x3_5, cp80x4,
		cp80x5, cp80x6, cp80x7, cp80x8, cp80x9, cp80x10, cp80x11, cp90x3, cp90x4, cp90x5, cp90x6, cp90x7, cp90x8,
		cp100x3, cp100x4, cp100x5, cp100x6, cp100x7, cp100x8, cp100x9, cp110x6, cp110x7, cp110x8, cp110x9, cp120x6,
		cp120x7, cp120x8, cp120x9, cp140x6, cp140x7, cp140x8, cp140x9, cp150x7, cp150x8, cp150x9, cp150x10, cp180x8,
		cp180x9, cp180x10, cp180x12, cp180x14
	};

	enum CulvertProfileRec
	{
		cpr15x10x1 = 0, cpr15x10x1_5, cpr15x10x2, cpr20x10x1, cpr20x10x1_2, cpr20x10x1_5, cpr20x10x2,
		cpr20x15x1, cpr20x15x1_2, cpr20x15x1_5, cpr20x15x2, cpr20x15x2_5, cpr25x10x1, cpr25x10x1_5,
		cpr25x10x2, cpr25x10x2_5, cpr25x15x0_8, cpr25x15x0_9, cpr25x15x1, cpr25x15x1_2, cpr25x15x1_5,
		cpr25x15x2, cpr25x15x2_5, cpr30x10x1, cpr30x10x1_5, cpr30x10x2, cpr30x10x2_5, cpr30x10x3,
		cpr30x15x0_8, cpr30x15x0_9, cpr30x15x1, cpr30x15x1_2, cpr30x15x1_5, cpr30x15x2, cpr30x15x2_5,
		cpr30x15x3, cpr30x20x0_8, cpr30x20x0_9, cpr30x20x1, cpr30x20x1_2, cpr30x20x1_5, cpr30x20x2,
		cpr30x20x2_5, cpr30x20x3, cpr35x15x0_8, cpr35x15x0_9, cpr35x15x1, cpr35x15x1_2, cpr35x15x1_5,
		cpr35x15x2, cpr35x15x2_5, cpr35x15x3, cpr35x15x3_5, cpr35x20x0_8, cpr35x20x0_9, cpr35x20x1,
		cpr35x20x1_2, cpr35x20x1_5, cpr35x20x2, cpr35x20x2_5, cpr35x20x3, cpr35x20x3_5, cpr35x25x1_5,
		cpr35x25x2, cpr35x25x2_5, cpr35x25x3, cpr35x25x3_5, cpr35x30x0_8, cpr35x30x0_9, cpr35x30x1,
		cpr35x30x1_2, cpr35x30x1_5, cpr35x30x2, cpr40x15x2, cpr40x15x2_5, cpr40x15x3, cpr40x15x3_5,
		cpr40x15x4, cpr40x20x0_8, cpr40x20x0_9, cpr40x20x1, cpr40x20x1_2, cpr40x20x1_5, cpr40x20x2,
		cpr40x20x2_5, cpr40x20x3, cpr40x20x3_5, cpr40x20x4, cpr40x25x1_5, cpr40x25x2, cpr40x25x2_5,
		cpr40x25x3, cpr40x25x3_5, cpr40x25x4, cpr40x30x1_5, cpr40x30x2, cpr40x30x2_5, cpr40x30x3,
		cpr40x30x3_5, cpr40x30x4, cpr42x20x2, cpr42x20x2_5, cpr42x20x3, cpr42x20x3_5, cpr42x20x4,
		cpr42x30x2, cpr42x30x2_5, cpr50x25x4, cpr42x30x3, cpr42x30x3_5, cpr42x30x4, cpr45x20x2,
		cpr45x20x2_5, cpr45x20x3, cpr45x20x3_5, cpr45x20x4, cpr45x30x2, cpr45x30x2_5, cpr45x30x3,
		cpr45x30x3_5, cpr45x30x4, cpr50x25x1_5, cpr50x25x2, cpr50x25x2_5, cpr50x25x3, cpr50x25x3_5,
		cpr50x30x1_5, cpr50x30x2, cpr50x30x2_5, cpr50x30x3, cpr50x30x3_5, cpr50x30x4, cpr50x35x1_5,
		cpr50x35x2, cpr50x35x2_2, cpr50x35x2_5, cpr50x35x3, cpr50x35x3_5, cpr50x35x4, cpr50x40x2,
		cpr50x40x2_5, cpr50x40x3, cpr50x40x3_5, cpr50x40x4, cpr60x20x2, cpr60x25x2_5, cpr60x25x3,
		cpr60x25x3_5, cpr60x25x4, cpr60x25x5, cpr60x30x1_5, cpr60x30x2, cpr60x30x2_5, cpr60x30x3,
		cpr60x30x3_5, cpr60x30x4, cpr60x30x5, cpr60x40x1_5, cpr60x40x2, cpr60x40x2_5, cpr60x40x3,
		cpr60x40x3_5, cpr60x40x4, cpr60x40x5, cpr70x30x3, cpr70x30x3_5, cpr70x30x4, cpr70x30x5,
		cpr70x30x6, cpr70x40x3, cpr70x40x3_5, cpr70x40x4, cpr70x40x5, cpr70x40x6, cpr70x50x3,
		cpr70x50x3_5, cpr70x50x4, cpr70x50x5, cpr70x50x6, cpr80x40x2, cpr80x40x3, cpr80x40x3_5,
		cpr80x40x4, cpr80x40x5, cpr80x40x6, cpr80x40x7, cpr80x50x3, cpr80x50x3_5, cpr80x50x4,
		cpr80x60x3_5, cpr80x60x4, cpr80x60x5, cpr80x60x6, cpr80x60x7, cpr90x40x3_5, cpr90x40x4,
		cpr90x40x5, cpr90x40x6, cpr90x40x7, cpr90x60x4, cpr90x60x5, cpr90x60x6, cpr90x60x7,
		cpr100x40x4, cpr100x40x5, cpr100x40x6, cpr100x40x7, cpr100x50x4, cpr100x50x5, cpr100x50x6,
		cpr100x50x7, cpr100x60x3, cpr100x60x3_5, cpr100x60x4, cpr100x70x4, cpr100x70x5, cpr100x70x6,
		cpr100x70x7, cpr110x40x4, cpr110x40x5, cpr110x40x6, cpr110x40x7, cpr110x50x4, cpr110x50x5,
		cpr110x50x6, cpr110x50x7, cpr110x60x4, cpr110x60x5, cpr110x60x6, cpr110x60x7, cpr120x40x5,
		cpr120x40x6, cpr120x40x7, cpr120x40x8, cpr120x60x5, cpr120x60x6, cpr120x60x7, cpr120x60x8,
		cpr120x80x5, cpr120x80x6, cpr120x80x7, cpr120x80x8, cpr140x60x5, cpr140x60x6, cpr140x60x7,
		cpr140x60x8, cpr140x80x5, cpr140x80x6, cpr140x80x7, cpr140x80x8, cpr140x120x6, cpr140x120x7,
		cpr140x120x8, cpr140x120x9, cpr150x80x6, cpr150x80x7, cpr150x80x8, cpr150x80x9, cpr150x80x10,
		cpr150x100x6, cpr150x100x7, cpr150x100x8, cpr150x100x9, cpr150x100x10, cpr180x80x7, cpr180x80x8,
		cpr180x80x9, cpr180x80x10, cpr180x80x12, cpr180x100x8, cpr180x100x9, cpr180x100x10, cpr180x100x12,
		cpr180x150x8, cpr180x150x9, cpr180x150x10, cpr180x150x12, cpr28x25x0_8, cpr28x25x0_9, cpr28x25x1,
		cpr28x25x1_2, cpr28x25x1_5, cpr28x25x2, cpr28x25x2_5, cpr40x28x1_5, cpr40x28x2, cpr40x28x2_5,
		cpr70x50x7, cpr90x50x3, cpr140x60x3, cpr150x60x7, cpr160x130x8, cpr180x145x20, cpr190x120x12,
		cpr195x170x18, cpr200x120x8, cpr230x100x8
	};
	// ������ �������� ������ ���������������
	enum AngleType1
	{
		a1t32x25x2 = 0, a1t32x25x2_5, a1t40x25x2_5, a1t50x35x3_2, a1t60x40x3,
		a1t70x50x4, a1t80x63x4, a1t85x35x4, a1t85x67x4, a1t90x70x4, a1t100x65x4,
		a1t105x100x3, a1t110x90x5, a1t115x65x5, a1t120x100x8, a1t147x125x8,
		a1t152x100x5_5, a1t155x100x6, a1t180x140x6
	};
	// ������ �������� ������������� ���������������
	enum AngleType2
	{
		a2t25x16x3 = 0, a2t30x20x3, a2t30x20x4, a2t32x20x3, a2t32x20x4, a2t40x25x3, a2t40x25x4,
		a2t40x25x5, a2t40x30x4, a2t40x30x5, a2t45x28x3, a2t45x28x4, a2t50x32x3, a2t50x32x4,
		a2t56x36x4, a2t56x36x5, a2t63x40x4, a2t63x40x5, a2t63x40x6, a2t63x40x8, a2t65x50x5,
		a2t65x50x6, a2t65x50x7, a2t65x50x8, a2t70x45x5, a2t75x50x5, a2t75x50x6, a2t75x50x7,
		a2t75x50x8, a2t80x50x5, a2t80x50x6, a2t80x60x6, a2t80x60x7, a2t80x60x8, a2t90x56x5_5,
		a2t90x56x6, a2t90x56x8, a2t100x63x6, a2t100x63x7, a2t100x63x8, a2t100x63x10, a2t100x65x7,
		a2t100x65x8, a2t100x65x10, a2t110x70x6_5, a2t110x70x8, a2t125x80x7, a2t125x80x8, a2t125x80x10,
		a2t125x80x12, a2t140x90x8, a2t140x90x10, a2t160x100x9, a2t160x100x10, a2t160x100x12, a2t160x100x14,
		a2t180x110x10, a2t180x110x11, a2t180x110x12, a2t200x125x12, a2t200x125x14, a2t200x125x16
	};
	// ������ �������� ������������� �������������
	enum AngleType3
	{
		a3t20x3 = 0, a3t20x4, a3t25x3, a3t25x4, a3t28x3, a3t30x3, a3t30x4, a3t32x3, a3t32x4,
		a3t35x3, a3t35x4, a3t35x5, a3t40x3, a3t40x4, a3t40x5, a3t45x3, a3t45x4, a3t45x5,
		a3t50x3, a3t50x4, a3t50x5, a3t50x6, a3t56x4, a3t56x5, a3t63x4, a3t63x5, a3t63x6,
		a3t70x4_5, a3t70x5, a3t70x6, a3t70x7, a3t70x8, a3t75x5, a3t75x6, a3t75x7, a3t75x8,
		a3t75x9, a3t80x5_5, a3t80x6, a3t80x7, a3t80x8, a3t90x6, a3t90x7, a3t90x8, a3t90x9,
		a3t100x6_5, a3t100x7, a3t100x8, a3t100x10, a3t100x12, a3t100x14, a3t100x16, a3t110x7,
		a3t110x8, a3t125x8, a3t125x9, a3t125x10, a3t125x12, a3t125x14, a3t125x16, a3t140x9,
		a3t140x10, a3t140x12, a3t160x10, a3t160x11, a3t160x12, a3t160x14, a3t160x16, a3t160x18,
		a3t160x20, a3t180x11, a3t180x12, a3t200x12, a3t200x13, a3t200x14, a3t200x16, a3t200x20,
		a3t200x25, a3t200x30, a3t220x14, a3t220x16, a3t250x16, a3t250x18, a3t250x20, a3t250x22,
		a3t250x25, a3t250x28, a3t250x30, a3t250x35
	};
	// ������ �������� ������ �������������
	enum AngleType4
	{
		a4t36x3 = 0, a4t40x2_5, a4t40x3, a4t50x3, a4t50x4, a4t55x3, a4t60x3, a4t60x4, a4t70x4,
		a4t80x3, a4t80x4, a4t80x5, a4t80x6, a4t80x7, a4t100x4, a4t100x5, a4t100x6, a4t100x7,
		a4t120x5, a4t120x6, a4t160x4
	};
	// ������� ������������� ������������� 
	enum ChannelType1
	{
		c1t5U = 0, c1t6_5U, c1t8U, c1t10U, c1t12U, c1t14U, c1t16U, c1t16aU, c1t18U, c1t18aU, c1t20U,
		c1t22U, c1t24U, c1t27U, c1t30U, c1t33U, c1t36U, c1t40U, c1t5P, c1t6_5P, c1t8P, c1t10P, c1t12P,
		c1t14P, c1t16P, c1t16aP, c1t18P, c1t18aP, c1t20P, c1t22P, c1t24P, c1t27P, c1t30P, c1t33P, c1t36P,
		c1t40P, c1t5E, c1t6_5E, c1t8E, c1t10E, c1t12E, c1t14E, c1t16E, c1t18E, c1t20E, c1t22E, c1t24E, c1t27E,
		c1t30E, c1t33E, c1t36E, c1t40E, c1t12L, c1t14L, c1t16L, c1t18L, c1t20L, c1t22L, c1t24L, c1t27L, c1t30L,
		c1t8S, c1t14S, c1t14Sa, c1t16S, c1t16Sa, c1t18S, c1t18Sa, c1t18Sb, c1t20S, c1t20Sa, c1t20Sb, c1t24S,
		c1t26S, c1t26Sa, c1t30S, c1t30Sa, c1t30Sb
	};
	// ������� ������ ������������� 
	enum ChannelType2
	{
		c2t25x26x2, c2t25x30x2, c2t28x27x2_5, c2t30x25x3, c2t30x30x2, c2t32x25x3, c2t32x32x2, c2t38x95x2_5,
		c2t40x20x2, c2t40x20x3, c2t40x30x2, c2t40x30x2_5, c2t40x40x2, c2t40x40x2_5, c2t40x40x3, c2t42x42x4,
		c2t43x45x2, c2t45x25x3, c2t45x31x2, c2t48x70x5, c2t50x30x2, c2t50x30x2_5, c2t50x32x2_5, c2t50x40x2,
		c2t50x40x2_5, c2t50x40x3, c2t50x40x4, c2t50x47x6, c2t50x50x2_5, c2t50x50x3, c2t50x50x4, c2t60x26x2_5,
		c2t60x30x2_5, c2t60x30x3, c2t60x32x2_5, c2t60x32x3, c2t60x32x4, c2t60x40x2, c2t60x40x3, c2t60x50x3,
		c2t60x60x3, c2t60x60x4, c2t60x80x3, c2t60x90x5, c2t63x21x2_2, c2t65x75x4, c2t68x27x1, c2t70x30x2,
		c2t70x40x3, c2t70x50x3, c2t70x50x4, c2t70x60x4, c2t78x46x6, c2t80x25x4, c2t80x32x4, c2t80x35x4, 
		c2t80x40x2_5, c2t80x40x3, c2t80x50x4, c2t80x60x3, c2t80x60x4, c2t80x60x6, c2t80x80x3, c2t80x80x4,
		c2t80x85x4, c2t80x100x6, c2t90x50x3_5, c2t90x54x5, c2t90x100x2_5, c2t100x40x2_5, c2t100x40x3, c2t100x50x3,
		c2t100x50x4, c2t100x50x5, c2t100x50x6, c2t100x60x3, c2t100x60x4, c2t100x80x3, c2t100x80x4, c2t100x80x5,
		c2t100x100x3, c2t100x100x6, c2t100x160x4, c2t104x20x2, c2t106x50x4, c2t108x70x6, c2t110x26x2_5, c2t110x50x4,
		c2t110x50x5, c2t110x100x4, c2t120x25x4, c2t120x50x3, c2t120x50x4, c2t120x50x6, c2t120x60x4, c2t120x60x5,
		c2t120x60x6, c2t120x70x5, c2t120x80x4, c2t120x80x5, c2t140x40x2_5, c2t140x40x3, c2t140x60x3, c2t140x60x5,
		c2t140x60x6, c2t140x70x5, c2t140x80x4, c2t140x80x5, c2t145x65x3, c2t148x25x4, c2t160x40x2, c2t160x40x3,
		c2t160x40x5, c2t160x50x2_5, c2t160x50x4, c2t160x50x5, c2t160x50x6, c2t160x60x2_5, c2t160x60x3, c2t160x60x4,
		c2t160x60x5, c2t160x60x6, c2t160x70x4, c2t160x80x2_5, c2t160x80x3, c2t160x80x4, c2t160x80x5, c2t160x80x6,
		c2t160x100x3, c2t160x100x6, c2t160x120x5, c2t160x120x6, c2t160x160x6, c2t170x60x4, c2t170x70x5, c2t170x70x6,
		c2t180x40x3, c2t180x40x4, c2t180x50x4, c2t180x70x6, c2t180x80x4, c2t180x80x5, c2t180x80x6, c2t180x100x5,
		c2t180x100x6, c2t180x130x8, c2t185x100x3, c2t200x50x3, c2t200x50x4, c2t200x80x4, c2t200x80x5, c2t200x80x6,
		c2t200x100x3, c2t200x100x6, c2t200x180x6, c2t205x38x2_5, c2t206x75x6, c2t210x57x4, c2t250x35x3, c2t250x60x3,
		c2t250x60x4, c2t250x60x5, c2t250x60x6, c2t250x125x6, c2t270x100x7, c2t280x60x3_9, c2t280x140x5, c2t300x80x6,
		c2t300x100x8, c2t310x100x6, c2t380x65x6, c2t400x95x8, c2t410x65x6
	};
		// ������� ������ ��������������� 
	enum ChannelType3
	{
		c3t32x22x12x3, c3t32x32x20x2, c3t32x40x15x3, c3t32x50x20x4, c3t35x35x26x2_5, c3t37x60x32x3, c3t40x32x20x2,
		c3t40x40x20x2, c3t40x50x32x3, c3t43x106x32x3, c3t45x25x15x3, c3t50x40x12x2_5, c3t50x48x15x3, c3t50x40x20x2,
		c3t50x50x15x3, c3t50x50x25x2, c3t50x50x25x3, c3t50x50x25x4, c3t50x55x30x2, c3t50x60x32x3, c3t50x60x32x4,
		c3t50x92x60x3, c3t60x40x20x2, c3t60x50x25x3, c3t60x60x32x3, c3t65x55x20x2_5, c3t65x65x40x4, c3t67x65x35x3,
		c3t70x80x50x4, c3t80x50x25x3, c3t80x60x32x3, c3t80x60x40x3, c3t80x80x40x3, c3t80x80x40x5, c3t80x80x50x4,
		c3t90x80x50x4, c3t100x50x25x3, c3t100x60x32x3, c3t100x80x40x3, c3t100x80x50x4, c3t100x80x50x5, c3t100x100x60x4,
		c3t100x100x60x6, c3t100x180x35x8, c3t120x45x35x5, c3t120x60x50x5, c3t130x108x50x4,c3t135x50x36x4, c3t140x70x30x4,
		c3t144x160x90x6, c3t160x50x30x3, c3t160x50x30x4, c3t160x80x50x5, c3t200x50x30x4, c3t270x90x72x8, c3t270x90x80x6,
		c3t300x80x40x4, c3t300x80x40x5
	};

	enum Tape
	{

	};

	enum List
	{

	};


	/*enum BeamWeld
	{
		t45BS1 = 0, t45BS2, t45BS3, t50BS1, t50BS2, t50BS3, t50BS4, t55BS1, t55BS2, t60BS1,
		t60BS2, t60BS3, t60BS4, t60BS5, t60BS6, t70BS1, t70BS2, t70BS3, t70BS4, t70BS5,
		t70BS6, t80BS1, t80BS2, t90BS1, t90BS2, t100BS1, t100BS2, t100BS3, t120BS1, t120BS2,
		t140BS1, t140BS2, t140BS3, t160BS1, t160BS2, t160BS3, t160BS4, t180BS1, t180BS2,
		t180BS3, t180BS4, t200BS1, t200BS2, t200BS3
	};
	enum PipeBend1 {};
	enum PipeBend2 {};
	enum Flange {};
	enum Hexahedron {};
	*/
	//HWND comboBoxBeamWeld;
}
