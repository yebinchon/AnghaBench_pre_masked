
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int s; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_cat; int i_stream; void* i_fourcc; int i_peek; void* i_type; int i_pos; int i_size; } ;
typedef TYPE_2__ avi_packet_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*,int *,int *) ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 void* FUNC_2 (int const,int const,int const,int const) ;
 int VAR_3 ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int ,int const**,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_4, avi_packet_t *VAR_5 )
{
    const uint8_t *VAR_6;

    if( FUNC_4( VAR_4->s, &VAR_6, 16 ) < 16 )
    {
        return VAR_2;
    }
    VAR_5->i_fourcc = FUNC_2( VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3] );
    VAR_5->i_size = FUNC_1( VAR_6 + 4 );
    VAR_5->i_pos = FUNC_5( VAR_4->s );
    if( VAR_5->i_fourcc == VAR_0 || VAR_5->i_fourcc == VAR_1 )
    {
        VAR_5->i_type = FUNC_2( VAR_6[8], VAR_6[9],
                                   VAR_6[10], VAR_6[11] );
    }
    else
    {
        VAR_5->i_type = 0;
    }

    FUNC_3( VAR_5->i_peek, VAR_6 + 8, 8 );

    FUNC_0( VAR_5->i_fourcc, &VAR_5->i_stream, &VAR_5->i_cat );
    return VAR_3;
}
