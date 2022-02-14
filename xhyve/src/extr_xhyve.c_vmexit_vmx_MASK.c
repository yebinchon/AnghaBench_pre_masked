
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int exit_reason; int exit_qualification; int inst_type; int inst_error; } ;
struct TYPE_4__ {TYPE_1__ vmx; } ;
struct vm_exit {int rip; int inst_length; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct vm_exit *VAR_2, int *VAR_3)
{
 FUNC_0(VAR_1, "vm exit[%d]\n", *VAR_3);
 FUNC_0(VAR_1, "\treason\t\tVMX\n");
 FUNC_0(VAR_1, "\trip\t\t0x%016x\n", VAR_2->rip);
 FUNC_0(VAR_1, "\tinst_length\t%d\n", VAR_2->inst_length);
 FUNC_0(VAR_1, "\tstatus\t\t%d\n", VAR_2->u.vmx.status);
 FUNC_0(VAR_1, "\texit_reason\t%u\n", VAR_2->u.vmx.exit_reason);
 FUNC_0(VAR_1, "\tqualification\t0x%016x\n",
     VAR_2->u.vmx.exit_qualification);
 FUNC_0(VAR_1, "\tinst_type\t\t%d\n", VAR_2->u.vmx.inst_type);
 FUNC_0(VAR_1, "\tinst_error\t\t%d\n", VAR_2->u.vmx.inst_error);
 return (VAR_0);
}
