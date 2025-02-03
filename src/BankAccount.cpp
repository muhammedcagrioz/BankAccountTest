#include "BankAccount.h"

BankAccount::BankAccount(double initial_balance) {
    if (initial_balance >= 0) {
        balance = initial_balance;
    }
    else {
        balance = 0; // E�er ge�ersiz bir bakiye girilmi�se s�f�rla
    }
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;  // Yetersiz bakiye
}

double BankAccount::get_balance() const {
    return balance;
}
