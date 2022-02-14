
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ ub_version; } ;
struct TYPE_11__ {scalar_t__ spa_ddt_stat_object; unsigned long long spa_dedup_dspace; TYPE_1__ spa_uberblock; } ;
typedef TYPE_2__ spa_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int dmu_tx_t ;
struct TYPE_12__ {int ddt_histogram_cache; int ddt_histogram; int ddt_tree; int ddt_os; TYPE_2__* ddt_spa; } ;
typedef TYPE_3__ ddt_t ;
typedef int ddt_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,void**) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int,int,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*,int,int,int *) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*,int,int,int *) ;
 int FUNC_10 (TYPE_3__*,int *,int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_12(ddt_t *VAR_6, dmu_tx_t *VAR_7, uint64_t VAR_8)
{
 spa_t *VAR_9 = VAR_6->ddt_spa;
 ddt_entry_t *VAR_10;
 void *VAR_11 = ((void*)0);

 if (FUNC_3(&VAR_6->ddt_tree) == 0)
  return;

 FUNC_0(VAR_9->spa_uberblock.ub_version >= VAR_5);

 if (VAR_9->spa_ddt_stat_object == 0) {
  VAR_9->spa_ddt_stat_object = FUNC_11(VAR_6->ddt_os,
      VAR_2, VAR_4,
      VAR_3, VAR_7);
 }

 while ((VAR_10 = FUNC_2(&VAR_6->ddt_tree, &VAR_11)) != ((void*)0)) {
  FUNC_10(VAR_6, VAR_10, VAR_7, VAR_8);
  FUNC_5(VAR_10);
 }

 for (enum ddt_type VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  uint64_t VAR_13, VAR_14 = 0;
  for (enum ddt_class VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
   if (FUNC_8(VAR_6, VAR_12, VAR_15)) {
    FUNC_9(VAR_6, VAR_12, VAR_15, VAR_7);
    FUNC_1(FUNC_6(VAR_6, VAR_12, VAR_15,
        &VAR_13) == 0);
    VAR_14 += VAR_13;
   }
  }
  for (enum ddt_class VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   if (VAR_14 == 0 && FUNC_8(VAR_6, VAR_12, VAR_16))
    FUNC_7(VAR_6, VAR_12, VAR_16, VAR_7);
  }
 }

 FUNC_4(VAR_6->ddt_histogram, &VAR_6->ddt_histogram_cache,
     sizeof (VAR_6->ddt_histogram));
 VAR_9->spa_dedup_dspace = ~0ULL;
}
