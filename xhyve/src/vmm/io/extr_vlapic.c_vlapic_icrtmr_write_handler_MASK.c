
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vlapic {int callout; int timer_period_bt; int timer_fire_bt; int timer_freq_bt; struct LAPIC* apic_page; } ;
struct LAPIC {scalar_t__ icr_timer; } ;
typedef int sbintime_t ;


 int FUNC_0 (struct vlapic*) ;
 int FUNC_1 (struct vlapic*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ,struct vlapic*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

void
FUNC_8(struct vlapic *VAR_1)
{
 struct LAPIC *VAR_2;
 sbintime_t VAR_3;
 uint32_t VAR_4;

 FUNC_0(VAR_1);

 VAR_2 = VAR_1->apic_page;
 VAR_4 = VAR_2->icr_timer;

 VAR_1->timer_period_bt = VAR_1->timer_freq_bt;
 FUNC_3(&VAR_1->timer_period_bt, VAR_4);

 if (VAR_4 != 0) {
  FUNC_4(&VAR_1->timer_fire_bt);
  FUNC_2(&VAR_1->timer_fire_bt, &VAR_1->timer_period_bt);

  VAR_3 = FUNC_5(VAR_1->timer_period_bt);
  FUNC_6(&VAR_1->callout, VAR_3, 0,
      VAR_0, VAR_1, 0);
 } else
  FUNC_7(&VAR_1->callout);

 FUNC_1(VAR_1);
}
