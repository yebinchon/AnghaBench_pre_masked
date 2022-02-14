
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vcpu; int rip; } ;
struct TYPE_4__ {TYPE_1__ spinup_ap; } ;
struct vm_exit {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct vm_exit *VAR_2, int *VAR_3)
{
 FUNC_0(VAR_2->u.spinup_ap.vcpu != 0);
 FUNC_0(VAR_2->u.spinup_ap.vcpu < VAR_1);

 FUNC_1(*VAR_3, VAR_2->u.spinup_ap.vcpu, VAR_2->u.spinup_ap.rip);

 return (VAR_0);
}
