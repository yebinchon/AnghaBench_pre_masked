
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_outBuffer ;
typedef int ZSTD_inBuffer ;
struct TYPE_5__ {size_t filled; } ;
struct TYPE_6__ {size_t targetSectionSize; TYPE_1__ inBuff; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int ) ;
 int VAR_0 ;

size_t FUNC_2(ZSTDMT_CCtx* VAR_1, ZSTD_outBuffer* VAR_2, ZSTD_inBuffer* VAR_3)
{
    FUNC_0( FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0) );


    return VAR_1->targetSectionSize - VAR_1->inBuff.filled;
}
