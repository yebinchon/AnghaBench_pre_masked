
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_3__ {scalar_t__ z_fuid; scalar_t__ z_fgid; } ;
typedef TYPE_1__ zfs_acl_ids_t ;
typedef scalar_t__ uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;

boolean_t
FUNC_1(zfsvfs_t *VAR_5, zfs_acl_ids_t *VAR_6, uint64_t VAR_7)
{
 return (FUNC_0(VAR_5, VAR_2, VAR_6->z_fuid) ||
     FUNC_0(VAR_5, VAR_0, VAR_6->z_fgid) ||
     (VAR_7 != VAR_3 && VAR_7 != VAR_4 &&
     FUNC_0(VAR_5, VAR_1, VAR_7)));
}
