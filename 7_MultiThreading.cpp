/////////////  MultiThreading  /////////// 

// Multithreading is a technique where a program is divided into smaller units of execution called threads. 
// Each thread runs independently but shares resources like memory, allowing tasks to be performed 
// simultaneously. This helps improve performance by utilizing multiple CPU cores efficiently. 
// Multithreading support was introduced in C++11 with the introduction of <thread> header file.





///////   Importance of Multithreading  -


// Leverages multiple CPU cores to execute tasks in parallel, reducing overall execution time.

// Keeps applications responsive by running background operations without blocking the main thread. 
// For example, in a word document, one thread does auto-formatting along with the main thread.

// Makes it easier to handle large workloads or multiple simultaneous operations, such as in servers or 
// real-time systems.


///////////   Create a Thread  -

// The std::thread class represent the thread. Threading an instance of this class will create a thread 
// with the given callable as its task.

// thread thread_name(callable);

// where,
// thread_name: It is object of thread class.
// callable: It is a callable object like function pointer, function object.


// This is code is correct but the comipler is not compaitable to run this , so run on online compiler


// #include <iostream>
// #include <thread>
// #include <chrono>
// using namespace std;

// // Function to be run by the thread
// void func() {
//     cout << "Hello from the thread!" << endl;
// }

// int main() {

//     // Create a thread that runs func
//     thread t(func);

//     // Pause MAIN thread for 5 seconds
//     this_thread::sleep_for(chrono::seconds(5));

//     // Wait for thread t to finish
//     t.join();

//     cout << "Main thread finished." << endl;

//     return 0;
// }




//////////////  Joining a Thread - 

// Before joining a thread it is preferred to check if the thread can be joined using the joinable() method. 
//The joinable method checks whether the thread is in a valid state for those operations or not.


// thread_name.joinable()


// The joinable() method returns true if the thread is joinable else returns false.

// Joining a Thread: Joining two threads C++ blocks the current thread until the thread associated with 
// the std::thread object finishes execution. To join two threads ini C++ we can use join() function. 
// Which is called inside the bidy of the thread to which the specified thread is to be joined.

// thread_name.join(); 

// The thread.join function throws std::system_error if the thread is not joinable.

// Note: Joining two non-main threads is risky as it may lead to race condition or logic errors.





///////    Detaching a thread  - 
// A joined thread can be detached from the calling thread using the detach() member function of the 
// std::thread class. When a thread is detached, it runs independently in the background, and the other 
// thread does not waits for it to finish.


// Syntax - 
// thread_name.detach();



// #include <iostream>
// #include <thread>
// #include <chrono>   // Time duration   

// using namespace std;

// // Function to be executed by the thread
// void backgroundTask() {
//     for (int i = 1; i <= 5; i++) {
//         cout << "Background thread running: " << i << endl;
//         this_thread::sleep_for(chrono::seconds(1));
//     }
// }

// int main() {

//     // Create a thread
//     thread t(backgroundTask);

//     // Detach the thread
//     t.detach();

//     cout << "Main thread continues its work..." << endl;

//     // Main thread work
//     this_thread::sleep_for(chrono::seconds(2));

//     cout << "Main thread finished." << endl;

//     return 0;
// }




// 🔴 Your confusion (in simple words)

// You are thinking:

// “t.detach() is executed before sleep_for(2) in main,
// so why does the program look like it is waiting 2 seconds,
// and during those 2 seconds the background thread is running?”

// 👉 It feels like detach() is waiting — but it is NOT.

// detach() does NOT stop, pause, or delay anything.
// It only says:
// 👉 “This thread is now independent. I won’t wait for it.”



// #include <iostream>
// #include <thread>
// #include <chrono>
// using namespace std; 

// void task1() {
//     cout << "Thread 1 is running. ID: " << this_thread::get_id() << "\n";
// }

// void task2() {
//     cout << "Thread 2 is running. ID: " << this_thread::get_id() << "\n";
// }

// int main() {
//     thread t1(task1);
//     thread t2(task2);

//     // Get thread IDs
//     cout << "t1 ID: " << t1.get_id() << "\n";
//     cout << "t2 ID: " << t2.get_id() << "\n";

//     // // Join t1 if joinable
//     if (t1.joinable()) {
//         t1.join();
//         cout << "t1 joined\n";
//     }
    
    
//     // What happens here?
//     // join() blocks the main thread
//     // Main thread waits until task1 finishes
//     // After task1 is done → "t1 joined" prints
//     // 📌 After join():
//     // t1 is finished
//     // t1 no longer exists
    

