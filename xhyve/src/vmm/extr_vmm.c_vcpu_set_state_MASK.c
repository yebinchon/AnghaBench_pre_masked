
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {int dummy; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu*) ;
 int FUNC_1 (struct vcpu*,int,int) ;
 int FUNC_2 (struct vcpu*) ;
 int FUNC_3 (char*,int) ;

int
FUNC_4(struct vm *VAR_1, int VAR_2, enum vcpu_state VAR_3,
    bool VAR_4)
{
 int VAR_5;
 struct vcpu *VAR_6;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  FUNC_3("vm_set_run_state: invalid vcpuid %d\n", VAR_2);

 VAR_6 = &VAR_1->vcpu[VAR_2];

 FUNC_0(VAR_6);
 VAR_5 = FUNC_1(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_6);
 return (VAR_5);
}
