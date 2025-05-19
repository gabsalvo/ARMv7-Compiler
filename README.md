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

```

Se vuoi posso anche aggiungerti una badge bar in cima (build status, license, ecc.) o una sezione con esempi di output se vuoi rendere il progetto ancora più chiaro.
```
