
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint16_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static boolean_t
FUNC_0(uint_t VAR_9, uint_t VAR_10)
{
 uint16_t VAR_11;

 switch (VAR_9) {
 case 129:
 case 128:
 case 130:
 case 131:
  VAR_11 = VAR_10 & VAR_3;
  return (VAR_11 == VAR_2 ||
      VAR_11 == VAR_8 ||
      VAR_11 == VAR_0 || VAR_11 == 0 ||
      VAR_11 == VAR_1);
 default:
  if (VAR_9 >= VAR_7 && VAR_9 <= VAR_6)
   return (VAR_5);
 }
 return (VAR_4);
}
