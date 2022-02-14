
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ checksumFlag; scalar_t__ contentSizeFlag; scalar_t__ noDictIDFlag; } ;
struct TYPE_6__ {scalar_t__ windowLog; scalar_t__ hashLog; scalar_t__ chainLog; scalar_t__ searchLog; scalar_t__ minMatch; scalar_t__ targetLength; } ;
struct TYPE_8__ {TYPE_2__ fParams; TYPE_1__ cParams; } ;
typedef TYPE_3__ ZSTD_parameters ;
typedef int ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;

__attribute__((used)) static U32 FUNC_3(ZSTD_CCtx* VAR_0, ZSTD_parameters const VAR_1)
{
    ZSTD_parameters VAR_2;
    if (FUNC_1(FUNC_2(VAR_0, &VAR_2))) return 10;
    FUNC_0(1, VAR_2.cParams.windowLog != VAR_1.cParams.windowLog, "windowLog");
    FUNC_0(2, VAR_2.cParams.hashLog != VAR_1.cParams.hashLog, "hashLog");
    FUNC_0(3, VAR_2.cParams.chainLog != VAR_1.cParams.chainLog, "chainLog");
    FUNC_0(4, VAR_2.cParams.searchLog != VAR_1.cParams.searchLog, "searchLog");
    FUNC_0(5, VAR_2.cParams.minMatch != VAR_1.cParams.minMatch, "minMatch");
    FUNC_0(6, VAR_2.cParams.targetLength != VAR_1.cParams.targetLength, "targetLength");

    FUNC_0(7, VAR_2.fParams.checksumFlag != VAR_1.fParams.checksumFlag, "checksumFlag");
    FUNC_0(8, VAR_2.fParams.contentSizeFlag != VAR_1.fParams.contentSizeFlag, "contentSizeFlag");
    FUNC_0(9, VAR_2.fParams.noDictIDFlag != VAR_1.fParams.noDictIDFlag, "noDictIDFlag");
    return 0;
}
