
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utf8_data {scalar_t__ size; scalar_t__ width; } ;
typedef size_t ssize_t ;



u_int
FUNC_0(const struct utf8_data *VAR_0, ssize_t VAR_1)
{
 ssize_t VAR_2;
 u_int VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_0[VAR_2].size != 0; VAR_2++) {
  if (VAR_1 != -1 && VAR_1 == VAR_2)
   break;
  VAR_3 += VAR_0[VAR_2].width;
 }
 return (VAR_3);
}
