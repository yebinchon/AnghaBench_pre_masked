
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ i_byte_offset; int i_time_offset; } ;
typedef TYPE_1__ flac_seekpoint_t ;
struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {int i_seekpoint; TYPE_6__** seekpoint; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_12__ {scalar_t__ i_byte_offset; int i_time_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (int,TYPE_6__**,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__ const,unsigned int) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( demux_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4,
                            unsigned VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_2->p_sys;
    flac_seekpoint_t *VAR_7;
    size_t VAR_8;

    if( VAR_5 == 0 )
        return;


    for( VAR_8 = 0; VAR_8 < (VAR_4-4)/18; VAR_8++ )
    {
        const int64_t VAR_9 = FUNC_0( &VAR_3[4+18*VAR_8+0] );
        int VAR_10;

        if( VAR_9 < 0 || VAR_9 >= VAR_1 ||
            FUNC_0( &VAR_3[4+18*VAR_8+8] ) < VAR_0 )
            break;

        VAR_7 = FUNC_4( sizeof (*VAR_7) );
        VAR_7->i_time_offset = FUNC_3(VAR_9, VAR_5);
        VAR_7->i_byte_offset = FUNC_0( &VAR_3[4+18*VAR_8+8] );


        for( VAR_10 = 0; VAR_10 < VAR_6->i_seekpoint; VAR_10++ )
        {
            if( VAR_6->seekpoint[VAR_10]->i_time_offset == VAR_7->i_time_offset ||
                VAR_6->seekpoint[VAR_10]->i_byte_offset == VAR_7->i_byte_offset )
            {
                FUNC_2( VAR_7 );
                VAR_7 = ((void*)0);
                break;
            }
        }
        if( VAR_7 )
        {
            FUNC_1( VAR_6->i_seekpoint, VAR_6->seekpoint, VAR_7 );
        }
    }

}
