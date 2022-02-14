
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong_t ;



__attribute__((used)) static ulong_t
FUNC_0(const char *VAR_0)
{
 ulong_t VAR_1, VAR_2 = 0;
 const char *VAR_3;

 for (VAR_3 = VAR_0; *VAR_3 != '\0'; VAR_3++) {
  VAR_2 = (VAR_2 << 4) + *VAR_3;

  if ((VAR_1 = (VAR_2 & 0xf0000000)) != 0) {
   VAR_2 ^= (VAR_1 >> 24);
   VAR_2 ^= VAR_1;
  }
 }

 return (VAR_2);
}
