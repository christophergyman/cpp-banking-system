clear

clang++ -std=c++17 \
    ../src/main.cpp \
    ../src/AccountHolder.cpp \
    -I ../include \
    -o main 

./main