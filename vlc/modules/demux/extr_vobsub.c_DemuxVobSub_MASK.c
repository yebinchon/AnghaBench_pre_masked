
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int i_track_id; scalar_t__ p_es; } ;
typedef TYPE_1__ vobsub_track_t ;
typedef int uint8_t ;
struct TYPE_14__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {int i_tracks; TYPE_1__* track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_16__ {int* p_buffer; size_t i_buffer; int i_pts; scalar_t__ i_length; int i_dts; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,int) ;
 int FUNC_8 (int*,int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10( demux_t *VAR_2, block_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    uint8_t *VAR_5 = VAR_3->p_buffer;
    uint8_t *VAR_6 = &VAR_3->p_buffer[VAR_3->i_buffer];
    int VAR_7;

    while( VAR_5 + 6 < VAR_6 )
    {
        int VAR_8 = FUNC_8( VAR_5, VAR_6 - VAR_5 );
        block_t *VAR_9;
        int VAR_10 = 0;
        int VAR_11;

        if( VAR_8 <= 0 )
            break;

        if( VAR_8 > VAR_6 - VAR_5 )
        {
            FUNC_5( VAR_2, "broken PES size" );
            break;
        }

        if( VAR_5[0] != 0 || VAR_5[1] != 0 || VAR_5[2] != 0x01 )
        {
            FUNC_5( VAR_2, "invalid PES" );
            break;
        }

        VAR_10 = FUNC_6( VAR_5, VAR_8 );
        if( (VAR_10&0xffe0) != 0xbd20 )
        {

            VAR_5 += VAR_8;
            continue;
        }


        VAR_9 = FUNC_1( VAR_8 );
        if( FUNC_9(VAR_9 == ((void*)0)) )
            break;
        FUNC_4( VAR_9->p_buffer, VAR_5, VAR_8);
        VAR_5 += VAR_8;

        if( FUNC_7( FUNC_0(VAR_2), VAR_9, 1 ) )
        {
            FUNC_2( VAR_9 );
            continue;
        }
        VAR_11 = VAR_10&0x1f;


        for( VAR_7 = 0; VAR_7 < VAR_4->i_tracks; VAR_7++ )
        {
            vobsub_track_t *VAR_12 = &VAR_4->track[VAR_7];

            VAR_9->i_dts = VAR_9->i_pts = VAR_3->i_pts;
            VAR_9->i_length = 0;

            if( VAR_12->p_es && VAR_12->i_track_id == VAR_11 )
            {
                FUNC_3( VAR_2->out, VAR_12->p_es, VAR_9 );
                VAR_3->i_pts = VAR_1;
                break;
            }
        }
        if( VAR_7 >= VAR_4->i_tracks )
        {
            FUNC_2( VAR_9 );
        }
    }

    return VAR_0;
}
