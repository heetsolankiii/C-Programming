#include <stdio.h>
#include <string.h>
int main()
{
  //Initializing the variables
  char name[100] = "Rohit Mehra";
  int accountNumber = 30012024;
  int accountNumberInput;
  int start;
  //User input
  printf("Account Number: ");
  scanf("%d", &accountNumberInput);
  //If user input matches the account number
  if (accountNumber == accountNumberInput)
  {
    printf("Name: %s\n", name);  //Displaying user name
    printf("To CONTINUE press 1: ");
    scanf("%d", &start);
    if (start == 1)
    {
      int accountBalance = 10000;
      int operationInput;
      //Operation
      printf("Which operation to be performed?\n");
      printf("1 for Account Balance\n");
      printf("2 for Withdrawal\n");
      printf("3 for Deposit\n");
      printf("4 for Log Out\n");
      printf("Operation: ");
      scanf("%d", &operationInput);
      if(operationInput == 1)  //Account Balance
      {
        printf("Account Balance: %d", accountBalance);
      }
      else if (operationInput == 2)  //Withdrawal
      {
        int withdrawalInput;
        printf("Enter amount to be withdrawn: ");
        scanf("%d", &withdrawalInput);
        if(withdrawalInput < accountBalance)  //If withdrawal is less than account balance
        {
          int totalBalance = accountBalance - withdrawalInput;
          printf("Remaining Balance: %d", totalBalance);
        }
        else
        {
          printf("Insufficient Balance");
        }
      }
      else if (operationInput == 3)  //Deposit
      {
        int depositInput;
        printf("Enter amount to deposit: ");
        scanf("%d", &depositInput);
        int totalBalance = accountBalance + depositInput;
        printf("Total Balance: %d", totalBalance);
      }
      else if (operationInput == 4)  //Log Out
      {
        printf("Logged Out");
      }
      else
      {
        printf("Invalid Operation");
      }
    }
  }
  else
  {
    printf("Wrong Account Number");
  }
  return 0;
}
