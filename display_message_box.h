#include <stdio.h>
#include <windows.h>

int on_button;

on_button = MessageBox(NULL, TEXT("Fuck you C language!"),
	TEXT("Finally, I've done this sh*t task."),
	MB_YESNO | MB_ICONQUESTION);

if (on_button == IDYES)
MessageBox(NULL, TEXT("Yes, Yes!!"), TEXT("Message for you"), MB_OK);

else MessageBox(NULL, TEXT("No, No, No!!!"), TEXT("Message for you"), MB_OK);

return 0;