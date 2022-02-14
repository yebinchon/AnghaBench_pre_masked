
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cb ) (int ,int *) ;int user_data; } ;
struct TYPE_4__ {int * input_thread; int lock; TYPE_1__ params; } ;
typedef TYPE_2__ vlc_thumbnailer_request_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( void* VAR_0, void* VAR_1 )
{
    FUNC_0(VAR_0);

    vlc_thumbnailer_request_t *VAR_2 = VAR_1;
    FUNC_4( &VAR_2->lock );




    if ( VAR_2->params.cb != ((void*)0) )
    {
        VAR_2->params.cb( VAR_2->params.user_data, ((void*)0) );
        VAR_2->params.cb = ((void*)0);
    }
    FUNC_5( &VAR_2->lock );
    FUNC_1( VAR_2->input_thread != ((void*)0) );
    FUNC_2( VAR_2->input_thread );
}
