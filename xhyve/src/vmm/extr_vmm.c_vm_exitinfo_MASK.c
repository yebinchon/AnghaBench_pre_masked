
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_exit {int dummy; } ;
struct vm {struct vcpu* vcpu; } ;
struct vcpu {struct vm_exit exitinfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

struct vm_exit *
FUNC_1(struct vm *VAR_1, int VAR_2)
{
 struct vcpu *VAR_3;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  FUNC_0("vm_exitinfo: invalid cpuid %d\n", VAR_2);

 VAR_3 = &VAR_1->vcpu[VAR_2];

 return (&VAR_3->exitinfo);
}
