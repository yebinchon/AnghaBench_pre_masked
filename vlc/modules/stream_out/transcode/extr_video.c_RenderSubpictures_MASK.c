
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
typedef TYPE_3__ video_format_t ;
typedef int subpicture_t ;
typedef int sout_stream_t ;
struct TYPE_23__ {int lock; } ;
struct TYPE_22__ {int video; } ;
struct TYPE_25__ {TYPE_5__* p_spu_blender; int p_spu; int encoder; int p_f_chain; TYPE_2__ fifo; TYPE_1__ decoder_out; } ;
typedef TYPE_4__ sout_stream_id_sys_t ;
struct TYPE_26__ {int date; int format; } ;
typedef TYPE_5__ picture_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int * FUNC_8 (int ,int *,TYPE_3__*,TYPE_3__*,int ,int ,int,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 TYPE_5__* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;

__attribute__((used)) static picture_t * FUNC_17( sout_stream_t *VAR_0, sout_stream_id_sys_t *VAR_1,
                                       picture_t *VAR_2 )
{
    FUNC_1(VAR_0);

    if( !VAR_1->p_spu )
        return VAR_2;


    video_format_t VAR_3, VAR_4;
    FUNC_14( &VAR_1->fifo.lock );
    FUNC_12( &VAR_4, &VAR_1->decoder_out.video );
    FUNC_15( &VAR_1->fifo.lock );
    FUNC_12( &VAR_3, &VAR_2->format );
    if( VAR_3.i_visible_width <= 0 || VAR_3.i_visible_height <= 0 )
    {
        VAR_3.i_visible_width = VAR_3.i_width;
        VAR_3.i_visible_height = VAR_3.i_height;
        VAR_3.i_x_offset = 0;
        VAR_3.i_y_offset = 0;
    }

    subpicture_t *VAR_5 = FUNC_8( VAR_1->p_spu, ((void*)0), &VAR_3,
                                         &VAR_4, FUNC_16(), VAR_2->date,
                                         0, 0 );


    if( VAR_5 )
    {
        if( FUNC_3( VAR_1->p_f_chain ) )
        {


            picture_t *VAR_6 = FUNC_13( VAR_1->encoder );
            if( FUNC_4( VAR_6 ) )
            {
                FUNC_6( VAR_6, VAR_2 );
                FUNC_7( VAR_2 );
                VAR_2 = VAR_6;
            }
        }
        if( FUNC_10( !VAR_1->p_spu_blender ) )
            VAR_1->p_spu_blender = FUNC_2( FUNC_0( VAR_1->p_spu ), &VAR_3 );
        if( FUNC_4( VAR_1->p_spu_blender ) )
            FUNC_5( VAR_2, VAR_1->p_spu_blender, VAR_5 );
        FUNC_9( VAR_5 );
    }
    FUNC_11( &VAR_3 );
    FUNC_11( &VAR_4 );

    return VAR_2;
}
