# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 12:18:32 by omimouni          #+#    #+#              #
#    Updated: 2022/07/24 12:33:30 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	clang++ *.cpp -g -std=c++98 -o ./test

fclean:
	rm -rf ./test

re: fclean all