
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int i_frame_length; int i_bytes_per_frame; } ;
struct TYPE_8__ {TYPE_2__ audio; } ;
struct TYPE_10__ {TYPE_1__ fmt_out; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_11__ {int i_nb_samples; scalar_t__ i_length; scalar_t__ i_pts; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ) ;

block_t *FUNC_3( decoder_t *VAR_0, int VAR_1 )
{
    FUNC_0( VAR_0->fmt_out.audio.i_frame_length > 0
         && VAR_0->fmt_out.audio.i_bytes_per_frame > 0 );

    size_t VAR_2 = VAR_1 * VAR_0->fmt_out.audio.i_bytes_per_frame
                            / VAR_0->fmt_out.audio.i_frame_length;
    block_t *VAR_3 = FUNC_1( VAR_2 );
    if( FUNC_2(VAR_3 != ((void*)0)) )
    {
        VAR_3->i_nb_samples = VAR_1;
        VAR_3->i_pts = VAR_3->i_length = 0;
    }
    return VAR_3;
}
