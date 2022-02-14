
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;



__attribute__((used)) static uint64_t
FUNC_0(uint64_t *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 uint64_t VAR_3 = 0, VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] != 0) {
   VAR_4 += VAR_0[VAR_2] * (((1UL << VAR_2) + ((1UL << VAR_2)/2)));
   VAR_3 += VAR_0[VAR_2];
  }
 }


 return (VAR_3 == 0 ? 0 : VAR_4 / VAR_3);
}
