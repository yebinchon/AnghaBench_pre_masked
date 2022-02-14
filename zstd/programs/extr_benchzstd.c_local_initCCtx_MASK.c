
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adv; int comprParams; int cLevel; int dictBufferSize; int dictBuffer; int cctx; } ;
typedef TYPE_1__ BMK_initCCtxArgs ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static size_t FUNC_1(void* VAR_0) {
    BMK_initCCtxArgs* VAR_1 = (BMK_initCCtxArgs*)VAR_0;
    FUNC_0(VAR_1->cctx, VAR_1->dictBuffer, VAR_1->dictBufferSize, VAR_1->cLevel, VAR_1->comprParams, VAR_1->adv);
    return 0;
}
