
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int blockType; } ;
typedef TYPE_2__ blockProperties_t ;
struct TYPE_9__ {int checksumFlag; } ;
struct TYPE_11__ {size_t expected; int stage; size_t headerBuffer; size_t headerSize; int bType; char* previousDstEnd; int xxhState; TYPE_1__ fParams; } ;
typedef TYPE_3__ ZSTDv07_DCtx ;
typedef int U64 ;
typedef int U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void*,size_t) ;






 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_4 (TYPE_3__*,void*) ;
 size_t FUNC_5 (void*,size_t,void const*,size_t) ;
 size_t FUNC_6 (TYPE_3__*,size_t,size_t) ;
 size_t FUNC_7 (TYPE_3__*,void*,size_t,void const*,size_t) ;
 size_t FUNC_8 (void const*,size_t) ;
 size_t VAR_3 ;
 size_t FUNC_9 (void const*,void*,TYPE_2__*) ;
 int FUNC_10 (size_t const) ;
 size_t VAR_4 ;




 int VAR_5 ;
 int FUNC_11 (size_t,void const*,size_t) ;
 int VAR_6 ;

size_t FUNC_12(ZSTDv07_DCtx* VAR_7, void* VAR_8, size_t VAR_9, const void* VAR_10, size_t VAR_11)
{

    if (VAR_11 != VAR_7->expected) return FUNC_0(VAR_6);
    if (VAR_9) FUNC_4(VAR_7, VAR_8);

    switch (VAR_7->stage)
    {
    case 133 :
        if (VAR_11 != VAR_3) return FUNC_0(VAR_6);
        if ((FUNC_1(VAR_10) & 0xFFFFFFF0U) == VAR_1) {
            FUNC_11(VAR_7->headerBuffer, VAR_10, VAR_3);
            VAR_7->expected = VAR_4 - VAR_3;
            VAR_7->stage = 135;
            return 0;
        }
        VAR_7->headerSize = FUNC_8(VAR_10, VAR_3);
        if (FUNC_10(VAR_7->headerSize)) return VAR_7->headerSize;
        FUNC_11(VAR_7->headerBuffer, VAR_10, VAR_3);
        if (VAR_7->headerSize > VAR_3) {
            VAR_7->expected = VAR_7->headerSize - VAR_3;
            VAR_7->stage = 136;
            return 0;
        }
        VAR_7->expected = 0;

    case 136:
        { size_t VAR_12;
            FUNC_11(VAR_7->headerBuffer + VAR_3, VAR_10, VAR_7->expected);
            VAR_12 = FUNC_6(VAR_7, VAR_7->headerBuffer, VAR_7->headerSize);
            if (FUNC_10(VAR_12)) return VAR_12;
            VAR_7->expected = VAR_2;
            VAR_7->stage = 137;
            return 0;
        }
    case 137:
        { blockProperties_t VAR_13;
            size_t const VAR_14 = FUNC_9(VAR_10, VAR_2, &VAR_13);
            if (FUNC_10(VAR_14)) return VAR_14;
            if (VAR_13.blockType == 130) {
                if (VAR_7->fParams.checksumFlag) {
                    U64 const VAR_15 = FUNC_2(&VAR_7->xxhState);
                    U32 const VAR_16 = (U32)(VAR_15>>11) & ((1<<22)-1);
                    const BYTE* const VAR_17 = (const BYTE*)VAR_10;
                    U32 const VAR_18 = VAR_17[2] + (VAR_17[1] << 8) + ((VAR_17[0] & 0x3F) << 16);
                    if (VAR_18 != VAR_16) return FUNC_0(VAR_5);
                }
                VAR_7->expected = 0;
                VAR_7->stage = 133;
            } else {
                VAR_7->expected = VAR_14;
                VAR_7->bType = VAR_13.blockType;
                VAR_7->stage = 134;
            }
            return 0;
        }
    case 134:
        { size_t VAR_19;
            switch(VAR_7->bType)
            {
            case 131:
                VAR_19 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
                break;
            case 129 :
                VAR_19 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11);
                break;
            case 128 :
                return FUNC_0(VAR_0);
                break;
            case 130 :
                VAR_19 = 0;
                break;
            default:
                return FUNC_0(VAR_0);
            }
            VAR_7->stage = 137;
            VAR_7->expected = VAR_2;
            VAR_7->previousDstEnd = (char*)VAR_8 + VAR_19;
            if (FUNC_10(VAR_19)) return VAR_19;
            if (VAR_7->fParams.checksumFlag) FUNC_3(&VAR_7->xxhState, VAR_8, VAR_19);
            return VAR_19;
        }
    case 135:
        { FUNC_11(VAR_7->headerBuffer + VAR_3, VAR_10, VAR_7->expected);
            VAR_7->expected = FUNC_1(VAR_7->headerBuffer + 4);
            VAR_7->stage = 132;
            return 0;
        }
    case 132:
        { VAR_7->expected = 0;
            VAR_7->stage = 133;
            return 0;
        }
    default:
        return FUNC_0(VAR_0);
    }
}
