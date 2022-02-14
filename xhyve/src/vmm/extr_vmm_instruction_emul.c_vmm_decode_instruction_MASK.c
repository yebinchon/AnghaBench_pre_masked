
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vm {int dummy; } ;
struct TYPE_2__ {int op_flags; } ;
struct vie {int decoded; TYPE_1__ op; } ;
typedef enum vm_cpu_mode { ____Placeholder_vm_cpu_mode } vm_cpu_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vie*) ;
 scalar_t__ FUNC_1 (struct vie*) ;
 scalar_t__ FUNC_2 (struct vie*,int) ;
 scalar_t__ FUNC_3 (struct vie*) ;
 scalar_t__ FUNC_4 (struct vie*) ;
 scalar_t__ FUNC_5 (struct vie*,int,int) ;
 scalar_t__ FUNC_6 (struct vie*) ;
 scalar_t__ FUNC_7 (struct vm*,int,int ,struct vie*) ;
 scalar_t__ FUNC_8 (struct vie*) ;

int
FUNC_9(struct vm *VAR_1, int VAR_2, uint64_t VAR_3,
         enum vm_cpu_mode VAR_4, int VAR_5, struct vie *VAR_6)
{

 if (FUNC_5(VAR_6, VAR_4, VAR_5))
  return (-1);

 if (FUNC_4(VAR_6))
  return (-1);

 if (FUNC_2(VAR_6, VAR_4))
  return (-1);

 if (FUNC_6(VAR_6))
  return (-1);

 if (FUNC_0(VAR_6))
  return (-1);

 if (FUNC_1(VAR_6))
  return (-1);

 if (FUNC_3(VAR_6))
  return (-1);

 if (FUNC_8(VAR_6))
  return (-1);

 if ((VAR_6->op.op_flags & VAR_0) == 0) {
  if (FUNC_7(VAR_1, VAR_2, VAR_3, VAR_6))
   return (-1);
 }

 VAR_6->decoded = 1;

 return (0);
}
