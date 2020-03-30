FROM gcc:4.9

RUN mkdir /code
WORKDIR /code
COPY Test.cpp /code
RUN g++ -o Test Test.cpp
CMD ["./Test"]
