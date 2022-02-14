
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list {int list; int group; } ;
struct cmd {int group; } ;


 int FUNC_0 (int *,struct cmd*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct cmd_list *VAR_1, struct cmd *VAR_2)
{
 VAR_2->group = VAR_1->group;
 FUNC_0(&VAR_1->list, VAR_2, VAR_0);
}
