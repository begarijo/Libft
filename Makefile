# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 12:51:51 by begarijo          #+#    #+#              #
#    Updated: 2023/03/21 18:09:04 by begarijo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*The Makefile needs a name for our program to compile.*/

NAME		=	libft.a

/*The source of the proyect are all the files where the functions are.*/

SRC			=	ft_isalpha.c ft_isdigit.c ft_toupper.c \
				ft_strchr.c ft_isalnum.c ft_isascii.c \
				ft_strlcat.c ft_strlen.c ft_isprint.c \
				ft_strrchr.c ft_memcpy.c ft_memchr.c \
				ft_tolower.c ft_memset.c ft_memmove.c \
				ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
				ft_atoi.c ft_memcmp.c ft_bzero.c ft_calloc.c \
				ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_split.c ft_strtrim.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
				ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c \

/*Once it compiles, it's necessary pass the files *.c to *.o to "execute" them.*/

OBJT		=	$(SRC:.c=.o)

/*It's the same as SRC, but with the bonus part.*/

BONUS		=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

BONUS_OBJ	=	$(BONUS:.c=.o)

/*These are the flags the project needs to compile with.*/

CFLAGS		=	-Wall -Werror -Wextra

/*In all, it create the name of the program*/

all:			$(NAME)

/*In the name, it compiles with the flags and creates the objects to "execute"*/

$(NAME):
				@gcc -c $(CFLAGS) $(SRC)
				@ar rcs $(NAME) $(OBJT)

bonus:			$(OBJT) $(BONUS_OBJ)
				@ar rcs $(NAME) $(OBJT) $(BONUS_OBJ)

/*It's for remove the *.o files*/

clean:
				@rm -f $(OBJT) $(BONUS_OBJ)

/*This one cleans the program *.a*/

fclean: 		clean
				@rm -f $(NAME)

re: 			fclean all

.PHONY: all, clean, fclean, re
