
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int bytes; int * packet; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_7__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_10__ {TYPE_1__ video; } ;
struct TYPE_9__ {int b_force_backup; int i_granule_shift; TYPE_4__ fmt; int dts; } ;
typedef TYPE_3__ logical_stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int *,int *,int,int,int ) ;

__attribute__((used)) static bool FUNC_5( logical_stream_t *VAR_2,
                                    ogg_packet *VAR_3 )
{
    uint64_t VAR_4;
    uint64_t VAR_5;
    int VAR_6;
    int VAR_7;

    FUNC_3( &VAR_2->fmt, VAR_0, VAR_1 );




    VAR_2->b_force_backup = 1;


    if ( VAR_3->bytes != 52 )
    {

        return 0;
    }

    VAR_6 = FUNC_1( &VAR_3->packet[ 8] );
    VAR_7 = FUNC_1( &VAR_3->packet[10] );
    if ( VAR_6 != 0 || VAR_7 != 1 )
    {
        return 0;
    }


    VAR_4 = FUNC_0( &VAR_3->packet[12] );
    VAR_5 = FUNC_0( &VAR_3->packet[20] );
    if ( VAR_4 == 0 || VAR_5 == 0 )
    {
        return 0;
    }




    if ( VAR_4 == 1 && VAR_5 == 30 )
    {
        VAR_4 = 30;
        VAR_5 = 1;
    }

    if ( !VAR_4 || !VAR_5 )
        return 0;


    FUNC_4(&VAR_2->fmt.video.i_frame_rate,
                &VAR_2->fmt.video.i_frame_rate_base,
                VAR_4, VAR_5, 0);

    FUNC_2( &VAR_2->dts, VAR_2->fmt.video.i_frame_rate,
                               VAR_2->fmt.video.i_frame_rate_base );

    VAR_2->i_granule_shift = VAR_3->packet[28];

    return 1;
}
