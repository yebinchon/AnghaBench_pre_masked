
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zc_case; int zc_present; } ;
typedef TYPE_1__ zfs_case_t ;
typedef int uu_list_walk_t ;
typedef int libzfs_handle_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_8(fmd_hdl_t *VAR_4)
{
 zfs_case_t *VAR_5;
 uu_list_walk_t *VAR_6;
 libzfs_handle_t *VAR_7 = FUNC_1(VAR_4);
 for (VAR_5 = FUNC_2(VAR_2); VAR_5 != ((void*)0);
     VAR_5 = FUNC_3(VAR_2, VAR_5))
  VAR_5->zc_present = VAR_0;






 if (FUNC_7(VAR_7, VAR_3, ((void*)0)) != 0)
  return;




 VAR_6 = FUNC_6(VAR_2, VAR_1);
 while ((VAR_5 = FUNC_5(VAR_6)) != ((void*)0)) {
  if (!VAR_5->zc_present)
   FUNC_0(VAR_4, VAR_5->zc_case);
 }
 FUNC_4(VAR_6);
}
