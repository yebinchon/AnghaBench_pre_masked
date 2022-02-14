
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {int dictLimit; } ;
struct TYPE_18__ {TYPE_8__ window; int nextToUpdate; } ;
typedef TYPE_5__ ZSTD_matchState_t ;
struct TYPE_17__ {scalar_t__ contentSizeFlag; } ;
struct TYPE_15__ {scalar_t__ enableLdm; } ;
struct TYPE_20__ {TYPE_4__ fParams; TYPE_2__ ldmParams; } ;
struct TYPE_16__ {TYPE_8__ window; } ;
struct TYPE_14__ {TYPE_5__ matchState; } ;
struct TYPE_19__ {scalar_t__ stage; scalar_t__ pledgedSrcSizePlusOne; scalar_t__ consumedSrcSize; TYPE_7__ appliedParams; int producedCSize; scalar_t__ blockSize; int workspace; TYPE_3__ ldmState; int dictID; TYPE_1__ blockState; } ;
typedef TYPE_6__ ZSTD_CCtx ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,unsigned int,...) ;
 int FUNC_1 (size_t const) ;
 int FUNC_2 (int,int ,char*,...) ;
 unsigned long long VAR_0 ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (TYPE_6__*,void*,size_t,void const*,size_t,int ) ;
 size_t FUNC_5 (TYPE_6__*,void*,size_t,void const*,size_t,scalar_t__) ;
 int FUNC_6 (TYPE_5__* const,int *,TYPE_7__*,void const*,int const*) ;
 int FUNC_7 (TYPE_8__*,void const*,size_t) ;
 size_t FUNC_8 (void*,size_t,TYPE_7__*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_10 (ZSTD_CCtx* VAR_6,
                              void* VAR_7, size_t VAR_8,
                        const void* VAR_9, size_t VAR_10,
                               U32 VAR_11, U32 VAR_12)
{
    ZSTD_matchState_t* const VAR_13 = &VAR_6->blockState.matchState;
    size_t VAR_14 = 0;

    FUNC_0(5, "ZSTD_compressContinue_internal, stage: %u, srcSize: %u",
                VAR_6->stage, (unsigned)VAR_10);
    FUNC_2(VAR_6->stage==VAR_1, VAR_5,
                    "missing init (ZSTD_compressBegin)");

    if (VAR_11 && (VAR_6->stage==VAR_2)) {
        VAR_14 = FUNC_8(VAR_7, VAR_8, &VAR_6->appliedParams,
                                       VAR_6->pledgedSrcSizePlusOne-1, VAR_6->dictID);
        FUNC_1(VAR_14);
        FUNC_9(VAR_14 <= VAR_8);
        VAR_8 -= VAR_14;
        VAR_7 = (char*)VAR_7 + VAR_14;
        VAR_6->stage = VAR_3;
    }

    if (!VAR_10) return VAR_14;

    if (!FUNC_7(&VAR_13->window, VAR_9, VAR_10)) {
        VAR_13->nextToUpdate = VAR_13->window.dictLimit;
    }
    if (VAR_6->appliedParams.ldmParams.enableLdm) {
        FUNC_7(&VAR_6->ldmState.window, VAR_9, VAR_10);
    }

    if (!VAR_11) {

        FUNC_6(
            VAR_13, &VAR_6->workspace, &VAR_6->appliedParams,
            VAR_9, (BYTE const*)VAR_9 + VAR_10);
    }

    FUNC_0(5, "ZSTD_compressContinue_internal (blockSize=%u)", (unsigned)VAR_6->blockSize);
    { size_t const VAR_15 = VAR_11 ?
                             FUNC_5 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12) :
                             FUNC_4 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 0 );
        FUNC_1(VAR_15);
        VAR_6->consumedSrcSize += VAR_10;
        VAR_6->producedCSize += (VAR_15 + VAR_14);
        FUNC_9(!(VAR_6->appliedParams.fParams.contentSizeFlag && VAR_6->pledgedSrcSizePlusOne == 0));
        if (VAR_6->pledgedSrcSizePlusOne != 0) {
            FUNC_3(VAR_0 == (unsigned long long)-1);
            FUNC_2(
                VAR_6->consumedSrcSize+1 > VAR_6->pledgedSrcSizePlusOne,
                VAR_4,
                "error : pledgedSrcSize = %u, while realSrcSize >= %u",
                (unsigned)VAR_6->pledgedSrcSizePlusOne-1,
                (unsigned)VAR_6->consumedSrcSize);
        }
        return VAR_15 + VAR_14;
    }
}
