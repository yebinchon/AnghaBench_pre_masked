
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ poolguid; int * poolname; } ;
typedef TYPE_1__ target_exists_args_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,char**) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(zpool_handle_t *VAR_2, void *VAR_3)
{
 target_exists_args_t *VAR_4 = VAR_3;
 nvlist_t *VAR_5 = FUNC_5(VAR_2, ((void*)0));
 int VAR_6 = 0;

 if (VAR_5 == ((void*)0))
  return (0);

 if (VAR_4->poolname != ((void*)0)) {
  char *VAR_7;

  FUNC_3(FUNC_0(VAR_5, VAR_1,
      &VAR_7) == 0);
  if (FUNC_2(VAR_7, VAR_4->poolname) == 0)
   VAR_6 = 1;
 } else {
  uint64_t VAR_8;

  FUNC_3(FUNC_1(VAR_5, VAR_0,
      &VAR_8) == 0);
  if (VAR_8 == VAR_4->poolguid)
   VAR_6 = 1;
 }
 FUNC_4(VAR_2);

 return (VAR_6);
}
