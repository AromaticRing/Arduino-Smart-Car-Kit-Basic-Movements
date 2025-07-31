# 🚗 Smart Kit Car (Obstacle Avoidance Robot)

An Arduino-based smart robotic car that autonomously detects obstacles using an ultrasonic sensor and adjusts its movement to avoid collisions.

---

## 🎥 Demo Video

👉 *[[Demo video link here](https://youtu.be/FEy6YuiIQD8)]*

---

## 📌 Project Description

The **Smart Kit Car** is a simple yet powerful autonomous robot that uses an **ultrasonic distance sensor** to detect obstacles in its path and avoid them by changing direction or stopping. It’s ideal for beginner robotics projects, DIY car kits, and STEM learning activities.

The car continuously checks for objects ahead, and if the distance is below a threshold, it performs maneuvers such as **stopping**, **reversing**, or **turning**, depending on the logic programmed.

---

## 🧠 Features

- 🔄 Continuous obstacle scanning with ultrasonic sensor (HC-SR04)
- 🚫 Auto-stop when obstacle is too close
- 🔄 Turns or reverses to avoid collisions
- 🧩 Simple logic-based maneuvering
- 🛠️ Fully autonomous movement using Arduino

---

## 🛠️ Hardware Components

| Component                 | Quantity |
|--------------------------|----------|
| Arduino UNO/Nano         | 1        |
| HC-SR04 Ultrasonic Sensor| 1        |
| Motor Driver Module (L298N or L293D)| 1        |
| DC Gear Motors           | 2        |
| Wheels                   | 2        |
| Chassis                  | 1        |
| Battery Pack             | 1        |
| Jumper Wires             | As needed |

---

## 🧰 Software Used

- Arduino IDE
- C/C++ (Arduino language)

---

## 🔌 Pin Configuration

| Pin         | Purpose                     |
|-------------|-----------------------------|
| Trigger     | Connected to HC-SR04 TRIG   |
| Echo        | Connected to HC-SR04 ECHO   |
| Motor Pins  | Connected to IN1, IN2, IN3, IN4 on motor driver |
| Power Pins  | 5V/12V for Arduino and motors |

---

## 📜 How It Works

1. The ultrasonic sensor constantly measures distance in front of the car.
2. If the path is clear (`distance > 20 cm`), the car moves forward.
3. If an obstacle is detected:
   - It stops.
   - Backs up for a short duration.
   - Turns left or right randomly (optional).
   - Resumes forward motion if path is clear.

---

## 🚀 Getting Started

### ✅ Uploading the Code
1. Open `sketch_jul31a.ino` in the Arduino IDE.
2. Connect your Arduino board via USB.
3. Select the correct board and COM port.
4. Upload the code.

---

## 👨‍💻 Authors

Developed by:

- **Anshul Dewangan**
- **Pratyaksh Lodhi**
- **Aaron David Don**
- **Joshua Benchamin**

---

## 📝 License

This project is open-source and available under the [MIT License](LICENSE).

---

## 📬 Contributions

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change or improve.



