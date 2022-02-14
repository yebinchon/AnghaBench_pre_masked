
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int tableLog; } ;
typedef int HUFv07_DTable ;
typedef int HUFv07_DEltX4 ;
typedef TYPE_1__ DTableDesc ;
typedef int BYTE ;
typedef int BITv07_DStream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int const* const,size_t const) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int * const,int const* const,int const) ;
 TYPE_1__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (size_t const) ;
 size_t FUNC_10 (int const* const) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_11(
          void* VAR_2, size_t VAR_3,
    const void* VAR_4, size_t VAR_5,
    const HUFv07_DTable* VAR_6)
{
    if (VAR_5 < 10) return FUNC_3(VAR_1);

    { const BYTE* const VAR_7 = (const BYTE*) VAR_4;
        BYTE* const VAR_8 = (BYTE*) VAR_2;
        BYTE* const VAR_9 = VAR_8 + VAR_3;
        const void* const VAR_10 = VAR_6+1;
        const HUFv07_DEltX4* const VAR_11 = (const HUFv07_DEltX4*)VAR_10;


        BITv07_DStream_t VAR_12;
        BITv07_DStream_t VAR_13;
        BITv07_DStream_t VAR_14;
        BITv07_DStream_t VAR_15;
        size_t const VAR_16 = FUNC_10(VAR_7);
        size_t const VAR_17 = FUNC_10(VAR_7+2);
        size_t const VAR_18 = FUNC_10(VAR_7+4);
        size_t const VAR_19 = VAR_5 - (VAR_16 + VAR_17 + VAR_18 + 6);
        const BYTE* const VAR_20 = VAR_7 + 6;
        const BYTE* const VAR_21 = VAR_20 + VAR_16;
        const BYTE* const VAR_22 = VAR_21 + VAR_17;
        const BYTE* const VAR_23 = VAR_22 + VAR_18;
        size_t const VAR_24 = (VAR_3+3) / 4;
        BYTE* const VAR_25 = VAR_8 + VAR_24;
        BYTE* const VAR_26 = VAR_25 + VAR_24;
        BYTE* const VAR_27 = VAR_26 + VAR_24;
        BYTE* VAR_28 = VAR_8;
        BYTE* VAR_29 = VAR_25;
        BYTE* VAR_30 = VAR_26;
        BYTE* VAR_31 = VAR_27;
        U32 VAR_32;
        DTableDesc const VAR_33 = FUNC_8(VAR_6);
        U32 const VAR_34 = VAR_33.tableLog;

        if (VAR_19 > VAR_5) return FUNC_3(VAR_1);
        { size_t const VAR_35 = FUNC_1(&VAR_12, VAR_20, VAR_16);
          if (FUNC_9(VAR_35)) return VAR_35; }
        { size_t const VAR_36 = FUNC_1(&VAR_13, VAR_21, VAR_17);
          if (FUNC_9(VAR_36)) return VAR_36; }
        { size_t const VAR_37 = FUNC_1(&VAR_14, VAR_22, VAR_18);
          if (FUNC_9(VAR_37)) return VAR_37; }
        { size_t const VAR_38 = FUNC_1(&VAR_15, VAR_23, VAR_19);
          if (FUNC_9(VAR_38)) return VAR_38; }


        VAR_32 = FUNC_2(&VAR_12) | FUNC_2(&VAR_13) | FUNC_2(&VAR_14) | FUNC_2(&VAR_15);
        for ( ; (VAR_32==VAR_0) && (VAR_31<(VAR_9-7)) ; ) {
            FUNC_6(VAR_28, &VAR_12);
            FUNC_6(VAR_29, &VAR_13);
            FUNC_6(VAR_30, &VAR_14);
            FUNC_6(VAR_31, &VAR_15);
            FUNC_5(VAR_28, &VAR_12);
            FUNC_5(VAR_29, &VAR_13);
            FUNC_5(VAR_30, &VAR_14);
            FUNC_5(VAR_31, &VAR_15);
            FUNC_6(VAR_28, &VAR_12);
            FUNC_6(VAR_29, &VAR_13);
            FUNC_6(VAR_30, &VAR_14);
            FUNC_6(VAR_31, &VAR_15);
            FUNC_4(VAR_28, &VAR_12);
            FUNC_4(VAR_29, &VAR_13);
            FUNC_4(VAR_30, &VAR_14);
            FUNC_4(VAR_31, &VAR_15);

            VAR_32 = FUNC_2(&VAR_12) | FUNC_2(&VAR_13) | FUNC_2(&VAR_14) | FUNC_2(&VAR_15);
        }


        if (VAR_28 > VAR_25) return FUNC_3(VAR_1);
        if (VAR_29 > VAR_26) return FUNC_3(VAR_1);
        if (VAR_30 > VAR_27) return FUNC_3(VAR_1);



        FUNC_7(VAR_28, &VAR_12, VAR_25, VAR_11, VAR_34);
        FUNC_7(VAR_29, &VAR_13, VAR_26, VAR_11, VAR_34);
        FUNC_7(VAR_30, &VAR_14, VAR_27, VAR_11, VAR_34);
        FUNC_7(VAR_31, &VAR_15, VAR_9, VAR_11, VAR_34);


        { U32 const VAR_39 = FUNC_0(&VAR_12) & FUNC_0(&VAR_13) & FUNC_0(&VAR_14) & FUNC_0(&VAR_15);
          if (!VAR_39) return FUNC_3(VAR_1); }


        return VAR_3;
    }
}
