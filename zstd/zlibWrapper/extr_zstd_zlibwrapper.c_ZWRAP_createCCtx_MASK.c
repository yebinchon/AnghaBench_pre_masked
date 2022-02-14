
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int z_stream ;
struct TYPE_10__ {int * opaque; int * member_2; int member_1; int member_0; } ;
struct TYPE_9__ {TYPE_3__ customMem; int allocFunc; } ;
typedef TYPE_2__ ZWRAP_CCtx ;
typedef TYPE_3__ ZSTD_customMem ;
struct TYPE_8__ {int opaque; scalar_t__ (* zalloc ) (int ,int,int) ;scalar_t__ zfree; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;

__attribute__((used)) static ZWRAP_CCtx* FUNC_4(z_streamp VAR_2)
{
    ZWRAP_CCtx* VAR_3;

    if (VAR_2->zalloc && VAR_2->zfree) {
        VAR_3 = (ZWRAP_CCtx*)VAR_2->zalloc(VAR_2->opaque, 1, sizeof(ZWRAP_CCtx));
        if (VAR_3==((void*)0)) return ((void*)0);
        FUNC_2(VAR_3, 0, sizeof(ZWRAP_CCtx));
        FUNC_1(&VAR_3->allocFunc, VAR_2, sizeof(z_stream));
        { ZSTD_customMem VAR_4 = { &VAR_0, &VAR_1, ((void*)0) };
            VAR_4.opaque = &VAR_3->allocFunc;
            VAR_3->customMem = VAR_4;
        }
    } else {
        VAR_3 = (ZWRAP_CCtx*)FUNC_0(1, sizeof(*VAR_3));
        if (VAR_3==((void*)0)) return ((void*)0);
    }

    return VAR_3;
}
