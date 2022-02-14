
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int uint64_t ;
typedef int pool_initialize_func_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int int64_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int **) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int *,char*,char**) ;
 int * FUNC_9 (int *,int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,char*,char*) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ,int,int ,char*) ;
 int FUNC_16 (TYPE_1__*,int *,int *,int *,int **) ;

int
FUNC_17(zpool_handle_t *VAR_3, pool_initialize_func_t VAR_4,
    nvlist_t *VAR_5, boolean_t VAR_6)
{
 int VAR_7;

 nvlist_t *VAR_8 = FUNC_1();
 nvlist_t *VAR_9 = FUNC_1();
 nvlist_t *VAR_10 = ((void*)0);
 nvlist_t *VAR_11;
 nvpair_t *VAR_12;

 VAR_7 = FUNC_16(VAR_3, VAR_5, VAR_8,
     VAR_9, &VAR_10);

 if (VAR_7 != 0) {
  FUNC_11(VAR_10 != ((void*)0));
  goto list_errors;
 }

 VAR_7 = FUNC_6(VAR_3->zpool_name, VAR_4,
     VAR_8, &VAR_11);

 if (VAR_7 != 0) {
  if (VAR_11 != ((void*)0)) {
   VAR_10 = FUNC_3(VAR_11,
       VAR_1);
   goto list_errors;
  }
  (void) FUNC_14(VAR_3->zpool_hdl, VAR_7,
      FUNC_0(VAR_0, "operation failed"));
  goto out;
 }

 if (VAR_6) {
  for (VAR_12 = FUNC_9(VAR_8, ((void*)0)); VAR_12 != ((void*)0);
      VAR_12 = FUNC_9(VAR_8, VAR_12)) {

   uint64_t VAR_13 = FUNC_5(VAR_12);

   VAR_7 = FUNC_7(VAR_3->zpool_name,
       VAR_2, VAR_13, ((void*)0));
   if (VAR_7 != 0) {
    (void) FUNC_15(VAR_3->zpool_hdl,
        VAR_7, FUNC_0(VAR_0, "error "
        "waiting for '%s' to initialize"),
        FUNC_10(VAR_12));

    goto out;
   }
  }
 }
 goto out;

list_errors:
 for (VAR_12 = FUNC_9(VAR_10, ((void*)0)); VAR_12 != ((void*)0);
     VAR_12 = FUNC_9(VAR_10, VAR_12)) {
  int64_t VAR_14 = FUNC_12(FUNC_4(VAR_12));
  char *VAR_15;

  if (FUNC_8(VAR_9, FUNC_10(VAR_12),
      &VAR_15) != 0)
   VAR_15 = FUNC_10(VAR_12);

  (void) FUNC_13(VAR_3->zpool_hdl, VAR_14,
      "cannot initialize '%s'", VAR_15);
 }

out:
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);

 if (VAR_10 != ((void*)0))
  FUNC_2(VAR_10);

 return (VAR_7 == 0 ? 0 : -1);
}
