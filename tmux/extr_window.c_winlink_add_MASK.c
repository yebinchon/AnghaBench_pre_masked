
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlinks {int dummy; } ;
struct winlink {int idx; } ;


 int FUNC_0 (int ,struct winlinks*,struct winlink*) ;
 int * FUNC_1 (struct winlinks*,int) ;
 int FUNC_2 (struct winlinks*,int) ;
 int VAR_0 ;
 struct winlink* FUNC_3 (int,int) ;

struct winlink *
FUNC_4(struct winlinks *VAR_1, int VAR_2)
{
 struct winlink *VAR_3;

 if (VAR_2 < 0) {
  if ((VAR_2 = FUNC_2(VAR_1, -VAR_2 - 1)) == -1)
   return (((void*)0));
 } else if (FUNC_1(VAR_1, VAR_2) != ((void*)0))
  return (((void*)0));

 VAR_3 = FUNC_3(1, sizeof *VAR_3);
 VAR_3->idx = VAR_2;
 FUNC_0(VAR_0, VAR_1, VAR_3);

 return (VAR_3);
}
