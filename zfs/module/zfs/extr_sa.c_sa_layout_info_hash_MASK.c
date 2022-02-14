
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int sa_attr_type_t ;


 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static uint64_t
FUNC_1(sa_attr_type_t *VAR_0, int VAR_1)
{
 int VAR_2;
 uint64_t VAR_3 = -1ULL;

 for (VAR_2 = 0; VAR_2 != VAR_1; VAR_2++)
  VAR_3 ^= FUNC_0(VAR_0[VAR_2]);

 return (VAR_3);
}
