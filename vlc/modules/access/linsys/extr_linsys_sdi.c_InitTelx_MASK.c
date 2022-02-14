
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int scanning; double sampling_rate; int bytes_per_line; double offset; int* count; int synchronous; int interlaced; scalar_t__* start; int sampling_format; } ;
struct TYPE_9__ {int i_telx_count; int i_width; TYPE_3__ rd_telx; int p_telx_buffer; scalar_t__ i_telx_line; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_7->p_sys;
    FUNC_3( &VAR_8->rd_telx );

    VAR_8->rd_telx.scanning = 625;
    VAR_8->rd_telx.sampling_format = VAR_2;
    VAR_8->rd_telx.sampling_rate = 13.5e6;
    VAR_8->rd_telx.bytes_per_line = 720 * 2;
    VAR_8->rd_telx.offset = 9.5e-6 * 13.5e6;

    VAR_8->rd_telx.start[0] = VAR_8->i_telx_line + 1;
    VAR_8->rd_telx.count[0] = VAR_8->i_telx_count;
    VAR_8->rd_telx.start[1] = VAR_8->i_telx_line + 1 + 313;
    VAR_8->rd_telx.count[1] = VAR_8->i_telx_count;

    VAR_8->rd_telx.interlaced = VAR_0;
    VAR_8->rd_telx.synchronous = VAR_1;

    if ( FUNC_1( &VAR_8->rd_telx, VAR_3,
                                       0 ) == 0 )
    {
        FUNC_0( VAR_7, "cannot initialize zvbi for Teletext" );
        FUNC_2 ( &VAR_8->rd_telx );
        return VAR_4;
    }

    VAR_8->p_telx_buffer = FUNC_4( VAR_8->i_telx_count * VAR_8->i_width, 4 );
    if( !VAR_8->p_telx_buffer )
    {
        FUNC_2 ( &VAR_8->rd_telx );
        return VAR_5;
    }
    return VAR_6;
}
