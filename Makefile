CFLAGS = -Wall -Wextra -Werror -I src
CPPFLAGS = -MMD

bin/main: obj/src/Geometry/main.o obj/src/LibAnother/Correct_input.o obj/src/LibAnother/translation_universal.o obj/src/Libgeom/SircleP.o obj/src/Libgeom/SircleS.o 
	$(CC) $(CFLAGS) -o $@ $^ -lm

obj/src/Geometry/main.o: src/Geometry/main.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/Libgeom/SircleS.o: src/Libgeom/SircleS.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/Libgeom/SircleP.o: src/Libgeom/SircleP.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/LibAnother/Correct_input.o: src/LibAnother/Correct_input.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/LibAnother/translation_universal.o: src/LibAnother/translation_universal.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<		

-include main.d SircleP.d SircleS.d translation_universal.d Correct_input.d

clean:
	rm obj/src/*/*.[oda]
run:
	bin/./main	
