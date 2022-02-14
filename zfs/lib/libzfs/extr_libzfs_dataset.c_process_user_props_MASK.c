
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static nvlist_t *
FUNC_9(zfs_handle_t *VAR_1, nvlist_t *VAR_2)
{
 libzfs_handle_t *VAR_3 = VAR_1->zfs_hdl;
 nvpair_t *VAR_4;
 nvlist_t *VAR_5;
 nvlist_t *VAR_6;

 if (FUNC_2(&VAR_6, VAR_0, 0) != 0) {
  (void) FUNC_0(VAR_3);
  return (((void*)0));
 }

 VAR_4 = ((void*)0);
 while ((VAR_4 = FUNC_4(VAR_2, VAR_4)) != ((void*)0)) {
  if (!FUNC_8(FUNC_5(VAR_4)))
   continue;

  FUNC_7(FUNC_6(VAR_4, &VAR_5) == 0);
  if (FUNC_1(VAR_6, FUNC_5(VAR_4), VAR_5) != 0) {
   FUNC_3(VAR_6);
   (void) FUNC_0(VAR_3);
   return (((void*)0));
  }
 }

 return (VAR_6);
}
