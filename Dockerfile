FROM gcc:4.9

RUN mkdir /code
WORKDIR /code
COPY main.cpp /code
RUN g++ -o Test main.cpp Fichas.cpp Iniciar.cpp Tablero.cpp
CMD ["./Test"]
