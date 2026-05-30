# BiText Converter 🔄

**BiText Converter** is a simple yet effective Command-Line Interface (CLI) tool written in C++ that allows users to convert back and forth between Strings, Binary code, and Decimal values based on the ASCII encoding standard.

## 🌟 Features

This repository includes 2 main tools that operate independently:

1. **Text to Binary/Decimal Converter (`text_to_binary.cpp`)**
   * Converts a String into its corresponding ASCII Decimal values.
   * Converts a String into 8-bit Binary code.
   * Automatically detects if the input contains only digits to handle them specifically.

2. **Binary/Decimal to Text Converter (`binary_to_text.cpp`)**
   * Allows users to choose the input mode: `Binary` or `Decimal`.
   * **Binary Mode:** Takes a binary string (with or without spaces) and decodes it back into readable text. Includes format error checking (input must be a multiple of 8 bits).
   * **Decimal Mode:** Takes a sequence of decimal numbers (from 0 to 127) and converts them into the corresponding ASCII characters.

## 🛠️ Prerequisites

* A C++ compiler (e.g., `g++`, `clang++`, or MSVC).
* Any Terminal or IDE that supports C++ (VS Code, Code::Blocks, Visual Studio, etc.).

## 🚀 How to Run

1. **Clone this repository to your local machine:**
   ```bash
   git clone https://github.com/JerryHacAm/BiText-Converter.git
   cd BiText-Converter
