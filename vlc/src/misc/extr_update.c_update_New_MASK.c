
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int * psz_desc; int * psz_url; } ;
struct TYPE_5__ {int * p_pkey; int * p_check; int * p_download; TYPE_1__ release; int p_libvlc; int lock; } ;
typedef TYPE_2__ update_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

update_t *FUNC_5( vlc_object_t *VAR_0 )
{
    update_t *VAR_1;
    FUNC_0( VAR_0 );

    VAR_1 = (update_t *)FUNC_1( sizeof( update_t ) );
    if( !VAR_1 ) return ((void*)0);

    FUNC_3( &VAR_1->lock );

    VAR_1->p_libvlc = FUNC_4(VAR_0);

    VAR_1->release.psz_url = ((void*)0);
    VAR_1->release.psz_desc = ((void*)0);

    VAR_1->p_download = ((void*)0);
    VAR_1->p_check = ((void*)0);

    VAR_1->p_pkey = ((void*)0);
    FUNC_2();

    return VAR_1;
}
