
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct rtcdev {int sec; int min; int hour; int reg_b; int day_of_month; int month; int year; int century; } ;
struct vrtc {struct vm* vm; struct rtcdev rtcdev; } ;
struct vm {int dummy; } ;
struct timespec {scalar_t__ tv_sec; } ;
struct clocktime {int sec; int min; int hour; int dow; int day; int mon; int year; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm*,char*) ;
 int FUNC_1 (struct vm*,char*,int,int) ;
 int FUNC_2 (struct vm*,char*,int,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct clocktime*,int) ;
 int FUNC_4 (struct clocktime*,struct timespec*) ;
 int FUNC_5 (struct rtcdev*,int,int*) ;

__attribute__((used)) static time_t
FUNC_6(struct vrtc *VAR_2)
{
 struct clocktime VAR_3;
 struct timespec VAR_4;
 struct rtcdev *VAR_5;
 struct vm *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = VAR_2->vm;
 VAR_5 = &VAR_2->rtcdev;

 FUNC_3(&VAR_3, sizeof(struct clocktime));

 VAR_8 = FUNC_5(VAR_5, VAR_5->sec, &VAR_3.sec);
 if (VAR_8 || VAR_3.sec < 0 || VAR_3.sec > 59) {
  FUNC_1(VAR_6, "Invalid RTC sec %#x/%d", VAR_5->sec, VAR_3.sec);
  goto fail;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_5->min, &VAR_3.min);
 if (VAR_8 || VAR_3.min < 0 || VAR_3.min > 59) {
  FUNC_1(VAR_6, "Invalid RTC min %#x/%d", VAR_5->min, VAR_3.min);
  goto fail;
 }

 VAR_10 = 0;
 VAR_9 = VAR_5->hour;
 if ((VAR_5->reg_b & VAR_0) == 0) {
  if (VAR_9 & 0x80) {
   VAR_9 &= ~0x80;
   VAR_10 = 1;
  }
 }
 VAR_8 = FUNC_5(VAR_5, VAR_9, &VAR_3.hour);
 if ((VAR_5->reg_b & VAR_0) == 0) {
  if (VAR_3.hour >= 1 && VAR_3.hour <= 12) {
   if (VAR_3.hour == 12)
    VAR_3.hour = 0;
   if (VAR_10)
    VAR_3.hour += 12;
  } else {
   FUNC_1(VAR_6, "Invalid RTC 12-hour format %#x/%d",
       VAR_5->hour, VAR_3.hour);
   goto fail;
  }
 }

 if (VAR_8 || VAR_3.hour < 0 || VAR_3.hour > 23) {
  FUNC_1(VAR_6, "Invalid RTC hour %#x/%d", VAR_5->hour, VAR_3.hour);
  goto fail;
 }







 VAR_3.dow = -1;

 VAR_8 = FUNC_5(VAR_5, VAR_5->day_of_month, &VAR_3.day);
 if (VAR_8 || VAR_3.day < 1 || VAR_3.day > 31) {
  FUNC_1(VAR_6, "Invalid RTC mday %#x/%d", VAR_5->day_of_month,
      VAR_3.day);
  goto fail;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_5->month, &VAR_3.mon);
 if (VAR_8 || VAR_3.mon < 1 || VAR_3.mon > 12) {
  FUNC_1(VAR_6, "Invalid RTC month %#x/%d", VAR_5->month, VAR_3.mon);
  goto fail;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_5->year, &VAR_11);
 if (VAR_8 || VAR_11 < 0 || VAR_11 > 99) {
  FUNC_1(VAR_6, "Invalid RTC year %#x/%d", VAR_5->year, VAR_11);
  goto fail;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_5->century, &VAR_7);
 VAR_3.year = VAR_7 * 100 + VAR_11;
 if (VAR_8 || VAR_3.year < 1900) {
  FUNC_1(VAR_6, "Invalid RTC century %#x/%d", VAR_5->century,
      VAR_3.year);
  goto fail;
 }

 VAR_8 = FUNC_4(&VAR_3, &VAR_4);
 if (VAR_8 || VAR_4.tv_sec < 0) {
  FUNC_2(VAR_6, "Invalid RTC clocktime.date %04d-%02d-%02d",
      VAR_3.year, VAR_3.mon, VAR_3.day);
  FUNC_2(VAR_6, "Invalid RTC clocktime.time %02d:%02d:%02d",
      VAR_3.hour, VAR_3.min, VAR_3.sec);
  goto fail;
 }
 return (VAR_4.tv_sec);
fail:




 FUNC_0(VAR_2->vm, "Invalid RTC date/time programming detected");
 return (VAR_1);
}
