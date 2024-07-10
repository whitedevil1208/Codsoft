#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool isCompleted;

    Task(const string& desc) : description(desc), isCompleted(false) {}
};

vector<Task> tasks;


void addTask() {
    string description;
    cout << "Enter task description: ";
    cin.ignore(); 
    getline(cin, description);

    tasks.push_back(Task(description));
    cout << "Task added successfully!" << endl;
}


void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks to display." << endl;
        return;
    }

    cout << "\n** To-Do List **" << endl;
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << "[" << (tasks[i].isCompleted ? "X" : " ") << "] " << i + 1 << ". " << tasks[i].description << endl;
    }
}


void markTaskCompleted() {
    if (tasks.empty()) {
        cout << "No tasks to mark as completed." << endl;
        return;
    }

    viewTasks(); 

    int choice;
    cout << "Enter the index of the task to mark as completed: ";
    cin >> choice;

    
    if (choice < 1 || static_cast<size_t>(choice) > tasks.size()) {
        cout << "Invalid task index." << endl;
        return;
    }

    tasks[choice - 1].isCompleted = true;
    cout << "Task marked as completed!" << endl;
}


void removeTask() {
    if (tasks.empty()) {
        cout << "No tasks to remove." << endl;
        return;
    }

    viewTasks(); 

    int choice;
    cout << "Enter the index of the task to remove: ";
    cin >> choice;

    
    if (choice < 1 || static_cast<size_t>(choice) > tasks.size()) {
        cout << "Invalid task index." << endl;
        return;
    }

    tasks.erase(tasks.begin() + choice - 1);
    cout << "Task removed successfully!" << endl;
}

int main() {
    int choice;

    while (true) {
        cout << "\n1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
