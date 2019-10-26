CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wpedantic

LIBS := *.hh *.cc
TESTING := Testing.cc Testing.hh
TEST_RAW := $(shell ls Tests) 
TEST_FILES := $(TEST_RAW:%.cc=Tests/%)

.PHONY: clean all test test-%

all: test

Tests/%Test: Tests/%Test.cc $(TESTING) $(LIBS)
	@ $(CXX) $(CFLAGS) $@.cc Testing.cc -o $@

test: $(TEST_FILES) $(TESTING)
	@ echo $(TEST_RAW)
	@ echo $(TEST_FILES)
	@run-parts --exit-on-error Tests

test-%: Tests/$*Test $(TESTING)
	@ Tests/$*Test

clean:
	@echo "Removing all executables"
	@rm Tests/*Test
