NAME = megaphone

CPPFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

SRCS = \
megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CXX) $(CPPFLAGS) -c $^

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re