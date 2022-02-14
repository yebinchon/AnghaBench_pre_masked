
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
struct TYPE_3__ {int * cb_zhp; int cb_guid; } ;
typedef TYPE_1__ find_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static zpool_handle_t *
FUNC_5(libzfs_handle_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    nvlist_t **VAR_5)
{
 find_cbdata_t VAR_6;
 zpool_handle_t *VAR_7;
 nvlist_t *VAR_8, *VAR_9;




 VAR_6.cb_guid = VAR_3;
 if (FUNC_4(VAR_2, VAR_1, &VAR_6) != 1)
  return (((void*)0));

 VAR_7 = VAR_6.cb_zhp;
 VAR_8 = FUNC_3(VAR_7, ((void*)0));
 if (FUNC_1(VAR_8, VAR_0,
     &VAR_9) != 0) {
  FUNC_2(VAR_7);
  return (((void*)0));
 }

 if (VAR_4 != 0) {
  if ((*VAR_5 = FUNC_0(VAR_2, VAR_9, VAR_4)) == ((void*)0)) {
   FUNC_2(VAR_7);
   return (((void*)0));
  }
 }

 return (VAR_7);
}
