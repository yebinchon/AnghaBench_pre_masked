
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* psz_desc; TYPE_2__* psz_url; } ;
struct TYPE_8__ {struct TYPE_8__* p_pkey; TYPE_1__ release; int lock; TYPE_3__* p_download; struct TYPE_8__* p_check; int thread; } ;
typedef TYPE_2__ update_t ;
struct TYPE_9__ {int thread; int aborted; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6( update_t *VAR_0 )
{
    FUNC_0( VAR_0 );

    if( VAR_0->p_check )
    {
        FUNC_3( VAR_0->p_check->thread, ((void*)0) );
        FUNC_2( VAR_0->p_check );
    }

    if( VAR_0->p_download )
    {
        FUNC_1( &VAR_0->p_download->aborted, 1 );
        FUNC_3( VAR_0->p_download->thread, ((void*)0) );
        FUNC_5(VAR_0->p_download);
    }

    FUNC_4( &VAR_0->lock );

    FUNC_2( VAR_0->release.psz_url );
    FUNC_2( VAR_0->release.psz_desc );
    FUNC_2( VAR_0->p_pkey );

    FUNC_2( VAR_0 );
}
