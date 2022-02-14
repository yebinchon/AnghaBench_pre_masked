
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_9__ {int dl_name; } ;
typedef TYPE_2__ zfs_dirlock_t ;
typedef int matchtype_t ;
typedef int dmu_tx_t ;
struct TYPE_10__ {scalar_t__ z_case; int z_os; scalar_t__ z_norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_dirlock_t *VAR_6, znode_t *VAR_7, znode_t *VAR_8, dmu_tx_t *VAR_9,
    int VAR_10)
{
 int VAR_11;

 if (FUNC_0(VAR_7)->z_norm) {
  matchtype_t VAR_12 = VAR_1;

  if ((FUNC_0(VAR_7)->z_case == VAR_4 &&
      (VAR_10 & VAR_2)) ||
      (FUNC_0(VAR_7)->z_case == VAR_5 &&
      !(VAR_10 & VAR_3))) {
   VAR_12 |= VAR_0;
  }

  VAR_11 = FUNC_2(FUNC_0(VAR_7)->z_os, VAR_8->z_id,
      VAR_6->dl_name, VAR_12, VAR_9);
 } else {
  VAR_11 = FUNC_1(FUNC_0(VAR_7)->z_os, VAR_8->z_id, VAR_6->dl_name,
      VAR_9);
 }

 return (VAR_11);
}
