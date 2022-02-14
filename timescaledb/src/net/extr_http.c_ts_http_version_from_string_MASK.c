
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HttpVersion ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

HttpVersion
FUNC_1(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_1[VAR_3], VAR_2) == 0)
   return VAR_3;

 return VAR_0;
}
