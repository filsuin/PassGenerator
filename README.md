# PassGenerator

PassGenerator is a C++ application that generates random passwords based on user-specified criteria such as length, inclusion of lowercase letters, uppercase letters, numbers, and special characters.

## Getting Started

### Prerequisites

Ensure you have the following installed on your system:

- A C++ compiler (e.g., `g++` for GNU Compiler Collection)
- C++ Standard Library
- A command-line interface (CLI) like terminal or command prompt

### Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/yourusername/PassGenerator.git
   ```

2. Navigate to the repository directory:

   ```sh
   cd PassGenerator
   ```

### Building the Project

To compile the project, run the following command:

```sh
g++ -o PassGenerator main.cpp
```

This command compiles `main.cpp` and generates an executable file named `PassGenerator`.

### Usage

Run the executable:

```sh
./PassGenerator
```

You will be prompted to enter the password length and specify whether to use lowercase characters, uppercase characters, numbers, and special characters. Follow the on-screen instructions to generate your password.

### Example

```sh
Enter password length: 12
Use lowercase characters? (y/n): y
Use uppercase characters? (y/n): y
Use numbers? (y/n): y
Use special characters? (y/n): y
Generated password: aB1!dE2@fG3#
```
