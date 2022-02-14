
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct session {int windows; } ;


 struct winlink* FUNC_0 (int ,int *) ;
 struct winlink* FUNC_1 (int ,int ,struct winlink*) ;
 int VAR_0 ;
 int VAR_1 ;

struct winlink *
FUNC_2(struct winlink *VAR_2, struct session *VAR_3, int VAR_4)
{
 for (; VAR_4 > 0; VAR_4--) {
  if ((VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2)) == ((void*)0))
   VAR_2 = FUNC_0(VAR_0, &VAR_3->windows);
 }

 return (VAR_2);
}
