Al ejecutar make object y pedirle nm:

barbara@bsidoruk ~/Desktop/HOcompiled/simbolos $ nm visibility.o
0000000000000000 t add_abs
000000000000002a T main
                 U printf
0000000000000000 r val1
0000000000000004 R val2
0000000000000000 d val3
0000000000000004 D val4

T 	Normal code section
U 	Undefined symbol used but not defined. Dependency on another library.
R   The symbol is in a read only data section
D   Initialized data section

If lowercase, the symbol is usually local; if uppercase, the symbol is global (external).

