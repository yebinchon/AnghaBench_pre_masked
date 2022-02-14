
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {TYPE_6__* os_dsl_dataset; int os_spa; } ;
typedef TYPE_1__ objset_t ;
typedef int nice_used ;
typedef int nice_uncomp ;
typedef int nice_comp ;
typedef int dsl_pool_t ;
struct TYPE_9__ {int dd_livelist; } ;
typedef TYPE_2__ dsl_dir_t ;
typedef int dsl_dataset_t ;
struct TYPE_11__ {TYPE_2__* ds_dir; } ;
struct TYPE_10__ {int dd_origin_obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_6__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_4__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_15(objset_t *VAR_1)
{
 uint64_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 dsl_pool_t *VAR_8 = FUNC_13(VAR_1->os_spa);
 dsl_dir_t *VAR_9 = VAR_1->os_dsl_dataset->ds_dir;

 FUNC_0(!FUNC_2(VAR_1));
 if (!FUNC_6(&VAR_9->dd_livelist))
  return (0);
 FUNC_9(VAR_8, VAR_0);
 FUNC_7(&VAR_9->dd_livelist, &VAR_2,
     &VAR_4, &VAR_6);

 dsl_dataset_t *VAR_10;
 FUNC_0(FUNC_11(VAR_8));
 FUNC_1(FUNC_3(VAR_8,
     FUNC_8(VAR_9)->dd_origin_obj, VAR_0, &VAR_10));
 FUNC_1(FUNC_5(VAR_10, VAR_1->os_dsl_dataset,
     &VAR_3, &VAR_5, &VAR_7));
 FUNC_4(VAR_10, VAR_0);
 FUNC_10(VAR_8, VAR_0);




 if (VAR_3 != VAR_2 || VAR_5 != VAR_4 || VAR_7 < VAR_6) {
  char VAR_11[32], VAR_12[32], VAR_13[32];
  (void) FUNC_12("Discrepancy in space accounting:\n");
  FUNC_14(VAR_3, VAR_11, sizeof (VAR_11));
  FUNC_14(VAR_5, VAR_12, sizeof (VAR_12));
  FUNC_14(VAR_7, VAR_13, sizeof (VAR_13));
  (void) FUNC_12("dir: used %s, comp %s, uncomp %s\n",
      VAR_11, VAR_12, VAR_13);
  FUNC_14(VAR_2, VAR_11, sizeof (VAR_11));
  FUNC_14(VAR_4, VAR_12, sizeof (VAR_12));
  FUNC_14(VAR_6, VAR_13, sizeof (VAR_13));
  (void) FUNC_12("livelist: used %s, comp %s, uncomp %s\n",
      VAR_11, VAR_12, VAR_13);
  return (1);
 }
 return (0);
}
