// MetalCalculate.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include "Header.h"

void ShowResult(HWND);

void buildGUI();

LRESULT WINAPI WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam);

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
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