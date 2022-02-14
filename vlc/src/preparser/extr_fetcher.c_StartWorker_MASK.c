
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetcher_thread {void (* pf_worker ) (int *,struct fetcher_request*) ;int interrupt; int thread; int active; int * fetcher; struct background_worker* worker; struct fetcher_request* req; } ;
struct fetcher_request {int dummy; } ;
struct background_worker {int dummy; } ;
typedef int input_fetcher_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct fetcher_thread*) ;
 struct fetcher_thread* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,struct fetcher_thread*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( input_fetcher_t* VAR_5,
    void( *VAR_6 )( input_fetcher_t*, struct fetcher_request* ),
    struct background_worker* VAR_7, struct fetcher_request* VAR_8, void** VAR_9 )
{
    struct fetcher_thread* VAR_10 = FUNC_2( sizeof *VAR_10 );

    if( FUNC_3( !VAR_10 ) )
        return VAR_2;

    VAR_10->req = VAR_8;
    VAR_10->worker = VAR_7;
    VAR_10->fetcher = VAR_5;
    VAR_10->pf_worker = VAR_6;

    FUNC_6( &VAR_10->interrupt );
    FUNC_0( &VAR_10->active, 1 );

    if( !FUNC_4( &VAR_10->thread, VAR_0, VAR_10, VAR_4 ) )
    {
        *VAR_9 = VAR_10;
        return VAR_3;
    }

    FUNC_5( &VAR_10->interrupt );
    FUNC_1( VAR_10 );
    return VAR_1;
}
