
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_4__ {int * uap_zhp; } ;
typedef TYPE_1__ unavailpool_t ;
typedef int list_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(zpool_handle_t *VAR_2, void *VAR_3)
{
 FUNC_2(VAR_0, "zfs_unavail_pool: examining '%s' (state %d)",
     FUNC_5(VAR_2), (int)FUNC_3(VAR_2));

 if (FUNC_3(VAR_2) < VAR_1) {
  unavailpool_t *VAR_4;
  VAR_4 = FUNC_1(sizeof (unavailpool_t));
  VAR_4->uap_zhp = VAR_2;
  FUNC_0((list_t *)VAR_3, VAR_4);
 } else {
  FUNC_4(VAR_2);
 }
 return (0);
}
