
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int checksumFlag; int contentSizeFlag; int noDictIDFlag; } ;
struct TYPE_5__ {int strategy; int targetLength; int minMatch; int searchLog; int chainLog; int hashLog; int windowLog; } ;
struct TYPE_7__ {TYPE_2__ fParams; TYPE_1__ cParams; } ;
typedef TYPE_3__ ZSTD_parameters ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int*) ;
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

__attribute__((used)) static size_t FUNC_2(ZSTD_CCtx* VAR_10, ZSTD_parameters* VAR_11)
{
    int VAR_12;
    FUNC_0(FUNC_1(VAR_10, VAR_9, (int*)&VAR_11->cParams.windowLog));
    FUNC_0(FUNC_1(VAR_10, VAR_4, (int*)&VAR_11->cParams.hashLog));
    FUNC_0(FUNC_1(VAR_10, VAR_0, (int*)&VAR_11->cParams.chainLog));
    FUNC_0(FUNC_1(VAR_10, VAR_6, (int*)&VAR_11->cParams.searchLog));
    FUNC_0(FUNC_1(VAR_10, VAR_5, (int*)&VAR_11->cParams.minMatch));
    FUNC_0(FUNC_1(VAR_10, VAR_8, (int*)&VAR_11->cParams.targetLength));
    FUNC_0(FUNC_1(VAR_10, VAR_7, &VAR_12));
    VAR_11->cParams.strategy = VAR_12;

    FUNC_0(FUNC_1(VAR_10, VAR_1, &VAR_11->fParams.checksumFlag));
    FUNC_0(FUNC_1(VAR_10, VAR_2, &VAR_11->fParams.contentSizeFlag));
    FUNC_0(FUNC_1(VAR_10, VAR_3, &VAR_12));
    VAR_11->fParams.noDictIDFlag = !VAR_12;
    return 0;
}
