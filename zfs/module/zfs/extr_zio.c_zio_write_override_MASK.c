
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zp_copies; scalar_t__ zp_nopwrite; int zp_dedup; } ;
struct TYPE_5__ {scalar_t__ io_type; scalar_t__ io_child_type; scalar_t__ io_stage; scalar_t__ io_txg; int * io_bp_override; TYPE_1__ io_prop; int io_spa; } ;
typedef TYPE_2__ zio_t ;
typedef scalar_t__ boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(zio_t *VAR_4, blkptr_t *VAR_5, int VAR_6, boolean_t VAR_7)
{
 FUNC_0(VAR_4->io_type == VAR_3);
 FUNC_0(VAR_4->io_child_type == VAR_1);
 FUNC_0(VAR_4->io_stage == VAR_2);
 FUNC_0(VAR_4->io_txg == FUNC_1(VAR_4->io_spa));






 VAR_4->io_prop.zp_dedup = VAR_7 ? VAR_0 : VAR_4->io_prop.zp_dedup;
 VAR_4->io_prop.zp_nopwrite = VAR_7;
 VAR_4->io_prop.zp_copies = VAR_6;
 VAR_4->io_bp_override = VAR_5;
}
