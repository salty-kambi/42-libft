# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 10:06:54 by lsuau             #+#    #+#              #
#    Updated: 2021/11/13 15:05:27 by lsuau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEX = libft.a

INC = libft.h

SRC = ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c\
ft_atoi.c ft_bzero.c ft_calloc.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c\
ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
ft_substr.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap.c

OBJS = ${SRC:.c=.o}

OBJS_B = ${SRC_B:.c=.o}

all : ${NAMEX}

%.o : %.c ${INC}
	gcc -Wall -Werror -Wextra -I ${INC} -c $< -o $@

${NAMEX}: ${OBJS} ${INC}
	ar -rsc $@ ${OBJS}

bonus : ${NAMEX} ${OBJS} ${OBJS_B} ${INC}
	ar -rsc ${NAMEX} ${OBJS} ${OBJS_B}
clean :
	rm -f ${OBJS} ${OBJS_B}

fclean : clean
	rm  -f ${NAMEX}

re : fclean all

.PHONY: bonus all clean fclean re
