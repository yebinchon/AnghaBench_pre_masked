
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
struct TYPE_24__ {int ddp_phys_birth; } ;
typedef TYPE_1__ ddt_phys_t ;
struct TYPE_25__ {int ddk_cksum; } ;
typedef TYPE_2__ ddt_key_t ;
struct TYPE_26__ {int blk_cksum; } ;
typedef TYPE_3__ blkptr_t ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_2__ const*) ;
 int FUNC_12 (TYPE_2__ const*) ;
 int FUNC_13 (TYPE_2__ const*) ;
 int FUNC_14 (TYPE_2__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_15 (TYPE_1__ const*,TYPE_3__*,int ) ;

void
FUNC_16(enum zio_checksum VAR_2,
    const ddt_key_t *VAR_3, const ddt_phys_t *VAR_4, blkptr_t *VAR_5)
{
 FUNC_10(VAR_5);

 if (VAR_4 != ((void*)0))
  FUNC_15(VAR_4, VAR_5, VAR_4->ddp_phys_birth);

 VAR_5->blk_cksum = VAR_3->ddk_cksum;

 FUNC_7(VAR_5, FUNC_13(VAR_3));
 FUNC_8(VAR_5, FUNC_14(VAR_3));
 FUNC_2(VAR_5, FUNC_11(VAR_3));
 FUNC_3(VAR_5, FUNC_12(VAR_3));
 FUNC_5(VAR_5, 1);
 FUNC_1(VAR_5, VAR_2);
 FUNC_9(VAR_5, VAR_0);
 FUNC_6(VAR_5, 0);
 FUNC_4(VAR_5, 1);
 FUNC_0(VAR_5, VAR_1);
}
