
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blockType; size_t origSize; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (void*,void*,size_t,int const*,size_t) ;
 size_t FUNC_2 (void const*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_3 (size_t) ;




 int VAR_2 ;
 int FUNC_4 (int * const,int const,size_t) ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_5(void* VAR_4,
                                void* VAR_5, size_t VAR_6,
                          const BYTE** VAR_7, size_t* VAR_8,
                          const void* VAR_9, size_t VAR_10)
{
    const BYTE* const VAR_11 = (const BYTE* const)VAR_9;
    const BYTE* VAR_12 = VAR_11;
    BYTE* const VAR_13 = (BYTE* const)VAR_5;
    BYTE* const VAR_14 = VAR_13 + VAR_6;
    blockProperties_t VAR_15;

    size_t VAR_16 = FUNC_2(VAR_9, VAR_10, &VAR_15);
    if (FUNC_3(VAR_16)) return VAR_16;
    if (VAR_16 > VAR_10 - VAR_1) return FUNC_0(VAR_3);
    VAR_12 += VAR_1;

    switch(VAR_15.blockType)
    {
    case 129:
        *VAR_7 = VAR_12;
        VAR_12 += VAR_16;
        *VAR_8 = VAR_16;
        break;
    case 128:
        {
            size_t VAR_17 = VAR_15.origSize;
            if (VAR_17>VAR_6) return FUNC_0(VAR_2);
            if (!VAR_10) return FUNC_0(VAR_3);
            FUNC_4(VAR_14 - VAR_17, *VAR_12, VAR_17);
            *VAR_7 = VAR_14 - VAR_17;
            *VAR_8 = VAR_17;
            VAR_12++;
            break;
        }
    case 131:
        {
            size_t VAR_18 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_12, VAR_16);
            if (FUNC_3(VAR_18)) return VAR_18;
            *VAR_7 = VAR_14 - VAR_18;
            *VAR_8 = VAR_18;
            VAR_12 += VAR_16;
            break;
        }
    case 130:
    default:
        return FUNC_0(VAR_0);
    }

    return VAR_12-VAR_11;
}
