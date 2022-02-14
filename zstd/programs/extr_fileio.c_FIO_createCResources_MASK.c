
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ress ;
struct TYPE_8__ {char const* dictFileName; int * cctx; void* dstBuffer; void* srcBuffer; int dstBufferSize; int srcBufferSize; } ;
typedef TYPE_1__ cRess_t ;
struct TYPE_9__ {int strategy; scalar_t__ targetLength; scalar_t__ minMatch; scalar_t__ searchLog; scalar_t__ hashLog; scalar_t__ chainLog; scalar_t__ windowLog; } ;
typedef TYPE_2__ ZSTD_compressionParameters ;
struct TYPE_10__ {int ldmFlag; int dictIDFlag; int checksumFlag; int ldmHashLog; int ldmMinMatch; int ldmBucketSizeLog; int ldmHashRateLog; int nbWorkers; int blockSize; int overlapLog; int rsyncable; scalar_t__ literalCompressionMode; scalar_t__ srcSizeHint; scalar_t__ targetCBlockSize; scalar_t__ adaptiveMode; } ;
typedef TYPE_3__ FIO_prefs_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (void**,char const*) ;
 int FUNC_4 (int *,void*,size_t const) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int * FUNC_8 () ;
 int VAR_26 ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static cRess_t FUNC_13(FIO_prefs_t* const VAR_27,
                                    const char* VAR_28, int VAR_29,
                                    ZSTD_compressionParameters VAR_30) {
    cRess_t VAR_31;
    FUNC_11(&VAR_31, 0, sizeof(VAR_31));

    FUNC_1(6, "FIO_createCResources \n");
    VAR_31.cctx = FUNC_8();
    if (VAR_31.cctx == ((void*)0))
        FUNC_2(30, "allocation error (%s): can't create ZSTD_CCtx",
                    FUNC_12(VAR_26));
    VAR_31.srcBufferSize = FUNC_6();
    VAR_31.srcBuffer = FUNC_10(VAR_31.srcBufferSize);
    VAR_31.dstBufferSize = FUNC_7();
    VAR_31.dstBuffer = FUNC_10(VAR_31.dstBufferSize);
    if (!VAR_31.srcBuffer || !VAR_31.dstBuffer)
        FUNC_2(31, "allocation error : not enough memory");


    { void* VAR_32;
        size_t const VAR_33 = FUNC_3(&VAR_32, VAR_28);
        if (VAR_28 && (VAR_32==((void*)0)))
            FUNC_2(32, "allocation error : can't create dictBuffer");
        VAR_31.dictFileName = VAR_28;

        if (VAR_27->adaptiveMode && !VAR_27->ldmFlag && !VAR_30.windowLog)
            VAR_30.windowLog = VAR_0;

        FUNC_0( FUNC_5(VAR_31.cctx, VAR_6, 1) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_7, VAR_27->dictIDFlag) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_4, VAR_27->checksumFlag) );

        FUNC_0( FUNC_5(VAR_31.cctx, VAR_5, VAR_29) );

        FUNC_0( FUNC_5(VAR_31.cctx, VAR_23, (int)VAR_27->targetCBlockSize) );

        FUNC_0( FUNC_5(VAR_31.cctx, VAR_21, (int)VAR_27->srcSizeHint) );

        FUNC_0( FUNC_5(VAR_31.cctx, VAR_8, VAR_27->ldmFlag) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_12, VAR_27->ldmHashLog) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_14, VAR_27->ldmMinMatch) );
        if (VAR_27->ldmBucketSizeLog != VAR_1) {
            FUNC_0( FUNC_5(VAR_31.cctx, VAR_11, VAR_27->ldmBucketSizeLog) );
        }
        if (VAR_27->ldmHashRateLog != VAR_1) {
            FUNC_0( FUNC_5(VAR_31.cctx, VAR_13, VAR_27->ldmHashRateLog) );
        }

        FUNC_0( FUNC_5(VAR_31.cctx, VAR_25, (int)VAR_30.windowLog) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_3, (int)VAR_30.chainLog) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_9, (int)VAR_30.hashLog) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_20, (int)VAR_30.searchLog) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_16, (int)VAR_30.minMatch) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_24, (int)VAR_30.targetLength) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_22, VAR_30.strategy) );
        FUNC_0( FUNC_5(VAR_31.cctx, VAR_15, (int)VAR_27->literalCompressionMode) );
        FUNC_0( FUNC_4(VAR_31.cctx, VAR_32, VAR_33) );
        FUNC_9(VAR_32);
    }

    return VAR_31;
}
