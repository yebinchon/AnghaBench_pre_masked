
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int how; } ;
struct TYPE_4__ {TYPE_1__ suspended; } ;
struct vm_exit {TYPE_2__ u; int exitcode; scalar_t__ inst_length; int rip; } ;
struct vm {scalar_t__ suspend; } ;
typedef enum vm_suspend_how { ____Placeholder_vm_suspend_how } vm_suspend_how ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vm_exit* FUNC_1 (struct vm*,int) ;

void
FUNC_2(struct vm *VAR_3, int VAR_4, uint64_t VAR_5)
{
 struct vm_exit *VAR_6;

 FUNC_0(VAR_3->suspend > VAR_2 && VAR_3->suspend < VAR_1,
     ("vm_exit_suspended: invalid suspend type %d", VAR_3->suspend));

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 VAR_6->rip = VAR_5;
 VAR_6->inst_length = 0;
 VAR_6->exitcode = VAR_0;
 VAR_6->u.suspended.how = (enum vm_suspend_how) VAR_3->suspend;
}
