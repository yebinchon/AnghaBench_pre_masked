
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {int scanning; double sampling_rate; int bytes_per_line; double offset; int* start; int* count; int synchronous; int interlaced; int sampling_format; } ;
struct TYPE_8__ {int i_width; int rd_telx; int p_wss_buffer; TYPE_3__ rd_wss; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_7->p_sys;
    FUNC_4( &VAR_8->rd_wss );

    VAR_8->rd_wss.scanning = 625;
    VAR_8->rd_wss.sampling_format = VAR_2;
    VAR_8->rd_wss.sampling_rate = 13.5e6;
    VAR_8->rd_wss.bytes_per_line = 720 * 2;
    VAR_8->rd_wss.offset = 9.5e-6 * 13.5e6;

    VAR_8->rd_wss.start[0] = 23;
    VAR_8->rd_wss.count[0] = 1;
    VAR_8->rd_wss.start[1] = 0;
    VAR_8->rd_wss.count[1] = 0;

    VAR_8->rd_wss.interlaced = VAR_0;
    VAR_8->rd_wss.synchronous = VAR_1;

    if ( FUNC_2( &VAR_8->rd_wss,
                                       VAR_3,
                                                    2 ) == 0 )
    {
        FUNC_1( VAR_7, "cannot initialize zvbi for WSS" );
        FUNC_3 ( &VAR_8->rd_telx );
        return VAR_4;
    }

    VAR_8->p_wss_buffer = FUNC_0( VAR_8->i_width * 2 );
    if( !VAR_8->p_wss_buffer )
    {
        FUNC_3 ( &VAR_8->rd_telx );
        return VAR_5;
    }
    return VAR_6;
}
