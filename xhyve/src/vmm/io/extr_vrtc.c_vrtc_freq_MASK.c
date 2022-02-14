
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_a; } ;
struct vrtc {TYPE_1__ rtcdev; } ;
typedef int sbintime_t ;



 scalar_t__ FUNC_0 (struct vrtc*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vrtc*) ;
 scalar_t__ FUNC_3 (struct vrtc*) ;
 scalar_t__ FUNC_4 (struct vrtc*) ;

__attribute__((used)) static sbintime_t
FUNC_5(struct vrtc *VAR_0)
{
 int VAR_1;

 static sbintime_t VAR_2[16] = {
  0,
  128 / 256,
  128 / 128,
  128 / 8192,
  128 / 4096,
  128 / 2048,
  128 / 1024,
  128 / 512,
  128 / 256,
  128 / 128,
  128 / 64,
  128 / 32,
  128 / 16,
  128 / 8,
  128 / 4,
  128 / 2,
 };
 if (FUNC_2(VAR_0) && FUNC_1(VAR_0->rtcdev.reg_a)) {
  VAR_1 = VAR_0->rtcdev.reg_a & 0xf;
  return (VAR_2[VAR_1]);
 } else if (FUNC_0(VAR_0) && FUNC_4(VAR_0)) {
  return (128);
 } else if (FUNC_3(VAR_0) && FUNC_4(VAR_0)) {
  return (128);
 } else {
  return (0);
 }
}
