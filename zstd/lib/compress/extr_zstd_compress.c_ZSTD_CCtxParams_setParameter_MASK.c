
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_strategy ;
typedef int ZSTD_literalCompressionMode_e ;
typedef int ZSTD_format_e ;
typedef int ZSTD_dictAttachPref_e ;
typedef int ZSTD_cParameter ;
struct TYPE_8__ {int enableLdm; int hashLog; int minMatchLength; int bucketSizeLog; int hashRateLog; } ;
struct TYPE_7__ {int contentSizeFlag; int checksumFlag; int noDictIDFlag; } ;
struct TYPE_6__ {size_t windowLog; size_t hashLog; size_t chainLog; int minMatch; int targetLength; int strategy; void* searchLog; } ;
struct TYPE_9__ {int compressionLevel; int forceWindow; int attachDictPref; int literalCompressionMode; int nbWorkers; int jobSize; int overlapLog; int rsyncable; int targetCBlockSize; int srcSizeHint; TYPE_3__ ldmParams; TYPE_2__ fParams; TYPE_1__ cParams; int format; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;
typedef void* U32 ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int const,int*) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;

size_t FUNC_7(ZSTD_CCtx_params* VAR_5,
                                    ZSTD_cParameter VAR_6, int VAR_7)
{
    FUNC_1(4, "ZSTD_CCtxParams_setParameter (%i, %i)", (int)VAR_6, VAR_7);
    switch(VAR_6)
    {
    case 145 :
        FUNC_0(145, VAR_7);
        VAR_5->format = (ZSTD_format_e)VAR_7;
        return (size_t)VAR_5->format;

    case 151 : {
        FUNC_2(FUNC_5(VAR_6, &VAR_7));
        if (VAR_7) {
            VAR_5->compressionLevel = VAR_7;
        }
        if (VAR_5->compressionLevel >= 0) return (size_t)VAR_5->compressionLevel;
        return 0;
    }

    case 128 :
        if (VAR_7!=0)
            FUNC_0(128, VAR_7);
        VAR_5->cParams.windowLog = (U32)VAR_7;
        return VAR_5->cParams.windowLog;

    case 144 :
        if (VAR_7!=0)
            FUNC_0(144, VAR_7);
        VAR_5->cParams.hashLog = (U32)VAR_7;
        return VAR_5->cParams.hashLog;

    case 153 :
        if (VAR_7!=0)
            FUNC_0(153, VAR_7);
        VAR_5->cParams.chainLog = (U32)VAR_7;
        return VAR_5->cParams.chainLog;

    case 133 :
        if (VAR_7!=0)
            FUNC_0(133, VAR_7);
        VAR_5->cParams.searchLog = (U32)VAR_7;
        return (size_t)VAR_7;

    case 137 :
        if (VAR_7!=0)
            FUNC_0(137, VAR_7);
        VAR_5->cParams.minMatch = VAR_7;
        return VAR_5->cParams.minMatch;

    case 129 :
        FUNC_0(129, VAR_7);
        VAR_5->cParams.targetLength = VAR_7;
        return VAR_5->cParams.targetLength;

    case 131 :
        if (VAR_7!=0)
            FUNC_0(131, VAR_7);
        VAR_5->cParams.strategy = (ZSTD_strategy)VAR_7;
        return (size_t)VAR_5->cParams.strategy;

    case 150 :

        FUNC_1(4, "set content size flag = %u", (VAR_7!=0));
        VAR_5->fParams.contentSizeFlag = VAR_7 != 0;
        return VAR_5->fParams.contentSizeFlag;

    case 152 :

        VAR_5->fParams.checksumFlag = VAR_7 != 0;
        return VAR_5->fParams.checksumFlag;

    case 149 :
        FUNC_1(4, "set dictIDFlag = %u", (VAR_7!=0));
        VAR_5->fParams.noDictIDFlag = !VAR_7;
        return !VAR_5->fParams.noDictIDFlag;

    case 146 :
        VAR_5->forceWindow = (VAR_7 != 0);
        return VAR_5->forceWindow;

    case 147 : {
        const ZSTD_dictAttachPref_e VAR_8 = (ZSTD_dictAttachPref_e)VAR_7;
        FUNC_0(147, VAR_8);
        VAR_5->attachDictPref = VAR_8;
        return VAR_5->attachDictPref;
    }

    case 138 : {
        const ZSTD_literalCompressionMode_e VAR_9 = (ZSTD_literalCompressionMode_e)VAR_7;
        FUNC_0(138, VAR_9);
        VAR_5->literalCompressionMode = VAR_9;
        return VAR_5->literalCompressionMode;
    }

    case 136 :

        FUNC_4(VAR_7!=0, VAR_4, "not compiled with multithreading");
        return 0;






    case 143 :

        FUNC_4(VAR_7!=0, VAR_4, "not compiled with multithreading");
        return 0;
    case 135 :

        FUNC_4(VAR_7!=0, VAR_4, "not compiled with multithreading");
        return 0;






    case 134 :

        FUNC_4(VAR_7!=0, VAR_4, "not compiled with multithreading");
        return 0;






    case 148 :
        VAR_5->ldmParams.enableLdm = (VAR_7!=0);
        return VAR_5->ldmParams.enableLdm;

    case 141 :
        if (VAR_7!=0)
            FUNC_0(141, VAR_7);
        VAR_5->ldmParams.hashLog = VAR_7;
        return VAR_5->ldmParams.hashLog;

    case 139 :
        if (VAR_7!=0)
            FUNC_0(139, VAR_7);
        VAR_5->ldmParams.minMatchLength = VAR_7;
        return VAR_5->ldmParams.minMatchLength;

    case 142 :
        if (VAR_7!=0)
            FUNC_0(142, VAR_7);
        VAR_5->ldmParams.bucketSizeLog = VAR_7;
        return VAR_5->ldmParams.bucketSizeLog;

    case 140 :
        FUNC_4(VAR_7 > VAR_2 - VAR_1,
                        VAR_3);
        VAR_5->ldmParams.hashRateLog = VAR_7;
        return VAR_5->ldmParams.hashRateLog;

    case 130 :
        if (VAR_7!=0)
            FUNC_0(130, VAR_7);
        VAR_5->targetCBlockSize = VAR_7;
        return VAR_5->targetCBlockSize;

    case 132 :
        if (VAR_7!=0)
            FUNC_0(132, VAR_7);
        VAR_5->srcSizeHint = VAR_7;
        return VAR_5->srcSizeHint;

    default: FUNC_3(VAR_4, "unknown parameter");
    }
}
