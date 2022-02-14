
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {char* vdev_path; scalar_t__ vdev_islog; } ;
typedef TYPE_3__ vdev_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int sysevent_t ;
struct TYPE_22__ {void* sav_sync; int sav_config; int * sav_vdevs; } ;
struct TYPE_21__ {void* sav_sync; int sav_config; int * sav_vdevs; } ;
struct TYPE_24__ {TYPE_2__ spa_l2cache; TYPE_1__ spa_spares; } ;
typedef TYPE_4__ spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ***,int *) ;
 int * FUNC_5 (TYPE_4__*,TYPE_3__*,int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,char*,int *,char*,int ,char*,char*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_3__* FUNC_12 (TYPE_4__*,int ,void*) ;
 int FUNC_13 (TYPE_4__*) ;
 int VAR_14 ;
 int * FUNC_14 (int **,int ,int ) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int *,int ,int) ;
 int FUNC_19 (int ,int ,int **,int ,int *) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (TYPE_3__*,int *) ;
 int FUNC_22 (TYPE_4__*) ;

int
FUNC_23(spa_t *VAR_15, uint64_t VAR_16, boolean_t VAR_17)
{
 vdev_t *VAR_18;
 nvlist_t **VAR_19, **VAR_20, *VAR_21;
 uint64_t VAR_22 = 0;
 uint_t VAR_23, VAR_24;
 int VAR_25 = 0, VAR_26;
 boolean_t VAR_27 = FUNC_1(&VAR_14);
 sysevent_t *VAR_28 = ((void*)0);
 char *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);

 FUNC_0(FUNC_22(VAR_15));

 if (!VAR_27)
  VAR_22 = FUNC_17(VAR_15);

 FUNC_0(FUNC_1(&VAR_14));
 if (FUNC_7(VAR_15, VAR_5)) {
  VAR_25 = (FUNC_8(VAR_15)) ?
      VAR_9 : VAR_10;

  if (!VAR_27)
   return (FUNC_18(VAR_15, ((void*)0), VAR_22, VAR_25));

  return (VAR_25);
 }

 VAR_18 = FUNC_12(VAR_15, VAR_16, VAR_0);

 if (VAR_15->spa_spares.sav_vdevs != ((void*)0) &&
     FUNC_4(VAR_15->spa_spares.sav_config,
     VAR_13, &VAR_19, &VAR_23) == 0 &&
     (VAR_21 = FUNC_14(VAR_19, VAR_23, VAR_16)) != ((void*)0)) {




  if (VAR_18 == ((void*)0) || VAR_17) {
   if (VAR_18 == ((void*)0))
    VAR_18 = FUNC_12(VAR_15, VAR_16, VAR_1);
   VAR_28 = FUNC_5(VAR_15, VAR_18, ((void*)0),
       VAR_4);

   VAR_29 = VAR_8;
   VAR_30 = FUNC_3(VAR_21, VAR_12);
   FUNC_19(VAR_15->spa_spares.sav_config,
       VAR_13, VAR_19, VAR_23, VAR_21);
   FUNC_11(VAR_15);
   VAR_15->spa_spares.sav_sync = VAR_1;
  } else {
   VAR_25 = FUNC_2(VAR_2);
  }
 } else if (VAR_15->spa_l2cache.sav_vdevs != ((void*)0) &&
     FUNC_4(VAR_15->spa_l2cache.sav_config,
     VAR_11, &VAR_20, &VAR_24) == 0 &&
     (VAR_21 = FUNC_14(VAR_20, VAR_24, VAR_16)) != ((void*)0)) {
  VAR_29 = VAR_6;
  VAR_30 = FUNC_3(VAR_21, VAR_12);



  VAR_18 = FUNC_12(VAR_15, VAR_16, VAR_1);
  VAR_28 = FUNC_5(VAR_15, VAR_18, ((void*)0), VAR_4);
  FUNC_19(VAR_15->spa_l2cache.sav_config,
      VAR_11, VAR_20, VAR_24, VAR_21);
  FUNC_10(VAR_15);
  VAR_15->spa_l2cache.sav_sync = VAR_1;
 } else if (VAR_18 != ((void*)0) && VAR_18->vdev_islog) {
  FUNC_0(!VAR_27);
  VAR_29 = VAR_7;
  VAR_30 = (VAR_18->vdev_path != ((void*)0)) ? VAR_18->vdev_path : "-";
  VAR_25 = FUNC_20(VAR_18, &VAR_22);
 } else if (VAR_18 != ((void*)0)) {
  FUNC_0(!VAR_27);
  VAR_25 = FUNC_21(VAR_18, &VAR_22);
 } else {



  VAR_25 = FUNC_2(VAR_3);
 }

 if (VAR_30 != ((void*)0))
  VAR_31 = FUNC_15(VAR_30);

 VAR_26 = VAR_25;

 if (!VAR_27)
  VAR_25 = FUNC_18(VAR_15, ((void*)0), VAR_22, VAR_25);
 if (VAR_26 == 0 && VAR_29 != ((void*)0) && VAR_31 != ((void*)0)) {
  FUNC_9(VAR_15, "vdev remove", ((void*)0),
      "%s vdev (%s) %s", FUNC_13(VAR_15), VAR_29, VAR_31);
 }
 if (VAR_31 != ((void*)0))
  FUNC_16(VAR_31);

 if (VAR_28 != ((void*)0))
  FUNC_6(VAR_28);

 return (VAR_25);
}
