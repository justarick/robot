robot: main.o robot.o r.interface.o r.movement.o r.system.o helpers.h
	cc -o robot main.o robot.o r.interface.o r.movement.o r.system.o

main.o: main.c helpers.h
	cc -c main.c

robot.o: robot.c helpers.h
	cc -c robot.c

r.interface.o: r.interface.c helpers.h
	cc -c r.interface.c

r.movement.o: r.movement.c helpers.h
	cc -c r.movement.c

r.system.o: r.system.c helpers.h
	cc -c r.system.c

clean:
	rm *.o robot
