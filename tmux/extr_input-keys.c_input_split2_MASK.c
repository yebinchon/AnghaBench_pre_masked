
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;



__attribute__((used)) static size_t
FUNC_0(u_int VAR_0, u_char *VAR_1)
{
 if (VAR_0 > 0x7f) {
  VAR_1[0] = (VAR_0 >> 6) | 0xc0;
  VAR_1[1] = (VAR_0 & 0x3f) | 0x80;
  return (2);
 }
 VAR_1[0] = VAR_0;
 return (1);
}
