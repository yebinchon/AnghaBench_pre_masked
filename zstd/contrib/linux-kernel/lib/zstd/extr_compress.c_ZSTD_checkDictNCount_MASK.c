
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int U32 ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(short *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 U32 VAR_4;
 if (VAR_2 < VAR_3)
  return FUNC_0(VAR_0);
 for (VAR_4 = 0; VAR_4 <= VAR_3; ++VAR_4) {
  if (VAR_1[VAR_4] == 0)
   return FUNC_0(VAR_0);
 }
 return 0;
}
