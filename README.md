# 🛠️ AVR HD44780 74HC595 Driver

This project is a custom hardware driver to interface an HD44780 Character LCD with an ATmega32 microcontroller using a 74HC595 Shift Register in 4-bit mode.

## 🚀 Key Features

* **💻 Standard C Code:** The driver is written in standard C language and does not use any compiler-specific syntax. You can easily port these files to any other AVR compiler or IDE.
* **🔒 Write-Only Mode:** The LCD operates strictly in write-only mode, meaning the Busy Flag is not used. This saves microcontroller pins and simplifies the code logic.
* **📂 Example Project:** A complete demo project is included, configured for an ATmega32 microcontroller running at an 8 MHz clock frequency.

## 🔌 Hardware Connections

All pin configurations, wiring details, and default connections between the MCU, Shift Register, and LCD are fully documented in the Hardware section of this file.

<img width="761" height="1009" alt="Hardware Picture" src="https://github.com/user-attachments/assets/8d14203f-9666-457a-a36c-bc5967d3a40d" />

## ⚠️ Important Warning

This driver functions using the standard delay functions (such as delay_us and delay_ms) for its timing control. If you port this driver to another compiler, ensure your development environment supports these delay routines or update them according to your compiler syntax to maintain proper LCD initialization timings.

## 📌 Version Information

* **Current Version:** v1.0.0
* **Description:** null

---

## 👨‍💻 Developed By

* **👤 Author:** Taha Azad
* **💎 Brand:** AZ Electronic
* **📢 Telegram Channel:** [Join AZ Electronic](https://t.me/AZEletronic)
