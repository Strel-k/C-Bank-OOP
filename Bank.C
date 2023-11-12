#include "Bank.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int setPin(struct Bank* inst, int pin) {
	inst->pin = pin;
	return inst->pin;
}
char* setName(struct Bank* inst, const char name[]) {
	strcpy(inst->name, name);
	return inst->name;
}

double setAmount(struct Bank* inst, double amount) {
	inst->amount = amount;
	return inst->amount;
}

int getPin(struct Bank* inst) {
	return inst->pin;
}
char* getName(struct Bank* inst) {
	return inst->name;
}

double getAmount(struct Bank* inst) {
	return inst->amount;

}

double withdraw(struct Bank* inst, double amount) {
	if (amount > inst->amount || amount<=0) {
		printf("\nInsufficient Amount!\n");
	}
	else{
		inst->amount -= amount;
		printf("\nWithdraw Success!\n");
	}
	system("pause");
	return inst->amount;
}


double deposit(struct Bank* inst, double amount) {
	if (amount <= 0) {
		printf("\nInsufficient Amount!\n");
	}
	else {
		inst->amount += amount;
		printf("\nDeposit Success!\n");
	}
	system("pause");
	return inst->amount;

}
