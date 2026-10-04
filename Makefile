CXX = g++
CXXFLAGS = -std=c++20 -O2 -Wall

SRCS = $(wildcard *.cpp)
BINS = $(SRCS:.cpp=)

.PHONY: clean run

# Build a specific target: make <filename_without_extension>
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Optional: build and run in one step: make run FILE=<filename>
run:
	@if [ -z "$(FILE)" ]; then echo "Usage: make run FILE=<filename_without_extension>"; exit 1; fi
	$(CXX) $(CXXFLAGS) $(FILE).cpp -o $(FILE)
	./$(FILE)

# Remove all generated binaries
clean:
	@echo "Removing binaries..."
	@rm -f $(BINS) *.exe *.out
	@find . -maxdepth 1 -type f -executable ! -name "*.*" ! -name "Makefile" -delete 2>/dev/null || true
	@echo "Folder cleaned."