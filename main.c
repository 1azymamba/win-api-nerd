/*

- Must user CreateFileW and WriteFile.
- 0 size file is not permited.
- Don't use ChatGPT.

reference
https://wisdom.sakura.ne.jp/system/winapi/win32/win3.html

*/

// total hours wasted here = 1...

#include <stdio.h>
#include <windows.h>

// ������WINAPI��
// define WINAPI __stdcall�Ƃ��Ē�`����Ă��āAWin32API���Ăяo���Ƃ��̋K��̂��ƁB
// �قƂ�ǂ�Windows�֐���WINAPI�Ƃ��Ē�`�����
// �����R�[�h��Unicode���g���I


int WINAPI WinMain(
	HINSTANCE hInstance, // �C���X�^���X�n���h���ƌĂ΂��^
	HINSTANCE hPrevInstance, // Win16�ł͂����͓���̃A�v���P�[�V�����̃C���X�^���X�ԂŃ��������L���Ă����B�����͏��NULL
	LPSTR lpCmdLine, // �R�}���h���C������󂯎�������� LPSTR�^��Windows�W���̕����^
	int nCmdShow) {
	int on_button;

	on_button =	MessageBox(NULL, TEXT("Fuck you C language!"),
					 TEXT("Finally, I've done this sh*t task."),
					 MB_YESNO | MB_ICONQUESTION);

	if (on_button == IDYES)
		MessageBox(NULL, TEXT("Yes, Yes!!"), TEXT("Message for you"), MB_OK);

	else MessageBox(NULL, TEXT("No, No, No!!!"), TEXT("Message for you"), MB_OK);
	
	return 0;
}


/*
int WINAPI WinMain(HINSTANCE hinst, HINSTANCE hPrevInst, LPSTR szStr, INT iCmdShow)
{
	MessageBox(NULL, _T(""), _T(""), MB_OK);

	return 0;
}

*/