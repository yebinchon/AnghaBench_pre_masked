
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct vrtc {int rtcdev; } ;
struct vm {int dummy; } ;
struct rtcdev {int dummy; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vrtc*) ;
 int FUNC_1 (struct vrtc*) ;
 int FUNC_2 (int ,struct vrtc*,int ) ;
 struct vrtc* FUNC_3 (struct vm*) ;
 int FUNC_4 (struct vrtc*,int *) ;

int
FUNC_5(struct vm *VAR_2, int VAR_3, uint8_t *VAR_4)
{
 struct vrtc *VAR_5;
 sbintime_t VAR_6;
 time_t VAR_7;
 uint8_t *VAR_8;




 if (VAR_3 < 0 || ((unsigned long) VAR_3) >= sizeof(struct rtcdev))
  return (VAR_0);

 VAR_5 = FUNC_3(VAR_2);
 FUNC_0(VAR_5);




 if (VAR_3 < 10 || VAR_3 == VAR_1) {
  VAR_7 = FUNC_4(VAR_5, &VAR_6);
  FUNC_2(VAR_7, VAR_5, 0);
 }

 VAR_8 = (uint8_t *)(&VAR_5->rtcdev);
 *VAR_4 = VAR_8[VAR_3];

 FUNC_1(VAR_5);
 return (0);
}
