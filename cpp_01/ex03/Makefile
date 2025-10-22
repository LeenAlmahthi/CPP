C = c++
CFLAG =  -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:%.cpp=%.o)
NAME = Weapon
$(NAME) : $(OBJ)
	$(C) $(CFLAG) $(OBJ) -o $(NAME)
%.o : %.cpp
	$(C) $(CFLAG) -c $< -o $@
all: $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean 
	rm -f $(NAME)
re: fclean all 
.PHONY : all re clean fclean 