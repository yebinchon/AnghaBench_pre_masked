
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhpet {TYPE_1__* timer; } ;
struct TYPE_2__ {int cap_config; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vhpet*,int) ;

__attribute__((used)) static __inline bool
FUNC_2(struct vhpet *VAR_1, int VAR_2)
{

 FUNC_0(!FUNC_1(VAR_1, VAR_2), ("vhpet_timer_edge_trig: "
     "timer %d is using MSI", VAR_2));

 if ((VAR_1->timer[VAR_2].cap_config & VAR_0) == 0)
  return (1);
 else
  return (0);
}
