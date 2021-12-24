# DESCRIPTION

Electromagnetic FDTD Solver

# FEATURES

-1D problems
-Homogeneus media

# COMPILATION

1-Compile object files

gcc -Wall -O -c source.c update1d.c gridinit.c main.c

2-Link object files together to obtain the executable

gcc source.o fdtd1d.o update1d.o gridinit.o main.o -lm -o fdtd1d

