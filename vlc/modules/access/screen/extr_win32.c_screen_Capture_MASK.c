
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int i_fragment; int i_fragment_size; TYPE_6__* p_block; int hdc_src; int hdc_dst; } ;
typedef TYPE_3__ screen_data_t ;
struct TYPE_24__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_21__ {int i_height; int i_width; } ;
struct TYPE_22__ {TYPE_1__ video; } ;
struct TYPE_25__ {scalar_t__ p_mouse; TYPE_2__ fmt; int i_top; int i_left; scalar_t__ b_follow_mouse; TYPE_3__* p_data; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_26__ {int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_27__ {scalar_t__ y; int x; int member_1; int member_0; } ;
typedef TYPE_7__ POINT ;


 int FUNC_0 (int ,int ,int,int ,int,int ,int ,scalar_t__,int) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_4__*,int ,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (TYPE_4__*,char*) ;

block_t *FUNC_9( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    screen_data_t *VAR_4 = VAR_3->p_data;

    if( !VAR_4->i_fragment )
    {
        if( !( VAR_4->p_block = FUNC_1( VAR_2 ) ) )
        {
            FUNC_8( VAR_2, "cannot get block" );
            return ((void*)0);
        }
    }

    if( VAR_3->b_follow_mouse )
    {
        POINT VAR_5;
        FUNC_4( &VAR_5 );
        FUNC_3( VAR_2, &VAR_5 );
        FUNC_2( VAR_3, VAR_5.x, VAR_5.y );
    }

    POINT VAR_6 = { VAR_3->i_left, VAR_3->i_top };
    FUNC_6( VAR_2, &VAR_6 );

    if( !FUNC_0( VAR_4->hdc_dst, 0,
                 VAR_4->i_fragment * VAR_4->i_fragment_size,
                 VAR_3->fmt.video.i_width, VAR_4->i_fragment_size,
                 VAR_4->hdc_src, VAR_6.x, VAR_6.y +
                 VAR_4->i_fragment * VAR_4->i_fragment_size,
                 VAR_1 | VAR_0 ) )
    {
        FUNC_7( VAR_2, "error during BitBlt()" );
        return ((void*)0);
    }

    VAR_4->i_fragment++;

    if( !( VAR_4->i_fragment %
           (VAR_3->fmt.video.i_height/VAR_4->i_fragment_size) ) )
    {
        block_t *VAR_7 = VAR_4->p_block;
        VAR_4->i_fragment = 0;
        VAR_4->p_block = 0;

        if( VAR_3->p_mouse )
        {
            POINT VAR_8;

            FUNC_4( &VAR_8 );
            FUNC_3( VAR_2, &VAR_8 );
            FUNC_5( VAR_2, VAR_8.x, VAR_8.y,
                          VAR_7->p_buffer );
        }

        return VAR_7;
    }

    return ((void*)0);
}
