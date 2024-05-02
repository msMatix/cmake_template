.PHONY: all build clean test run_tests cov

all: build run test

build:
	mkdir -p build && cd build \
		&& cmake -DCMAKE_BUILD_TYPE=Debug .. \
		&& make -j4 \
		&& [ -f ../compile_commands.json ] || ln -s $(PWD)/build/compile_commands.json ../compile_commands.json

run:
	@echo "Running main application..."
	./build/src/my_program

test: build run_tests

run_tests:
	@echo "Running tests..."
	cd build/tst && GTEST_COLOR=1 ./my_test

cov: build test
	mkdir -p coverage \
		&& lcov \
			--directory build  \
			--capture  \
			--output-file coverage/coverage.info \
			--ignore-errors mismatch \
			--include "*/src/*" \
			--exclude "*/tst/*" \
			--exclude "*gtest*" \
		&& genhtml coverage/coverage.info --output-directory coverage

clean:
	cmake --build build --target clean
