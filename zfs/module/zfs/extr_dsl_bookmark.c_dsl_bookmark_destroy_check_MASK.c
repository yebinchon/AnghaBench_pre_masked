
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ zbm_redaction_obj; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int redaction_list_t ;
typedef int nvpair_t ;
struct TYPE_12__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_13__ {int dbda_errors; int dbda_success; int dbda_bmarks; } ;
typedef TYPE_3__ dsl_bookmark_destroy_arg_t ;
struct TYPE_14__ {int tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_2__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,char const*,int **,int ,char**) ;
 int FUNC_5 (int *,char*,TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,char const*) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ,int *) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int
FUNC_16(void *VAR_5, dmu_tx_t *VAR_6)
{
 dsl_bookmark_destroy_arg_t *VAR_7 = VAR_5;
 dsl_pool_t *VAR_8 = FUNC_3(VAR_6);
 int VAR_9 = 0;

 FUNC_0(FUNC_12(VAR_7->dbda_success));
 FUNC_0(FUNC_12(VAR_7->dbda_errors));

 if (!FUNC_15(VAR_8->dp_spa, VAR_4))
  return (0);

 for (nvpair_t *VAR_10 = FUNC_13(VAR_7->dbda_bmarks, ((void*)0));
     VAR_10 != ((void*)0); VAR_10 = FUNC_13(VAR_7->dbda_bmarks, VAR_10)) {
  const char *VAR_11 = FUNC_14(VAR_10);
  dsl_dataset_t *VAR_12;
  zfs_bookmark_phys_t VAR_13;
  int VAR_14;
  char *VAR_15;

  VAR_14 = FUNC_4(VAR_8, VAR_11, &VAR_12,
      VAR_3, &VAR_15);
  if (VAR_14 == VAR_1) {

   continue;
  }
  if (VAR_14 == 0) {
   VAR_14 = FUNC_5(VAR_12, VAR_15, &VAR_13);
   FUNC_6(VAR_12, VAR_3);
   if (VAR_14 == VAR_2) {




    continue;
   }
   if (VAR_14 == 0 && VAR_13.zbm_redaction_obj != 0) {
    redaction_list_t *VAR_16 = ((void*)0);
    VAR_14 = FUNC_7(VAR_6->tx_pool,
        VAR_13.zbm_redaction_obj, VAR_3, &VAR_16);
    if (VAR_14 == VAR_1) {
     VAR_14 = 0;
    } else if (VAR_14 == 0 &&
        FUNC_8(VAR_16)) {
     VAR_14 = FUNC_1(VAR_0);
    }
    if (VAR_16 != ((void*)0)) {
     FUNC_9(VAR_16, VAR_3);
    }
   }
  }
  if (VAR_14 == 0) {
   if (FUNC_2(VAR_6)) {
    FUNC_10(VAR_7->dbda_success,
        VAR_11);
   }
  } else {
   FUNC_11(VAR_7->dbda_errors, VAR_11, VAR_14);
   VAR_9 = VAR_14;
  }
 }
 return (VAR_9);
}
