
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct args_entry {int count; } ;
struct args {int dummy; } ;


 struct args_entry* FUNC_0 (struct args*,int ) ;

int
FUNC_1(struct args *VAR_0, u_char VAR_1)
{
 struct args_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);
 return (VAR_2->count);
}
