# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 10:34:09 by jvalkama          #+#    #+#              #
#    Updated: 2025/04/25 13:58:57 by jvalkama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_isalnum.c ft_itoa.c ft_memset.c ft_split.c ft_strlcat.c\
ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c\
ft_strlcpy.c ft_strrchr.c ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c\
ft_strdup.c ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c\
ft_striteri.c ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c\
ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c\

OBJS			= $(SRCS:%.c=%.o)

HEADER			= libft.h

CC				= cc

CFLAGS			= -Wall -Wextra -Werror
DEBUG_FLAGS     = -g3 -O0 -fsanitize=address

ifeq ($(DEBUG), 1)
CFLAGS += $(DEBUG_FLAGS)
endif

RM				= rm -f

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
					@echo "Creating library $(NAME)"
					ar -rcs $(NAME) $(OBJS)
					@echo "Creating symbol index for $(NAME)"
					ranlib $(NAME)

%.o:			%.c $(HEADER)
				@echo "Compiling $<"
					$(CC) $(CFLAGS) -c $< -o $@
			
clean:
				@echo "Cleaning object files"
				@$(RM) $(OBJS)	

fclean:			clean
				@echo "Cleaning library"
				@$(RM) $(NAME)

re:				fclean all

.PHONY: all clean fclean re
