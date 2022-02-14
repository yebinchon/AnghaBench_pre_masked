
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int idx; } ;
struct session {int windows; } ;


 int VAR_0 ;
 int FUNC_0 (struct session*,struct winlink*,struct session*,int,int ,int ,int *) ;
 int FUNC_1 (struct session*,struct winlink*) ;
 struct winlink* FUNC_2 (int *,int) ;

int
FUNC_3(struct session *VAR_1, struct winlink *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 == ((void*)0))
  return (-1);
 VAR_3 = VAR_2->idx + 1;


 for (VAR_4 = VAR_3; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_2(&VAR_1->windows, VAR_4) == ((void*)0))
   break;
 }
 if (VAR_4 == VAR_0)
  return (-1);


 for (; VAR_4 > VAR_3; VAR_4--) {
  VAR_2 = FUNC_2(&VAR_1->windows, VAR_4 - 1);
  FUNC_0(VAR_1, VAR_2, VAR_1, VAR_4, 0, 0, ((void*)0));
  FUNC_1(VAR_1, VAR_2);
 }

 return (VAR_3);
}
