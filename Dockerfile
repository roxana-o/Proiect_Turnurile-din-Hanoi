
FROM gcc:latest
WORKDIR /usr/src/proiect
COPY proiect.c .
RUN gcc -o proiect proiect.c -lstdc++
CMD ["./proiect"]