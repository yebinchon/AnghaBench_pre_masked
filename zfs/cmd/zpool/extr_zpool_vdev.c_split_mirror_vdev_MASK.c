
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef size_t uint_t ;
struct TYPE_4__ {int dryrun; } ;
typedef TYPE_1__ splitflags_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int,char**) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,int*,int*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_7 (int *,int ,char**) ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,char*,int **,int *,TYPE_1__) ;

nvlist_t *
FUNC_10(zpool_handle_t *VAR_3, char *VAR_4, nvlist_t *VAR_5,
    splitflags_t VAR_6, int VAR_7, char **VAR_8)
{
 nvlist_t *VAR_9 = ((void*)0), **VAR_10;
 uint_t VAR_11, VAR_12;

 if (VAR_7 > 0) {
  if ((VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_8)) == ((void*)0)) {
   (void) FUNC_1(VAR_2, "%s", FUNC_2("Unable to build a "
       "pool from the specified devices\n"));
   return (((void*)0));
  }

  if (!VAR_6.dryrun && FUNC_4(VAR_3, VAR_9) != 0) {
   FUNC_5(VAR_9);
   return (((void*)0));
  }


  FUNC_8(FUNC_6(VAR_9,
      VAR_0, &VAR_10, &VAR_12) == 0);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   char *VAR_13;
   const char *VAR_14;
   int VAR_15, VAR_16;

   FUNC_8(FUNC_7(VAR_10[VAR_11],
       VAR_1, &VAR_13) == 0);
   if ((VAR_14 = FUNC_3(VAR_13, &VAR_15, &VAR_16)) != ((void*)0)) {
    (void) FUNC_1(VAR_2, FUNC_2("Cannot use "
        "'%s' as a device for splitting\n"), VAR_14);
    FUNC_5(VAR_9);
    return (((void*)0));
   }
  }
 }

 if (FUNC_9(VAR_3, VAR_4, &VAR_9, VAR_5, VAR_6) != 0) {
  FUNC_5(VAR_9);
  return (((void*)0));
 }

 return (VAR_9);
}
