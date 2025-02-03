#pragma once
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount {
private:
    double balance;  // Hesap bakiyesi

public:
    // Constructor: Banka hesabý baþlatýlýr
    BankAccount(double initial_balance);

    // Para yatýrma fonksiyonu
    void deposit(double amount);

    // Para çekme fonksiyonu
    bool withdraw(double amount);

    // Bakiye sorgulama fonksiyonu
    double get_balance() const;
};

#endif
