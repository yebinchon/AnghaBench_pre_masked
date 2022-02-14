
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_12__ {int width; int height; TYPE_5__* frame; int camera; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_13__ {int i_dts; int i_pts; int p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_14__ {int* size; scalar_t__ image; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_5__**) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 () ;

__attribute__((used)) static block_t *FUNC_7( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    block_t *VAR_4 = ((void*)0);

    if( FUNC_2( VAR_3->camera,
                VAR_0,
                &VAR_3->frame ) != VAR_1 )
    {
        FUNC_5( VAR_2, "Unable to capture a frame" );
        return ((void*)0);
    }

    VAR_4 = FUNC_0( VAR_3->frame->size[0] * VAR_3->frame->size[1] * 2 );
    if( !VAR_4 )
    {
        FUNC_5( VAR_2, "Can not get block" );
        return ((void*)0);
    }

    if( !VAR_3->frame->image )
    {
        FUNC_5 (VAR_2, "Capture buffer empty");
        FUNC_1( VAR_4 );
        return ((void*)0);
    }

    FUNC_4( VAR_4->p_buffer, (const char *)VAR_3->frame->image,
            VAR_3->width * VAR_3->height * 2 );

    VAR_4->i_pts = VAR_4->i_dts = FUNC_6();
    FUNC_3( VAR_3->camera, VAR_3->frame );
    return VAR_4;
}
