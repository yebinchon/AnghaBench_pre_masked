
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vm {int active_cpus; int suspend; } ;
typedef enum vm_suspend_how { ____Placeholder_vm_suspend_how } vm_suspend_how ;


 scalar_t__ FUNC_0 (unsigned int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vm*,char*,int) ;
 int FUNC_2 (struct vm*,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int volatile*,int ,int) ;
 int FUNC_4 (struct vm*,int,int) ;

int
FUNC_5(struct vm *VAR_5, enum vm_suspend_how VAR_6)
{
 int VAR_7;

 if (VAR_6 <= VAR_4 || VAR_6 >= VAR_3)
  return (VAR_1);

 if (FUNC_3(((volatile u_int *) &VAR_5->suspend), 0, VAR_6) == 0) {
  FUNC_2(VAR_5, "virtual machine already suspended %d/%d",
      VAR_5->suspend, VAR_6);
  return (VAR_0);
 }

 FUNC_1(VAR_5, "virtual machine successfully suspended %d", VAR_6);




 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (FUNC_0(((unsigned) VAR_7), &VAR_5->active_cpus))
   FUNC_4(VAR_5, VAR_7, 0);
 }

 return (0);
}
