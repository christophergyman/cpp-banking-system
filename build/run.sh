clear

clang++ -std=c++17 \
    ../src/main.cpp \
    ../src/AccountHolder.cpp \
    ../src/AccountCard.cpp \
    ../src/Account.cpp \
    -I ../include \
    -o main 

./main