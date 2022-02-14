
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



int
FUNC_0(int64_t VAR_0)
{
 VAR_0 = (~VAR_0) + (VAR_0 << 18);
 VAR_0 = VAR_0 ^ (VAR_0 >> 31);
 VAR_0 = VAR_0 * 21;
 VAR_0 = VAR_0 ^ (VAR_0 >> 11);
 VAR_0 = VAR_0 + (VAR_0 << 6);
 VAR_0 = VAR_0 ^ (VAR_0 >> 22);
 return ((int)VAR_0);
}
