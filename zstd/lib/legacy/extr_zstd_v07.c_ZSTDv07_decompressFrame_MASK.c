
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int blockType; int origSize; } ;
typedef TYPE_2__ blockProperties_t ;
struct TYPE_8__ {scalar_t__ checksumFlag; } ;
struct TYPE_10__ {int xxhState; TYPE_1__ fParams; } ;
typedef TYPE_3__ ZSTDv07_DCtx ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;
 size_t VAR_1 ;
 size_t FUNC_2 (int *,int,int const*,size_t const) ;
 scalar_t__ FUNC_3 (TYPE_3__*,void const*,size_t const) ;
 size_t FUNC_4 (TYPE_3__*,int *,int,int const*,size_t const) ;
 size_t FUNC_5 (void const*,size_t) ;
 size_t VAR_2 ;
 size_t FUNC_6 (int *,int,int const,int ) ;
 size_t FUNC_7 (int const*,int,TYPE_2__*) ;
 scalar_t__ FUNC_8 (size_t const) ;




 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static size_t FUNC_9(ZSTDv07_DCtx* VAR_5,
                                 void* VAR_6, size_t VAR_7,
                                 const void* VAR_8, size_t VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_8;
    const BYTE* const VAR_11 = VAR_10 + VAR_9;
    BYTE* const VAR_12 = (BYTE* const)VAR_6;
    BYTE* const VAR_13 = VAR_12 + VAR_7;
    BYTE* VAR_14 = VAR_12;
    size_t VAR_15 = VAR_9;


    if (VAR_9 < VAR_2+VAR_1) return FUNC_0(VAR_4);


    { size_t const VAR_16 = FUNC_5(VAR_8, VAR_2);
        if (FUNC_8(VAR_16)) return VAR_16;
        if (VAR_9 < VAR_16+VAR_1) return FUNC_0(VAR_4);
        if (FUNC_3(VAR_5, VAR_8, VAR_16)) return FUNC_0(VAR_3);
        VAR_10 += VAR_16; VAR_15 -= VAR_16;
    }


    while (1) {
        size_t VAR_17;
        blockProperties_t VAR_18;
        size_t const VAR_19 = FUNC_7(VAR_10, VAR_11-VAR_10, &VAR_18);
        if (FUNC_8(VAR_19)) return VAR_19;

        VAR_10 += VAR_1;
        VAR_15 -= VAR_1;
        if (VAR_19 > VAR_15) return FUNC_0(VAR_4);

        switch(VAR_18.blockType)
        {
        case 131:
            VAR_17 = FUNC_4(VAR_5, VAR_14, VAR_13-VAR_14, VAR_10, VAR_19);
            break;
        case 129 :
            VAR_17 = FUNC_2(VAR_14, VAR_13-VAR_14, VAR_10, VAR_19);
            break;
        case 128 :
            VAR_17 = FUNC_6(VAR_14, VAR_13-VAR_14, *VAR_10, VAR_18.origSize);
            break;
        case 130 :

            if (VAR_15) return FUNC_0(VAR_4);
            VAR_17 = 0;
            break;
        default:
            return FUNC_0(VAR_0);
        }
        if (VAR_18.blockType == 130) break;

        if (FUNC_8(VAR_17)) return VAR_17;
        if (VAR_5->fParams.checksumFlag) FUNC_1(&VAR_5->xxhState, VAR_14, VAR_17);
        VAR_14 += VAR_17;
        VAR_10 += VAR_19;
        VAR_15 -= VAR_19;
    }

    return VAR_14-VAR_12;
}
