
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ ddk_prop; int ddk_cksum; } ;
typedef TYPE_1__ ddt_key_t ;
struct TYPE_15__ {int blk_cksum; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void
FUNC_10(ddt_key_t *VAR_0, const blkptr_t *VAR_1)
{
 VAR_0->ddk_cksum = VAR_1->blk_cksum;
 VAR_0->ddk_prop = 0;

 FUNC_0(FUNC_4(VAR_1) || !FUNC_5(VAR_1));

 FUNC_8(VAR_0, FUNC_2(VAR_1));
 FUNC_9(VAR_0, FUNC_3(VAR_1));
 FUNC_6(VAR_0, FUNC_1(VAR_1));
 FUNC_7(VAR_0, FUNC_5(VAR_1));
}
