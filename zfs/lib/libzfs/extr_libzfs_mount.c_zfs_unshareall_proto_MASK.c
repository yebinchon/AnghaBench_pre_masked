
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_share_proto_t ;
typedef int zfs_handle_t ;
typedef int prop_changelist_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(zfs_handle_t *VAR_1, zfs_share_proto_t *VAR_2)
{
 prop_changelist_t *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_0, 0, 0);
 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 FUNC_0(VAR_3);

 return (VAR_4);
}
