
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list {int references; int list; scalar_t__ group; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct cmd_list* FUNC_1 (int,int) ;

struct cmd_list *
FUNC_2(void)
{
 struct cmd_list *VAR_1;

 VAR_1 = FUNC_1(1, sizeof *VAR_1);
 VAR_1->references = 1;
 VAR_1->group = VAR_0++;
 FUNC_0(&VAR_1->list);
 return (VAR_1);
}
