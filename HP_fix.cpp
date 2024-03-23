#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
		//Program to run General diagnosis troubleshooting HP servers
		
	char x, y, z, c;
	cout<< "\n\t Starting General Diagnosis Program\n";
	sleep(1);
	cout<< "\n\t Recoding symptoms information - DONE\n";
	sleep(1);
	cout<< "\n\t Rebooting the server to see if condition still exists - DONE\n";
	sleep(1);
	cout<< "\n\t Is this a newly installed server? [Enter y for yes, n for no]: ";
	cin>> x;
	sleep(1);
	
	switch (x)
	{
	
	case 'y':
	case 'Y':
		cout<< "\n\n\tPlease reseat any components that may have come loose during shipping - DONE\n";
		sleep(1);
		cout<< "\n\t Does the condition still exist? [Enter y for yes, n for no]: ";
		cin>> y;
		sleep(1);
		
		if (y =='n' || y =='N')
			break;
			
		switch (y)
		{
		case 'y':
		case 'Y':
			cout<< " ";
		}
	case 'n':
	case 'N':
		cout<< "\n\n\t Were options added or was changed recently? [Enter y for yes, n for no]: ";
		cin>> y;
		sleep(1);
		
		switch (y)
		{
		case 'y':
		case 'Y':
			cout<< "\n\n\t Isolating what has changed - DONE\n";
			sleep(1);
			cout<< "\n\t Verifying if it was installed correctly - DONE\n";
			sleep(1);
			cout<< "\n\t Restoring server to last known working state - DONE\n";
			sleep(1);
			cout<< "\n\t Does condition still exist? [Enter y for yes, n for no]: ";
			cin>> y;
			sleep(1);
			break;
		case 'N':
		case 'n':
			cout<< "\n\n\t Checking for service notifications -DONE \n";
			sleep(1);
			cout<< "\n\t Downloading latest software and firmware from website - DONE\n";
			sleep(1);
			cout<< "\n\t Does the condition still exist? [Enter y for yes, n for no]: ";
			cin>> y;
			sleep(1);
			break;		
		}	
		
		if (y == 'n' || y == 'N')
			break;
			
		cout<< "\n\n\t Isolating and minimizing the memory configuration - DONE\n";
		sleep(1);
		cout<< "\n\t Does the condition still exist? [Enter y for yes, n for no]: ";
		cin>> y;
		sleep(1);
		
		if (y == 'n' || y == 'N')
			break;
			
		cout<< "\n\n\t Breaking server down to manual confirguration - DONE\n";
		sleep(1);
		cout<< "\n\t Does the condition still exist? [Enter y for yes, n for no]: ";
		cin>> y;
		sleep(1);
		
		switch (y)
		{
		
		case 'N':
		case 'n':
			cout<< "\n\n\t Adding one part at a time back to configuration - DONE\n";
			sleep(1);
			cout<< "\n\t Isolating faulty component - DONE\n";
			sleep(1);
			cout<< "\n\t Does the condition still exist? [Enter y for yes, n for no]: ";
			cin>> y;
			sleep(1);
			break;
		case 'Y':
		case 'y':
			cout<< "\n\n\t Troubleshooting and replacing basic server spare parts - DONE\n";
			sleep(1);
			cout<< "\n\t Does the condition still exist? [Enter y for yes, n for no]: ";
			cin>> c;
			sleep(1);
		}
		
		if (y == 'n' || y == 'N')
			break;
			
		if (c == 'n' || c == 'n')
		{
			cout<< "\n\n\t Checking if a failed part is sent - DONE\n";
			sleep(1);
			cout<< "\n\t Recording system and error information on repair tag - DONE\n";
			sleep(1);
			break;
		}
			
		cout<< "\n\n\t Ensuring the following information is available: \n";
		sleep(1);
		cout<< "\n\t  -Survey configuration snapshots - DONE \n";
		sleep(1);
		cout<< "\n\t  -OS event log file - DONE \n";
		sleep(1);
		cout<< "\n\t  -Full crash dump - DONE \n";
		sleep(1);
		
		cout<< "\n\n\t   Calling HP service provider - DONE \n";		
	}
		
	if (y == 'n' || y == 'N' || c == 'n' || c == 'N')
	{
		sleep(1);
		cout<< "\n\n\t Recording all actions taken for future - DONE\n";
		sleep(1);
		cout<< "\n\n\t   CONGRATULATIONS, Your server problems are solved. \n";
		sleep(1);
	}
	
	return 0;
}
