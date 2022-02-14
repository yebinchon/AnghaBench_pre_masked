
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int reg_a; } ;
struct vrtc {int base_rtctime; int base_uptime; int vm; TYPE_1__ rtcdev; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct vrtc*,scalar_t__) ;
 int FUNC_4 (struct vrtc*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct vrtc*) ;

__attribute__((used)) static void
FUNC_6(struct vrtc *VAR_1, uint8_t VAR_2)
{
 sbintime_t VAR_3, VAR_4;
 uint8_t VAR_5, VAR_6;

 VAR_2 &= ~VAR_0;
 VAR_5 = VAR_1->rtcdev.reg_a;
 VAR_3 = FUNC_5(VAR_1);

 if (FUNC_1(VAR_5) && !FUNC_1(VAR_2)) {
  FUNC_0(VAR_1->vm, "RTC divider held in reset at %#lx/%#llx",
      VAR_1->base_rtctime, VAR_1->base_uptime);
 } else if (!FUNC_1(VAR_5) && FUNC_1(VAR_2)) {






  VAR_1->base_uptime = FUNC_2();
  FUNC_0(VAR_1->vm, "RTC divider out of reset at %#lx/%#llx",
      VAR_1->base_rtctime, VAR_1->base_uptime);
 } else {

 }

 VAR_1->rtcdev.reg_a = VAR_2;
 VAR_6 = VAR_5 ^ VAR_2;
 if (VAR_6) {
  FUNC_0(VAR_1->vm, "RTC reg_a changed from %#x to %#x",
      VAR_5, VAR_2);
 }




 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4 != VAR_3)
  FUNC_4(VAR_1, VAR_4);
 else
  FUNC_3(VAR_1, VAR_4);
}
