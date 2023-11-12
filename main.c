#include"Bank.h"
#include<stdio.h>
#include<stdlib.h>

int main() {
	int choice;
	struct Bank Account;
	Account.setPin = setPin;
	Account.setName = setName;
	Account.setAmount = setAmount;
	Account.getPin = getPin;
	Account.getName = getName;
	Account.getAmount = getAmount;
	Account.Withdraw = withdraw;
	Account.Deposit = deposit;

	printf("Enter Name:");
	char InputName[100];
	scanf(" %[^\n]s", InputName);
	Account.setName(&Account, InputName);
	printf("Enter PIN:");
	int InputPin;
	scanf("%d", &InputPin);
	Account.setPin(&Account, InputPin);
	printf("Enter Amount:");
	double InputAmount;
	scanf("%lf", &InputAmount);
	Account.setAmount(&Account, InputAmount);
	while (1) {
		system("cls");
		printf("C Banks\n\n");
		printf("[1] See Details\n[2] Set Name\n[3] Set PIN\n[4] Set Amount\n[5] Deposit\n[6] Withdraw\n[7] Exit\n\n\n");
		printf("--->");
		scanf("%d", &choice);
		switch (choice) {
		case 1: {
			system("cls");
			printf("Name: %s\n", Account.getName(&Account));
			printf("PIN: %d\n", Account.getPin(&Account));
			printf("Amount: %.2lf\n", Account.getAmount(&Account));
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			printf("Enter Name:");
			char NewName[100];
			scanf(" %[^\n]s", NewName);
			Account.setName(&Account, NewName);
			printf("\nName Changed!\n");
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			printf("Enter PIN:");
			int NewPin;
			scanf("%d", &NewPin);
			Account.setPin(&Account, NewPin);
			printf("\nPIN Changed!\n");
			system("pause");
			break;
		}
		case 4: {
			system("cls");
			printf("Enter Amount:");
			double NewAmount;
			scanf("%lf", &NewAmount);
			Account.setAmount(&Account, NewAmount);
			printf("\nAmount Changed!\n");
			system("pause");
			break;
		}
		case 5: {
			system("cls");
			printf("Enter Amount to Deposit:");
			double AmountDeposit;
			scanf("%lf", &AmountDeposit);
			Account.Deposit = deposit;
			Account.Deposit(&Account, AmountDeposit);
			break;
		}
		case 6: {
			system("cls");
			printf("Enter Amount to Withdraw:");
			double AmountWithdraw;
			scanf("%lf", &AmountWithdraw);
			Account.Withdraw = withdraw;
			Account.Withdraw(&Account, AmountWithdraw);
			break;
		}
		case 7: {
			exit(1);
		}
		default: {
			printf("\nUnkown Output!\n");
			break;
		}
		}
	}
}
