
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vrtc {int base_rtctime; int base_uptime; } ;
typedef int sbintime_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct vrtc*) ;

__attribute__((used)) static time_t
FUNC_3(struct vrtc *VAR_1, sbintime_t *VAR_2)
{
 sbintime_t VAR_3, VAR_4;
 time_t VAR_5, VAR_6;

 VAR_5 = VAR_1->base_rtctime;
 *VAR_2 = VAR_1->base_uptime;
 if (FUNC_2(VAR_1)) {
  VAR_3 = FUNC_1();
  VAR_4 = VAR_3 - VAR_1->base_uptime;
  FUNC_0(VAR_4 >= 0, ("vrtc_curtime: uptime went backwards: "
      "%#llx to %#llx", VAR_1->base_uptime, VAR_3));
  VAR_6 = VAR_4 / VAR_0;
  VAR_5 += VAR_6;
  *VAR_2 += VAR_6 * VAR_0;
 }
 return (VAR_5);
}
