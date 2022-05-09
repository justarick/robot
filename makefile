robot: main.o robot.o r.interface.o r.movement.o r.system.o
	cc -o robot main.o robot.o r.interface.o r.movement.o r.system.o

main.o: main.c
	cc -c main.c

robot.o: robot.c
	cc -c robot.c

r.interface.o: r.interface.c
	cc -c r.interface.c

r.movement.o: r.movement.c
	cc -c r.movement.c

r.system.o: r.system.c
	cc -c r.system.c

clean:
	rm *.o robot