//     // Detach t2
//     if (t2.joinable()) {
//         t2.detach();
//         cout << "t2 detached\n";
//     }


//     cout << "Main thread sleeping for 1 second...\n";
//     // this_thread::sleep_for(chrono::seconds(1));
//     cout << "Main thread awake.\n";

//     return 0;
// }


// ⚠️ Important:
// Thread execution order is decided by the OS scheduler, not by line order.







//////////////////////    Callables in Multithreading - 
// A callable (such as a function, lambda, or function object) is passed to a thread. The callable is 
// executed in parallel by the thread when it starts. like, thread t(func); creates a thread that runs 
// the func function. We can also pass parameters along with callable, like this 
// thread t(func, param1, param2);


// In C++, callable can be divided into 4 categories:

// Function
// Lambda Expression
// Function Object
// Non-Static or static Member Function


// 1. Function Pointer
// A function can be a callable object to pass to the thread constructor for initializing a thread.


// #include <bits/stdc++.h>
// using namespace std;

// // Function to be run 
// // by the thread
// void func(int n) {
//     cout << n;
// }

// int main() {
    
//     // Create a thread that runs 
//     // the function func
//     thread t(func, 4);
    
//     // Wait for thread to finish
//     t.join();
//     return 0;
// }







// 2. Lambda Expression -
// Thread object can also use a lambda expression as a callable. Which can be passed directly inside 
// the thread object.




// #include <iostream>
// #include <thread>

// using namespace std;

// int main() {
//     int n = 3;
    
//     // Create a thread that runs 
//     // a lambda expression
//     thread t([](int n){
//         cout << n;
//     }, n);

//     // Wait for the thread to complete
//     t.join();
//     return 0;
// }


// 3. Function Objects
// Function Objects or Functors can also be used for a thread as callable. To make functors callable, 
// we need to overload the operator parentheses operator ().



// #include <iostream>
// #include <thread>
// using namespace std;

// // Define a function object (functor)
// class SumFunctor {
// public:
//     int n;
//     SumFunctor(int a) : n(a) {}

//     // Overload the operator() to 
//     // make it callable
//     void operator()() const {
//         cout << n;
//     }
// };

// int main() {

//     // Create a thread using 
//     // the functor object
//     thread t(SumFunctor(3));

//     // Wait for the thread to 
//     // complete
//     t.join();
//     return 0;
// }






////////////      Thread Management         /////////////

// Classes/Methods	        Description

// join()	                It ensures that the calling thread waits for the specified thread to complete its execution.
// detach()	                Allows the thread to run independently of the main thread, meaning the main thread does not need to wait.
// mutex	                A mutex is used to protect shared data between threads to prevent data races and ensure synchronization.
// lock_guard	            A wrapper for mutexes that automatically locks and unlocks the mutex in a scoped block.
// condition_variable	    Used to synchronize threads, allowing one thread to wait for a condition before proceeding.
// atomic	                Manages shared variables between threads in a thread-safe manner without using locks.
// sleep_for()	            Pauses the execution of the current thread for a specified duration.
// sleep_until()	        Pauses the execution of the current thread until a specified time point is reached.
// hardware_concurrency()	Returns the number of hardware threads available for use, allowing you to optimize the use of system resources.
// get_id	                Retrieves the unique ID of the current thread, useful for logging or debugging purposes.



// Problems with Multithreading
// Multithreading improves the performance and utilization of CPU, but it also introduces various problems:

// Deadlock
// Race Condition
// Starvation


// Deadlock -
// A deadlock occurs when two or more threads are blocked forever because they are each waiting for shared resources that the other 
// threads hold. This creates a cycle of waiting, and none of the threads can proceed.

// Race Condition -
// A race condition occurs when two or more threads access shared resources at the same time, and at least one of them modifies the 
// resource. Since the threads are competing to read and write the data, the final result depends on the order in which the threads 
// execute, leading to unpredictable or incorrect results.

// Starvation -
// Starvation occurs when a thread is continuously unable to access shared resources because other threads keep getting priority, 
// preventing it from executing and making progress.






// Thread Synchronization - 
// In multithreading, synchronization is the way to control the access of multiple threads to shared resources, ensuring that 
// only one thread can access a resource at a time to prevent data corruption or inconsistency. This is typically done using 
// tools like mutexes, locks, and condition variables.

// Context switch in multithreading - 
// Context switch is a process in multithreading the process where the CPU stops the execution of one thread and begins executing 
// another within the same process. In this process the CPU stores the state of the running thread so that it can be restored later 
// once the CPU finishes the execution of the other thread.