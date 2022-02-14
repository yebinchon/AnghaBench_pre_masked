
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* setResizeCb; void* opaque; } ;
typedef TYPE_1__ wextern_t ;
struct TYPE_8__ {int * ops; int type; TYPE_1__* sys; } ;
typedef TYPE_2__ vout_window_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(vout_window_t *VAR_4)
{
    wextern_t *VAR_5 = FUNC_3(FUNC_0(VAR_4), sizeof(*VAR_5));
    if (FUNC_1(VAR_5==((void*)0)))
        return VAR_0;
    VAR_5->opaque = FUNC_2( VAR_4, "vout-cb-opaque" );
    VAR_5->setResizeCb = FUNC_2( VAR_4, "vout-cb-resize-cb" );

    VAR_4->sys = VAR_5;
    VAR_4->type = VAR_2;
    VAR_4->ops = &VAR_3;
    return VAR_1;
}
