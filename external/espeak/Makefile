# makefile for libespeak

include ../../makefile.defs

CPPFLAGS = -I ../../kar -I ../../dwtools -I ../../sys -I ../../dwsys -I ../../stat

OBJECTS = categories.o compiledata.o compiledict.o dictionary.o encoding.o error.o intonation.o klatt.o  \
	numbers.o phonemelist.o proplist.o readclause.o setlengths.o speech.o \
	synthdata.o synthesize.o \
	synth_mbrola.o tr_languages.o mnemonics.o translate.o voices.o wavegen.o \
	create_espeak_ng_FileInMemoryManager.o create_espeak_ng_FileInMemorySet.o \
	espeakdata_FileInMemory.o espeak_api.o espeak_io.o

.PHONY: all clean

all: libespeak.a

clean:
	$(RM) $(OBJECTS)
	$(RM) libespeak.a

libespeak.a: $(OBJECTS)
	touch libespeak.a
	rm libespeak.a
	$(AR) cq libespeak.a $(OBJECTS)
	$(RANLIB) libespeak.a

$(OBJECTS):  *.h ../../kar/*.h ../../sys/*.h ../../dwsys/*.h ../../stat/*.h

