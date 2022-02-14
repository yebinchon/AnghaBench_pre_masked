
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vm {int dummy; } ;
struct vhpet_callout_arg {int timer_num; struct vhpet* vhpet; } ;
struct vhpet {TYPE_1__* timer; int freq_sbt; int mtx; struct vm* vm; } ;
struct bintime {int dummy; } ;
struct TYPE_2__ {int cap_config; int compval; struct vhpet_callout_arg arg; int callout; } ;


 int FUNC_0 (int ,struct bintime*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vhpet*) ;
 int FUNC_2 (struct bintime) ;
 int FUNC_3 (struct vhpet*,int) ;
 int FUNC_4 (int *,int) ;
 struct vhpet* FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct vm*) ;

struct vhpet *
FUNC_8(struct vm *VAR_4)
{
 int VAR_5, VAR_6;
 struct vhpet *VAR_7;
 uint64_t VAR_8;
 struct vhpet_callout_arg *VAR_9;
 struct bintime VAR_10;

 VAR_7 = FUNC_5(sizeof(struct vhpet));
 FUNC_1(VAR_7);
 FUNC_3(VAR_7, sizeof(struct vhpet));
 VAR_7->vm = VAR_4;

 FUNC_6(&VAR_7->mtx, ((void*)0));

 FUNC_0(VAR_0, &VAR_10);
 VAR_7->freq_sbt = FUNC_2(VAR_10);

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6 >= 24)
  VAR_8 = 0x00f00000;
 else
  VAR_8 = 0;




 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_7->timer[VAR_5].cap_config = VAR_8 << 32;
  VAR_7->timer[VAR_5].cap_config |= VAR_2;
  VAR_7->timer[VAR_5].cap_config |= VAR_1;

  VAR_7->timer[VAR_5].compval = 0xffffffff;
  FUNC_4(&VAR_7->timer[VAR_5].callout, 1);

  VAR_9 = &VAR_7->timer[VAR_5].arg;
  VAR_9->vhpet = VAR_7;
  VAR_9->timer_num = VAR_5;
 }

 return (VAR_7);
}
