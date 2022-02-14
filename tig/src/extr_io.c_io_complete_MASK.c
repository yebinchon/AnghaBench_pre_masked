
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
typedef enum io_type { ____Placeholder_io_type } io_type ;


 scalar_t__ FUNC_0 (struct io*) ;
 scalar_t__ FUNC_1 (struct io*,int,char const*,int *,char const**,int) ;

bool
FUNC_2(enum io_type VAR_0, const char **VAR_1, const char *VAR_2, int VAR_3)
{
 struct io VAR_4;

 return FUNC_1(&VAR_4, VAR_0, VAR_2, ((void*)0), VAR_1, VAR_3) && FUNC_0(&VAR_4);
}
