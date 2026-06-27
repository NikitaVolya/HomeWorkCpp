#include <iostream>
#include <fstream>
#include <string>
#include "Node.h"

using namespace std;

int main()
{
    Node* root = nullptr;

    int choice;

    do
    {
        cout << "\n===== Bus Park =====\n";
        cout << "1. Add bus\n";
        cout << "2. Search bus\n";
        cout << "3. Display all buses\n";
        cout << "4. Save to file\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Bus* bus = new Bus();

            cout << "Bus number: ";
            cin >> bus->number;

            cin.ignore();

            cout << "Driver name: ";
            getline(cin, bus->driver);

            cout << "Route number: ";
            cin >> bus->route;

            cout << "Number of seats: ";
            cin >> bus->seats;

            if (root == nullptr)
                root = new Node(bus);
            else
                root->Insert(bus);

            break;
        }

        case 2:
        {
            int key;

            cout << "Enter bus number: ";
            cin >> key;

            const Node* found = root->Search(key);

            if (found)
            {
                found->PrintNode(cout);
            }
            else
            {
                cout << "Bus not found.\n";
            }

            break;
        }

        case 3:
        {
            if (root == nullptr)
                cout << "The tree is empty.\n";
            else
                cout << root;

            break;
        }

        case 4:
        {
            ofstream file("buses.txt");

            if (!file)
            {
                cout << "Failed to open the file.\n";
                break;
            }

            file << root;

            file.close();

            cout << "Information has been saved to buses.txt\n";

            break;
        }

        case 0:
            cout << "Program terminated.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    delete root;

    return 0;
}