
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int width; unsigned int height; int opaque; int (* resizeCb ) (int ,unsigned int,unsigned int) ;} ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_7__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vlc_gl_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(vlc_gl_t * VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_0->sys;
    if( VAR_3->width == VAR_1 && VAR_3->height == VAR_2 )
        return;

    if( !VAR_3->resizeCb )
        return;

    FUNC_0(VAR_0);
    VAR_3->resizeCb(VAR_3->opaque, VAR_1, VAR_2);
    FUNC_1(VAR_0);
    VAR_3->width = VAR_1;
    VAR_3->height = VAR_2;
}
