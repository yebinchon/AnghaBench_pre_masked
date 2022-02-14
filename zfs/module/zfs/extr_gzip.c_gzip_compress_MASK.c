
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t zlen_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*,void*,size_t) ;
 scalar_t__ FUNC_2 (void*,size_t*,void*,size_t,int) ;
 int FUNC_3 (int ,void*,size_t,void*,size_t,size_t*) ;
 scalar_t__ FUNC_4 (size_t) ;

size_t
FUNC_5(void *VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7, int VAR_8)
{
 int VAR_9;
 zlen_t VAR_10 = VAR_7;

 FUNC_0(VAR_7 <= VAR_6);


 if (FUNC_4(VAR_6)) {
  VAR_9 = FUNC_3(VAR_2, VAR_4, VAR_6, VAR_5,
      VAR_7, &VAR_10);
  if (VAR_9 == VAR_1) {
   return ((size_t)VAR_10);
  } else if (VAR_9 == VAR_0) {
   if (VAR_7 != VAR_6)
    return (VAR_6);

   FUNC_1(VAR_4, VAR_5, VAR_6);
   return (VAR_6);
  }

 }

 if (FUNC_2(VAR_5, &VAR_10, VAR_4, VAR_6, VAR_8) != VAR_3) {
  if (VAR_7 != VAR_6)
   return (VAR_6);

  FUNC_1(VAR_4, VAR_5, VAR_6);
  return (VAR_6);
 }

 return ((size_t)VAR_10);
}
