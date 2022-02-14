
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct session {int windows; int * curw; } ;


 struct winlink* FUNC_0 (int ,int *) ;
 struct winlink* FUNC_1 (struct winlink*) ;
 int FUNC_2 (struct session*,struct winlink*) ;
 struct winlink* FUNC_3 (int *) ;
 int VAR_0 ;

int
FUNC_4(struct session *VAR_1, int VAR_2)
{
 struct winlink *VAR_3;

 if (VAR_1->curw == ((void*)0))
  return (-1);

 VAR_3 = FUNC_3(VAR_1->curw);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_3);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_0, &VAR_1->windows);
  if (VAR_2 && (VAR_3 = FUNC_1(VAR_3)) == ((void*)0))
   return (-1);
 }
 return (FUNC_2(VAR_1, VAR_3));
}
