
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int params ;
typedef scalar_t__ ZSTD_dictLoadMethod_e ;
typedef scalar_t__ ZSTD_dictContentType_e ;
typedef void* ZSTD_compressionParameters ;
struct TYPE_12__ {void* cParams; } ;
struct TYPE_10__ {size_t dictContentSize; scalar_t__ dictID; scalar_t__* entropyWorkspace; void const* dictContent; int workspace; TYPE_5__ matchState; int cBlockState; } ;
typedef TYPE_2__ ZSTD_CDict ;
struct TYPE_9__ {int contentSizeFlag; } ;
struct TYPE_11__ {void* cParams; TYPE_1__ fParams; int compressionLevel; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (size_t const) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 size_t FUNC_4 (int *,TYPE_5__*,int *,TYPE_3__*,void const*,size_t,scalar_t__,int ,scalar_t__*) ;
 int FUNC_5 (size_t,int) ;
 void* FUNC_6 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 size_t const FUNC_8 (TYPE_5__*,int *,void**,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 (void*,void const*,size_t) ;
 int VAR_7 ;
 int FUNC_11 (TYPE_3__*,int ,int) ;

__attribute__((used)) static size_t FUNC_12(
                    ZSTD_CDict* VAR_8,
              const void* VAR_9, size_t VAR_10,
                    ZSTD_dictLoadMethod_e VAR_11,
                    ZSTD_dictContentType_e VAR_12,
                    ZSTD_compressionParameters VAR_13)
{
    FUNC_0(3, "ZSTD_initCDict_internal (dictContentType:%u)", (unsigned)VAR_12);
    FUNC_9(!FUNC_3(VAR_13));
    VAR_8->matchState.cParams = VAR_13;
    if ((VAR_11 == VAR_2) || (!VAR_9) || (!VAR_10)) {
        VAR_8->dictContent = VAR_9;
    } else {
         void *VAR_14 = FUNC_6(&VAR_8->workspace, FUNC_5(VAR_10, sizeof(void*)));
        FUNC_2(!VAR_14, VAR_7);
        VAR_8->dictContent = VAR_14;
        FUNC_10(VAR_14, VAR_9, VAR_10);
    }
    VAR_8->dictContentSize = VAR_10;

    VAR_8->entropyWorkspace = (U32*)FUNC_6(&VAR_8->workspace, VAR_0);



    FUNC_7(&VAR_8->cBlockState);
    FUNC_1(FUNC_8(
        &VAR_8->matchState,
        &VAR_8->workspace,
        &VAR_13,
        VAR_5,
        VAR_6,
        VAR_4));



    { ZSTD_CCtx_params VAR_15;
        FUNC_11(&VAR_15, 0, sizeof(VAR_15));
        VAR_15.compressionLevel = VAR_1;
        VAR_15.fParams.contentSizeFlag = 1;
        VAR_15.cParams = VAR_13;
        { size_t const VAR_16 = FUNC_4(
                    &VAR_8->cBlockState, &VAR_8->matchState, &VAR_8->workspace,
                    &VAR_15, VAR_8->dictContent, VAR_8->dictContentSize,
                    VAR_12, VAR_3, VAR_8->entropyWorkspace);
            FUNC_1(VAR_16);
            FUNC_9(VAR_16 <= (size_t)(U32)-1);
            VAR_8->dictID = (U32)VAR_16;
        }
    }

    return 0;
}
