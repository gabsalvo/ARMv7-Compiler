#!/bin/bash
set -e

echo "[*] Available Assembly files:"
select ASM_FILE in *.s; do
  if [[ -n "$ASM_FILE" ]]; then
    echo "[+] Selected: $ASM_FILE"
    break
  else
    echo "Invalid selection"
  fi
done

echo "[*] Available C test files:"
select C_FILE in *.c; do
  if [[ -n "$C_FILE" ]]; then
    echo "[+] Selected: $C_FILE"
    break
  else
    echo "Invalid selection"
  fi
done

read -p "[?] Output executable name (default: test): " EXE_NAME
EXE_NAME=${EXE_NAME:-test}

# Assemble and compile
echo "[+] Assembling $ASM_FILE..."
arm-linux-gnueabi-as -o code.o "$ASM_FILE"

echo "[+] Compiling $C_FILE + code.o..."
arm-linux-gnueabi-gcc -static -o "$EXE_NAME" "$C_FILE" code.o

echo "[+] Executing with qemu-arm..."
echo "-------------------------------"
qemu-arm ./"$EXE_NAME"
