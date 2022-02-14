
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;



__attribute__((used)) static u_short
FUNC_0(const char *VAR_0)
{
 u_short VAR_1;

 VAR_1 = 0;
 for (; *VAR_0 != '\0'; VAR_0++) {
  VAR_1 = (VAR_1 >> 1) + ((VAR_1 & 1) << 15);
  VAR_1 += *VAR_0;
 }
 return (VAR_1);
}
