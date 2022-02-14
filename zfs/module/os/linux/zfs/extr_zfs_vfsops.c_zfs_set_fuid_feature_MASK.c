
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_os; int z_version; int z_use_sa; int z_use_fuids; } ;
typedef TYPE_1__ zfsvfs_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(zfsvfs_t *VAR_0)
{
 VAR_0->z_use_fuids = FUNC_0(VAR_0->z_version, VAR_0->z_os);
 VAR_0->z_use_sa = FUNC_1(VAR_0->z_version, VAR_0->z_os);
}
