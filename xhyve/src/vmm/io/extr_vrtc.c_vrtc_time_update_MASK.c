
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct rtcdev {int alarm_sec; int alarm_min; int alarm_hour; int sec; int min; int hour; int reg_c; } ;
struct vrtc {scalar_t__ base_rtctime; scalar_t__ base_uptime; int vm; struct rtcdev rtcdev; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct vrtc*) ;
 scalar_t__ FUNC_3 (struct vrtc*) ;
 int FUNC_4 (scalar_t__,struct vrtc*,int ) ;
 scalar_t__ FUNC_5 (struct vrtc*) ;
 int FUNC_6 (struct vrtc*,int) ;

__attribute__((used)) static int
FUNC_7(struct vrtc *VAR_4, time_t VAR_5, sbintime_t VAR_6)
{
 struct rtcdev *VAR_7;
 sbintime_t VAR_8;
 time_t VAR_9;
 uint8_t VAR_10, VAR_11, VAR_12;

 VAR_7 = &VAR_4->rtcdev;
 VAR_10 = VAR_7->alarm_sec;
 VAR_11 = VAR_7->alarm_min;
 VAR_12 = VAR_7->alarm_hour;

 VAR_9 = VAR_4->base_rtctime;
 FUNC_1(VAR_4->vm, "Updating RTC secs from %#lx to %#lx",
     VAR_9, VAR_5);

 VAR_8 = VAR_4->base_uptime;
 FUNC_1(VAR_4->vm, "Updating RTC base uptime from %#llx to %#llx",
     VAR_8, VAR_6);
 VAR_4->base_uptime = VAR_6;

 if (VAR_5 == VAR_9)
  return (0);






 if (VAR_5 == VAR_3) {
  VAR_4->base_rtctime = VAR_3;
  return (0);
 }




 if (FUNC_3(VAR_4)) {
  FUNC_0(VAR_4->vm, "RTC update halted by guest");
  return (VAR_0);
 }

 do {







  if (FUNC_2(VAR_4) && VAR_9 != VAR_3)
   VAR_4->base_rtctime++;
  else
   VAR_4->base_rtctime = VAR_5;

  if (FUNC_2(VAR_4)) {




   FUNC_4(VAR_4->base_rtctime, VAR_4, 0);

   if ((VAR_10 >= 0xC0 || VAR_10 == VAR_7->sec) &&
       (VAR_11 >= 0xC0 || VAR_11 == VAR_7->min) &&
       (VAR_12 >= 0xC0 || VAR_12 == VAR_7->hour)) {
    FUNC_6(VAR_4, VAR_7->reg_c | VAR_1);
   }
  }
 } while (VAR_4->base_rtctime != VAR_5);

 if (FUNC_5(VAR_4))
  FUNC_6(VAR_4, VAR_7->reg_c | VAR_2);

 return (0);
}
