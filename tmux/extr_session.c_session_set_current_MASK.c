
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int window; } ;
struct session {struct winlink* curw; int lastw; } ;


 int FUNC_0 (char*,struct session*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct winlink*) ;
 int FUNC_4 (int *,struct winlink*) ;
 int FUNC_5 (int *,struct winlink*) ;

int
FUNC_6(struct session *VAR_0, struct winlink *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (-1);
 if (VAR_1 == VAR_0->curw)
  return (1);

 FUNC_5(&VAR_0->lastw, VAR_1);
 FUNC_4(&VAR_0->lastw, VAR_0->curw);
 VAR_0->curw = VAR_1;
 FUNC_3(VAR_1);
 FUNC_2(VAR_1->window);
 FUNC_1(VAR_1->window);
 FUNC_0("session-window-changed", VAR_0);
 return (0);
}
