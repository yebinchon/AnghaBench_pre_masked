
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nbActiveWorkers; scalar_t__ currentJobID; int flushed; int produced; scalar_t__ consumed; scalar_t__ ingested; } ;
typedef TYPE_2__ ZSTD_frameProgression ;
struct TYPE_7__ {scalar_t__ nbWorkers; } ;
struct TYPE_9__ {size_t inBuffPos; size_t inToCompress; int producedCSize; scalar_t__ consumedSrcSize; int * inBuff; int mtctx; TYPE_1__ appliedParams; } ;
typedef TYPE_3__ ZSTD_CCtx ;


 TYPE_2__ FUNC_0 (int ) ;
 size_t const VAR_0 ;
 int FUNC_1 (int) ;

ZSTD_frameProgression FUNC_2(const ZSTD_CCtx* VAR_1)
{





    { ZSTD_frameProgression VAR_2;
        size_t const VAR_3 = (VAR_1->inBuff == ((void*)0)) ? 0 :
                                VAR_1->inBuffPos - VAR_1->inToCompress;
        if (VAR_3) FUNC_1(VAR_1->inBuffPos >= VAR_1->inToCompress);
        FUNC_1(VAR_3 <= VAR_0);
        VAR_2.ingested = VAR_1->consumedSrcSize + VAR_3;
        VAR_2.consumed = VAR_1->consumedSrcSize;
        VAR_2.produced = VAR_1->producedCSize;
        VAR_2.flushed = VAR_1->producedCSize;
        VAR_2.currentJobID = 0;
        VAR_2.nbActiveWorkers = 0;
        return VAR_2;
} }
