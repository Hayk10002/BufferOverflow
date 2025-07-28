# BufferOverflow

## Table of Contents
- [Introduction](#introduction)
- [Build and Run](#build-and-run)
- [Possible Output](#possible-output)

## Introduction
This project demonstrates how buffer overflow corrupts values of other variables.
## Build and Run
To clone and run this project, ensure you have [Git](https://git-scm.com) and [CMake](https://cmake.org/) installed. Use the following commands:

```bash
# Clone this repository
$ git clone https://github.com/Hayk10002/BufferOverflow

# Navigate to the repository
$ cd BufferOverflow

# Generate build files
$ cmake -DCMAKE_BUILD_TYPE=Release -S . -B build

# Build the project
$ cmake --build build --config Release

# Run the executable with the desired vector size
$ your/path/to/exe/main.exe
```

## Possible Output
If you see the Action section in the github, and open the latest run's Test section, you will see two tests, which pass, the first one will pass showing how many iterations where needed to get to the variable, and second one will pass becuase the address analyzer will detect out of bound access and report it.
