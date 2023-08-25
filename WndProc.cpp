#include "Header.h"

using namespace IRON;

LRESULT WINAPI WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{
	if (message == WM_DESTROY)
		PostQuitMessage(0);

	if (message == WM_COMMAND)
	{
		//======================================================================================
		//====================== Список элементов выбранной продукции ==========================

		if (LOWORD(wparam) == comboBoxItemsID)
		{
			if (HIWORD(wparam) == CBN_SELCHANGE)
			{
				indexItems = (UINT16)SendMessage((HWND)lparam, CB_GETCURSEL, 0, 0);

				if (indexItems == Items::ItemArmature)
					ShowWindow(comboBoxArmature, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxArmature, SW_HIDE);

				if (indexItems == Items::ItemBeamGost8239_89)
					ShowWindow(comboBoxBeamGOST, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxBeamGOST, SW_HIDE);

				if (indexItems == Items::ItemBeamNormal)
					ShowWindow(comboBoxBeamNormal, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxBeamNormal, SW_HIDE);

				if (indexItems == Items::ItemBeamWide)
					ShowWindow(comboBoxBeamWide, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxBeamWide, SW_HIDE);

				if (indexItems == Items::ItemBeamColumn)
					ShowWindow(comboBoxBeamColumn, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxBeamColumn, SW_HIDE);

				if (indexItems == Items::ItemBeamAdditionSeries)
					ShowWindow(comboBoxBeamASeries, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxBeamASeries, SW_HIDE);

				if (indexItems == Items::ItemSquare)
					ShowWindow(comboBoxSquare, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxSquare, SW_HIDE);

				if (indexItems == Items::ItemCircle)
					ShowWindow(comboBoxCircle, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxCircle, SW_HIDE);

				if (indexItems == Items::ItemCulvertCircle)
					ShowWindow(comboBoxCulvertCircle, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxCulvertCircle, SW_HIDE);

				if (indexItems == Items::ItemCulvertProfileSq)
					ShowWindow(comboBoxCulvertProfileSq, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxCulvertProfileSq, SW_HIDE);

				if (indexItems == Items::ItemCulvertProfileRec)
					ShowWindow(comboBoxCulvertProfileRec, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxCulvertProfileRec, SW_HIDE);

				if (indexItems == Items::ItemAngle1)
					ShowWindow(comboBoxAngle1, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxAngle1, SW_HIDE);

				if (indexItems == Items::ItemAngle2)
					ShowWindow(comboBoxAngle2, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxAngle2, SW_HIDE);

				if (indexItems == Items::ItemAngle3)
					ShowWindow(comboBoxAngle3, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxAngle3, SW_HIDE);

				if (indexItems == Items::ItemAngle4)
					ShowWindow(comboBoxAngle4, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxAngle4, SW_HIDE);

				if (indexItems == Items::ItemChannel1)
					ShowWindow(comboBoxChannel1, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxChannel1, SW_HIDE);

				if (indexItems == Items::ItemChannel2)
					ShowWindow(comboBoxChannel2, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxChannel2, SW_HIDE);

				if (indexItems == Items::ItemChannel3)
					ShowWindow(comboBoxChannel3, SW_SHOWNORMAL);
				else
					ShowWindow(comboBoxChannel3, SW_HIDE);

				if (indexItems == Items::ItemTape || indexItems == Items::ItemList)
				{
					ShowWindow(msgHight, SW_SHOWNORMAL);
					ShowWindow(editHight, SW_SHOWNORMAL);
					ShowWindow(msgWidth, SW_SHOWNORMAL);
					ShowWindow(editWidth, SW_SHOWNORMAL);
					ShowWindow(comboBoxMetalType, SW_SHOWNORMAL);
					isTabularInfo = false;
				}
				else
				{
					ShowWindow(msgHight, SW_HIDE);
					ShowWindow(editHight, SW_HIDE);
					ShowWindow(msgWidth, SW_HIDE);
					ShowWindow(editWidth, SW_HIDE);
					ShowWindow(comboBoxMetalType, SW_HIDE);
					isTabularInfo = true;
				}

			}
		}
		//======================================================================================
		//============================ Выбор из списка элементов ===============================

		if (
			LOWORD(wparam) == comboBoxArmatureID ||
			LOWORD(wparam) == comboBoxBeamGOSTID ||
			LOWORD(wparam) == comboBoxBeamNormalID ||
			LOWORD(wparam) == comboBoxBeamWideID ||
			LOWORD(wparam) == comboBoxBeamColumnID ||
			LOWORD(wparam) == comboBoxBeamASeriesID ||
			LOWORD(wparam) == comboBoxSquareID ||
			LOWORD(wparam) == comboBoxCircleID ||
			LOWORD(wparam) == comboBoxCulvertCircleID ||
			LOWORD(wparam) == comboBoxCulvertProfileSqID ||
			LOWORD(wparam) == comboBoxCulvertProfileRecID ||
			LOWORD(wparam) == comboBoxAngle1ID ||
			LOWORD(wparam) == comboBoxAngle2ID ||
			LOWORD(wparam) == comboBoxAngle3ID ||
			LOWORD(wparam) == comboBoxAngle4ID ||
			LOWORD(wparam) == comboBoxChannel1ID ||
			LOWORD(wparam) == comboBoxChannel2ID ||
			LOWORD(wparam) == comboBoxChannel3ID ||
			LOWORD(wparam) == comboBoxTapeID ||
			LOWORD(wparam) == comboBoxListID
			)
		{
			if (HIWORD(wparam) == CBN_SELCHANGE)
				index = (UINT16)SendMessage((HWND)lparam, CB_GETCURSEL, 0, 0);
		}

		if (LOWORD(wparam) == comboBoxMetalTypeID)
		{
			if (HIWORD(wparam) == CBN_SELCHANGE)
				indexMetalType = (UINT16)SendMessage((HWND)lparam, CB_GETCURSEL, 0, 0);
		}

		//================================= Выбор расчётов ======================================

		if (LOWORD(wparam) == buttonLengthOrWeightID)
		{
			msgLengthOrWeight = !msgLengthOrWeight ? true : false;

			if (!msgLengthOrWeight)
			{
				SetWindowTextW(msg, TEXT("длина в см"));
				SetWindowTextW(buttonLengthOrWeight, TEXT("см > кг"));
			}
			else
			{
				SetWindowTextW(msg, TEXT("вес в кг"));
				SetWindowTextW(buttonLengthOrWeight, TEXT("кг > см"));
			}
		}
		//======================================================================================
		//================================= Подсчитать результат ===============================

		if (LOWORD(wparam) == buttonCalcID)
		{
			GetWindowTextA(edit, inputCount, 15);
			SetWindowTextA(edit, "");

			GetWindowTextA(editHight, inputHight, 4);
			SetWindowTextA(editHight, "");

			GetWindowTextA(editWidth, inputWidth, 6);
			SetWindowTextA(editWidth, "");


			if ((isTabularInfo && inputCount[0]) ||
				(!isTabularInfo && inputCount[0] && inputHight[0] && inputWidth[0]))
				CalculateResult(msgResult);
			else
			{
				SetWindowTextW(msgResult, TEXT("результат"));
				SetWindowTextW(msg2, TEXT(""));
			}
		}

		if (LOWORD(wparam) == buttonQuitID)
			PostQuitMessage(0);
	}
	//else
	return DefWindowProcA(hwnd, message, wparam, lparam);
}