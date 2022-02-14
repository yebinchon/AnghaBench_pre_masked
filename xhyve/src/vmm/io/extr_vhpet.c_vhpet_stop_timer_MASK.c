
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhpet {int vm; TYPE_1__* timer; } ;
typedef scalar_t__ sbintime_t ;
struct TYPE_2__ {scalar_t__ callout_sbt; int callout; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vhpet*,int) ;

__attribute__((used)) static void
FUNC_3(struct vhpet *VAR_0, int VAR_1, sbintime_t VAR_2)
{

 FUNC_0(VAR_0->vm, "hpet t%d stopped", VAR_1);
 FUNC_1(&VAR_0->timer[VAR_1].callout);
 if (VAR_0->timer[VAR_1].callout_sbt < VAR_2) {
  FUNC_0(VAR_0->vm, "hpet t%d interrupt triggered after "
      "stopping timer", VAR_1);
  FUNC_2(VAR_0, VAR_1);
 }
}
