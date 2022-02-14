
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ hrtime_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static hrtime_t
FUNC_0(hrtime_t VAR_1, hrtime_t VAR_2)
{
 uint64_t VAR_3 = VAR_1;
 uint64_t VAR_4 = VAR_2;

 return (VAR_4 >= VAR_3 ? VAR_4 - VAR_3 : (VAR_0 - VAR_3) + VAR_4 + 1);
}
