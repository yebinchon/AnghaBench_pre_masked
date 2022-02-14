
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ZSTD_resetTarget_e ;
typedef int ZSTD_optimal_t ;
typedef int ZSTD_match_t ;
struct TYPE_10__ {scalar_t__ strategy; size_t chainLog; size_t hashLog; int minMatch; int windowLog; } ;
struct TYPE_8__ {unsigned int* litFreq; unsigned int* litLengthFreq; unsigned int* matchLengthFreq; unsigned int* offCodeFreq; int * priceTable; int * matchTable; } ;
struct TYPE_11__ {int dictLimit; int lowLimit; scalar_t__ base; scalar_t__ nextSrc; } ;
struct TYPE_9__ {int hashLog3; int* hashTable; int* chainTable; int* hashTable3; TYPE_3__ cParams; TYPE_1__ opt; TYPE_4__ window; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef scalar_t__ ZSTD_indexResetPolicy_e ;
typedef int ZSTD_cwksp ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef scalar_t__ ZSTD_compResetPolicy_e ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,size_t const) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ const VAR_8 ;
 scalar_t__ const VAR_9 ;
 scalar_t__ const VAR_10 ;
 int FUNC_10 (int) ;
 int VAR_11 ;
 int FUNC_11 (TYPE_4__*,int ,int) ;

__attribute__((used)) static size_t
FUNC_12(ZSTD_matchState_t* VAR_12,
                      ZSTD_cwksp* VAR_13,
                const ZSTD_compressionParameters* VAR_14,
                const ZSTD_compResetPolicy_e VAR_15,
                const ZSTD_indexResetPolicy_e VAR_16,
                const ZSTD_resetTarget_e VAR_17)
{
    size_t const VAR_18 = (VAR_14->strategy == VAR_7) ? 0 : ((size_t)1 << VAR_14->chainLog);
    size_t const VAR_19 = ((size_t)1) << VAR_14->hashLog;
    U32 const VAR_20 = ((VAR_17 == VAR_8) && VAR_14->minMatch==3) ? FUNC_1(VAR_4, VAR_14->windowLog) : 0;
    size_t const VAR_21 = VAR_20 ? ((size_t)1) << VAR_20 : 0;

    FUNC_0(4, "reset indices : %u", VAR_16 == VAR_10);
    if (VAR_16 == VAR_10) {
        FUNC_11(&VAR_12->window, 0, sizeof(VAR_12->window));
        VAR_12->window.dictLimit = 1;
        VAR_12->window.lowLimit = 1;
        VAR_12->window.nextSrc = VAR_12->window.base + 1;
        FUNC_5(VAR_13);
    }

    VAR_12->hashLog3 = VAR_20;

    FUNC_9(VAR_12);

    FUNC_10(!FUNC_7(VAR_13));

    FUNC_4(VAR_13);

    FUNC_0(5, "reserving table space");

    VAR_12->hashTable = (U32*)FUNC_8(VAR_13, VAR_19 * sizeof(U32));
    VAR_12->chainTable = (U32*)FUNC_8(VAR_13, VAR_18 * sizeof(U32));
    VAR_12->hashTable3 = (U32*)FUNC_8(VAR_13, VAR_21 * sizeof(U32));
    FUNC_2(FUNC_7(VAR_13), VAR_11,
                    "failed a workspace allocation in ZSTD_reset_matchState");

    FUNC_0(4, "reset table : %u", VAR_15!=VAR_9);
    if (VAR_15!=VAR_9) {

        FUNC_3(VAR_13);
    }


    if ((VAR_17 == VAR_8) && (VAR_14->strategy >= VAR_6)) {
        FUNC_0(4, "reserving optimal parser space");
        VAR_12->opt.litFreq = (unsigned*)FUNC_6(VAR_13, (1<<VAR_0) * sizeof(unsigned));
        VAR_12->opt.litLengthFreq = (unsigned*)FUNC_6(VAR_13, (VAR_1+1) * sizeof(unsigned));
        VAR_12->opt.matchLengthFreq = (unsigned*)FUNC_6(VAR_13, (VAR_2+1) * sizeof(unsigned));
        VAR_12->opt.offCodeFreq = (unsigned*)FUNC_6(VAR_13, (VAR_3+1) * sizeof(unsigned));
        VAR_12->opt.matchTable = (ZSTD_match_t*)FUNC_6(VAR_13, (VAR_5+1) * sizeof(ZSTD_match_t));
        VAR_12->opt.priceTable = (ZSTD_optimal_t*)FUNC_6(VAR_13, (VAR_5+1) * sizeof(ZSTD_optimal_t));
    }

    VAR_12->cParams = *VAR_14;

    FUNC_2(FUNC_7(VAR_13), VAR_11,
                    "failed a workspace allocation in ZSTD_reset_matchState");

    return 0;
}
