
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {int dictContentType; int dictSize; int * dict; } ;
typedef TYPE_2__ ZSTD_prefixDict ;
struct TYPE_25__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_3__ ZSTD_outBuffer ;
struct TYPE_26__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_4__ ZSTD_inBuffer ;
typedef scalar_t__ ZSTD_EndDirective ;
struct TYPE_27__ {scalar_t__ nbWorkers; int cParams; } ;
typedef TYPE_5__ ZSTD_CCtx_params ;
struct TYPE_23__ {scalar_t__ nbWorkers; } ;
struct TYPE_28__ {scalar_t__ streamStage; scalar_t__ pledgedSrcSizePlusOne; size_t outBuffContentSize; size_t outBuffFlushedSize; int * mtctx; scalar_t__ cParamsChanged; TYPE_5__ requestedParams; TYPE_1__ appliedParams; int * cdict; int customMem; TYPE_2__ prefixDict; } ;
typedef TYPE_6__ ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_3 (int *,TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int * FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int *,int *,int ,int ,int *,TYPE_5__,scalar_t__) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 size_t FUNC_8 (TYPE_6__*,TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (TYPE_5__*,scalar_t__,int ) ;
 size_t FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (size_t) ;
 size_t FUNC_12 (TYPE_6__*,int *,int ,int ,int *,TYPE_5__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_13 (int) ;
 int VAR_7 ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

size_t FUNC_15( ZSTD_CCtx* VAR_10,
                             ZSTD_outBuffer* VAR_11,
                             ZSTD_inBuffer* VAR_12,
                             ZSTD_EndDirective VAR_13)
{
    FUNC_0(5, "ZSTD_compressStream2, endOp=%u ", (unsigned)VAR_13);

    FUNC_2(VAR_11->pos > VAR_11->size, VAR_0);
    FUNC_2(VAR_12->pos > VAR_12->size, VAR_0);
    FUNC_13(VAR_10!=((void*)0));


    if (VAR_10->streamStage == VAR_8) {
        ZSTD_CCtx_params VAR_14 = VAR_10->requestedParams;
        ZSTD_prefixDict const VAR_15 = VAR_10->prefixDict;
        FUNC_1( FUNC_10(VAR_10) );
        FUNC_14(&VAR_10->prefixDict, 0, sizeof(VAR_10->prefixDict));
        FUNC_13(VAR_15.dict==((void*)0) || VAR_10->cdict==((void*)0));
        FUNC_0(4, "ZSTD_compressStream2 : transparent init stage");
        if (VAR_13 == VAR_4) VAR_10->pledgedSrcSizePlusOne = VAR_12->size + 1;
        VAR_14.cParams = FUNC_9(
                &VAR_10->requestedParams, VAR_10->pledgedSrcSizePlusOne-1, 0 );
        { FUNC_1( FUNC_12(VAR_10,
                            VAR_15.dict, VAR_15.dictSize, VAR_15.dictContentType,
                            VAR_10->cdict,
                            VAR_14, VAR_10->pledgedSrcSizePlusOne-1) );
            FUNC_13(VAR_10->streamStage == VAR_9);
            FUNC_13(VAR_10->appliedParams.nbWorkers == 0);
    } }
    FUNC_1( FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13) );
    FUNC_0(5, "completed ZSTD_compressStream2");
    return VAR_10->outBuffContentSize - VAR_10->outBuffFlushedSize;
}
