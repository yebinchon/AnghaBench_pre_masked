
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_7__ {int secure; scalar_t__ fullpool; int rate; } ;
typedef TYPE_2__ trimflags_t ;
typedef int pool_trim_func_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int **) ;
 scalar_t__ FUNC_6 (int *,char*,char**) ;
 int * FUNC_7 (int *,int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__,char*,char*) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (TYPE_1__*,int *,int *,int *,int **) ;

int
FUNC_15(zpool_handle_t *VAR_3, pool_trim_func_t VAR_4, nvlist_t *VAR_5,
    trimflags_t *VAR_6)
{
 char VAR_7[1024];
 int VAR_8;

 nvlist_t *VAR_9 = FUNC_1();
 nvlist_t *VAR_10 = FUNC_1();
 nvlist_t *VAR_11 = ((void*)0);
 nvlist_t *VAR_12;
 nvpair_t *VAR_13;

 VAR_8 = FUNC_14(VAR_3, VAR_5, VAR_9,
     VAR_10, &VAR_11);
 if (VAR_8 == 0) {
  VAR_8 = FUNC_5(VAR_3->zpool_name, VAR_4, VAR_6->rate,
      VAR_6->secure, VAR_9, &VAR_12);
  if (VAR_8 == 0) {
   FUNC_2(VAR_9);
   FUNC_2(VAR_10);
   return (0);
  }

  if (VAR_12 != ((void*)0)) {
   VAR_11 = FUNC_3(VAR_12,
       VAR_2);
  }

  (void) FUNC_9(VAR_7, sizeof (VAR_7),
      FUNC_0(VAR_1, "operation failed"));
 } else {
  FUNC_10(VAR_11 != ((void*)0));
 }

 for (VAR_13 = FUNC_7(VAR_11, ((void*)0));
     VAR_13 != ((void*)0); VAR_13 = FUNC_7(VAR_11, VAR_13)) {
  int64_t VAR_14 = FUNC_11(FUNC_4(VAR_13));
  char *VAR_15;






  if (VAR_14 == VAR_0 &&
      VAR_6->fullpool &&
      !VAR_6->secure) {
   continue;
  }

  if (FUNC_6(VAR_10, FUNC_8(VAR_13),
      &VAR_15) != 0)
   VAR_15 = FUNC_8(VAR_13);

  (void) FUNC_12(VAR_3->zpool_hdl, VAR_14,
      "cannot trim '%s'", VAR_15);
 }

 FUNC_2(VAR_9);
 FUNC_2(VAR_10);

 if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_11);
  return (-1);
 }

 return (FUNC_13(VAR_3->zpool_hdl, VAR_8, VAR_7));
}
