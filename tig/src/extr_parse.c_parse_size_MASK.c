
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

size_t
FUNC_1(const char *VAR_0)
{
 size_t VAR_1 = 0;

 while (*VAR_0 == ' ')
  VAR_0++;

 while (FUNC_0(*VAR_0))
  VAR_1 = (VAR_1 * 10) + (*VAR_0++ - '0');

 return VAR_1;
}
