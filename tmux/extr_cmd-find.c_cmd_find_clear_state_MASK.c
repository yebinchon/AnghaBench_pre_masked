
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_find_state {int flags; int idx; } ;


 int FUNC_0 (struct cmd_find_state*,int ,int) ;

void
FUNC_1(struct cmd_find_state *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof *VAR_0);

 VAR_0->flags = VAR_1;

 VAR_0->idx = -1;
}
