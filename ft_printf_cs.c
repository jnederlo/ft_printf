
#include "ft_printf.h"
#include <stdio.h>

// initializing the global data that was declared in the header

const	t_cs_badge	g_cs_list[] = {

//		cs:		type:		choose_cs:
		{'d',	CS_LC_D,	cs_d},
		/*{'i',	CS_LC_I,	cs_i},
		{'o',	CS_LC_O,	cs_o},
		{'u',	CS_LC_S,	cs_u},
		{'x',	CS_LC_X,	cs_x},
		{'X',	CS_UC_X,	cs_X},
		{'D',	CS_UC_D,	cs_D},
		{'O',	CS_UC_O,	cs_O},
		{'U',	CS_UC_U,	cs_U},
		{'C',	CS_UC_C,	cs_C},
		{'c',	CS_LC_C,	cs_c},
		{'S',	CS_UC_S,	cs_S},
		{'s',	CS_LC_S,	cs_s},
		{'p',	CS_LC_P,	cs_p},
*/
};

/*  defining a global variable that will be set to some int
	corresponding with the Macros defined in the header
	for each CS identified. The variable will be used to
	signal which function to call from the function dispatch table. */
int		g_cs_type;

//determines the number of initializers coded, making it easy to add functionality later.
const	int		g_nbr_cs_badge = sizeof(g_cs_list) / sizeof(t_cs_badge);

//determines which cs_badge to use by setting :
int		conv_spec(char **fmt, t_badge *badge, va_list ap)
{
	int		i;
	int		cs_true;

	printf("start of CONV_SPEC");
	i = 0;
	cs_true = 0;
	while (i < g_nbr_cs_badge)
	{
		if (g_cs_list[i].cs == *(*fmt))
		{
			cs_true = 1;
			g_cs_type = g_cs_list[i].type;
			break;
		}
		i++;
	}
	if (cs_true == 0)
		return (0); // indicating some error, or that we aren't on the CS element yet.
	
	return (1);
}
