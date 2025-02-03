#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount account(1000.0);  // Baþlangýç bakiyesi 1000.0
    std::cout << "Baslangic bakiyesi: " << account.get_balance() << std::endl;

    account.deposit(500.0);  // 500 yatýr
    std::cout << "Yatirmadan sonra bakiye: " << account.get_balance() << std::endl;

    if (account.withdraw(200.0)) {
        std::cout << "Cekme Basarili! Yeni bakiye: " << account.get_balance() << std::endl;
    }
    else {
        std::cout << "Yetersiz bakiye!" << std::endl;
    }

    return 0;
}
