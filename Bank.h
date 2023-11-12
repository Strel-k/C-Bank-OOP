#ifndef BANK_H
#define BANK_H

struct Bank {
	int pin;
	char name[100];
	double amount;
	int(*setPin)(struct Bank*, int);
	char* (*setName)(struct Bank*, const char[]);
	double (*setAmount)(struct Bank*, double);
	int(*getPin)(struct Bank*);
	char* (*getName)(struct Bank*);
	double(*getAmount)(struct Bank*);
	double(*Withdraw)(struct Bank*, double);
	double(*Deposit)(struct Bank*, double);


};
int setPin(struct Bank* inst, int pin);
char* setName(struct Bank* inst, const char name[]);
double setAmount(struct Bank* inst, double amount);
int getPin(struct Bank* inst);
char* getName(struct Bank* inst);
double getAmount(struct Bank* inst);
double withdraw(struct Bank* inst, double amount);
double deposit(struct Bank* inst, double amount);


#endif
