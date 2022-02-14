
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(umode_t VAR_3, uint16_t VAR_4)
{
 int VAR_5 = (VAR_4 & 0xf);

 if (FUNC_0(VAR_3) && (VAR_5 & VAR_0))
  return (1);
 else if (VAR_5 & VAR_1)
  return (!(FUNC_0(VAR_3) &&
      (VAR_5 & VAR_2)));
 return (0);
}
