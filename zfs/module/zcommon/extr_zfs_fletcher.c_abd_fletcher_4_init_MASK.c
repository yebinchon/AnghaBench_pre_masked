
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ acd_byteorder; int acd_ctx; void* acd_private; } ;
typedef TYPE_1__ zio_abd_checksum_data_t ;
struct TYPE_6__ {int (* init_byteswap ) (int ) ;int (* init_native ) (int ) ;} ;
typedef TYPE_2__ fletcher_4_ops_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(zio_abd_checksum_data_t *VAR_1)
{
 const fletcher_4_ops_t *VAR_2 = FUNC_0();
 VAR_1->acd_private = (void *) VAR_2;

 if (VAR_1->acd_byteorder == VAR_0)
  VAR_2->init_native(VAR_1->acd_ctx);
 else
  VAR_2->init_byteswap(VAR_1->acd_ctx);
}
