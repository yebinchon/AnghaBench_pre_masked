
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {scalar_t__ size; } ;



size_t
FUNC_0(const struct utf8_data *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_0[VAR_1].size != 0; VAR_1++)
               ;
 return (VAR_1);
}
