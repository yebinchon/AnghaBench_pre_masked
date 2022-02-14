
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ zc_ena; } ;
struct TYPE_8__ {int zc_node; TYPE_1__ zc_data; } ;
typedef TYPE_2__ zfs_case_t ;
typedef int uu_list_walk_t ;
typedef int libzfs_handle_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long long) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_11(fmd_hdl_t *VAR_3)
{
 zfs_case_t *VAR_4;
 uu_list_walk_t *VAR_5;
 libzfs_handle_t *VAR_6;




 VAR_5 = FUNC_10(VAR_2, VAR_0);
 while ((VAR_4 = FUNC_9(VAR_5)) != ((void*)0)) {
  FUNC_0(VAR_3, "removing case ena %llu",
      (long long unsigned)VAR_4->zc_data.zc_ena);
  FUNC_7(VAR_2, VAR_4);
  FUNC_5(VAR_4, &VAR_4->zc_node, VAR_1);
  FUNC_1(VAR_3, VAR_4, sizeof (zfs_case_t));
 }
 FUNC_8(VAR_5);

 FUNC_4(VAR_2);
 FUNC_6(VAR_1);

 VAR_6 = FUNC_2(VAR_3);
 FUNC_3(VAR_6);
}
