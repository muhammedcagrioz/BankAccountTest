#include "gtest/gtest.h"
#include "BankAccount.h"

TEST(BankAccountTest, TestInitialBalance) {
    BankAccount account(100.0); // Ba�lang�� bakiyesi 100
    EXPECT_EQ(account.get_balance(), 100.0); // Bakiye 100 olmal�
}

TEST(BankAccountTest, TestDeposit) {
    BankAccount account(100.0);
    account.deposit(50.0); // 50 ekle
    EXPECT_EQ(account.get_balance(), 150.0); // Bakiye 150 olmal�
}

TEST(BankAccountTest, TestWithdraw) {
    BankAccount account(100.0);
    EXPECT_TRUE(account.withdraw(50.0)); // 50 �ek
    EXPECT_EQ(account.get_balance(), 50.0); // Bakiye 50 olmal�
}

