
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int active_cpus; int suspended_cpus; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct vm*,int) ;
 int FUNC_2 (struct vm*,int) ;

int
FUNC_3(struct vm *VAR_1)
{
 int VAR_2;




 if (FUNC_0(&VAR_1->suspended_cpus, &VAR_1->active_cpus) == 0) {
  FUNC_1(VAR_1, 0);
  FUNC_2(VAR_1, 0);
  VAR_2 = 0;
 } else {
  VAR_2 = VAR_0;
 }

 return (VAR_2);
}
