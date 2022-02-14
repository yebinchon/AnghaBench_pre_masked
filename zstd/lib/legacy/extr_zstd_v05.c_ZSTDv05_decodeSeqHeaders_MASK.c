
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int S16 ;
typedef int FSEv05_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;




 int FUNC_1 (int *,int *,unsigned int,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (size_t) ;
 size_t FUNC_5 (int *,unsigned int*,unsigned int*,int const*,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static size_t FUNC_6(int* VAR_13, const BYTE** VAR_14, size_t* VAR_15,
                         FSEv05_DTable* VAR_16, FSEv05_DTable* VAR_17, FSEv05_DTable* VAR_18,
                         const void* VAR_19, size_t VAR_20, U32 VAR_21)
{
    const BYTE* const VAR_22 = (const BYTE* const)VAR_19;
    const BYTE* VAR_23 = VAR_22;
    const BYTE* const VAR_24 = VAR_22 + VAR_20;
    U32 VAR_25, VAR_26, VAR_27;
    unsigned VAR_28, VAR_29, VAR_30;
    size_t VAR_31;


    if (VAR_20 < VAR_3)
        return FUNC_0(VAR_12);


    *VAR_13 = *VAR_23++;
    if (*VAR_13==0) return 1;
    if (*VAR_13 >= 128) {
        if (VAR_23 >= VAR_24) return FUNC_0(VAR_12);
        *VAR_13 = ((VAR_13[0]-128)<<8) + *VAR_23++;
    }

    if (VAR_23 >= VAR_24) return FUNC_0(VAR_12);
    VAR_25 = *VAR_23 >> 6;
    VAR_26 = (*VAR_23 >> 4) & 3;
    VAR_27 = (*VAR_23 >> 2) & 3;
    if (*VAR_23 & 2) {
        if (VAR_23+3 > VAR_24) return FUNC_0(VAR_12);
        VAR_31 = VAR_23[2];
        VAR_31 += VAR_23[1] << 8;
        VAR_23 += 3;
    } else {
        if (VAR_23+2 > VAR_24) return FUNC_0(VAR_12);
        VAR_31 = VAR_23[1];
        VAR_31 += (VAR_23[0] & 1) << 8;
        VAR_23 += 2;
    }
    *VAR_14 = VAR_23;
    VAR_23 += VAR_31;
    *VAR_15 = VAR_31;


    if (VAR_23 > VAR_24-3) return FUNC_0(VAR_12);


    {
        S16 VAR_32[VAR_7+1];
        size_t VAR_33;


        switch(VAR_25)
        {
        case 129 :
            VAR_28 = 0;
            FUNC_3(VAR_16, *VAR_23++);
            break;
        case 130 :
            VAR_28 = VAR_2;
            FUNC_2(VAR_16, VAR_2);
            break;
        case 128:
            if (!VAR_21) return FUNC_0(VAR_11);
            break;
        case 131 :
        default :
            { unsigned VAR_34 = VAR_6;
                VAR_33 = FUNC_5(VAR_32, &VAR_34, &VAR_28, VAR_23, VAR_24-VAR_23);
                if (FUNC_4(VAR_33)) return FUNC_0(VAR_0);
                if (VAR_28 > VAR_1) return FUNC_0(VAR_11);
                VAR_23 += VAR_33;
                FUNC_1(VAR_16, VAR_32, VAR_34, VAR_28);
        } }

        switch(VAR_26)
        {
        case 129 :
            VAR_29 = 0;
            if (VAR_23 > VAR_24-2) return FUNC_0(VAR_12);
            FUNC_3(VAR_18, *VAR_23++ & VAR_8);
            break;
        case 130 :
            VAR_29 = VAR_10;
            FUNC_2(VAR_18, VAR_10);
            break;
        case 128:
            if (!VAR_21) return FUNC_0(VAR_11);
            break;
        case 131 :
        default :
            { unsigned VAR_35 = VAR_8;
                VAR_33 = FUNC_5(VAR_32, &VAR_35, &VAR_29, VAR_23, VAR_24-VAR_23);
                if (FUNC_4(VAR_33)) return FUNC_0(VAR_0);
                if (VAR_29 > VAR_9) return FUNC_0(VAR_11);
                VAR_23 += VAR_33;
                FUNC_1(VAR_18, VAR_32, VAR_35, VAR_29);
        } }

        switch(VAR_27)
        {
        case 129 :
            VAR_30 = 0;
            if (VAR_23 > VAR_24-2) return FUNC_0(VAR_12);
            FUNC_3(VAR_17, *VAR_23++);
            break;
        case 130 :
            VAR_30 = VAR_5;
            FUNC_2(VAR_17, VAR_5);
            break;
        case 128:
            if (!VAR_21) return FUNC_0(VAR_11);
            break;
        case 131 :
        default :
            { unsigned VAR_36 = VAR_7;
                VAR_33 = FUNC_5(VAR_32, &VAR_36, &VAR_30, VAR_23, VAR_24-VAR_23);
                if (FUNC_4(VAR_33)) return FUNC_0(VAR_0);
                if (VAR_30 > VAR_4) return FUNC_0(VAR_11);
                VAR_23 += VAR_33;
                FUNC_1(VAR_17, VAR_32, VAR_36, VAR_30);
    } } }

    return VAR_23-VAR_22;
}
