
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct fetcher_request {int * item; } ;
typedef int input_item_t ;
struct TYPE_7__ {int downloader; } ;
typedef TYPE_1__ input_fetcher_t ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,struct fetcher_request*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( input_fetcher_t* VAR_2,
    struct fetcher_request* VAR_3, int VAR_4 )
{
    input_item_t* VAR_5 = VAR_3->item;

    if( FUNC_2( VAR_5 ) &&
        FUNC_3( VAR_2, VAR_3->item, VAR_4, "meta fetcher" ) )
    {
        return VAR_0;
    }

    if( ! FUNC_1( VAR_5 ) ||
        ! FUNC_4( VAR_2, VAR_5 ) ||
        ! FUNC_8( VAR_5 ) ||
        ! FUNC_7( VAR_5 ) ||
        ! FUNC_5( VAR_2, VAR_5, VAR_4 ) )
    {
        FUNC_0( VAR_2, VAR_3->item, 0 );
        if( !FUNC_6( VAR_2->downloader, VAR_3, ((void*)0), 0 ) )
            return VAR_1;
    }

    return VAR_0;
}
