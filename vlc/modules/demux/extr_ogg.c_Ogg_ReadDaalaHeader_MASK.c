
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int oggpack_buffer ;
struct TYPE_9__ {int bytes; int packet; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_7__ {void* i_frame_rate_base; void* i_frame_rate; } ;
struct TYPE_8__ {TYPE_1__ video; } ;
struct TYPE_10__ {int b_force_backup; int dts; scalar_t__ i_first_frame_index; scalar_t__ i_granule_shift; TYPE_2__ fmt; } ;
typedef TYPE_4__ logical_stream_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,void*,void*) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_7( logical_stream_t *VAR_0,
                                 ogg_packet *VAR_1 )
{
    oggpack_buffer VAR_2;
    uint32_t VAR_3;
    uint32_t VAR_4;
    int VAR_5;
    unsigned int VAR_6;
    uint8_t VAR_7;
    uint8_t VAR_8;
    uint8_t VAR_9;
    int VAR_10;




    VAR_0->b_force_backup = 1;


    FUNC_6( &VAR_2, VAR_1->packet, VAR_1->bytes );
    FUNC_4( &VAR_2, 48 );

    VAR_7 = FUNC_5( &VAR_2, 8 );
    VAR_8 = FUNC_5( &VAR_2, 8 );
    VAR_9 = FUNC_5( &VAR_2, 8 );

    FUNC_4( &VAR_2, 32 );
    FUNC_4( &VAR_2, 32 );

    FUNC_4( &VAR_2, 32 );
    FUNC_4( &VAR_2, 32 );
    VAR_3 = FUNC_5( &VAR_2, 32 );

    VAR_4 = FUNC_5( &VAR_2, 32 );
    VAR_4 = FUNC_1( VAR_4, 1 );

    VAR_0->fmt.video.i_frame_rate = VAR_3;
    VAR_0->fmt.video.i_frame_rate_base = VAR_4;

    FUNC_4( &VAR_2, 32 );

    VAR_5 = FUNC_5( &VAR_2, 8 );
    VAR_5 = FUNC_2(VAR_5, 31);
    VAR_6 = 1u << VAR_5;


    VAR_0->i_granule_shift = 0;
    VAR_6--;
    while( VAR_6 )
    {
        VAR_0->i_granule_shift++;
        VAR_6 >>= 1;
    }

    VAR_10 = VAR_7 * 1000000 + VAR_8 * 1000 + VAR_9;
    FUNC_0(VAR_10);
    VAR_0->i_first_frame_index = 0;
    if ( !VAR_3 || !VAR_4 )
        return 0;
    FUNC_3( &VAR_0->dts, VAR_3, VAR_4 );

    return 1;
}
