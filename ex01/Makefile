NAME = phonebook

CPPFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
Contact.hpp \
PhoneBook.hpp

SRCS = \
Contact.cpp \
Phonebook.cpp \
ex01_main.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CXX) $(CPPFLAGS) -o $@ $(OBJS)

$(OBJS) : $(SRCS) $(HEADER)
	$(CXX) $(CPPFLAGS) -c $(SRCS)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re