
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int * cb_zhp; int cb_guid; } ;
typedef TYPE_1__ spare_cbdata_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_1, void *VAR_2)
{
 spare_cbdata_t *VAR_3 = VAR_2;
 nvlist_t *VAR_4, *VAR_5;

 VAR_4 = FUNC_4(VAR_1, ((void*)0));
 FUNC_2(FUNC_1(VAR_4, VAR_0,
     &VAR_5) == 0);

 if (FUNC_0(VAR_5, VAR_3->cb_guid)) {
  VAR_3->cb_zhp = VAR_1;
  return (1);
 }

 FUNC_3(VAR_1);
 return (0);
}
