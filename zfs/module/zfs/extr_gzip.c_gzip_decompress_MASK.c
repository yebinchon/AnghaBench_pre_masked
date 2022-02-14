
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t zlen_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,void*,size_t,void*,size_t,size_t*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (void*,size_t*,void*,size_t) ;

int
FUNC_4(void *VAR_3, void *VAR_4, size_t VAR_5, size_t VAR_6, int VAR_7)
{
 zlen_t VAR_8 = VAR_6;

 FUNC_0(VAR_6 >= VAR_5);


 if (FUNC_2(VAR_6)) {
  if (FUNC_1(VAR_1, VAR_3, VAR_5,
      VAR_4, VAR_6, &VAR_8) == VAR_0)
   return (0);

 }

 if (FUNC_3(VAR_4, &VAR_8, VAR_3, VAR_5) != VAR_2)
  return (-1);

 return (0);
}
