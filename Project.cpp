#include "Class.cpp"
#include "Structure.cpp"
#include "TakeOrder.cpp"
#include "DeleteOrder.cpp"
#include "DisplayReceipt.cpp"
#include "ModifyOrder.cpp"
#include "DailySummary.cpp"
#include "Exit.cpp"

int main()
{
    computerType computer; // Create an object of class computerType
    int menu;

    do
    {
        system("cls");

        cout << "\t\t==================================================\n";
        cout << "\t\t\t Computer Store Management System \n";
        cout << "\t\t==================================================\n\n";
        cout << "\t\t---------------------------------------------------\n";
        cout << "\t\t||\t1. Take New Computer Order \t\t ||\n";
        cout << "\t\t||\t2. Delete Latest Order\t\t\t ||\n";
        cout << "\t\t||\t3. Modify Order List \t\t\t ||\n";
        cout << "\t\t||\t4. Print the Receipt                  \t ||\n";
        cout << "\t\t||\t5. Daily Summary of Total Sale \t\t ||\n";
        cout << "\t\t||\t6. Exit\t\t\t\t\t ||\n";
        cout << "\t\t---------------------------------------------------\n";

        cout << "\nEnter Choice: ";
        cin >> menu;

        switch (menu)
        {
        case 1:
        {
            computer.take_order(); // Function add
            break;
        }
        case 2:
        {
            computer.delete_order(); // Function delete
            system("PAUSE");
            break;
        }
        case 3:
        {
            computer.modify(); // Function modify
            system("PAUSE");
            break;
        }
        case 4:
        {
            computer.order_list(); // Function order
            system("PAUSE");
            break;
        }
        case 5:
        {
            computer.daily_summary(); // Function daily_summary
            system("PAUSE");
            break;
        }
        case 6:
        {
            computer.exit(); // Function exit
            system("PAUSE");
            cout << "\t\t===========================\n";
            cout << "\t\t\tThank You!!!\n";
            cout << "\t\t===========================\n\n";
            break;
        }
        default:
        {
            cout << "Invalid input\nPlease re-enter the input\n"
                 << endl;
        }
        }

    } while (menu != 6);

    return 0;
}
