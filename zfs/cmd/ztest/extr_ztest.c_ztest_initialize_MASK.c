
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ztest_ds_t ;
struct TYPE_10__ {int vdev_guid; int * vdev_initialize_thread; int vdev_path; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_11__ {int spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;
struct TYPE_12__ {int zo_verbose; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int *,int,int *) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,TYPE_1__*,int) ;
 TYPE_5__ VAR_4 ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (int ) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

void
FUNC_14(ztest_ds_t *VAR_7, uint64_t VAR_8)
{
 spa_t *VAR_9 = VAR_5;
 int VAR_10 = 0;

 FUNC_4(&VAR_6);

 FUNC_7(VAR_9, VAR_3, VAR_0, VAR_2);


 vdev_t *VAR_11 = FUNC_13(VAR_9->spa_root_vdev);
 if (VAR_11 == ((void*)0)) {
  FUNC_8(VAR_9, VAR_3, VAR_0);
  FUNC_5(&VAR_6);
  return;
 }






 uint64_t VAR_12 = VAR_11->vdev_guid;
 char *VAR_13 = FUNC_10(VAR_11->vdev_path);
 boolean_t VAR_14 = VAR_11->vdev_initialize_thread != ((void*)0);

 FUNC_11("vd %px, guid %llu", VAR_11, VAR_12);
 FUNC_8(VAR_9, VAR_3, VAR_0);

 uint64_t VAR_15 = FUNC_12(VAR_1);

 nvlist_t *VAR_16 = FUNC_1();
 nvlist_t *VAR_17 = FUNC_1();
 FUNC_0(VAR_16, VAR_13, VAR_12);
 VAR_10 = FUNC_9(VAR_9, VAR_16, VAR_15, VAR_17);
 FUNC_2(VAR_16);
 FUNC_2(VAR_17);

 switch (VAR_15) {
 case 130:
  if (VAR_4.zo_verbose >= 4) {
   (void) FUNC_6("Cancel initialize %s", VAR_13);
   if (!VAR_14)
    (void) FUNC_6(" failed (no initialize active)");
   (void) FUNC_6("\n");
  }
  break;
 case 129:
  if (VAR_4.zo_verbose >= 4) {
   (void) FUNC_6("Start initialize %s", VAR_13);
   if (VAR_14 && VAR_10 == 0)
    (void) FUNC_6(" failed (already active)");
   else if (VAR_10 != 0)
    (void) FUNC_6(" failed (error %d)", VAR_10);
   (void) FUNC_6("\n");
  }
  break;
 case 128:
  if (VAR_4.zo_verbose >= 4) {
   (void) FUNC_6("Suspend initialize %s", VAR_13);
   if (!VAR_14)
    (void) FUNC_6(" failed (no initialize active)");
   (void) FUNC_6("\n");
  }
  break;
 }
 FUNC_3(VAR_13);
 FUNC_5(&VAR_6);
}
