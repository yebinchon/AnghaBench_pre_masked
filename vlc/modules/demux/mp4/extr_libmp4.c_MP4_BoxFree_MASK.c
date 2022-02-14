
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_payload; } ;
struct TYPE_7__ {TYPE_1__ data; int (* pf_free ) (TYPE_2__*) ;struct TYPE_7__* p_next; struct TYPE_7__* p_first; } ;
typedef TYPE_2__ MP4_Box_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2( MP4_Box_t *VAR_0 )
{
    MP4_Box_t *VAR_1;

    if( !VAR_0 )
        return;

    for( VAR_1 = VAR_0->p_first; VAR_1 != ((void*)0); )
    {
        MP4_Box_t *VAR_2;

        VAR_2 = VAR_1->p_next;
        FUNC_2( VAR_1 );
        VAR_1 = VAR_2;
    }

    if( VAR_0->pf_free )
        VAR_0->pf_free( VAR_0 );

    FUNC_0( VAR_0->data.p_payload );
    FUNC_0( VAR_0 );
}
