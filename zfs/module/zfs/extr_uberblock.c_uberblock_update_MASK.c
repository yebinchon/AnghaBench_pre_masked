
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_spa; int vdev_guid_sum; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ blk_birth; } ;
struct TYPE_8__ {scalar_t__ ub_txg; int ub_mmp_config; TYPE_1__ ub_rootbp; scalar_t__ ub_checkpoint_txg; scalar_t__ ub_mmp_delay; int ub_mmp_magic; int ub_software_version; int ub_timestamp; int ub_guid_sum; int ub_magic; } ;
typedef TYPE_3__ uberblock_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

boolean_t
FUNC_6(uberblock_t *VAR_5, vdev_t *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 FUNC_0(VAR_5->ub_txg < VAR_7);





 VAR_5->ub_magic = VAR_2;
 VAR_5->ub_txg = VAR_7;
 VAR_5->ub_guid_sum = VAR_6->vdev_guid_sum;
 VAR_5->ub_timestamp = FUNC_4();
 VAR_5->ub_software_version = VAR_1;
 VAR_5->ub_mmp_magic = VAR_0;
 if (FUNC_5(VAR_6->vdev_spa)) {
  VAR_5->ub_mmp_delay = VAR_8;
  VAR_5->ub_mmp_config = FUNC_3(0) |
      FUNC_2(VAR_4) |
      FUNC_1(VAR_3);
 } else {
  VAR_5->ub_mmp_delay = 0;
  VAR_5->ub_mmp_config = 0;
 }
 VAR_5->ub_checkpoint_txg = 0;

 return (VAR_5->ub_rootbp.blk_birth == VAR_7);
}
