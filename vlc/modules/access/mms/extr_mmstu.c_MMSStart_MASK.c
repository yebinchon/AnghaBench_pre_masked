
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int i_data; int p_data; } ;
typedef TYPE_1__ var_buffer_t ;
typedef int uint32_t ;
struct TYPE_16__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_17__ {int i_media_packet_id_type; int i_command; int i_command_level; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10( stream_t *VAR_1, uint32_t VAR_2 )
{
    access_sys_t *VAR_3 = VAR_1->p_sys;
    var_buffer_t VAR_4;


    FUNC_9( &VAR_4, 0 );
    FUNC_6( &VAR_4, 0 );
    FUNC_5( &VAR_4, 0xffffffff );
    FUNC_5( &VAR_4, VAR_2 );
    FUNC_7( &VAR_4, 0xff );
    FUNC_7( &VAR_4, 0xff );
    FUNC_7( &VAR_4, 0xff );
    FUNC_7( &VAR_4, 0x00 );
    FUNC_5( &VAR_4, VAR_3->i_media_packet_id_type );

    FUNC_1( VAR_1, 0x07, VAR_3->i_command_level, 0x0001ffff,
                     VAR_4.p_data, VAR_4.i_data );

    FUNC_8( &VAR_4 );

    FUNC_0( VAR_1, 0x05, 0 );

    if( VAR_3->i_command != 0x05 )
    {
        FUNC_4( VAR_1,
                 "unknown answer (0x%x instead of 0x05)",
                 VAR_3->i_command );
        return -1;
    }
    else
    {

        if( FUNC_2( VAR_1, VAR_0 ) < 0 )
            return -1;
        FUNC_3( VAR_1, "streaming started" );
        return 0;
    }
}
