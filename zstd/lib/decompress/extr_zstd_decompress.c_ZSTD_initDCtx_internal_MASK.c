
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bmi2; scalar_t__ noForwardProgress; scalar_t__ previousLegacyVersion; int * legacyContext; int streamStage; scalar_t__ outBuffSize; scalar_t__ inBuffSize; int * inBuff; int dictUses; scalar_t__ ddictIsCold; int * dictEnd; int * ddictLocal; int * ddict; int maxWindowSize; scalar_t__ staticSize; int format; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(ZSTD_DCtx* VAR_4)
{
    VAR_4->format = VAR_2;
    VAR_4->staticSize = 0;
    VAR_4->maxWindowSize = VAR_0;
    VAR_4->ddict = ((void*)0);
    VAR_4->ddictLocal = ((void*)0);
    VAR_4->dictEnd = ((void*)0);
    VAR_4->ddictIsCold = 0;
    VAR_4->dictUses = VAR_1;
    VAR_4->inBuff = ((void*)0);
    VAR_4->inBuffSize = 0;
    VAR_4->outBuffSize = 0;
    VAR_4->streamStage = VAR_3;
    VAR_4->legacyContext = ((void*)0);
    VAR_4->previousLegacyVersion = 0;
    VAR_4->noForwardProgress = 0;
    VAR_4->bmi2 = FUNC_1(FUNC_0());
}
