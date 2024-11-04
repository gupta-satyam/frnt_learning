# Login System README

## Overview

This is a simple console-based login system implemented in C++. It allows users to register, log in, and retrieve their passwords if forgotten. The user data is stored in a text file named `records.txt`.

## Features

- User registration
- User login
- Password retrieval for forgotten passwords
- Simple console menu for user interaction

## Requirements

- C++ compiler (e.g., g++, clang++)
- Basic understanding of C++ programming
- File handling knowledge in C++

## File Structure

- `main.cpp`: Contains the main program logic for the login system.
- `records.txt`: Stores user credentials in the format `username password`.

## How to Compile and Run
**Compile the Code**:
   Use a C++ compiler to compile the program. For example, using g++:
   ```bash
   g++ main.cpp -o login_system
   ```

## Usage

When you run the program, you'll see a welcome message and a menu with the following options:

1. **Login**: Enter your username and password to access your account.
2. **Register**: Create a new account by providing a username and password.
3. **Forgot Password**: Retrieve your password using your username.
4. **Exit**: Exit the program.

### Example Interaction

```
WELCOME TO THE LOGIN PAGE
________________MENU________________

| press 1 to login                            |
| press 2 to register                         |
| press 3 if you forgot your PASSWORD         |
| press 4 to exit                             |

please enter your choice : 
```

### Notes

- Ensure that `records.txt` is in the same directory as your executable.
- The system does not handle duplicate usernames during registration; it simply appends new entries to the file.

## Functions

### `void login()`

Prompts the user for their username and password, checks against stored credentials, and handles successful or failed login attempts.

### `void registration()`

Allows new users to register by entering a username and password, which are then saved in `records.txt`.

### `void forgot()`

Provides options for users who have forgotten their passwords, allowing them to search for their username and retrieve their password.

## Potential Improvements

- Implement password hashing for better security.
- Add input validation to prevent crashes from invalid input.
- Allow users to update their passwords.

## License

This project is open-source and available for anyone to use and modify. Please give appropriate credit when using the code.

## Acknowledgements

This project is a simple demonstration of file handling and user authentication in C++. For more complex implementations, consider learning about databases and secure authentication methods.
