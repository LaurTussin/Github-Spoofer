#include <iostream>
#include <Windows.h>
#include <string.h>
#include <tchar.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")


int main()
{
	SetConsoleTitleA("Spoofer");
	system("color 7");
	std::cout << "Hello, Welcome to github spoofer (Created by lau4), This is for all the people that have issues creating one or doesnt know how to create 1 \n";
	std::cout << "                                          \n";
	Sleep(2500);
	std::cout << "                                          \n";
	std::cout << "Connecting to Spoofer\n";
	std::cout << "                                        \n";
	Sleep(2500);
	std::cout << "                                       \n";
	std::cout << "Connected!\n";
	std::cout << "                                       \n";
	Sleep(2500);
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
		std::cout << "Cleaning\n";
		std::cout << "                    \n";
		HRESULT hr;
		LPCTSTR Exe = _T("ur own cleaner"), FileP1 = _T("C:\Windows\urowncleaner.exe");
		hr = URLDownloadToFile(0, Exe, FileP1, 0, 0);
		Beep(500, 500);
		Sleep(2000);
		std::cout << "Succesfully cleaned\n";
		std::cout << "                    \n";
		std::cout <<  "Returning to menu\n";
		Sleep(3000);
     	system("cls");
		goto Menu;


	}


Spoof:
	{
		std::cout << "Spoofing\n";
		Sleep(2500);
		//get ur own spoofer skidder
		HRESULT hr;
		LPCTSTR Exe = _T("ur link to download mapper"), FileP1 = _T("C:\Windows\Urownmapper.exe");
		LPCTSTR Sys = _T("ur link to download driver"), FileP2 = _T("C:\Windows\Urowndriver");
		hr = URLDownloadToFile(0, Exe, FileP1, 0, 0);
		hr = URLDownloadToFile(0, Sys, FileP2, 0, 0);
		system("C:\Windows\HERE U PUT UR PATH OF MAPPER C:\Windows\PATH OF UR OWN DRIVER");
		std::cout << "Succesfully Spoofed, Going back to the menu!\n";
		Sleep(2500);
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

			std::cout << "Getting cpu's serialnumber\n";
			system("wmic cpu get serialnumber");

			std::cout << "Getting bios serialnumber\n";
			system("wmic bios get serialnumber");

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