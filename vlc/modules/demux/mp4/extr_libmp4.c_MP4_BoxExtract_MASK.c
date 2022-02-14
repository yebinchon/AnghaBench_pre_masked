
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ i_type; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ MP4_Box_t ;



MP4_Box_t * FUNC_0( MP4_Box_t **VAR_0, uint32_t VAR_1 )
{
    MP4_Box_t *VAR_2 = *VAR_0;
    while( VAR_2 )
    {
        if( VAR_2->i_type == VAR_1 )
        {
            *VAR_0 = VAR_2->p_next;
            VAR_2->p_next = ((void*)0);
            return VAR_2;
        }
        VAR_0 = &VAR_2->p_next;
        VAR_2 = VAR_2->p_next;
    }
    return ((void*)0);
}
