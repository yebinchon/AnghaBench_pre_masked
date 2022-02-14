
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fetcher_request {int options; int rc; void* userdata; int const* cbs; int * item; } ;
struct background_worker {int dummy; } ;
typedef int input_item_t ;
typedef int input_item_meta_request_option_t ;
struct TYPE_3__ {struct background_worker* network; struct background_worker* local; } ;
typedef TYPE_1__ input_fetcher_t ;
typedef int input_fetcher_callbacks_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fetcher_request*,int) ;
 int FUNC_1 (struct fetcher_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct background_worker*,struct fetcher_request*,int *,int ) ;
 int FUNC_4 (int *) ;
 struct fetcher_request* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

int FUNC_8( input_fetcher_t* VAR_4, input_item_t* VAR_5,
    input_item_meta_request_option_t VAR_6,
    const input_fetcher_callbacks_t *VAR_7, void *VAR_8 )
{
    FUNC_2(VAR_6 & VAR_0);
    struct fetcher_request* VAR_9 = FUNC_5( sizeof *VAR_9 );

    if( FUNC_6( !VAR_9 ) )
        return VAR_2;

    VAR_9->item = VAR_5;
    VAR_9->options = VAR_6;
    VAR_9->cbs = VAR_7;
    VAR_9->userdata = VAR_8;

    FUNC_7( &VAR_9->rc );
    FUNC_4( VAR_5 );

    struct background_worker* VAR_10 =
        VAR_6 & VAR_1 ? VAR_4->local : VAR_4->network;
    if( FUNC_3( VAR_10, VAR_9, ((void*)0), 0 ) )
        FUNC_0(VAR_9, 0);

    FUNC_1( VAR_9 );
    return VAR_3;
}
