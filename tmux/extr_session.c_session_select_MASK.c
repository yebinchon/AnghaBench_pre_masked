
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct session {int windows; } ;


 int FUNC_0 (struct session*,struct winlink*) ;
 struct winlink* FUNC_1 (int *,int) ;

int
FUNC_2(struct session *VAR_0, int VAR_1)
{
 struct winlink *VAR_2;

 VAR_2 = FUNC_1(&VAR_0->windows, VAR_1);
 return (FUNC_0(VAR_0, VAR_2));
}
