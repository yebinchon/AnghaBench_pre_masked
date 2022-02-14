
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opaque; int (* setResizeCb ) (int ,int ,struct vout_window_t*) ;} ;
typedef TYPE_1__ wextern_t ;
typedef int vout_window_cfg_t ;
struct vout_window_t {TYPE_1__* sys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct vout_window_t*) ;

__attribute__((used)) static int FUNC_1(struct vout_window_t *VAR_2, const vout_window_cfg_t *VAR_3)
{
    wextern_t *VAR_4 = VAR_2->sys;

    if ( VAR_4->setResizeCb != ((void*)0) )

        VAR_4->setResizeCb( VAR_4->opaque, VAR_1, VAR_2 );

    (void) VAR_3;
    return VAR_0;
}
