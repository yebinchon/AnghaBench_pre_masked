
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int bytes; int packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_7__ {unsigned int i_frame_rate; unsigned int i_frame_rate_base; } ;
struct TYPE_8__ {int i_bitrate; TYPE_1__ video; } ;
struct TYPE_10__ {int b_force_backup; int i_first_frame_index; int dts; scalar_t__ i_granule_shift; TYPE_2__ fmt; } ;
typedef TYPE_4__ logical_stream_t ;
typedef int bs_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_5( logical_stream_t *VAR_0,
                                  ogg_packet *VAR_1 )
{
    bs_t VAR_2;
    unsigned int VAR_3;
    unsigned int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;




    VAR_0->b_force_backup = 1;


    FUNC_1( &VAR_2, VAR_1->packet, VAR_1->bytes );
    FUNC_3( &VAR_2, 56 );

    VAR_6 = FUNC_2( &VAR_2, 8 );
    VAR_7 = FUNC_2( &VAR_2, 8 );
    VAR_8 = FUNC_2( &VAR_2, 8 );

    FUNC_2( &VAR_2, 16 ) ;
    FUNC_2( &VAR_2, 16 ) ;
    FUNC_2( &VAR_2, 24 );
    FUNC_2( &VAR_2, 24 );
    FUNC_2( &VAR_2, 8 );
    FUNC_2( &VAR_2, 8 );

    VAR_3 = FUNC_2( &VAR_2, 32 );
    VAR_4 = FUNC_2( &VAR_2, 32 );
    VAR_4 = FUNC_0( VAR_4, 1 );
    FUNC_2( &VAR_2, 24 );
    FUNC_2( &VAR_2, 24 );

    VAR_0->fmt.video.i_frame_rate = VAR_3;
    VAR_0->fmt.video.i_frame_rate_base = VAR_4;

    FUNC_2( &VAR_2, 8 );
    VAR_0->fmt.i_bitrate = FUNC_2( &VAR_2, 24 );
    FUNC_2( &VAR_2, 6 );

    VAR_5 = 1 << FUNC_2( &VAR_2, 5 );


    VAR_0->i_granule_shift = 0;
    VAR_5--;
    while( VAR_5 )
    {
        VAR_0->i_granule_shift++;
        VAR_5 >>= 1;
    }

    VAR_9 = VAR_6 * 1000000 + VAR_7 * 1000 + VAR_8;
    VAR_0->i_first_frame_index = (VAR_9 >= 3002001) ? 1 : 0;
    if ( !VAR_4 || !VAR_3 )
        return 0;
    FUNC_4( &VAR_0->dts, VAR_3, VAR_4 );

    return 1;
}
