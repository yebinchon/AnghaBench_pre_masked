
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__ const*,scalar_t__,scalar_t__ const) ;

__attribute__((used)) static boolean_t
FUNC_1(const uint64_t *VAR_2, uint64_t VAR_3,
    const uint64_t *VAR_4, uint64_t VAR_5)
{
 if (VAR_3 != VAR_5)
  return (VAR_0);
 for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (!FUNC_0(VAR_4, VAR_5, VAR_2[VAR_6]))
   return (VAR_0);
 }
 return (VAR_1);
}
