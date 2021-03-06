/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 09:17:48 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 09:45:30 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = nb / 2;
	if (nb < 1 || nb == 2 || nb == 3)
		return (0);
	if (i >= 46340)
		i = 46340;
	if (nb == 1)
		return (1);
	while (((i * i) != nb) && (i > 0))
		i--;
	return (i);
}
