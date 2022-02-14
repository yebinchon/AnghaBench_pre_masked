
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dds_guid; scalar_t__ dds_creation_txg; } ;
struct TYPE_8__ {int zfs_name; TYPE_1__ zfs_dmustats; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {scalar_t__ tosnap_txg; scalar_t__ parent_fromsnap_guid; int snapholds; scalar_t__ holds; int snapprops; int backup; void* seento; void* seenfrom; int recursive; int parent_snaps; int * tosnap; scalar_t__ verbose; int * fromsnap; } ;
typedef TYPE_3__ send_data_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int *) ;
 int FUNC_5 (int ,int **) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 scalar_t__ FUNC_7 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int *,char*) ;
 char* FUNC_12 (int ,char) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_14(zfs_handle_t *VAR_4, void *VAR_5)
{
 send_data_t *VAR_6 = VAR_5;
 uint64_t VAR_7 = VAR_4->zfs_dmustats.dds_guid;
 uint64_t VAR_8 = VAR_4->zfs_dmustats.dds_creation_txg;
 char *VAR_9;
 nvlist_t *VAR_10;
 boolean_t VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_12(VAR_4->zfs_name, '@')+1;
 VAR_11 = (VAR_6->fromsnap != ((void*)0) &&
     FUNC_11(VAR_6->fromsnap, VAR_9) == 0);
 VAR_12 = (VAR_6->tosnap != ((void*)0) && (FUNC_11(VAR_6->tosnap, VAR_9) == 0));
 VAR_13 = (VAR_12 && VAR_6->fromsnap == ((void*)0));

 if (VAR_6->tosnap_txg != 0 && VAR_8 > VAR_6->tosnap_txg) {
  if (VAR_6->verbose) {
   (void) FUNC_4(VAR_3, FUNC_1(VAR_2,
       "skipping snapshot %s because it was created "
       "after the destination snapshot (%s)\n"),
       VAR_4->zfs_name, VAR_6->tosnap);
  }
  FUNC_13(VAR_4);
  return (0);
 }

 FUNC_0(0 == FUNC_7(VAR_6->parent_snaps, VAR_9, VAR_7));




 if (VAR_11 || (VAR_6->parent_fromsnap_guid == 0 && VAR_12)) {
  VAR_6->parent_fromsnap_guid = VAR_7;
 }

 if (!VAR_6->recursive) {
  if (!VAR_6->seenfrom && VAR_11) {
   VAR_6->seenfrom = VAR_0;
   FUNC_13(VAR_4);
   return (0);
  }

  if ((VAR_6->seento || !VAR_6->seenfrom) && !VAR_13) {
   FUNC_13(VAR_4);
   return (0);
  }

  if (VAR_12)
   VAR_6->seento = VAR_0;
 }

 FUNC_0(0 == FUNC_8(&VAR_10, VAR_1, 0));
 FUNC_10(VAR_4, VAR_6->backup, VAR_10);
 FUNC_0(0 == FUNC_6(VAR_6->snapprops, VAR_9, VAR_10));
 FUNC_9(VAR_10);
 if (VAR_6->holds) {
  nvlist_t *VAR_14 = FUNC_2();
  int VAR_15 = FUNC_5(VAR_4->zfs_name, &VAR_14);
  if (VAR_15 == 0) {
   FUNC_0(0 == FUNC_6(VAR_6->snapholds,
       VAR_9, VAR_14));
  }
  FUNC_3(VAR_14);
 }

 FUNC_13(VAR_4);
 return (0);
}
