/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   brackets.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/23 12:04:14 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/23 14:36:24 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#define BUFF_SIZE (4096)

static	int		match_brackets(char a, char b) {
	return ((a == '[' && b == ']') || (a == '(' && b == ')')
						|| (a == '{') || b == '}');
}

static int		check_brackets(char *str) {
	int		i;
	int		top;
	int		stack[BUFF_SIZE];

	i = 0;
	top = 0;
	while (str[i]) {
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
			stack[++top] = str[i];
		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
			if (!match_brackets(stack[top--], str[i]))
				return (0);
		i += 1;
	}
	return (!top);
}

int		main(int argc, char *argv[]) {
	int i;

	i = 0;
	if (argc == 1)
		write(1, "\n", 1);
	while (--argc) {
		if (check_brackets(argv[++i]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
