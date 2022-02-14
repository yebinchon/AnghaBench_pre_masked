
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_guid_t ;
struct TYPE_3__ {TYPE_2__* p_next; int i_object_id; TYPE_2__* p_first; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
typedef TYPE_2__ asf_object_t ;


 scalar_t__ FUNC_0 (int *,int const*) ;

int FUNC_1( void *VAR_0, const vlc_guid_t *VAR_1 )
{
    int VAR_2;
    asf_object_t *VAR_3, *VAR_4;

    VAR_4 = (asf_object_t *)VAR_0;
    if( !VAR_4 )
        return 0;

    VAR_2 = 0;
    VAR_3 = VAR_4->common.p_first;
    while( VAR_3 )
    {
        if( FUNC_0( &VAR_3->common.i_object_id, VAR_1 ) )
            VAR_2++;

        VAR_3 = VAR_3->common.p_next;
    }
    return VAR_2;
}
