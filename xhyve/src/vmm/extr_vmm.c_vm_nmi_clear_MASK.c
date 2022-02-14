
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {scalar_t__ nmi_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm*,int,int ,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(struct vm *VAR_2, int VAR_3)
{
 struct vcpu *VAR_4;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  FUNC_1("vm_nmi_pending: invalid vcpuid %d\n", VAR_3);

 VAR_4 = &VAR_2->vcpu[VAR_3];

 if (VAR_4->nmi_pending == 0)
  FUNC_1("vm_nmi_clear: inconsistent nmi_pending state\n");

 VAR_4->nmi_pending = 0;
 FUNC_0(VAR_2, VAR_3, VAR_0, 1);
}
