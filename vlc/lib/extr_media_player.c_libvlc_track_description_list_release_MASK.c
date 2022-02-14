
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; struct TYPE_4__* psz_name; } ;
typedef TYPE_1__ libvlc_track_description_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( libvlc_track_description_t *VAR_0 )
{
    libvlc_track_description_t *VAR_1, *VAR_2;
    VAR_1 = VAR_0;

    while ( VAR_1 )
    {
        FUNC_0( VAR_1->psz_name );
        VAR_2 = VAR_1;
        VAR_1 = VAR_2->p_next;
        FUNC_0( VAR_2 );
    }
}
