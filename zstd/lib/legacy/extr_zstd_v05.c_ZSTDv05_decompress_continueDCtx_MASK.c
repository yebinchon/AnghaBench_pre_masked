
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blockType; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int blockProperties ;
typedef int ZSTDv05_DCtx ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (int *,int,int const*,size_t) ;
 size_t FUNC_2 (int *,void const*,size_t) ;
 size_t FUNC_3 (int *,void const*,size_t) ;
 size_t FUNC_4 (int *,int *,int,int const*,size_t) ;
 size_t VAR_2 ;
 size_t FUNC_5 (int const*,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (size_t) ;




 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_8(ZSTDv05_DCtx* VAR_4,
                                 void* VAR_5, size_t VAR_6,
                                 const void* VAR_7, size_t VAR_8)
{
    const BYTE* VAR_9 = (const BYTE*)VAR_7;
    const BYTE* VAR_10 = VAR_9 + VAR_8;
    BYTE* const VAR_11 = (BYTE* const)VAR_5;
    BYTE* VAR_12 = VAR_11;
    BYTE* const VAR_13 = VAR_11 + VAR_6;
    size_t VAR_14 = VAR_8;
    blockProperties_t VAR_15;
    FUNC_7(&VAR_15, 0, sizeof(VAR_15));


    { size_t VAR_16;
        if (VAR_8 < VAR_2+VAR_1) return FUNC_0(VAR_3);
        VAR_16 = FUNC_2(VAR_4, VAR_7, VAR_2);
        if (FUNC_6(VAR_16)) return VAR_16;
        if (VAR_8 < VAR_16+VAR_1) return FUNC_0(VAR_3);
        VAR_9 += VAR_16; VAR_14 -= VAR_16;
        VAR_16 = FUNC_3(VAR_4, VAR_7, VAR_16);
        if (FUNC_6(VAR_16)) return VAR_16;
    }


    while (1)
    {
        size_t VAR_17=0;
        size_t VAR_18 = FUNC_5(VAR_9, VAR_10-VAR_9, &VAR_15);
        if (FUNC_6(VAR_18)) return VAR_18;

        VAR_9 += VAR_1;
        VAR_14 -= VAR_1;
        if (VAR_18 > VAR_14) return FUNC_0(VAR_3);

        switch(VAR_15.blockType)
        {
        case 131:
            VAR_17 = FUNC_4(VAR_4, VAR_12, VAR_13-VAR_12, VAR_9, VAR_18);
            break;
        case 129 :
            VAR_17 = FUNC_1(VAR_12, VAR_13-VAR_12, VAR_9, VAR_18);
            break;
        case 128 :
            return FUNC_0(VAR_0);
            break;
        case 130 :

            if (VAR_14) return FUNC_0(VAR_3);
            break;
        default:
            return FUNC_0(VAR_0);
        }
        if (VAR_18 == 0) break;

        if (FUNC_6(VAR_17)) return VAR_17;
        VAR_12 += VAR_17;
        VAR_9 += VAR_18;
        VAR_14 -= VAR_18;
    }

    return VAR_12-VAR_11;
}
