
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_8__ {int * uap_zhp; } ;
typedef TYPE_1__ unavailpool_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_9__ {char* dd_prop; scalar_t__ dd_pool_guid; int dd_found; scalar_t__ dd_vdev_guid; } ;
typedef TYPE_2__ dev_data_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,char*,int ,char*) ;
 int VAR_7 ;
 int FUNC_8 (int *,int *,void*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(zpool_handle_t *VAR_8, void *VAR_9)
{
 nvlist_t *VAR_10, *VAR_11;
 dev_data_t *VAR_12 = VAR_9;
 uint64_t VAR_13;
 unavailpool_t *VAR_14;

 FUNC_7(VAR_0, "zfs_iter_pool: evaluating vdevs on %s (by %s)",
     FUNC_12(VAR_8), VAR_12->dd_vdev_guid ? "GUID" : VAR_12->dd_prop);




 if ((VAR_10 = FUNC_11(VAR_8, ((void*)0))) != ((void*)0)) {
  if (VAR_12->dd_pool_guid == 0 ||
      (FUNC_4(VAR_10, VAR_2,
      &VAR_13) == 0 && VAR_13 == VAR_12->dd_pool_guid)) {
   (void) FUNC_3(VAR_10,
       VAR_3, &VAR_11);
   FUNC_8(VAR_8, VAR_11, VAR_9);
  }
 }





 if (VAR_4) {
  for (VAR_14 = FUNC_0(&VAR_5); VAR_14 != ((void*)0);
      VAR_14 = FUNC_1(&VAR_5, VAR_14)) {

   if (FUNC_5(FUNC_12(VAR_8),
       FUNC_12(VAR_14->uap_zhp)))
    continue;
   if (FUNC_9(VAR_8) >= VAR_1) {
    FUNC_2(&VAR_5, VAR_14);
    (void) FUNC_6(VAR_6, VAR_7,
        VAR_14);
    break;
   }
  }
 }

 FUNC_10(VAR_8);
 return (VAR_12->dd_found);
}
