
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dictIDFlag; int checksumFlag; int nbWorkers; int minAdaptLevel; int maxAdaptLevel; scalar_t__ excludeCompressedFiles; int literalCompressionMode; scalar_t__ testMode; scalar_t__ srcSizeHint; scalar_t__ targetCBlockSize; scalar_t__ streamSrcSize; void* ldmHashRateLog; void* ldmBucketSizeLog; scalar_t__ ldmMinMatch; scalar_t__ ldmHashLog; scalar_t__ ldmFlag; scalar_t__ rsyncable; scalar_t__ adaptiveMode; int overlapLog; scalar_t__ blockSize; scalar_t__ memLimit; scalar_t__ removeSrcFile; int sparseFileSupport; scalar_t__ overwrite; int compressionType; } ;
typedef TYPE_1__ FIO_prefs_t ;


 int FUNC_0 (int,char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

FIO_prefs_t* FUNC_2(void)
{
    FIO_prefs_t* const VAR_5 = (FIO_prefs_t*)FUNC_1(sizeof(FIO_prefs_t));
    if (!VAR_5) FUNC_0(21, "Allocation error : not enough memory");

    VAR_5->compressionType = VAR_2;
    VAR_5->overwrite = 0;
    VAR_5->sparseFileSupport = VAR_3;
    VAR_5->dictIDFlag = 1;
    VAR_5->checksumFlag = 1;
    VAR_5->removeSrcFile = 0;
    VAR_5->memLimit = 0;
    VAR_5->nbWorkers = 1;
    VAR_5->blockSize = 0;
    VAR_5->overlapLog = VAR_1;
    VAR_5->adaptiveMode = 0;
    VAR_5->rsyncable = 0;
    VAR_5->minAdaptLevel = -50;
    VAR_5->maxAdaptLevel = 22;
    VAR_5->ldmFlag = 0;
    VAR_5->ldmHashLog = 0;
    VAR_5->ldmMinMatch = 0;
    VAR_5->ldmBucketSizeLog = VAR_0;
    VAR_5->ldmHashRateLog = VAR_0;
    VAR_5->streamSrcSize = 0;
    VAR_5->targetCBlockSize = 0;
    VAR_5->srcSizeHint = 0;
    VAR_5->testMode = 0;
    VAR_5->literalCompressionMode = VAR_4;
    VAR_5->excludeCompressedFiles = 0;
    return VAR_5;
}
