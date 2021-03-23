#include <Windows.h>
#include <iostream>

bool unlimitedHealth = false;

const char* healthTell()
{
	if (unlimitedHealth)
	{
		return "On\n";
	}
	if (!unlimitedHealth)
	{
		return "Off\n";
	}
}

void menu()
{
	system("cls");
	std::cout << "Unlimited health: " << healthTell();
}

int main()
{
	menu();
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 1)
		{
			unlimitedHealth = !unlimitedHealth;
			menu();
		}
	}
}