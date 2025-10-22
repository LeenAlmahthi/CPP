C = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 
NAME = Zombies
SRC = main.cpp randomChump.cpp Zombie.cpp newZombie.cpp 
OBJ = $(SRC:.cpp=.o)
$(NAME) : $(OBJ)
	$(C) $(CFLAG) $(OBJ) -o $(NAME)
%.o:%.cpp
	$(C) $(CFLAG) -c $<  -o $@
all : $(NAME)
clean : 
	rm -f $(OBJ)
fclean : clean 
	rm -f $(NAME)
re : fclean all 
.PHONY: all clean fclean re  