NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC		=	megaphone.cpp

OBJS 	= $(SRC:.c=.o)

all: $(NAME) $(OBJS)

$(NAME): $(OBJS)
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
