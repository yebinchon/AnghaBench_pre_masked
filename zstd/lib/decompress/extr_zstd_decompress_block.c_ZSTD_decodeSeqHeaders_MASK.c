
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolEncodingType_e ;
struct TYPE_4__ {int MLTable; int OFTable; int LLTable; } ;
struct TYPE_5__ {int ddictIsCold; int fseEntropy; int MLTptr; TYPE_1__ entropy; int OFTptr; int LLTptr; } ;
typedef TYPE_2__ ZSTD_DCtx ;
typedef int BYTE ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int,int ) ;
 size_t FUNC_3 (int ,int *,int const,int ,int ,int const*,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (size_t const) ;
 int VAR_17 ;
 int VAR_18 ;

size_t FUNC_5(ZSTD_DCtx* VAR_19, int* VAR_20,
                             const void* VAR_21, size_t VAR_22)
{
    const BYTE* const VAR_23 = (const BYTE* const)VAR_21;
    const BYTE* const VAR_24 = VAR_23 + VAR_22;
    const BYTE* VAR_25 = VAR_23;
    int VAR_26;
    FUNC_0(5, "ZSTD_decodeSeqHeaders");


    FUNC_2(VAR_22 < VAR_5, VAR_18);


    VAR_26 = *VAR_25++;
    if (!VAR_26) {
        *VAR_20=0;
        FUNC_2(VAR_22 != 1, VAR_18);
        return 1;
    }
    if (VAR_26 > 0x7F) {
        if (VAR_26 == 0xFF) {
            FUNC_2(VAR_25+2 > VAR_24, VAR_18);
            VAR_26 = FUNC_1(VAR_25) + VAR_4, VAR_25+=2;
        } else {
            FUNC_2(VAR_25 >= VAR_24, VAR_18);
            VAR_26 = ((VAR_26-0x80)<<8) + *VAR_25++;
        }
    }
    *VAR_20 = VAR_26;


    FUNC_2(VAR_25+1 > VAR_24, VAR_18);
    { symbolEncodingType_e const VAR_27 = (symbolEncodingType_e)(*VAR_25 >> 6);
        symbolEncodingType_e const VAR_28 = (symbolEncodingType_e)((*VAR_25 >> 4) & 3);
        symbolEncodingType_e const VAR_29 = (symbolEncodingType_e)((*VAR_25 >> 2) & 3);
        VAR_25++;


        { size_t const VAR_30 = FUNC_3(VAR_19->entropy.LLTable, &VAR_19->LLTptr,
                                                      VAR_27, VAR_10, VAR_0,
                                                      VAR_25, VAR_24-VAR_25,
                                                      VAR_1, VAR_2,
                                                      VAR_3, VAR_19->fseEntropy,
                                                      VAR_19->ddictIsCold, VAR_26);
            FUNC_2(FUNC_4(VAR_30), VAR_17);
            VAR_25 += VAR_30;
        }

        { size_t const VAR_31 = FUNC_3(VAR_19->entropy.OFTable, &VAR_19->OFTptr,
                                                      VAR_28, VAR_12, VAR_16,
                                                      VAR_25, VAR_24-VAR_25,
                                                      VAR_13, VAR_14,
                                                      VAR_15, VAR_19->fseEntropy,
                                                      VAR_19->ddictIsCold, VAR_26);
            FUNC_2(FUNC_4(VAR_31), VAR_17);
            VAR_25 += VAR_31;
        }

        { size_t const VAR_32 = FUNC_3(VAR_19->entropy.MLTable, &VAR_19->MLTptr,
                                                      VAR_29, VAR_11, VAR_6,
                                                      VAR_25, VAR_24-VAR_25,
                                                      VAR_7, VAR_8,
                                                      VAR_9, VAR_19->fseEntropy,
                                                      VAR_19->ddictIsCold, VAR_26);
            FUNC_2(FUNC_4(VAR_32), VAR_17);
            VAR_25 += VAR_32;
        }
    }

    return VAR_25-VAR_23;
}
