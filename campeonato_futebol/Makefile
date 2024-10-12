# Definindo variáveis
CXX = g++
CXXFLAGS = -Wall -Wextra -g
SOURCES = main.cpp Pessoa.cpp Membro_clube.cpp Jogador.cpp Tecnico.cpp Tecnico_jogador.cpp Juiz.cpp Time.cpp Jogo.cpp Campeonato.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = tournament.exe

# Regra principal
all: $(EXECUTABLE)

# Como compilar o executável
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como compilar os arquivos .cpp em arquivos .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean:
	del /Q $(OBJECTS) $(EXECUTABLE)

