
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* data; } ;
typedef TYPE_1__ vbi_sliced ;
typedef int uint8_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {int i_aspect; int p_wss_buffer; int rd_wss; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    vbi_sliced VAR_3[1];

    if ( FUNC_3( &VAR_2->rd_wss, VAR_2->p_wss_buffer, VAR_3 ) == 0 )
    {
        VAR_2->i_aspect = 4 * VAR_0 / 3;
    }
    else
    {
        unsigned int VAR_4 = VAR_2->i_aspect;
        uint8_t *VAR_5 = VAR_3[0].data;
        int VAR_6 = VAR_5[0] & 7;

        if ( !FUNC_2(VAR_5[0] & 15) )
            FUNC_1( VAR_1, "WSS parity error" );
        else if ( VAR_6 == 7 )
            VAR_2->i_aspect = 16 * VAR_0 / 9;
        else
            VAR_2->i_aspect = 4 * VAR_0 / 3;

        if ( VAR_2->i_aspect != VAR_4 )
            FUNC_0( VAR_1, "new WSS information (ra=%x md=%x cod=%x hlp=%x rvd=%x sub=%x pos=%x srd=%x c=%x cp=%x)",
                     VAR_6, (VAR_5[0] & 0x10) >> 4, (VAR_5[0] & 0x20) >> 5,
                     (VAR_5[0] & 0x40) >> 6, (VAR_5[0] & 0x80) >> 7, VAR_5[1] & 0x01,
                     (VAR_5[1] >> 1) & 3, (VAR_5[1] & 0x08) >> 3, (VAR_5[1] & 0x10) >> 4,
                     (VAR_5[1] & 0x20) >> 5 );
    }
}
