#include "stdlib.h"
#include <stdio.h>
#include "libft.h"
#include "libft_bonus.h"

int main()
{
	t_list *string_list = ft_lstnew("Hello World!");

    printf("%s\n", string_list->content);

	return 0;
}
