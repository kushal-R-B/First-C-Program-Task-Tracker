#include <iostream>


//  @brief Task object that represents a task, and will include a title, description, and a time.
//  @param name of the task.

class Task{
    public:
    Task(std::string& taskName, std::string& taskDescrip){
        taskN = taskName;
        taskD = taskDescrip;
    }

    private:
        std::string taskN;
        std::string taskD;
};




int main(){


    return 0;
}