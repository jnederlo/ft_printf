


#include <stdarg.h>
#include "../libft/includes/libft.h"




typedef struct		s_format
{
	char			flag;
	size_t			width;
	size_t			prec;
	char			cs;
	struct s_format	*next;
}					t_format;



