
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int S16 ;
typedef int FSE_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (size_t) ;
 size_t FUNC_5 (int *,int*,int*,int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int const*) ;


 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static size_t FUNC_7(int* VAR_12, const BYTE** VAR_13, size_t* VAR_14,
                         FSE_DTable* VAR_15, FSE_DTable* VAR_16, FSE_DTable* VAR_17,
                         const void* VAR_18, size_t VAR_19)
{
    const BYTE* const VAR_20 = (const BYTE* const)VAR_18;
    const BYTE* VAR_21 = VAR_20;
    const BYTE* const VAR_22 = VAR_20 + VAR_19;
    U32 VAR_23, VAR_24, VAR_25;
    U32 VAR_26, VAR_27, VAR_28;
    size_t VAR_29;


    if (VAR_19 < 5) return FUNC_0(VAR_11);


    *VAR_12 = FUNC_6(VAR_21); VAR_21+=2;
    VAR_23 = *VAR_21 >> 6;
    VAR_24 = (*VAR_21 >> 4) & 3;
    VAR_25 = (*VAR_21 >> 2) & 3;
    if (*VAR_21 & 2)
    {
        VAR_29 = VAR_21[2];
        VAR_29 += VAR_21[1] << 8;
        VAR_21 += 3;
    }
    else
    {
        VAR_29 = VAR_21[1];
        VAR_29 += (VAR_21[0] & 1) << 8;
        VAR_21 += 2;
    }
    *VAR_13 = VAR_21;
    VAR_21 += VAR_29;
    *VAR_14 = VAR_29;


    if (VAR_21 > VAR_22-3) return FUNC_0(VAR_11);


    {
        S16 VAR_30[VAR_6+1];
        size_t VAR_31;


        switch(VAR_23)
        {
        case 128 :
            VAR_26 = 0;
            FUNC_3(VAR_15, *VAR_21++); break;
        case 129 :
            VAR_26 = VAR_2;
            FUNC_2(VAR_15, VAR_2); break;
        default :
            { U32 VAR_32 = VAR_5;
                VAR_31 = FUNC_5(VAR_30, &VAR_32, &VAR_26, VAR_21, VAR_22-VAR_21);
                if (FUNC_4(VAR_31)) return FUNC_0(VAR_0);
                if (VAR_26 > VAR_1) return FUNC_0(VAR_10);
                VAR_21 += VAR_31;
                FUNC_1(VAR_15, VAR_30, VAR_32, VAR_26);
        } }

        switch(VAR_24)
        {
        case 128 :
            VAR_27 = 0;
            if (VAR_21 > VAR_22-2) return FUNC_0(VAR_11);
            FUNC_3(VAR_17, *VAR_21++); break;
        case 129 :
            VAR_27 = VAR_9;
            FUNC_2(VAR_17, VAR_9); break;
        default :
            { U32 VAR_33 = VAR_7;
                VAR_31 = FUNC_5(VAR_30, &VAR_33, &VAR_27, VAR_21, VAR_22-VAR_21);
                if (FUNC_4(VAR_31)) return FUNC_0(VAR_0);
                if (VAR_27 > VAR_8) return FUNC_0(VAR_10);
                VAR_21 += VAR_31;
                FUNC_1(VAR_17, VAR_30, VAR_33, VAR_27);
        } }

        switch(VAR_25)
        {
        case 128 :
            VAR_28 = 0;
            if (VAR_21 > VAR_22-2) return FUNC_0(VAR_11);
            FUNC_3(VAR_16, *VAR_21++); break;
        case 129 :
            VAR_28 = VAR_4;
            FUNC_2(VAR_16, VAR_4); break;
        default :
            { U32 VAR_34 = VAR_6;
                VAR_31 = FUNC_5(VAR_30, &VAR_34, &VAR_28, VAR_21, VAR_22-VAR_21);
                if (FUNC_4(VAR_31)) return FUNC_0(VAR_0);
                if (VAR_28 > VAR_3) return FUNC_0(VAR_10);
                VAR_21 += VAR_31;
                FUNC_1(VAR_16, VAR_30, VAR_34, VAR_28);
    } } }

    return VAR_21-VAR_20;
}
