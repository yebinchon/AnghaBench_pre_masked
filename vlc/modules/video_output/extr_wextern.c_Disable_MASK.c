
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opaque; int (* setResizeCb ) (int ,int *,int *) ;} ;
typedef TYPE_1__ wextern_t ;
struct vout_window_t {TYPE_1__* sys; } ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct vout_window_t *VAR_0)
{
    wextern_t *VAR_1 = VAR_0->sys;

    if ( VAR_1->setResizeCb != ((void*)0) )
        VAR_1->setResizeCb( VAR_1->opaque, ((void*)0), ((void*)0) );
}
