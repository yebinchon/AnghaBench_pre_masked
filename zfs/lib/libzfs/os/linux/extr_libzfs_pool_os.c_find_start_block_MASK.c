
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ diskaddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static diskaddr_t
FUNC_3(nvlist_t *VAR_3)
{
 nvlist_t **VAR_4;
 uint_t VAR_5, VAR_6;
 diskaddr_t VAR_7 = VAR_0;
 uint64_t VAR_8;

 if (FUNC_0(VAR_3,
     VAR_1, &VAR_4, &VAR_6) != 0) {
  if (FUNC_1(VAR_3,
      VAR_2,
      &VAR_8) != 0 || !VAR_8) {
   return (VAR_0);
  }
  if (FUNC_2(VAR_3, &VAR_7) < 0)
   VAR_7 = VAR_0;
  return (VAR_7);
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_3(VAR_4[VAR_5]);
  if (VAR_7 != VAR_0) {
   return (VAR_7);
  }
 }
 return (VAR_0);
}
