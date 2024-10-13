SRC_DIR = src
OBJ_DIR = obj
BUILD_DIR = build
INC_DIR = include  # Diretório onde os arquivos de cabeçalho estão

SOURCES = $(SRC_DIR)/main.cpp  $(SRC_DIR)/Pessoa.cpp $(SRC_DIR)/Membro_clube.cpp $(SRC_DIR)/Jogador.cpp $(SRC_DIR)/Tecnico.cpp $(SRC_DIR)/Tecnico_jogador.cpp $(SRC_DIR)/Juiz.cpp $(SRC_DIR)/Time.cpp $(SRC_DIR)/Jogo.cpp $(SRC_DIR)/Campeonato.cpp
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SOURCES:$(SRC_DIR)/%.cpp=%.o))
EXECUTABLE = $(BUILD_DIR)/tournament

# Flags de compilação
CXXFLAGS = -I$(INC_DIR)  # Incluindo o diretório de cabeçalhos

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)