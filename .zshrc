export PATH="/opt/homebrew/bin:/opt/homebrew/sbin:/usr/local/bin:$PATH"

alias python3="/opt/homebrew/bin/python3.11"
alias g++="g++-15"

# Competitive Programming
run() {
    g++-15 "$1" -std=c++17 -O2 -o main && ./main
}

# ILP / OR-Tools
ilp() {
    clang++ "$1" \
        -std=c++17 \
        -I/opt/homebrew/opt/or-tools/include \
        -L/opt/homebrew/opt/or-tools/lib \
        -lortools \
        -o ilp_solver && ./ilp_solver
}

