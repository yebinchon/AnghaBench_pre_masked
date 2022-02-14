
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_7__ {size_t i_size; TYPE_4__* p_list; } ;
struct TYPE_9__ {TYPE_1__ remain; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_10__ {scalar_t__ i_buffer; size_t p_buffer; struct TYPE_10__* p_next; } ;
typedef TYPE_4__ block_t ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_3( stream_t *VAR_0, uint8_t *VAR_1, size_t VAR_2 )
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;

    size_t VAR_4 = 0;

    while( VAR_3->remain.p_list && VAR_2 )
    {
        size_t VAR_5 = FUNC_0( VAR_2, VAR_3->remain.p_list->i_buffer );
        FUNC_2( VAR_1, VAR_3->remain.p_list->p_buffer, VAR_5 );

        VAR_2 -= VAR_5;
        VAR_4 += VAR_5;
        VAR_1 += VAR_5;


        VAR_3->remain.p_list->i_buffer -= VAR_5;
        VAR_3->remain.p_list->p_buffer += VAR_5;
        VAR_3->remain.i_size -= VAR_5;

        if ( VAR_3->remain.p_list->i_buffer == 0 )
        {
            block_t *VAR_6 = VAR_3->remain.p_list;
            VAR_3->remain.p_list = VAR_3->remain.p_list->p_next;
            FUNC_1( VAR_6 );
        }
    }
    return VAR_4;
}
