
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {int state; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu*) ;
 int FUNC_1 (struct vcpu*) ;
 int FUNC_2 (char*,int) ;

enum vcpu_state
FUNC_3(struct vm *VAR_1, int VAR_2)
{
 struct vcpu *VAR_3;
 enum vcpu_state VAR_4;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  FUNC_2("vm_get_run_state: invalid vcpuid %d\n", VAR_2);

 VAR_3 = &VAR_1->vcpu[VAR_2];

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->state;
 FUNC_1(VAR_3);

 return (VAR_4);
}
