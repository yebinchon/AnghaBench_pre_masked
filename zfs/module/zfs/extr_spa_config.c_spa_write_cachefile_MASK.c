
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int spa_import_flags; scalar_t__ spa_ccw_fail_time; int spa_config_list; int spa_props_lock; int * spa_config; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_18__ {int * scd_path; } ;
typedef TYPE_2__ spa_config_dirent_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 () ;
 char* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * VAR_8 ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_1__*,int *,int *,int ) ;
 int VAR_10 ;
 char* FUNC_16 (TYPE_1__*) ;
 int VAR_11 ;
 TYPE_1__* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (int *,int *) ;
 int FUNC_21 (int ,TYPE_1__*,int *,int *,int *,int ,int ) ;

void
FUNC_22(spa_t *VAR_12, boolean_t VAR_13, boolean_t VAR_14)
{
 spa_config_dirent_t *VAR_15, *VAR_16;
 nvlist_t *VAR_17;
 char *VAR_18;
 boolean_t VAR_19;
 int VAR_20 = 0;

 FUNC_0(FUNC_1(&VAR_11));

 if (VAR_8 == ((void*)0) || !(VAR_10 & VAR_4))
  return;






 VAR_19 = VAR_0;
 for (VAR_15 = FUNC_7(&VAR_12->spa_config_list); VAR_15 != ((void*)0);
     VAR_15 = FUNC_8(&VAR_12->spa_config_list, VAR_15)) {
  spa_t *VAR_21 = ((void*)0);
  if (VAR_15->scd_path == ((void*)0))
   continue;




  VAR_17 = ((void*)0);
  while ((VAR_21 = FUNC_17(VAR_21)) != ((void*)0)) {







   if ((VAR_21 == VAR_12 && VAR_13) ||
       !FUNC_19(VAR_21))
    continue;

   FUNC_10(&VAR_21->spa_props_lock);
   VAR_16 = FUNC_7(&VAR_21->spa_config_list);
   if (VAR_21->spa_config == ((void*)0) ||
       VAR_16 == ((void*)0) ||
       VAR_16->scd_path == ((void*)0) ||
       FUNC_20(VAR_16->scd_path, VAR_15->scd_path) != 0) {
    FUNC_11(&VAR_21->spa_props_lock);
    continue;
   }

   if (VAR_17 == ((void*)0))
    VAR_17 = FUNC_3();

   if (VAR_21->spa_import_flags & VAR_6)
    VAR_18 = FUNC_4(
        VAR_21->spa_config, VAR_7);
   else
    VAR_18 = FUNC_16(VAR_21);

   FUNC_2(VAR_17, VAR_18, VAR_21->spa_config);
   FUNC_11(&VAR_21->spa_props_lock);
  }

  VAR_20 = FUNC_14(VAR_15, VAR_17);
  if (VAR_20 != 0)
   VAR_19 = VAR_1;
  FUNC_12(VAR_17);
 }

 if (VAR_19) {





  if (VAR_12->spa_ccw_fail_time == 0) {
   FUNC_21(VAR_3,
       VAR_12, ((void*)0), ((void*)0), ((void*)0), 0, 0);
  }
  VAR_12->spa_ccw_fail_time = FUNC_5();
  FUNC_13(VAR_12, VAR_5);
 } else {




  VAR_12->spa_ccw_fail_time = 0;
 }




 VAR_15 = FUNC_7(&VAR_12->spa_config_list);
 while ((VAR_16 = FUNC_8(&VAR_12->spa_config_list, VAR_15)) != ((void*)0)) {
  FUNC_9(&VAR_12->spa_config_list, VAR_16);
  if (VAR_16->scd_path != ((void*)0))
   FUNC_18(VAR_16->scd_path);
  FUNC_6(VAR_16, sizeof (spa_config_dirent_t));
 }

 VAR_9++;

 if (VAR_14)
  FUNC_15(VAR_12, ((void*)0), ((void*)0), VAR_2);
}
