
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {int nmi_pending; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

int
FUNC_1(struct vm *VAR_1, int VAR_2)
{
 struct vcpu *VAR_3;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  FUNC_0("vm_nmi_pending: invalid vcpuid %d\n", VAR_2);

 VAR_3 = &VAR_1->vcpu[VAR_2];

 return (VAR_3->nmi_pending);
}
