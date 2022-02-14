
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(uchar_t *VAR_3, size_t VAR_4)
{
 uchar_t VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_3[VAR_4];
 for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++)
  if (VAR_3[VAR_6] >= VAR_5 ||
      VAR_3[VAR_6] == VAR_2)
   return (VAR_1);

 return (VAR_0);
}
