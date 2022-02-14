
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,char const*) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int **) ;
 scalar_t__ FUNC_5 (char const*,char**,int ) ;
 int * FUNC_6 (int *,int *,int *,int *,int *) ;
 int FUNC_7 (int) ;

nvlist_t *
FUNC_8(zpool_handle_t *VAR_6, const char *VAR_7,
    boolean_t *VAR_8, boolean_t *VAR_9, boolean_t *VAR_10)
{
 nvlist_t *VAR_11, *VAR_12, *VAR_13;
 uint64_t VAR_14;
 char *VAR_15;

 FUNC_7(FUNC_2(&VAR_11, VAR_2, VAR_1) == 0);

 VAR_14 = FUNC_5(VAR_7, &VAR_15, 0);
 if (VAR_14 != 0 && *VAR_15 == '\0') {
  FUNC_7(FUNC_1(VAR_11, VAR_3, VAR_14) == 0);
 } else {
  FUNC_7(FUNC_0(VAR_11, VAR_4,
      VAR_7) == 0);
 }

 FUNC_7(FUNC_4(VAR_6->zpool_config, VAR_5,
     &VAR_12) == 0);

 *VAR_8 = VAR_0;
 *VAR_9 = VAR_0;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_0;
 VAR_13 = FUNC_6(VAR_12, VAR_11, VAR_8, VAR_9, VAR_10);
 FUNC_3(VAR_11);

 return (VAR_13);
}
