
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ r ;
typedef scalar_t__ g ;
typedef scalar_t__ b ;


 int VAR_0 ;

int
FUNC_0(u_char VAR_1, u_char VAR_2, u_char VAR_3)
{
 return ((((int)((VAR_1) & 0xff)) << 16) |
     (((int)((VAR_2) & 0xff)) << 8) |
     (((int)((VAR_3) & 0xff))) | VAR_0);
}
