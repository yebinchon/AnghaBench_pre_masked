
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mod_hash_key_t ;



int
FUNC_0(mod_hash_key_t VAR_0, mod_hash_key_t VAR_1)
{
 uintptr_t VAR_2 = (uintptr_t)VAR_0;
 uintptr_t VAR_3 = (uintptr_t)VAR_1;
 if (VAR_2 > VAR_3)
  return (-1);
 else if (VAR_2 < VAR_3)
  return (1);
 else
  return (0);
}
