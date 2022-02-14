
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sequence ;
typedef int seq_t ;
struct TYPE_4__ {int prevOffset; int DStream; int stateML; int stateOffb; int stateLL; int const* dumpsEnd; int const* dumps; } ;
typedef TYPE_1__ seqState_t ;
struct TYPE_5__ {scalar_t__ base; int * OffTable; int * MLTable; int * LLTable; } ;
typedef TYPE_2__ dctx_t ;
typedef int U32 ;
typedef int const BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 size_t FUNC_3 (int *,int const*,int) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 size_t FUNC_7 (int const*,int ,int const**,int const* const,int const* const,int const* const) ;
 size_t FUNC_8 (int*,int const**,size_t*,int *,int *,int *,int const*,int) ;
 scalar_t__ FUNC_9 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int const*,int const*,size_t) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static size_t FUNC_12(
                               void* VAR_3,
                               void* VAR_4, size_t VAR_5,
                         const void* VAR_6, size_t VAR_7,
                         const BYTE* VAR_8, size_t VAR_9)
{
    dctx_t* VAR_10 = (dctx_t*)VAR_3;
    const BYTE* VAR_11 = (const BYTE*)VAR_6;
    const BYTE* const VAR_12 = VAR_11 + VAR_7;
    BYTE* const VAR_13 = (BYTE* const)VAR_4;
    BYTE* VAR_14 = VAR_13;
    BYTE* const VAR_15 = VAR_13 + VAR_5;
    size_t VAR_16, VAR_17;
    const BYTE* VAR_18 = VAR_8;
    const BYTE* const VAR_19 = VAR_8 + VAR_9;
    int VAR_20;
    const BYTE* VAR_21;
    U32* VAR_22 = VAR_10->LLTable;
    U32* VAR_23 = VAR_10->MLTable;
    U32* VAR_24 = VAR_10->OffTable;
    BYTE* const VAR_25 = (BYTE*) (VAR_10->base);


    VAR_16 = FUNC_8(&VAR_20, &VAR_21, &VAR_17,
                                      VAR_22, VAR_23, VAR_24,
                                      VAR_11, VAR_12-VAR_11);
    if (FUNC_9(VAR_16)) return VAR_16;
    VAR_11 += VAR_16;


    {
        seq_t VAR_26;
        seqState_t VAR_27;

        FUNC_11(&VAR_26, 0, sizeof(VAR_26));
        VAR_27.dumps = VAR_21;
        VAR_27.dumpsEnd = VAR_21 + VAR_17;
        VAR_27.prevOffset = 1;
        VAR_16 = FUNC_3(&(VAR_27.DStream), VAR_11, VAR_12-VAR_11);
        if (FUNC_4(VAR_16)) return FUNC_0(VAR_1);
        FUNC_2(&(VAR_27.stateLL), &(VAR_27.DStream), VAR_22);
        FUNC_2(&(VAR_27.stateOffb), &(VAR_27.DStream), VAR_24);
        FUNC_2(&(VAR_27.stateML), &(VAR_27.DStream), VAR_23);

        for ( ; (FUNC_5(&(VAR_27.DStream)) <= VAR_0) && (VAR_20>0) ; )
        {
            size_t VAR_28;
            VAR_20--;
            FUNC_6(&VAR_26, &VAR_27);
            VAR_28 = FUNC_7(VAR_14, VAR_26, &VAR_18, VAR_19, VAR_25, VAR_15);
            if (FUNC_9(VAR_28)) return VAR_28;
            VAR_14 += VAR_28;
        }


        if ( !FUNC_1(&(VAR_27.DStream)) ) return FUNC_0(VAR_1);
        if (VAR_20<0) return FUNC_0(VAR_1);


        {
            size_t VAR_29 = VAR_19 - VAR_18;
            if (VAR_14+VAR_29 > VAR_15) return FUNC_0(VAR_2);
            if (VAR_14 != VAR_18) FUNC_10(VAR_14, VAR_18, VAR_29);
            VAR_14 += VAR_29;
        }
    }

    return VAR_14-VAR_13;
}
