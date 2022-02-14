
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* bucketOffsets; } ;
typedef TYPE_1__ ldmState_t ;
struct TYPE_8__ {int bucketSizeLog; } ;
typedef TYPE_2__ ldmParams_t ;
typedef int ldmEntry_t ;
typedef int U32 ;
typedef int BYTE ;


 int * FUNC_0 (TYPE_1__*,size_t const,TYPE_2__ const) ;

__attribute__((used)) static void FUNC_1(ldmState_t* VAR_0,
                                 size_t const VAR_1, const ldmEntry_t VAR_2,
                                 ldmParams_t const VAR_3)
{
    BYTE* const VAR_4 = VAR_0->bucketOffsets;
    *(FUNC_0(VAR_0, VAR_1, VAR_3) + VAR_4[VAR_1]) = VAR_2;
    VAR_4[VAR_1]++;
    VAR_4[VAR_1] &= ((U32)1 << VAR_3.bucketSizeLog) - 1;
}
