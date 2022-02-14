
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vhpet_callout_arg {int timer_num; struct vhpet* vhpet; } ;
struct vhpet {int vm; TYPE_1__* timer; } ;
struct callout {int dummy; } ;
typedef int sbintime_t ;
struct TYPE_2__ {struct callout callout; } ;


 int FUNC_0 (struct vhpet*) ;
 int FUNC_1 (struct vhpet*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct callout*) ;
 int FUNC_4 (struct callout*) ;
 scalar_t__ FUNC_5 (struct callout*) ;
 int FUNC_6 (struct vhpet*,int *) ;
 int FUNC_7 (struct vhpet*) ;
 int FUNC_8 (struct vhpet*,int,int ,int ) ;
 int FUNC_9 (struct vhpet*,int) ;
 int FUNC_10 (char*,void*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_0)
{
 int VAR_1;
 uint32_t VAR_2;
 sbintime_t VAR_3;
 struct vhpet *VAR_4;
 struct callout *VAR_5;
 struct vhpet_callout_arg *VAR_6;

 VAR_6 = VAR_0;
 VAR_4 = VAR_6->vhpet;
 VAR_1 = VAR_6->timer_num;
 VAR_5 = &VAR_4->timer[VAR_1].callout;

 FUNC_2(VAR_4->vm, "hpet t%d fired", VAR_1);

 FUNC_0(VAR_4);

 if (FUNC_5(VAR_5))
  goto done;

 if (!FUNC_3(VAR_5))
  goto done;

 FUNC_4(VAR_5);

 if (!FUNC_7(VAR_4))
  FUNC_10("vhpet(%p) callout with counter disabled\n", (void*)VAR_4);

 VAR_2 = FUNC_6(VAR_4, &VAR_3);
 FUNC_8(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_9(VAR_4, VAR_1);
done:
 FUNC_1(VAR_4);
 return;
}
