
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zpool_status_t ;
typedef int zpool_handle_t ;
typedef int zpool_errata_t ;
struct TYPE_2__ {int vs_aux; int vs_state; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int **,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 char* FUNC_7 (int ,int ) ;

const char *
FUNC_8(zpool_handle_t *VAR_5)
{
 zpool_errata_t VAR_6;
 zpool_status_t VAR_7;
 nvlist_t *VAR_8;
 vdev_stat_t *VAR_9;
 uint_t VAR_10;
 const char *VAR_11;

 VAR_7 = FUNC_6(VAR_5, ((void*)0), &VAR_6);

 if (FUNC_5(VAR_5) == VAR_0) {
  VAR_11 = FUNC_0("FAULTED");
 } else if (VAR_7 == VAR_4 ||
     VAR_7 == VAR_3) {
  VAR_11 = FUNC_0("SUSPENDED");
 } else {
  FUNC_3(FUNC_1(FUNC_4(VAR_5, ((void*)0)),
      VAR_2, &VAR_8) == 0);
  FUNC_3(FUNC_2(VAR_8,
      VAR_1, (uint64_t **)&VAR_9, &VAR_10)
      == 0);
  VAR_11 = FUNC_7(VAR_9->vs_state, VAR_9->vs_aux);
 }
 return (VAR_11);
}
