#include "InputHandler.h"

InputHandler * handler;

int main(void)
{
	handler = InputHandler::GetHandler();
	cout << "Hello World" << endl;

	printf("\x1b[30;1m");

	handler->Run();

	system("pause");
	return 0;
}