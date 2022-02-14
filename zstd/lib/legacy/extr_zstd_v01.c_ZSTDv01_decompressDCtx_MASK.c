
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blockType; } ;
typedef TYPE_1__ blockProperties_t ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (int *,int,int const*,size_t) ;
 size_t FUNC_2 (void*,int *,int,int const*,size_t) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (void const*) ;
 size_t FUNC_4 (int const*,int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (size_t) ;




 int VAR_4 ;
 int VAR_5 ;

size_t FUNC_6(void* VAR_6, void* VAR_7, size_t VAR_8, const void* VAR_9, size_t VAR_10)
{
    const BYTE* VAR_11 = (const BYTE*)VAR_9;
    const BYTE* VAR_12 = VAR_11 + VAR_10;
    BYTE* const VAR_13 = (BYTE* const)VAR_7;
    BYTE* VAR_14 = VAR_13;
    BYTE* const VAR_15 = VAR_13 + VAR_8;
    size_t VAR_16 = VAR_10;
    U32 VAR_17;
    size_t VAR_18=0;
    blockProperties_t VAR_19;


    if (VAR_10 < VAR_2+VAR_1) return FUNC_0(VAR_5);
    VAR_17 = FUNC_3(VAR_9);
    if (VAR_17 != VAR_3) return FUNC_0(VAR_4);
    VAR_11 += VAR_2; VAR_16 -= VAR_2;


    while (1)
    {
        size_t VAR_20 = FUNC_4(VAR_11, VAR_12-VAR_11, &VAR_19);
        if (FUNC_5(VAR_20)) return VAR_20;

        VAR_11 += VAR_1;
        VAR_16 -= VAR_1;
        if (VAR_20 > VAR_16) return FUNC_0(VAR_5);

        switch(VAR_19.blockType)
        {
        case 131:
            VAR_18 = FUNC_2(VAR_6, VAR_14, VAR_15-VAR_14, VAR_11, VAR_20);
            break;
        case 129 :
            VAR_18 = FUNC_1(VAR_14, VAR_15-VAR_14, VAR_11, VAR_20);
            break;
        case 128 :
            return FUNC_0(VAR_0);
            break;
        case 130 :

            if (VAR_16) return FUNC_0(VAR_5);
            break;
        default:
            return FUNC_0(VAR_0);
        }
        if (VAR_20 == 0) break;

        if (FUNC_5(VAR_18)) return VAR_18;
        VAR_14 += VAR_18;
        VAR_11 += VAR_20;
        VAR_16 -= VAR_20;
    }

    return VAR_14-VAR_13;
}
