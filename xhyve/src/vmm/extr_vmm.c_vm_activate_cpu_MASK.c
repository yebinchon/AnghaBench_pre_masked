
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int active_cpus; } ;


 scalar_t__ FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (unsigned int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vm*,int,char*) ;
 int VAR_2 ;

int
FUNC_3(struct vm *VAR_3, int VAR_4)
{

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return (VAR_1);

 if (FUNC_0(((unsigned) VAR_4), &VAR_3->active_cpus))
  return (VAR_0);

 FUNC_2(VAR_3, VAR_4, "activated");
 FUNC_1(((unsigned) VAR_4), &VAR_3->active_cpus);
 return (0);
}
