#include "gtest/gtest.h"
#include "BankAccount.h"

TEST(BankAccountTest, TestInitialBalance) {
    BankAccount account(100.0); // Baþlangýç bakiyesi 100
    EXPECT_EQ(account.get_balance(), 100.0); // Bakiye 100 olmalý
}

TEST(BankAccountTest, TestDeposit) {
    BankAccount account(100.0);
    account.deposit(50.0); // 50 ekle
    EXPECT_EQ(account.get_balance(), 150.0); // Bakiye 150 olmalý
}

TEST(BankAccountTest, TestWithdraw) {
    BankAccount account(100.0);
    EXPECT_TRUE(account.withdraw(50.0)); // 50 çek
    EXPECT_EQ(account.get_balance(), 50.0); // Bakiye 50 olmalý
}

