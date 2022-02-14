
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct session {struct winlink* curw; int lastw; } ;


 struct winlink* FUNC_0 (int *) ;
 int FUNC_1 (struct session*,struct winlink*) ;

int
FUNC_2(struct session *VAR_0)
{
 struct winlink *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->lastw);
 if (VAR_1 == ((void*)0))
  return (-1);
 if (VAR_1 == VAR_0->curw)
  return (1);

 return (FUNC_1(VAR_0, VAR_1));
}
