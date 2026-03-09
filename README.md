# Potentiometer-Controlled Dimmable LED

Control LED brightness smoothly using a potentiometer, with real-time values displayed via Serial Monitor.

> Built while following [Paul McWhorter's Arduino for Beginners](https://www.youtube.com/@paulmcwhorter) series.

---

## Demo

![Demo GIF](demo.gif)

---

## How It Works

The potentiometer outputs an analog voltage read by the Arduino as a value between 0–1023. This is mapped to a PWM range of 0–255 and sent to the LED via `analogWrite()`, controlling its brightness.
