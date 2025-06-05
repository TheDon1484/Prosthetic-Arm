# Hybrid Neuro-Muscular Prosthetic Arm (ESP32)

This project will use EMG and EEG inputs to control a 3D-printed prosthetic arm using an ESP32, servo motors, and wireless communication.

## Project Structure

- `src/`: Main Arduino loop
- `lib/filter`: Signal smoothing for EMG
- `lib/eeg_handler`: Handles EEG intent recognition (via BLE)
- `include/`: Shared headers (expand later)

### Notes

Getting the files to connect to the github has been such a pain.
it doesn't work for some reason