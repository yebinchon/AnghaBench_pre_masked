
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int service_data_hdlr_t ;
struct TYPE_5__ {int p_callback; void* priv; } ;
typedef TYPE_1__ cea708_demux_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

cea708_demux_t * FUNC_2( void *VAR_0, service_data_hdlr_t VAR_1 )
{
    cea708_demux_t *VAR_2 = FUNC_1( sizeof(cea708_demux_t) );
    if( VAR_2 )
    {
        VAR_2->priv = VAR_0;
        VAR_2->p_callback = VAR_1;
        FUNC_0( VAR_2 );
    }
    return VAR_2;
}
