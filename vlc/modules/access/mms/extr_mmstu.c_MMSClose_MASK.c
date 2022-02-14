
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {scalar_t__ i_proto; scalar_t__ i_header; int p_header; int p_media; int p_cmd; int i_handle_udp; int i_handle_tcp; int i_command_level; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int ,int,int *,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( stream_t *VAR_1 )
{
    access_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_2( VAR_1, "Connection closed" );


    FUNC_1( VAR_1,
                     0x0d,
                     VAR_2->i_command_level,
                     0x00000001,
                     ((void*)0), 0 );


    FUNC_3( VAR_2->i_handle_tcp );
    if( VAR_2->i_proto == VAR_0 )
    {
        FUNC_3( VAR_2->i_handle_udp );
    }

    FUNC_0( VAR_2->p_cmd );
    FUNC_0( VAR_2->p_media );
    FUNC_0( VAR_2->p_header );
    VAR_2->i_header = 0;
}
