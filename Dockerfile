FROM alpine:edge

RUN apk update && \
    apk add --repository=http://dl-cdn.alpinelinux.org/alpine/edge/testing \
      flawfinder \
      gcc \
      make \
      musl-dev \
      ncurses-dev

WORKDIR /usr/src/lkrt
COPY . /usr/src/lkrt

