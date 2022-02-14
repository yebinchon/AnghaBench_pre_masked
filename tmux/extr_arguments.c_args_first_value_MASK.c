
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct args_value {char const* value; } ;
struct args_entry {int values; } ;
struct args {int dummy; } ;


 struct args_value* FUNC_0 (int *) ;
 struct args_entry* FUNC_1 (struct args*,int ) ;

const char *
FUNC_2(struct args *VAR_0, u_char VAR_1, struct args_value **VAR_2)
{
 struct args_entry *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));

 *VAR_2 = FUNC_0(&VAR_3->values);
 if (*VAR_2 == ((void*)0))
  return (((void*)0));
 return ((*VAR_2)->value);
}
