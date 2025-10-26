<div align="center">

# 🔐 ProMicro Payloads Collection

### *Educational Cybersecurity Testing Suite*

<img src="https://cdn.sparkfun.com//assets/parts/1/1/2/0/0/13614-01.jpg" alt="Pro Micro Board" width="400"/>

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)](https://www.arduino.cc/)
[![Hardware](https://img.shields.io/badge/Hardware-Pro_Micro-red?style=for-the-badge)](https://www.sparkfun.com/products/12640)
[![License](https://img.shields.io/badge/License-Educational-yellow?style=for-the-badge)](LICENSE)
[![Warning](https://img.shields.io/badge/⚠️-LAB_USE_ONLY-red?style=for-the-badge)](#warning)

</div>

---

## 📖 About This Project

This repository contains a collection of **Arduino-based USB HID payloads** designed for **cybersecurity education and penetration testing** in controlled lab environments. As a cybersecurity undergraduate student, I created these scripts to understand USB attack vectors, practice defensive strategies, and explore the capabilities of BadUSB attacks.

> **🎓 Purpose:** Educational research and authorized security testing only

---

## 🛠️ Hardware & Software

### 💻 Hardware Used
- **[SparkFun Pro Micro (ATmega32U4)](https://www.sparkfun.com/products/12640)** - Arduino-compatible microcontroller with native USB HID support
- USB Cable (Micro-USB to USB-A)

<div align="center">
<img src="https://www.sparkfun.com/media/catalog/product/cache/a793f13fd3d678cea13d28206895ba0c/1/2/12640-01a.jpg" alt="Pro Micro Pinout" width="500"/>
</div>

### 🔧 Software Used
- **[Arduino IDE](https://www.arduino.cc/en/software)** - Version 1.8.x or 2.x
- **Keyboard Library** - Native Arduino HID library for keystroke injection

---

## 📂 Payload Descriptions

### 🎯 Basic Payloads

#### 1️⃣ **HelloWorld** 📝
- **Description:** A simple "Hello World" payload that opens Notepad and types a test message
- **Purpose:** Testing basic keyboard emulation and timing
- **Functionality:** Opens Run dialog → Launches Notepad → Types test string
- **Use Case:** Initial setup verification and timing calibration

---

### 🎭 Prank Payloads

#### 2️⃣ **RickRollPrank** 🎵
- **Description:** A harmless prank payload that rickrolls the target
- **Purpose:** Demonstrating script execution and remote file download
- **Functionality:** Executes hidden PowerShell command → Downloads and runs rickroll script from GitHub
- **Use Case:** Social engineering awareness training

---

### 🛡️ Security Testing Payloads

#### 3️⃣ **TurnOffDefender** 🔓
- **Description:** Disables Windows Defender Real-time Protection via UAC manipulation
- **Purpose:** Testing security bypass techniques and UAC weaknesses
- **Functionality:** Opens UAC settings → Navigates UI → Disables protection → Handles UAC prompt
- **Use Case:** Understanding Windows security controls and bypass methods

#### 4️⃣ **TurnOffDefenderFast** ⚡
- **Description:** Optimized version that quickly disables Windows Defender
- **Purpose:** Demonstrating efficient PowerShell-based security bypass
- **Functionality:** Executes PowerShell with elevated privileges → Disables real-time protection
- **Use Case:** Speed-optimized security testing

---

### 🌐 Network Reconnaissance Payloads

#### 5️⃣ **WifiStealerDis1** 📡
- **Description:** Extracts saved WiFi credentials from Windows systems
- **Purpose:** Testing credential extraction and data exfiltration techniques
- **Functionality:** Downloads batch script → Executes WiFi profile extraction → Handles UAC
- **Use Case:** Network security assessment and credential security testing

#### 6️⃣ **WifiStealerDis1_V2** 📡✨
- **Description:** Enhanced version with improved speed and stealth
- **Purpose:** Optimized WiFi credential extraction
- **Functionality:** Ultra-fast PowerShell execution → Direct command injection → Minimal detection footprint
- **Use Case:** Advanced network reconnaissance testing

---

### 📥 Data Exfiltration Payloads

#### 7️⃣ **FileStealer** 📁
- **Description:** Copies browser data and network files to a designated folder
- **Purpose:** Testing data exfiltration and file access controls
- **Functionality:** Creates hidden directory → Uses Robocopy to extract Edge browser data
- **Use Case:** Understanding browser security and data protection mechanisms

#### 8️⃣ **DownloadFileGithub** ⬇️
- **Description:** Downloads and executes scripts from GitHub repositories
- **Purpose:** Remote payload delivery testing
- **Functionality:** Hidden PowerShell → Downloads repo script → Executes automatically
- **Use Case:** Testing remote code execution and download restrictions

#### 9️⃣ **DownloadFileGithubWorking** ✅
- **Description:** Verified working version of the GitHub download payload
- **Purpose:** Reliable remote script execution
- **Functionality:** Same as above with optimized timing and error handling
- **Use Case:** Production-ready payload delivery testing

#### 🔟 **DownloadIndexFromGithub** 📑
- **Description:** Downloads specific index files from GitHub repositories
- **Purpose:** Targeted file retrieval and execution
- **Functionality:** Executes index file download script via PowerShell
- **Use Case:** Custom payload deployment scenarios

---

### 🎯 Advanced Payloads

#### 1️⃣1️⃣ **ReverseShell** 🐚
- **Description:** Establishes a reverse shell connection (payload preparation)
- **Purpose:** Understanding remote access techniques and network security
- **Functionality:** Disables Windows Defender → Prepares environment for reverse connection
- **Use Case:** Advanced penetration testing and incident response training

---

## ⚙️ Setup & Installation

### 📋 Prerequisites
1. Arduino IDE installed on your computer
2. SparkFun Pro Micro board
3. USB cable for programming
4. **Windows target machine** (payloads are Windows-specific)

### 🚀 Installation Steps

```bash
# 1. Clone this repository
git clone https://github.com/InoshMatheesha/ProMicro-Payloads.git

# 2. Open Arduino IDE
# 3. Go to File → Preferences → Additional Board Manager URLs
# Add: https://raw.githubusercontent.com/sparkfun/Arduino_Boards/master/IDE_Board_Manager/package_sparkfun_index.json

# 4. Go to Tools → Board → Boards Manager
# Search for "SparkFun AVR Boards" and install

# 5. Select Board: Tools → Board → SparkFun Pro Micro
# 6. Select Processor: Tools → Processor → ATmega32U4 (5V, 16MHz)
# 7. Select Port: Tools → Port → (Your COM Port)
```

### 📤 Uploading Payloads

1. Open any `.ino` file from the payload folders
2. Click **Verify** (✓) to compile the code
3. Click **Upload** (→) to flash the Pro Micro
4. Wait for "Done uploading" message
5. **Disconnect** and **reconnect** the Pro Micro to activate the payload

---

## ⚠️ LEGAL DISCLAIMER & WARNING

<div align="center">

### 🚨 **CRITICAL WARNING** 🚨

</div>

> **⚠️ FOR EDUCATIONAL AND AUTHORIZED TESTING ONLY ⚠️**

This repository and its contents are provided **STRICTLY FOR EDUCATIONAL PURPOSES** in controlled laboratory environments. These tools are designed for:

- ✅ **Authorized penetration testing**
- ✅ **Cybersecurity research and education**
- ✅ **Personal lab testing environments**
- ✅ **Authorized security assessments**

### 🚫 UNAUTHORIZED USE IS ILLEGAL

- ❌ **DO NOT** use these payloads on systems you don't own or have explicit written permission to test
- ❌ **DO NOT** use for malicious purposes or unauthorized access
- ❌ **DO NOT** deploy in production environments without proper authorization
- ❌ **DO NOT** use to harm, disrupt, or exploit any individual or organization

### ⚖️ Legal Consequences

Unauthorized use of these tools may violate:
- Computer Fraud and Abuse Act (CFAA)
- Computer Misuse Act
- Other local and international cybersecurity laws

**Penalties may include fines, imprisonment, and civil liability.**

### 🎓 Responsible Use

- Always obtain **written permission** before testing
- Only use in **isolated lab environments**
- Never test on systems containing **sensitive data**
- Follow your organization's **security policies**
- Practice **ethical hacking** principles

**BY USING THESE TOOLS, YOU ACCEPT FULL RESPONSIBILITY FOR YOUR ACTIONS.**

---

## 🙏 Credits & Acknowledgments

This project was made possible through knowledge and inspiration from amazing cybersecurity educators:

<div align="center">

### 🌟 Special Thanks To:

</div>

| Educator | Contribution | Links |
|----------|-------------|-------|
| **🎖️ David Bombal** | Network security, ethical hacking tutorials, and cybersecurity fundamentals | [YouTube](https://www.youtube.com/@davidbombal) |
| **🌐 NetworkChuck** | Practical cybersecurity skills, Linux tutorials, and inspiring IT career guidance | [YouTube](https://www.youtube.com/@NetworkChuck) |
| **🔓 Darren Kitchen (Hak5)** | USB attack research, Rubber Ducky payloads, and penetration testing tools | [YouTube](https://www.youtube.com/@hak5) • [Hak5](https://hak5.org/) |

Their educational content has been invaluable in understanding USB HID attacks, penetration testing methodologies, and cybersecurity best practices.

---

## 📚 Learning Resources

### 🎥 Recommended Videos
- David Bombal's "Ethical Hacking" series
- NetworkChuck's "BadUSB Attacks" tutorials
- Hak5's "USB Rubber Ducky" payloads

### 📖 Recommended Reading
- OWASP Testing Guide
- The Web Application Hacker's Handbook
- Penetration Testing: A Hands-On Introduction

---

## 🤝 Contributing

Contributions are welcome! If you have improvements or new educational payloads:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/NewPayload`)
3. Commit your changes (`git commit -m 'Add new educational payload'`)
4. Push to the branch (`git push origin feature/NewPayload`)
5. Open a Pull Request

**Please ensure all contributions are ethical and educational.**

---

## 📧 Contact

**Inosh Matheesha**  
🎓 Cybersecurity Undergraduate Student  
📫 [GitHub](https://github.com/InoshMatheesha)

---

## 📜 License

This project is licensed for **educational purposes only**. See the [LICENSE](LICENSE) file for details.

---

<div align="center">

### 🔒 Stay Ethical. Stay Legal. Stay Curious. 🔒

**Remember: With great power comes great responsibility.**

---

*Made with ❤️ for cybersecurity education*

**⭐ If you found this educational, please star the repository!**

</div>