# 🛠️ ARM Emulator Docker Environment

This repository provides a ready-to-use Docker environment to compile and test ARMv7 Assembly functions together with C test files.

## 🚀 Quick Start

### 1. Clone the repository

```bash
git clone https://github.com/your-username/arm-emu.git
cd arm-emu
````

### 2. Build the Docker image

```bash
docker build -t arm-emu .
```

### 3. Run the container

```bash
docker run -it --rm -v $(pwd):/workspace arm-emu
```

You will now be inside the container. From there:

```bash
cd examples
./run.sh
```

### 🔧 `run.sh` – Test Script Explained

The `examples/run.sh` script guides you through selecting and running your ARM Assembly code with a C test file.

#### What it does:

1. **Lists all `.s` Assembly files** and lets you select one.
2. **Lists all `.c` test files** and lets you select one.
3. Asks you to name the output executable (defaults to `test`).
4. Compiles the Assembly with `arm-linux-gnueabi-as`.
5. Links it with the selected C file using `arm-linux-gnueabi-gcc`.
6. Runs the executable using `qemu-arm`.

#### Example usage:

```bash
cd examples
./run.sh
```

You will be prompted to interactively select files and run them.

---

### 📦 Dependencies (If Running Without Docker)

If you want to run everything **natively on your system without Docker**, make sure these packages are installed.

#### On Ubuntu/Debian:

```bash
sudo apt update
sudo apt install -y gcc-arm-linux-gnueabi \
  libc6-dev-armel-cross \
  qemu-user \
  build-essential
```

#### On Fedora:

```bash
sudo dnf install -y arm-none-eabi-gcc-cs \
  glibc-arm-linux-gnueabi \
  qemu-user \
  make gcc
```

*Note: package names might vary slightly across Fedora versions — check availability via `dnf search` if needed.*

---

## 📂 Project Structure

```
arm-emu/
├── Dockerfile         # Docker environment definition
├── examples/          # ARM assembly (.s), C tests (.c), and run script
│   ├── *.s
│   ├── *.c
│   └── run.sh
└── README.md          # This file
```

## 🐳 Dockerfile Overview

The Docker image installs:

* `gcc-arm-linux-gnueabi` — cross-compiler for ARM
* `qemu-user` — ARM emulator
* `build-essential` — for `make` and GCC tools
* `nano` — for quick editing

## 📜 License

This project is released under the MIT License.
