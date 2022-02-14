
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (size_t const) ;
 scalar_t__ FUNC_2 (scalar_t__ const*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*) ;
 size_t FUNC_4 (scalar_t__ const*) ;

__attribute__((used)) static size_t FUNC_5(const BYTE *VAR_0, const BYTE *VAR_1, const BYTE *const VAR_2)
{
 const BYTE *const VAR_3 = VAR_0;
 const BYTE *const VAR_4 = VAR_2 - (sizeof(size_t) - 1);

 while (VAR_0 < VAR_4) {
  size_t const VAR_5 = FUNC_4(VAR_1) ^ FUNC_4(VAR_0);
  if (!VAR_5) {
   VAR_0 += sizeof(size_t);
   VAR_1 += sizeof(size_t);
   continue;
  }
  VAR_0 += FUNC_1(VAR_5);
  return (size_t)(VAR_0 - VAR_3);
 }
 if (FUNC_0())
  if ((VAR_0 < (VAR_2 - 3)) && (FUNC_3(VAR_1) == FUNC_3(VAR_0))) {
   VAR_0 += 4;
   VAR_1 += 4;
  }
 if ((VAR_0 < (VAR_2 - 1)) && (FUNC_2(VAR_1) == FUNC_2(VAR_0))) {
  VAR_0 += 2;
  VAR_1 += 2;
 }
 if ((VAR_0 < VAR_2) && (*VAR_1 == *VAR_0))
  VAR_0++;
 return (size_t)(VAR_0 - VAR_3);
}
