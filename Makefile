# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamrire <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 12:45:27 by yamrire           #+#    #+#              #
#    Updated: 2022/10/10 02:09:15 by yamrire          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = 	ft_atoi.c       ft_itoa.c       ft_putnbr_fd.c  ft_strlcpy.c    ft_tolower.c \
		ft_bzero.c      ft_memchr.c     ft_putstr_fd.c  ft_strlen.c     ft_toupper.c \
		ft_calloc.c     ft_memcmp.c     ft_split.c      ft_strmapi.c    \
		ft_isalnum.c    ft_memcpy.c     ft_strchr.c     ft_strncmp.c    \
		ft_isalpha.c    ft_memmove.c    ft_strdup.c     ft_strnstr.c	\
		ft_isascii.c    ft_memset.c     ft_striteri.c   ft_strrchr.c ft_isdigit.c    ft_putchar_fd.c ft_strjoin.c    ft_strtrim.c \
		ft_isprint.c    ft_putendl_fd.c ft_strlcat.c    ft_substr.c
SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJECT = $(SRC:.c=.o)
OBJECT_B = $(SRC_B:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJECT) 

clean:
	rm -f $(OBJECT) $(OBJECT_B)

fclean: clean
	rm -f $(NAME)

re: fclean all 

bonus : $(OBJECT_B)
	$(CC) $(CFLAGS) -c $(SRC) $(SRC_B)
	ar rc $(NAME) $(OBJECT) $(OBJECT_B)