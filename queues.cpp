#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> waitingQueue;
    const int MAX_SIZE = 5;
    int choice;
    string name;
    do {
        cout << "\n--- Theme Park Queue ---\n";
        cout << "1. Add person\n";
        cout << "2. Allow first person to enter ride\n";
        cout << "3. Display waiting queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (waitingQueue.size() == MAX_SIZE) {
                    cout << "Queue is full! No more people can wait.\n";
                } else {
                    cout << "Enter person's name: ";
                    cin >> name;
                    waitingQueue.push(name);
                    cout << name << " added to the queue.\n";
                }
                break;

            case 2:
                if (waitingQueue.empty()) {
                    cout << "Queue is empty. No one is waiting.\n";
                } else {
                    cout << waitingQueue.front()
                         << " is entering the ride.\n";
                    waitingQueue.pop();
                }
                break;

            case 3:
                if (waitingQueue.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    queue<string> temp = waitingQueue;

                    cout << "Waiting queue:\n";
                    while (!temp.empty()) {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
