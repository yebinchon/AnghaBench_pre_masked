
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* p_stream; } ;
struct TYPE_11__ {TYPE_3__ u; } ;
typedef TYPE_4__ ts_pid_t ;
typedef int tail ;
struct TYPE_12__ {int i_buffer; struct TYPE_12__* p_next; } ;
typedef TYPE_5__ block_t ;
struct TYPE_8__ {TYPE_5__* p_data; } ;
struct TYPE_9__ {TYPE_1__ gather; } ;


 int FUNC_0 (TYPE_5__*,int*,int) ;

__attribute__((used)) static int FUNC_1( ts_pid_t *VAR_0 )
{

    block_t *VAR_1 = VAR_0->u.p_stream->gather.p_data;
    if( !VAR_1 || !VAR_1->p_next )
        return 0;
    while( VAR_1->p_next->p_next )
        VAR_1 = VAR_1->p_next;
    if( VAR_1->p_next->i_buffer > 4)
        VAR_1 = VAR_1->p_next;


    uint8_t VAR_2[ 188 ];
    const int VAR_3 = FUNC_0( VAR_1, VAR_2, sizeof( VAR_2 ) );
    if( VAR_3 < 4 )
        return 0;


    return ( VAR_2[ VAR_3 - 4 ] == 0 && VAR_2[ VAR_3 - 3 ] == 0 && VAR_2[ VAR_3 - 2 ] == 1 &&
             ( VAR_2[ VAR_3 - 1 ] == 0xb7 || VAR_2[ VAR_3 - 1 ] == 0x0a ) );
}
