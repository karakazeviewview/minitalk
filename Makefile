CC		=		cc
CFLAGS	=		-Wall -Werror -Wextra
SERVER	=		server
CLIENT	=		client
NAME	=		minitalk
SRCS_SERVER	=	server.c mini_utils.c
SRCS_CLIENT	=	client.c mini_utils.c
OBJS_SERVER	=	$(SRCS_SERVER:.c=.o)
OBJS_CLIENT	=	$(SRCS_CLIENT:.c=.o)

$(NAME):		$(SERVER) $(CLIENT)

.c.o :
				$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

server:			$(OBJS_SERVER)
				$(CC) $(CFLAGS) $(OBJS_SERVER) -o $(SERVER)

client:			$(OBJS_CLIENT)
				$(CC) $(CFLAGS) $(OBJS_CLIENT) -o $(CLIENT)

all:			$(NAME)

clean:
				rm -f server.o client.o mini_utils.o

fclean:			clean
				rm -f $(SERVER) $(CLIENT)

re:				fclean all

.PHONY:			all clean fclean re
