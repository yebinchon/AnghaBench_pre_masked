
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* cb ) (int ,int *) ;int user_data; } ;
struct TYPE_8__ {int done; TYPE_3__* thumbnailer; int lock; TYPE_2__ params; int input_thread; } ;
typedef TYPE_4__ vlc_thumbnailer_request_t ;
struct TYPE_5__ {scalar_t__ value; } ;
struct vlc_input_event {scalar_t__ type; int * thumbnail; TYPE_1__ state; } ;
typedef int picture_t ;
typedef int input_thread_t ;
struct TYPE_7__ {int worker; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6( input_thread_t *VAR_4,
                            const struct vlc_input_event *VAR_5, void *VAR_6 )
{
    FUNC_0(VAR_4);
    if ( VAR_5->type != VAR_3 &&
         ( VAR_5->type != VAR_2 || ( VAR_5->state.value != VAR_1 &&
                                                 VAR_5->state.value != VAR_0 ) ) )
         return;

    vlc_thumbnailer_request_t* VAR_7 = VAR_6;
    picture_t *VAR_8 = ((void*)0);

    if ( VAR_5->type == VAR_3 )
    {




        FUNC_2( VAR_7->input_thread );
        VAR_8 = VAR_5->thumbnail;
    }
    FUNC_4( &VAR_7->lock );
    VAR_7->done = 1;




    if ( VAR_7->params.cb )
    {
        VAR_7->params.cb( VAR_7->params.user_data, VAR_8 );
        VAR_7->params.cb = ((void*)0);
    }
    FUNC_5( &VAR_7->lock );
    FUNC_1( VAR_7->thumbnailer->worker );
}
