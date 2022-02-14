
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hashLog3; int hashTable3; int chainTable; int hashTable; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
struct TYPE_6__ {int hashLog; scalar_t__ strategy; int chainLog; } ;
struct TYPE_8__ {TYPE_1__ cParams; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;
typedef int U32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const,int const) ;
 int FUNC_1 (int ,int const,int const) ;

__attribute__((used)) static void FUNC_2 (ZSTD_matchState_t* VAR_2, ZSTD_CCtx_params const* VAR_3, const U32 VAR_4)
{
    { U32 const VAR_5 = (U32)1 << VAR_3->cParams.hashLog;
        FUNC_0(VAR_2->hashTable, VAR_5, VAR_4);
    }

    if (VAR_3->cParams.strategy != VAR_1) {
        U32 const VAR_6 = (U32)1 << VAR_3->cParams.chainLog;
        if (VAR_3->cParams.strategy == VAR_0)
            FUNC_1(VAR_2->chainTable, VAR_6, VAR_4);
        else
            FUNC_0(VAR_2->chainTable, VAR_6, VAR_4);
    }

    if (VAR_2->hashLog3) {
        U32 const VAR_7 = (U32)1 << VAR_2->hashLog3;
        FUNC_0(VAR_2->hashTable3, VAR_7, VAR_4);
    }
}
