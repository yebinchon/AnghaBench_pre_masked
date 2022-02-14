
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int worker; } ;
typedef TYPE_1__ vlc_thumbnailer_t ;
struct TYPE_13__ {int timeout; int input_item; } ;
struct TYPE_12__ {int done; int lock; TYPE_3__ params; int * input_thread; TYPE_1__* thumbnailer; } ;
typedef TYPE_2__ vlc_thumbnailer_request_t ;
typedef TYPE_3__ vlc_thumbnailer_params_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static vlc_thumbnailer_request_t*
FUNC_7( vlc_thumbnailer_t* VAR_2,
                           const vlc_thumbnailer_params_t* VAR_3 )
{
    vlc_thumbnailer_request_t *VAR_4 = FUNC_3( sizeof( *VAR_4 ) );
    if ( FUNC_5( VAR_4 == ((void*)0) ) )
        return ((void*)0);
    VAR_4->thumbnailer = VAR_2;
    VAR_4->input_thread = ((void*)0);
    VAR_4->params = *(vlc_thumbnailer_params_t*)VAR_3;
    VAR_4->done = 0;
    FUNC_2( VAR_4->params.input_item );
    FUNC_6( &VAR_4->lock );

    int VAR_5 = VAR_3->timeout == VAR_1 ?
                0 : FUNC_0( VAR_3->timeout );
    if ( FUNC_1( VAR_2->worker, VAR_4, VAR_4,
                                  VAR_5 ) != VAR_0 )
    {
        FUNC_4( VAR_4 );
        return ((void*)0);
    }
    return VAR_4;
}
