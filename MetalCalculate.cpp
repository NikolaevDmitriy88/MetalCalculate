﻿// MetalCalculate.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Преобразования: 
// HWND(lparam)
// Stroki v sendMessage (,,, LPARAM("wwewe") )
// id шники HMENU(bt_2)

#include "Header.h"

using namespace IRON;

void ShowResult(HWND);

void buildGUI();

LRESULT WINAPI WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam);

int main()
{
	WNDCLASSA wc1;
	memset(&wc1, 0, sizeof(WNDCLASSA));
	wc1.lpszClassName = "MY_WINDOW";
	wc1.lpfnWndProc = WndProc;
	wc1.hCursor = LoadCursorA(NULL, (LPCSTR)IDC_ARROW);
	wc1.hIcon = LoadIconA(NULL, (LPCSTR)IDI_APPLICATION);
	wc1.lpszMenuName = 0;
	wc1.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(165, 165, 165));
	wc1.style = CS_HREDRAW | CS_VREDRAW;
	wc1.cbClsExtra = 0;
	wc1.cbWndExtra = 0;

	if (!RegisterClassA(&wc1))
		return 0;

	buildGUI();

	MSG message;
	while (GetMessage(&message, NULL, 0, 0))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}

	return 0;
}

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
			LOWORD(wparam) == comboBoxTapeID ||
			LOWORD(wparam) == comboBoxListID ||
			LOWORD(wparam) == comboBoxAngleID ||
			LOWORD(wparam) == comboBoxChannelID
			)
		{
			if (HIWORD(wparam) == CBN_SELCHANGE)
			{
				index = (UINT16)SendMessage((HWND)lparam, CB_GETCURSEL, 0, 0);
			}
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

			!msgLengthOrWeight ? SetWindowTextW(msg2, TEXT("килограмм")) : SetWindowTextW(msg2, TEXT("метр"));

			if (inputCount[0])
				CalculateResult(msgResult);
		}

		if (LOWORD(wparam) == buttonQuitID)
			PostQuitMessage(0);
	}
	//else
	return DefWindowProcA(hwnd, message, wparam, lparam);
}