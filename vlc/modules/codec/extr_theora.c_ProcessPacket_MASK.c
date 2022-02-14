
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ogg_packet ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_10__ {int fps_numerator; int fps_denominator; } ;
struct TYPE_12__ {scalar_t__ i_pts; TYPE_1__ ti; scalar_t__ b_packetizer; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_13__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_length; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void *FUNC_4( decoder_t *VAR_3, ogg_packet *VAR_4,
                            block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_3->p_sys;
    void *VAR_7;

    if( VAR_5->i_flags & (VAR_1|VAR_0) )
    {
        FUNC_1( VAR_3 );
        if( VAR_5->i_flags & VAR_0 )
        {



            FUNC_2(VAR_5);
            return ((void*)0);
        }
    }


    if( VAR_5->i_pts != VAR_2 && VAR_5->i_pts != VAR_6->i_pts )
    {
        VAR_6->i_pts = VAR_5->i_pts;
    }

    if( VAR_6->b_packetizer )
    {

        VAR_5->i_dts = VAR_5->i_pts = VAR_6->i_pts;

        VAR_5->i_length = VAR_6->i_pts - VAR_5->i_pts;

        VAR_7 = VAR_5;
    }
    else
    {
        VAR_7 = FUNC_0( VAR_3, VAR_4 );
        FUNC_2( VAR_5 );
    }


    VAR_6->i_pts += FUNC_3( VAR_6->ti.fps_denominator,
                      VAR_6->ti.fps_numerator );

    return VAR_7;
}
