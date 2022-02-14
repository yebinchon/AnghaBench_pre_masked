
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct args_entry {int flag; } ;
struct args {int tree; } ;


 struct args_entry* FUNC_0 (int ,int *,struct args_entry*) ;
 int VAR_0 ;

__attribute__((used)) static struct args_entry *
FUNC_1(struct args *VAR_1, u_char VAR_2)
{
 struct args_entry VAR_3;

 VAR_3.flag = VAR_2;
 return (FUNC_0(VAR_0, &VAR_1->tree, &VAR_3));
}
