
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_cParameter ;
struct TYPE_8__ {int enableLdm; int hashLog; int minMatchLength; int bucketSizeLog; int hashRateLog; } ;
struct TYPE_7__ {int contentSizeFlag; int checksumFlag; int noDictIDFlag; } ;
struct TYPE_6__ {int searchLog; int minMatch; int targetLength; int strategy; scalar_t__ chainLog; scalar_t__ hashLog; scalar_t__ windowLog; } ;
struct TYPE_9__ {int format; int compressionLevel; int forceWindow; int attachDictPref; int literalCompressionMode; int nbWorkers; int overlapLog; int rsyncable; scalar_t__ srcSizeHint; scalar_t__ targetCBlockSize; TYPE_3__ ldmParams; scalar_t__ jobSize; TYPE_2__ fParams; TYPE_1__ cParams; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

size_t FUNC_2(
        ZSTD_CCtx_params* VAR_2, ZSTD_cParameter VAR_3, int* VAR_4)
{
    switch(VAR_3)
    {
    case 145 :
        *VAR_4 = VAR_2->format;
        break;
    case 151 :
        *VAR_4 = VAR_2->compressionLevel;
        break;
    case 128 :
        *VAR_4 = (int)VAR_2->cParams.windowLog;
        break;
    case 144 :
        *VAR_4 = (int)VAR_2->cParams.hashLog;
        break;
    case 153 :
        *VAR_4 = (int)VAR_2->cParams.chainLog;
        break;
    case 133 :
        *VAR_4 = VAR_2->cParams.searchLog;
        break;
    case 137 :
        *VAR_4 = VAR_2->cParams.minMatch;
        break;
    case 129 :
        *VAR_4 = VAR_2->cParams.targetLength;
        break;
    case 131 :
        *VAR_4 = (unsigned)VAR_2->cParams.strategy;
        break;
    case 150 :
        *VAR_4 = VAR_2->fParams.contentSizeFlag;
        break;
    case 152 :
        *VAR_4 = VAR_2->fParams.checksumFlag;
        break;
    case 149 :
        *VAR_4 = !VAR_2->fParams.noDictIDFlag;
        break;
    case 146 :
        *VAR_4 = VAR_2->forceWindow;
        break;
    case 147 :
        *VAR_4 = VAR_2->attachDictPref;
        break;
    case 138 :
        *VAR_4 = VAR_2->literalCompressionMode;
        break;
    case 136 :

        FUNC_1(VAR_2->nbWorkers == 0);

        *VAR_4 = VAR_2->nbWorkers;
        break;
    case 143 :

        FUNC_0(VAR_1, "not compiled with multithreading");





    case 135 :

        FUNC_0(VAR_1, "not compiled with multithreading");




    case 134 :

        FUNC_0(VAR_1, "not compiled with multithreading");




    case 148 :
        *VAR_4 = VAR_2->ldmParams.enableLdm;
        break;
    case 141 :
        *VAR_4 = VAR_2->ldmParams.hashLog;
        break;
    case 139 :
        *VAR_4 = VAR_2->ldmParams.minMatchLength;
        break;
    case 142 :
        *VAR_4 = VAR_2->ldmParams.bucketSizeLog;
        break;
    case 140 :
        *VAR_4 = VAR_2->ldmParams.hashRateLog;
        break;
    case 130 :
        *VAR_4 = (int)VAR_2->targetCBlockSize;
        break;
    case 132 :
        *VAR_4 = (int)VAR_2->srcSizeHint;
        break;
    default: FUNC_0(VAR_1, "unknown parameter");
    }
    return 0;
}
