#pragma once
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount {
private:
    double balance;  // Hesap bakiyesi

public:
    // Constructor: Banka hesab� ba�lat�l�r
    BankAccount(double initial_balance);

    // Para yat�rma fonksiyonu
    void deposit(double amount);

    // Para �ekme fonksiyonu
    bool withdraw(double amount);

    // Bakiye sorgulama fonksiyonu
    double get_balance() const;
};

#endif
