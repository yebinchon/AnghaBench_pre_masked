
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_value {char const* value; } ;


 struct args_value* FUNC_0 (struct args_value*,int ) ;
 int VAR_0 ;

const char *
FUNC_1(struct args_value **VAR_1)
{
 if (*VAR_1 == ((void*)0))
  return (((void*)0));
 *VAR_1 = FUNC_0(*VAR_1, VAR_0);
 if (*VAR_1 == ((void*)0))
  return (((void*)0));
 return ((*VAR_1)->value);
}
