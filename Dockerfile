FROM gcc:13 AS builder 

WORKDIR /app 

#Copy source files 
COPY . .

#Complile C++ KiwiFit Co app 
RUN g++ -o myapp main.cpp user.cpp workout.cpp auth.cpp -std=c++17

# RUN Stage 
FROM debian:bookworm-slim 

WORKDIR /app

COPY --from=buider /app/myapp . 

EXPOSE 8080

CMD ["./myapp"]

