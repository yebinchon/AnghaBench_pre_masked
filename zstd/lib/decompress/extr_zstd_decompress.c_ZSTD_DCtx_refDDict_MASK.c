
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_DDict ;
struct TYPE_4__ {scalar_t__ streamStage; int dictUses; int const* ddict; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

size_t FUNC_2(ZSTD_DCtx* VAR_3, const ZSTD_DDict* VAR_4)
{
    FUNC_0(VAR_3->streamStage != VAR_2, VAR_1);
    FUNC_1(VAR_3);
    if (VAR_4) {
        VAR_3->ddict = VAR_4;
        VAR_3->dictUses = VAR_0;
    }
    return 0;
}
