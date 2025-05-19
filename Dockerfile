FROM debian:bullseye

RUN apt update && apt install -y \
  gcc-arm-linux-gnueabi \
  libc6-dev-armel-cross \
  qemu-user \
  build-essential \
  nano

WORKDIR /workspace
CMD ["/bin/bash"]
