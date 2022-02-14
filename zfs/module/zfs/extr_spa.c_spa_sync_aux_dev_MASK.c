
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_8__ {scalar_t__ sav_object; int sav_count; scalar_t__ sav_sync; int * sav_vdevs; } ;
typedef TYPE_2__ spa_aux_vdev_t ;
typedef int nvlist_t ;
typedef int dmu_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int,int *) ;
 int ** FUNC_2 (int,int ) ;
 int FUNC_3 (int **,int) ;
 scalar_t__ FUNC_4 (int *,char const*,int **,int) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int *,int *) ;
 int * FUNC_8 (TYPE_1__*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,int ,char const*,int,int,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_10(spa_t *VAR_7, spa_aux_vdev_t *VAR_8, dmu_tx_t *VAR_9,
    const char *VAR_10, const char *VAR_11)
{
 nvlist_t *VAR_12;
 nvlist_t **VAR_13;
 int VAR_14;

 if (!VAR_8->sav_sync)
  return;






 if (VAR_8->sav_object == 0) {
  VAR_8->sav_object = FUNC_1(VAR_7->spa_meta_objset,
      VAR_1, 1 << 14, VAR_2,
      sizeof (uint64_t), VAR_9);
  FUNC_0(FUNC_9(VAR_7->spa_meta_objset,
      VAR_3, VAR_11, sizeof (uint64_t), 1,
      &VAR_8->sav_object, VAR_9) == 0);
 }

 FUNC_0(FUNC_5(&VAR_12, VAR_5, VAR_4) == 0);
 if (VAR_8->sav_count == 0) {
  FUNC_0(FUNC_4(VAR_12, VAR_10, ((void*)0), 0) == 0);
 } else {
  VAR_13 = FUNC_2(VAR_8->sav_count*sizeof (void *), VAR_4);
  for (VAR_14 = 0; VAR_14 < VAR_8->sav_count; VAR_14++)
   VAR_13[VAR_14] = FUNC_8(VAR_7, VAR_8->sav_vdevs[VAR_14],
       VAR_0, VAR_6);
  FUNC_0(FUNC_4(VAR_12, VAR_10, VAR_13,
      VAR_8->sav_count) == 0);
  for (VAR_14 = 0; VAR_14 < VAR_8->sav_count; VAR_14++)
   FUNC_6(VAR_13[VAR_14]);
  FUNC_3(VAR_13, VAR_8->sav_count * sizeof (void *));
 }

 FUNC_7(VAR_7, VAR_8->sav_object, VAR_12, VAR_9);
 FUNC_6(VAR_12);

 VAR_8->sav_sync = VAR_0;
}
