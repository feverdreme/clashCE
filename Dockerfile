FROM archlinux

WORKDIR /app

RUN pacman -Syu --noconfirm
RUN pacman -Su git base-devel --noconfirm

RUN curl -LJ https://github.com/CE-Programming/toolchain/releases/download/v9.2.2/linux_CEdev_v9.2.2.tar.gz -o CEdev.tar.gz
RUN tar -zxvf CEdev.tar.gz
RUN cp -r CEdev /opt/CEdev

ENV PATH="/opt/CEdev/bin:$PATH"
RUN echo $PATH 

COPY . .

RUN make src/gfx
RUN make