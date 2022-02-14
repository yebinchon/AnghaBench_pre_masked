
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_8__ {size_t i_size; int p_list; } ;
struct TYPE_10__ {TYPE_1__ remain; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_11__ {size_t i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 TYPE_4__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int ,int const*,size_t) ;

__attribute__((used)) static bool FUNC_3( stream_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2 )
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;
    if ( VAR_2 == 0 )
        return 1;
    block_t *VAR_4 = FUNC_0( VAR_2 );
    if ( !VAR_4 )
        return 0;
    FUNC_2( VAR_4->p_buffer, VAR_1, VAR_2 );
    VAR_4->i_buffer = VAR_2;
    FUNC_1( & VAR_3->remain.p_list, VAR_4 );
    VAR_3->remain.i_size += VAR_2;
    return 1;
}
