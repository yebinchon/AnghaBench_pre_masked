
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_9__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {int ds_prev; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_11__ {int * ddsa_props; int ddsa_snaps; } ;
typedef TYPE_3__ dsl_dataset_snapshot_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int *) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int * FUNC_6 (int ,int *) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int ,char*,int ) ;

void
FUNC_11(void *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_dataset_snapshot_arg_t *VAR_6 = VAR_4;
 dsl_pool_t *VAR_7 = FUNC_1(VAR_5);
 nvpair_t *VAR_8;

 for (VAR_8 = FUNC_6(VAR_6->ddsa_snaps, ((void*)0));
     VAR_8 != ((void*)0); VAR_8 = FUNC_6(VAR_6->ddsa_snaps, VAR_8)) {
  dsl_dataset_t *VAR_9;
  char *VAR_10, *VAR_11;
  char VAR_12[VAR_2];

  VAR_10 = FUNC_7(VAR_8);
  VAR_11 = FUNC_8(VAR_10, '@');
  (void) FUNC_9(VAR_12, VAR_10, VAR_11 - VAR_10 + 1);
  FUNC_0(FUNC_2(VAR_7, VAR_12, VAR_1, &VAR_9));

  FUNC_4(VAR_9, VAR_11 + 1, VAR_5);
  if (VAR_6->ddsa_props != ((void*)0)) {
   FUNC_5(VAR_9->ds_prev,
       VAR_3, VAR_6->ddsa_props, VAR_5);
  }
  FUNC_10(VAR_7->dp_spa, FUNC_7(VAR_8), VAR_0);
  FUNC_3(VAR_9, VAR_1);
 }
}
