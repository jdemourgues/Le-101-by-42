/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_memory.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/25 15:21:41 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/25 15:21:45 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include<unistd.h>

void	print_memory(const void *addr, size_t size){
	size_t			i;
	size_t			j;
	unsigned char	*p;
	char			*str;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	i = 0;
	while (i < size) {
		j = 0;
		while (j < 16 && i + j < size) {
			
		}
	}
}
