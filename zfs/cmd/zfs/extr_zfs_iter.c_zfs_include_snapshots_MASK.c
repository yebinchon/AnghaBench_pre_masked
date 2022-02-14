
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int zfs_handle_t ;
struct TYPE_3__ {int cb_flags; int cb_types; } ;
typedef TYPE_1__ callback_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static boolean_t
FUNC_2(zfs_handle_t *VAR_3, callback_data_t *VAR_4)
{
 zpool_handle_t *VAR_5;

 if ((VAR_4->cb_flags & VAR_0) == 0)
  return (VAR_4->cb_types & VAR_1);

 VAR_5 = FUNC_0(VAR_3);
 return (FUNC_1(VAR_5, VAR_2, ((void*)0)));
}
