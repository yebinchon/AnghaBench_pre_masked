
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int data_type_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(data_type_t VAR_3, uint_t VAR_4, const void *VAR_5)
{
 switch (VAR_3) {
 case 128:
  if (*(boolean_t *)VAR_5 != VAR_1 &&
      *(boolean_t *)VAR_5 != VAR_0)
   return (VAR_2);
  break;
 case 129: {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   if (((boolean_t *)VAR_5)[VAR_6] != VAR_1 &&
       ((boolean_t *)VAR_5)[VAR_6] != VAR_0)
    return (VAR_2);
  break;
 }
 default:
  break;
 }

 return (0);
}
