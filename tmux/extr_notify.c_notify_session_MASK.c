
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;
struct cmd_find_state {int dummy; } ;


 int FUNC_0 (struct cmd_find_state*,int ) ;
 int FUNC_1 (struct cmd_find_state*,struct session*,int ) ;
 int FUNC_2 (char const*,struct cmd_find_state*,int *,struct session*,int *,int *) ;
 scalar_t__ FUNC_3 (struct session*) ;

void
FUNC_4(const char *VAR_0, struct session *VAR_1)
{
 struct cmd_find_state VAR_2;

 if (FUNC_3(VAR_1))
  FUNC_1(&VAR_2, VAR_1, 0);
 else
  FUNC_0(&VAR_2, 0);
 FUNC_2(VAR_0, &VAR_2, ((void*)0), VAR_1, ((void*)0), ((void*)0));
}
