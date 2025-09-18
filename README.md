# Projects Portfolio

This repository contains a collection of projects that demonstrate my skills in **systems programming, concurrency, and operating systems concepts**. Below are detailed descriptions of the key projects.

---

## Project: Custom Shell Implementation

This project involved building a functional Unix-like shell in C++ that could execute commands, manage processes, and handle input/output redirection. While some scaffolding (such as the parameter class and basic header files) was provided by the instructor, the core functionality of process management and I/O handling was designed and implemented by me.  

### Key Features
- **Process Creation & Management:** Implemented process control using `fork()` and `exec()` system calls. Used `wait()` and `waitpid()` to synchronize execution and prevent zombie processes.  
- **Input/Output Redirection:** Extended the shell to handle I/O redirection with the `freopen()` function, enabling input from and output to files, similar to real shell behavior.  
- **Foreground & Background Execution:** Added support for running processes both in the foreground (blocking) and background (non-blocking), allowing multitasking within the shell.  
- **Code Refactoring:** After initial feedback, moved parsing logic into its own class (`parse.hpp` / `parse.cpp`) for better structure and efficiency, while retaining the provided parameter class separately.  

### Testing
The shell was validated with commands such as:  
- `ls -l` → displayed directory contents.  
- `ls -l > testfile.txt` → redirected output into a file.  
- `grep -i shell testfile.txt` → searched file contents for specific keywords.  
- `cat < myshell.cpp &` → executed in the background while keeping the shell active.  

### Outcome
The project successfully extended the base provided code into a fully operational shell with **process control, I/O redirection, and background execution features**. It demonstrates knowledge of **operating system concepts, Unix process management, and low-level system calls**, while also showing an ability to work with partially provided scaffolding and expand it into a complete system.

---

## Project: Multi-Threaded Collatz Stopping Time Generator

This project explored **parallel programming and concurrency control** by computing the stopping times of Collatz sequences across a large range of numbers using multiple threads.  

### Key Features
- **Multi-Threading:** Implemented with the C++ standard threading library to divide the computation of Collatz sequences across multiple threads for improved performance.  
- **Race Condition Handling:** Introduced synchronization with mutex locks to ensure safe access to shared global resources (a histogram array and counter).  
- **Performance Measurement:** Used `clock_gettime()` to measure execution time at nanosecond precision, recording results as `(N, T, runtime)` where `N` is range size and `T` is thread count.  
- **Configurable Execution:** Supported both synchronized (safe) execution and an optional `-nolock` mode, which allowed experimentation with race conditions and their performance impact.  
- **Data Visualization:** Produced histograms of Collatz stopping times and performance graphs showing execution time vs. thread count with and without locking.  

### Experiments & Results
- Tested thread counts from 1 to 8 with large values of `N`.  
- Collected runtime averages across multiple runs to account for system noise.  
- Visualized tradeoffs between concurrency gains and locking overhead.  

### Outcome
This project demonstrated proficiency in **parallel computation, thread synchronization, and performance analysis**. It reflects practical skills in solving concurrency issues, benchmarking performance, and analyzing trade-offs between speed and correctness.

---
