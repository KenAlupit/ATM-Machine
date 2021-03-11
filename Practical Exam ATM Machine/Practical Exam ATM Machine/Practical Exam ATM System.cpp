#include <iostream>
using namespace std;

int main()
{
	double deposit = 0;
	double withdraw = 0 ;
	double balance = 0;
	string Account_Input;
	string Password_Input;
	string UserID; 
	string UserPass;
	char selection;
	string menu =
		"\n+------------------------------------------+"
		"\n|  Hi!Welcome to Mr.Senny's ATM Machine!   |"
		"\n+------------------------------------------+\n"
		"\nPlease select an option from the menu below:\n"
		"\nl -> Login\n"
		"c -> Create New Account\n"
		"q -> Quit\n";
	string menu2 = 
		"\n\nPlease select an option from the menu below:\n"
		"\nd -> Deposit Money\n"
		"w -> Withdraw Money\n"
		"r -> Request Balance\n"
		"q -> Quit\n";
	
	
	do {
		cout << menu;
		cin >> selection;
			switch (selection) {
		
				case 'l':
					cout << "Please enter your user ID:";
					cin >> UserID;
					cout << "Please enter your password: ";
					cin >> UserPass;
						if (UserID == Account_Input && UserPass == Password_Input) {
							cout << "\n+--------------------------------------+"
									"\n|  ******** ACCESS GRANTED! ********   |"
									"\n+--------------------------------------+\n";
								do {
									cout << menu2;
									cin >> selection;
									switch (selection) {
									case 'd':
										cout << "Amount of deposit: $";
										cin >> deposit;
										balance += deposit;
										break;
									case 'D':
										cout << "Amount of deposit: $";
										cin >> deposit;
										balance += deposit;
										break;
									case 'w':
										cout << "Withdraw Money: $";
										cin >> withdraw;
											if (withdraw > balance) {
												cout << "\n+------------------------------------------+"
														"\n|  ******** NOT ENOUGH BALANCE! ********   |"
														"\n+------------------------------------------+\n";
											}
											else {
												balance -= withdraw;
											}
											break;
									case 'W':
										cout << "Withdraw Money: $";
										cin >> withdraw;
											if (withdraw > balance) {
												cout << "\n+------------------------------------------+"
														"\n|  ******** NOT ENOUGH BALANCE! ********   |"
														"\n+------------------------------------------+\n";
											}
											else {
												balance -= withdraw;
											}
										break;

									case 'r':
										cout << "\nYour balance is $" << balance;
										break;
									case 'R':
										cout << "\nYour balance is $" << balance;
										break;
									case 'q':
										break;
									case 'Q':
										break;
									default:
										cout << "\n+-------------------------------------+"
												"\n|  ******** INVALID INPUT! ********   |"
												"\n+-------------------------------------+\n";
										break;
									}
								} while (selection != 'q');
						}
						else {
							cout << "\n+------------------------------------+"
									"\n|  ******** LOGIN FAILED! ********   |"
									"\n+------------------------------------+\n";
						}break;
		
				case 'L':
					cout << "Please enter your user ID:";
					cin >> UserID;
					cout << "Please enter your password: ";
					cin >> UserPass;
						if (UserID == Account_Input && UserPass == Password_Input) {
							cout << "\n******** ACCESS GRANTED! ********\n";
							do {
								cout << menu2;
								cin >> selection;
								switch (selection) {
								case 'd':
									cout << "Amount of deposit: $";
									cin >> deposit;
									balance += deposit;
									break;
								case 'D':
									cout << "Amount of deposit: $";
									cin >> deposit;
									balance += deposit;
									break;
								case 'w':
									cout << "Withdraw Money: $";
									cin >> withdraw;
										if (withdraw > balance) {
											cout << "\n+------------------------------------------+"
													"\n|  ******** NOT ENOUGH BALANCE! ********   |"
													"\n+------------------------------------------+\n";;
										}
										else {
											balance -= withdraw;
										}
									break;
								case 'W':
									cout << "Withdraw Money: $";
									cin >> withdraw;
										if (withdraw > balance) {
											cout << "\n+------------------------------------------+"
													"\n|  ******** NOT ENOUGH BALANCE! ********   |"
													"\n+------------------------------------------+\n";
										}
										else {
											balance -= withdraw;
										}
									break;
								case 'r':
									cout << "\nYour balance is $" << balance;
									break;
								case 'R':
									cout << "\nYour balance is $" << balance;
									break;
								case 'q':
									break;
								case 'Q':
								default:
									cout << "\n+-------------------------------------+"
											"\n|  ******** INVALID INPUT! ********   |"
											"\n+-------------------------------------+\n";
									break;
								}

							} while (selection != 'q');
						}
						else{
							cout << "\n+------------------------------------+"
									"\n|  ******** LOGIN FAILED! ********   |"
									"\n+------------------------------------+\n";
						} break;
				case 'c':
					cout << "Please enter your username: ";
					cin >> Account_Input;
					cout << "Please enter your password: ";
					cin >> Password_Input;
					cout << "\nThank You! Your account has been created!\n";
					break;
				case 'C':
					cout << "Please enter your username: ";
					cin >> Account_Input;
					cout << "Please enter your password: ";
					cin >> Password_Input;
					cout << "\nThank You! Your account has been created!\n";
					break;
				case'q':
					break;
				case'Q':
					break;
				default:
					cout << "\n+-------------------------------------+"
							"\n|  ******** INVALID INPUT! ********   |"
							"\n+-------------------------------------+\n";
				}
			
	} while (selection != 'q');
			cout << "\n+----------------------------------------------+"
					"\n|  ******** THANKS FOR STOPPING BY! ********   |"
					"\n+----------------------------------------------+";
}
