
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int i_data; int p_data; } ;
typedef TYPE_1__ var_buffer_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_14__ {int i_seq_num; int lock_netwrite; int i_handle_tcp; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_3, int VAR_4,
                            uint32_t VAR_5, uint32_t VAR_6,
                            uint8_t *VAR_7, int VAR_8 )
{
    var_buffer_t VAR_9;
    access_sys_t *VAR_10 = VAR_3->p_sys;
    int VAR_11, VAR_12;
    int VAR_13 = VAR_8;

    while( VAR_13 & 0x7 ) VAR_13++;
    VAR_11 = VAR_13 >> 3;


    FUNC_6( &VAR_9, 0 );

    FUNC_2( &VAR_9, 0x00000001 );
    FUNC_2( &VAR_9, 0xB00BFACE );

    FUNC_2( &VAR_9, VAR_13 + VAR_0 - 16 );
    FUNC_2( &VAR_9, 0x20534d4d );
    FUNC_2( &VAR_9, VAR_11 + 4 );
    FUNC_2( &VAR_9, VAR_10->i_seq_num ); VAR_10->i_seq_num++;
    FUNC_3( &VAR_9, 0 );
    FUNC_2( &VAR_9, VAR_11 + 2 );
    FUNC_2( &VAR_9, 0x00030000 | VAR_4 );
    FUNC_2( &VAR_9, VAR_5 );
    FUNC_2( &VAR_9, VAR_6 );


    if( VAR_7 && VAR_13 > 0 )
    {
        FUNC_4( &VAR_9, VAR_7, VAR_8 );
    }


    FUNC_3( &VAR_9, 0 );


    FUNC_7( &VAR_10->lock_netwrite );
    VAR_12 = FUNC_1( VAR_3, VAR_10->i_handle_tcp, VAR_9.p_data,
                       VAR_9.i_data - ( 8 - ( VAR_13 - VAR_8 ) ) );
    FUNC_8( &VAR_10->lock_netwrite );

    if( VAR_12 != VAR_9.i_data - ( 8 - ( VAR_13 - VAR_8 ) ) )
    {
        FUNC_5( &VAR_9 );
        FUNC_0( VAR_3, "failed to send command" );
        return VAR_1;
    }

    FUNC_5( &VAR_9 );
    return VAR_2;
}
