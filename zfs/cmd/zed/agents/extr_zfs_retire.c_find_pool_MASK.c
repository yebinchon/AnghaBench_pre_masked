
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {scalar_t__ cb_guid; int * cb_zhp; } ;
typedef TYPE_1__ find_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_2(zpool_handle_t *VAR_1, void *VAR_2)
{
 find_cbdata_t *VAR_3 = VAR_2;

 if (VAR_3->cb_guid ==
     FUNC_1(VAR_1, VAR_0, ((void*)0))) {
  VAR_3->cb_zhp = VAR_1;
  return (1);
 }

 FUNC_0(VAR_1);
 return (0);
}
