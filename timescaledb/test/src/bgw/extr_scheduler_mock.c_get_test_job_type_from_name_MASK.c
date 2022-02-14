
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestJobType ;
typedef int Name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static TestJobType
FUNC_1(Name VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (FUNC_0(VAR_2, VAR_1[VAR_3]) == 0)
   return VAR_3;
 }
 return VAR_0;
}
