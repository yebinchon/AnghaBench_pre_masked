
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_download; int p_libvlc; } ;
typedef TYPE_1__ update_t ;
struct TYPE_9__ {int thread; int aborted; int * psz_destdir; TYPE_1__* p_update; } ;
typedef TYPE_2__ update_download_thread_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7( update_t *VAR_2, const char *VAR_3 )
{
    FUNC_0( VAR_2 );


    if( VAR_2->p_download )
    {
        FUNC_1( &VAR_2->p_download->aborted, 1 );
        FUNC_5( VAR_2->p_download->thread, ((void*)0) );
        FUNC_6(VAR_2->p_download);
    }

    update_download_thread_t *VAR_4 =
        FUNC_4( VAR_2->p_libvlc, sizeof( *VAR_4 ),
                           "update download" );
    if( !VAR_4 )
        return;

    VAR_4->p_update = VAR_2;
    VAR_2->p_download = VAR_4;
    VAR_4->psz_destdir = VAR_3 ? FUNC_2( VAR_3 ) : ((void*)0);

    FUNC_1(&VAR_4->aborted, 0);
    FUNC_3( &VAR_4->thread, VAR_1, VAR_4, VAR_0 );
}
