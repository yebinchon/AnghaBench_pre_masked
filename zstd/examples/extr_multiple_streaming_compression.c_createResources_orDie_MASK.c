
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cctx; int buffOutSize; void* buffOut; int buffInSize; void* buffIn; } ;
typedef TYPE_1__ resources ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 () ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static resources FUNC_7(int VAR_2)
{
    resources VAR_3;
    VAR_3.buffInSize = FUNC_3();
    VAR_3.buffOutSize= FUNC_4();
    VAR_3.buffIn = FUNC_6(VAR_3.buffInSize);
    VAR_3.buffOut= FUNC_6(VAR_3.buffOutSize);
    VAR_3.cctx = FUNC_5();
    FUNC_0(VAR_3.cctx != ((void*)0), "ZSTD_createCCtx() failed!");





    FUNC_1( FUNC_2(VAR_3.cctx, VAR_1, VAR_2) );
    FUNC_1( FUNC_2(VAR_3.cctx, VAR_0, 1) );
    return VAR_3;
}
