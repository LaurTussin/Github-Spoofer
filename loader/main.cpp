#include <iostream>
#include <Windows.h>
#include <string.h>


int main()
{
	SetConsoleTitleA("Spoofer");
	system("color 7");
	std::cout << "Hello, Weolcome to github spoofer (Created by lau4), This is for all the people that have issues creating one or doesnt know how to create 1 \n";
	std::cout << "                                          \n";
	system("pause");
	std::cout << "                                          \n";
	std::cout << "Connecting to Spoofer\n";
	std::cout << "                                        \n";
	system("pause");
	std::cout << "                                       \n";
	std::cout << "Connected!\n";
	std::cout << "                                       \n";
	system("pause");
	system("cls");
Menu:
	int option;
	std::cout << "[1] Clean\n";
	std::cout << "[2] Spoof\n";
	std::cout << "[3] Check Serials\n";
	std::cout << "[4] Exit\n";
	std::cin >> option;

	switch (option)
	{
		case 1
		:goto Clean;

			case 2
			:goto Spoof;

				case 3
				:goto Check;

					case 4
					:goto Exit;
	}

Clean:
	{
		//too lazy to add just add ur own its not hard, maybe on the future
		std::cout << "Hello";
		Sleep(2000);
		system("cls");
		goto Menu;


	}


Spoof:
	{
		//too lazy to add again, maybe on the future
		system("cls");
		goto Menu;


	}


Check:
	{
		std::cout << "Checking Serials\n"; 
		std::cout << "                  \n";
		std::cout << "Getting Disk's Serial Number\n";
		system("wmic diskdrive get serialnumber \n");
		
		std::cout << "Getting Baseboard Serial number\n";
			system("wmic baseboard get serialnumber\n");

			std::cout << "Getting Disk Model\n";
			system("wmic diskdrive get model");


			Sleep(10000);


			system("cls");
			goto Menu;
	}

Exit:
	{
		std::cout << "Thank you for using my loader!\n";
		Sleep(1000);
		std::cout << "Closing in 5 seconds\n";
		Sleep(1000);
		std::cout << "Closing in 4 seconds\n";
		Sleep(1000);
		std::cout << "Closing in 3 seconds\n";
		Sleep(1000);
		std::cout << "Closing in 2 seconds\n";
		Sleep(1000);
		std::cout << "Closing in 1 seconds\n";
		Sleep(1000);
		std::cout << "Closing\n";
		return 0;
	}
}