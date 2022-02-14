
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int p_next; scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_9__ {scalar_t__ i_id; scalar_t__ i_new_id; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_10__ {scalar_t__ i_id; } ;
typedef TYPE_3__ es_format_t ;


 int FUNC_0 (TYPE_1__*,char*,scalar_t__,scalar_t__) ;
 void* FUNC_1 (int ,TYPE_3__ const*) ;

__attribute__((used)) static void *FUNC_2( sout_stream_t *VAR_0, const es_format_t *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = (sout_stream_sys_t *)VAR_0->p_sys;
    es_format_t VAR_3;

    if( VAR_1->i_id == VAR_2->i_id )
    {
        FUNC_0( VAR_0, "turning ID %d to %d", VAR_2->i_id,
                 VAR_2->i_new_id );

        VAR_3 = *VAR_1;
        VAR_3.i_id = VAR_2->i_new_id;
        VAR_1 = &VAR_3;
    }

    return FUNC_1( VAR_0->p_next, VAR_1 );
}
