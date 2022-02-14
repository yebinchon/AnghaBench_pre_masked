
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef scalar_t__ mod_hash_key_t ;


 int FUNC_0 (char*) ;

uint_t
FUNC_1(void *VAR_0, mod_hash_key_t VAR_1)
{
 uint_t VAR_2 = 0;
 uint_t VAR_3;
 char *VAR_4, *VAR_5 = (char *)VAR_1;

 FUNC_0(VAR_5);
 for (VAR_4 = VAR_5; *VAR_4 != '\0'; VAR_4++) {
  VAR_2 = (VAR_2 << 4) + *VAR_4;
  if ((VAR_3 = (VAR_2 & 0xf0000000)) != 0) {
   VAR_2 ^= (VAR_3 >> 24);
   VAR_2 ^= VAR_3;
  }
 }
 return (VAR_2);
}
