C = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp zombieHorde.cpp Zombie.cpp
OBJ = $(SRC:%.cpp=%.o)
NAME = Zombie

$(NAME) : $(OBJ)
	$(C) $(CFLAG) $(OBJ) -o $(NAME)  
%.o:%.cpp
	$(C) $(CFLAG) -c $< -o $@  
all : $(NAME)
clean: 
	rm -f $(OBJ)
fclean : clean 
	rm -f $(NAME)
re : clean all 
.PHONY : re all clean fclean 