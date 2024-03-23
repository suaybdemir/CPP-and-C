#include <gtest/gtest.h>

struct BankAccount
{
    int balance = 0;

    BankAccount()
    {

    }

    explicit BankAccount(const int balance) : balance{balance}
    {
        
    }

    void deposit(int amount)
    {
        
    }

};


struct BankAccountTest : testing::Test
{
    BankAccount *account;
    BankAccountTest()
    {
        account = new BankAccount;
    }
    ~BankAccountTest()
    {
        delete account;
    }
};

TEST_F(BankAccountTest ,IsInitEmpty)
{
    EXPECT_EQ(0,account->balance);
}

TEST_F(BankAccountTest, CanDepositMoney)
{
    account->deposit(100);
    EXPECT_EQ(100,account->balance);
}

int main(void)
{
    testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}