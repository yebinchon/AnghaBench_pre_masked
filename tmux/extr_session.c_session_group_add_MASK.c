
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_group {int sessions; } ;
struct session {int dummy; } ;


 int FUNC_0 (int *,struct session*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (struct session*) ;

void
FUNC_2(struct session_group *VAR_1, struct session *VAR_2)
{
 if (FUNC_1(VAR_2) == ((void*)0))
  FUNC_0(&VAR_1->sessions, VAR_2, VAR_0);
}
