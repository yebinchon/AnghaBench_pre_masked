
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ sa_handle_type_t ;
struct TYPE_14__ {int * dbu_evict_func_async; int * dbu_evict_func_sync; } ;
struct TYPE_12__ {TYPE_9__ sa_dbu; int * sa_spill_tab; int * sa_bonus_tab; int * sa_spill; int * sa_os; int * sa_bonus; void* sa_userp; } ;
typedef TYPE_1__ sa_handle_t ;
typedef int objset_t ;
struct TYPE_13__ {scalar_t__ doi_bonus_type; } ;
typedef TYPE_2__ dmu_object_info_t ;
typedef int dmu_buf_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_9__*,int ,int *,int *) ;
 TYPE_1__* FUNC_3 (int *,TYPE_9__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_8(objset_t *VAR_7, dmu_buf_t *VAR_8, void *VAR_9,
    sa_handle_type_t VAR_10, sa_handle_t **VAR_11)
{
 int VAR_12 = 0;
 sa_handle_t *VAR_13 = ((void*)0);
 if (VAR_10 == VAR_4)
  VAR_13 = FUNC_1(VAR_8);

 if (VAR_13 == ((void*)0)) {
  sa_handle_t *VAR_14 = ((void*)0);

  VAR_13 = FUNC_5(VAR_5, VAR_2);
  VAR_13->sa_dbu.dbu_evict_func_sync = ((void*)0);
  VAR_13->sa_dbu.dbu_evict_func_async = ((void*)0);
  VAR_13->sa_userp = VAR_9;
  VAR_13->sa_bonus = VAR_8;
  VAR_13->sa_os = VAR_7;
  VAR_13->sa_spill = ((void*)0);
  VAR_13->sa_bonus_tab = ((void*)0);
  VAR_13->sa_spill_tab = ((void*)0);

  VAR_12 = FUNC_7(VAR_13, VAR_3);

  if (VAR_10 == VAR_4) {
   FUNC_2(&VAR_13->sa_dbu, VAR_6, ((void*)0),
       ((void*)0));
   VAR_14 = FUNC_3(VAR_8, &VAR_13->sa_dbu);
  }

  if (VAR_14 != ((void*)0)) {
   FUNC_6(VAR_5, VAR_13);
   VAR_13 = VAR_14;
  }
 }
 *VAR_11 = VAR_13;

 return (VAR_12);
}
