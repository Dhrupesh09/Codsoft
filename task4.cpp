#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string name;
    bool completed;
};

std::vector<Task> tasks;

void addTask(std::string taskName) {
    Task newTask;
    newTask.name = taskName;
    newTask.completed = false;
    tasks.push_back(newTask);
}

void viewTasks() {
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". " << tasks[i].name << " - " << (tasks[i].completed ? "completed" : "pending") << std::endl;
    }
}

void markTaskAsCompleted(size_t taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks[taskIndex].completed = true;
    } else {
        std::cout << "Invalid task index" << std::endl;
    }
}

void removeTask(size_t taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex);
    } else {
        std::cout << "Invalid task index" << std::endl;
    }
}

int main() {
    addTask("Complete assignment");
    addTask("Buy groceries");

    viewTasks();

    markTaskAsCompleted(0);
    removeTask(1);

    viewTasks();

    return 0;
}

