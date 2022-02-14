
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_3(uint64_t VAR_2)
{
 uint64_t VAR_3 = VAR_2;

 if (VAR_3 <= VAR_0) {
  VAR_3 = VAR_3 +
      FUNC_2(VAR_0 - VAR_3 + 1);
 }

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_1;

 FUNC_0(FUNC_1(VAR_3));
 return (VAR_3);
}
