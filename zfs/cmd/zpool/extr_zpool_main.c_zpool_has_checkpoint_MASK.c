
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint_t ;
typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ pcs_state; } ;
typedef TYPE_1__ pool_checkpoint_stat_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int **,int *) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static boolean_t
FUNC_4(zpool_handle_t *VAR_7)
{
 nvlist_t *VAR_8, *VAR_9;

 VAR_8 = FUNC_3(VAR_7, ((void*)0));

 if (VAR_8 != ((void*)0)) {
  pool_checkpoint_stat_t *VAR_10 = ((void*)0);
  uint_t VAR_11;

  VAR_9 = FUNC_1(VAR_8, VAR_6);
  (void) FUNC_2(VAR_9,
      VAR_5, (uint64_t **)&VAR_10, &VAR_11);

  if (VAR_10 == ((void*)0) || VAR_10->pcs_state == VAR_4)
   return (VAR_0);

  FUNC_0(VAR_10->pcs_state == VAR_3 ||
      VAR_10->pcs_state == VAR_2);
  return (VAR_1);
 }

 return (VAR_0);
}
