
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int window; int session; } ;
struct cmd_find_state {int dummy; } ;


 int FUNC_0 (struct cmd_find_state*,struct winlink*,int ) ;
 int FUNC_1 (char const*,struct cmd_find_state*,int *,int ,int ,int *) ;

void
FUNC_2(const char *VAR_0, struct winlink *VAR_1)
{
 struct cmd_find_state VAR_2;

 FUNC_0(&VAR_2, VAR_1, 0);
 FUNC_1(VAR_0, &VAR_2, ((void*)0), VAR_1->session, VAR_1->window, ((void*)0));
}
