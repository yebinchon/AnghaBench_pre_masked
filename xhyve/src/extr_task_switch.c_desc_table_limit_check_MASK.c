
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, uint16_t VAR_3)
{
 uint64_t VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_3) ? VAR_1 : VAR_0;
 VAR_7 = FUNC_5(VAR_2, VAR_8, &VAR_4, &VAR_5, &VAR_6);
 FUNC_4(VAR_7 == 0);

 if (VAR_8 == VAR_1) {
  if (FUNC_2(VAR_6) || !FUNC_1(VAR_6))
   return (-1);
 }

 if (VAR_5 < FUNC_3(VAR_3))
  return (-1);
 else
  return (0);
}
