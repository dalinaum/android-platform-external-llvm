// RUN: %llvmgcc -S %s -o - | grep "align 2"
// XFAIL: *
struct A { short s; short t; int i; };
void q() { struct A a = {0}; }
