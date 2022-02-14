
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int*,int*) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ,int **,int) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,int*,int ***,int*) ;

int
FUNC_8(zpool_handle_t *VAR_4, nvlist_t **VAR_5, uint64_t *VAR_6,
    boolean_t *VAR_7)
{
 char *VAR_8;
 int VAR_9 = 128 * 1024;
 nvlist_t **VAR_10 = ((void*)0);
 uint_t VAR_11 = 0;
 int VAR_12, VAR_13;
 uint64_t VAR_14 = *VAR_6;

 VAR_8 = FUNC_2(VAR_9);
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 while (*VAR_6 - VAR_14 < 1024 * 1024) {
  uint64_t VAR_15 = VAR_9;
  uint64_t VAR_16;

  if ((VAR_12 = FUNC_1(VAR_4, VAR_8, VAR_6, &VAR_15)) != 0)
   break;


  if (!VAR_15) {
   *VAR_7 = VAR_0;
   break;
  }

  if ((VAR_12 = FUNC_7(VAR_8, VAR_15,
      &VAR_16, &VAR_10, &VAR_11)) != 0)
   break;
  *VAR_6 -= VAR_16;
  if (VAR_16 == VAR_15) {




   VAR_9 *= 2;
   FUNC_0(VAR_8);
   VAR_8 = FUNC_2(VAR_9);
   if (VAR_8 == ((void*)0))
    return (VAR_1);
  }
 }

 FUNC_0(VAR_8);

 if (!VAR_12) {
  FUNC_6(FUNC_4(VAR_5, VAR_2, 0) == 0);
  FUNC_6(FUNC_3(*VAR_5, VAR_3,
      VAR_10, VAR_11) == 0);
 }
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  FUNC_5(VAR_10[VAR_13]);
 FUNC_0(VAR_10);

 return (VAR_12);
}
