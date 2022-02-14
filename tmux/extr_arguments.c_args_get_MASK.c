
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct args_entry {int values; } ;
struct args {int dummy; } ;
struct TYPE_2__ {char const* value; } ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 struct args_entry* FUNC_1 (struct args*,int ) ;
 int VAR_0 ;

const char *
FUNC_2(struct args *VAR_1, u_char VAR_2)
{
 struct args_entry *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) == ((void*)0))
  return (((void*)0));
 return (FUNC_0(&VAR_3->values, VAR_0)->value);
}
