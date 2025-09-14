# C++ Course

This repository is my **personal C++ learning notebook**, where I practice and take notes while going through different concepts. 

It contains:

* My own **example programs** for each topic
* **Notes** and explanations as I learn
* A **main entry file** to test and run examples
* A simple **Makefile** to compile and run programs quickly


### **Getting Started**

#### **1. Compile & Run the Main File**

This repo uses a **Makefile** for easy compilation and execution:

```bash
# Compile main.cpp and run it
make

# Or explicitly
make run
```

✅ This will compile `main.cpp` and execute it. Any included example functions will run automatically.

#### **2. Clean Binaries**

Remove compiled binaries with:

```bash
make clean
```

This deletes the `tmp/` folder where compiled binaries are stored.
