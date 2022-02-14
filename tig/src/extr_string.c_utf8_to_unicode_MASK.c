
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(const char *VAR_0, size_t VAR_1)
{
 unsigned long VAR_2;

 switch (VAR_1) {
 case 1:
  VAR_2 = VAR_0[0];
  break;
 case 2:
  VAR_2 = (VAR_0[0] & 0x1f) << 6;
  VAR_2 += (VAR_0[1] & 0x3f);
  break;
 case 3:
  VAR_2 = (VAR_0[0] & 0x0f) << 12;
  VAR_2 += ((VAR_0[1] & 0x3f) << 6);
  VAR_2 += (VAR_0[2] & 0x3f);
  break;
 case 4:
  VAR_2 = (VAR_0[0] & 0x0f) << 18;
  VAR_2 += ((VAR_0[1] & 0x3f) << 12);
  VAR_2 += ((VAR_0[2] & 0x3f) << 6);
  VAR_2 += (VAR_0[3] & 0x3f);
  break;
 case 5:
  VAR_2 = (VAR_0[0] & 0x0f) << 24;
  VAR_2 += ((VAR_0[1] & 0x3f) << 18);
  VAR_2 += ((VAR_0[2] & 0x3f) << 12);
  VAR_2 += ((VAR_0[3] & 0x3f) << 6);
  VAR_2 += (VAR_0[4] & 0x3f);
  break;
 case 6:
  VAR_2 = (VAR_0[0] & 0x01) << 30;
  VAR_2 += ((VAR_0[1] & 0x3f) << 24);
  VAR_2 += ((VAR_0[2] & 0x3f) << 18);
  VAR_2 += ((VAR_0[3] & 0x3f) << 12);
  VAR_2 += ((VAR_0[4] & 0x3f) << 6);
  VAR_2 += (VAR_0[5] & 0x3f);
  break;
 default:
  return 0;
 }



 return VAR_2 > 0x10FFFF ? 0 : VAR_2;
}
