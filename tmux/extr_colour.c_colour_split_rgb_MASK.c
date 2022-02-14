
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



void
FUNC_0(int VAR_0, u_char *VAR_1, u_char *VAR_2, u_char *VAR_3)
{
 *VAR_1 = (VAR_0 >> 16) & 0xff;
 *VAR_2 = (VAR_0 >> 8) & 0xff;
 *VAR_3 = VAR_0 & 0xff;
}
