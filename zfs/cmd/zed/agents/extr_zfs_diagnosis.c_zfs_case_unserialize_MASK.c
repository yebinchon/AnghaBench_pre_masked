
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ zc_version; scalar_t__ zc_has_remove_timer; } ;
struct TYPE_10__ {int zc_node; int zc_remove_timer; TYPE_9__ zc_data; int * zc_case; } ;
typedef TYPE_1__ zfs_case_t ;
typedef int fmd_hdl_t ;
typedef int fmd_case_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,TYPE_9__*,int) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_5 (int ,int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static zfs_case_t *
FUNC_7(fmd_hdl_t *VAR_6, fmd_case_t *VAR_7)
{
 zfs_case_t *VAR_8;

 VAR_8 = FUNC_3(VAR_6, sizeof (zfs_case_t), VAR_2);
 VAR_8->zc_case = VAR_7;

 FUNC_0(VAR_6, VAR_7, VAR_0, &VAR_8->zc_data,
     sizeof (VAR_8->zc_data));

 if (VAR_8->zc_data.zc_version > VAR_1) {
  FUNC_2(VAR_6, VAR_8, sizeof (zfs_case_t));
  return (((void*)0));
 }







 if (VAR_8->zc_data.zc_has_remove_timer)
  VAR_8->zc_remove_timer = FUNC_4(VAR_6, VAR_8,
      ((void*)0), VAR_5);

 FUNC_6(VAR_8, &VAR_8->zc_node, VAR_3);
 (void) FUNC_5(VAR_4, ((void*)0), VAR_8);

 FUNC_1(VAR_6, VAR_7, VAR_8);

 return (VAR_8);
}
