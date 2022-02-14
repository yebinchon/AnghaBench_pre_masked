
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fetcher_request {int options; int item; } ;
struct TYPE_4__ {int network; int owner; } ;
typedef TYPE_1__ input_fetcher_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fetcher_request*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct fetcher_request*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,struct fetcher_request*,int *,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5( input_fetcher_t* VAR_3, struct fetcher_request* VAR_4 )
{
    if( FUNC_1( VAR_3, VAR_4, VAR_0 ) == VAR_2 )
        return;

    if( FUNC_4( VAR_3->owner, "metadata-network-access" ) ||
        VAR_4->options & VAR_1 )
    {
        if( FUNC_2( VAR_3->network, VAR_4, ((void*)0), 0 ) )
            FUNC_0(VAR_4, 0);
    }
    else
    {
        FUNC_3( VAR_4->item, 1 );
        FUNC_0(VAR_4, 0);
    }
}
