
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
struct TYPE_4__ {scalar_t__ cb_verbose; } ;
typedef TYPE_1__ list_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int *) ;

int
FUNC_5(zpool_handle_t *VAR_2, void *VAR_3)
{
 list_cbdata_t *VAR_4 = VAR_3;

 FUNC_2(VAR_2, VAR_4);

 if (VAR_4->cb_verbose) {
  nvlist_t *VAR_5, *VAR_6;

  VAR_5 = FUNC_4(VAR_2, ((void*)0));
  FUNC_3(FUNC_0(VAR_5, VAR_1,
      &VAR_6) == 0);
  FUNC_1(VAR_2, ((void*)0), VAR_6, VAR_4, 0, VAR_0);
 }

 return (0);
}
