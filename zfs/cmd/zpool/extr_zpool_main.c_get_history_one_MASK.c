
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_3__ {void* first; } ;
typedef TYPE_1__ hist_cbdata_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int **,int *,void**) ;
 char* FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(zpool_handle_t *VAR_1, void *VAR_2)
{
 nvlist_t *VAR_3;
 int VAR_4;
 hist_cbdata_t *VAR_5 = (hist_cbdata_t *)VAR_2;
 uint64_t VAR_6 = 0;
 boolean_t VAR_7 = VAR_0;

 VAR_5->first = VAR_0;

 (void) FUNC_3(FUNC_0("History for '%s':\n"), FUNC_5(VAR_1));

 while (!VAR_7) {
  if ((VAR_4 = FUNC_4(VAR_1, &VAR_3, &VAR_6, &VAR_7)) != 0)
   return (VAR_4);

  FUNC_2(VAR_3, VAR_5);
  FUNC_1(VAR_3);
 }
 (void) FUNC_3("\n");

 return (VAR_4);
}
