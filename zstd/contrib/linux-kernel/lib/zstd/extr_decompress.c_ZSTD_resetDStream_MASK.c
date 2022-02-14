
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hostageByte; scalar_t__ legacyVersion; scalar_t__ outEnd; scalar_t__ outStart; scalar_t__ inPos; scalar_t__ lhSize; int stage; } ;
typedef TYPE_1__ ZSTD_DStream ;


 size_t VAR_0 ;
 int VAR_1 ;

size_t FUNC_0(ZSTD_DStream *VAR_2)
{
 VAR_2->stage = VAR_1;
 VAR_2->lhSize = VAR_2->inPos = VAR_2->outStart = VAR_2->outEnd = 0;
 VAR_2->legacyVersion = 0;
 VAR_2->hostageByte = 0;
 return VAR_0;
}
