
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ renderer; int * poll; int * client; int parent; int services_name_to_input_item; } ;
typedef TYPE_1__ discovery_sys_t ;
struct TYPE_7__ {scalar_t__ b_renderer; int psz_service_name; } ;
typedef int AvahiServiceBrowser ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int ,TYPE_1__*,int*) ;
 int * FUNC_3 (int *,int ,int ,int ,int *,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,...) ;
 TYPE_2__* VAR_7 ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11( discovery_sys_t *VAR_8 )
{
    int VAR_9;

    FUNC_10( &VAR_8->services_name_to_input_item, 1 );

    VAR_8->poll = FUNC_7();
    if( VAR_8->poll == ((void*)0) )
    {
        FUNC_9( VAR_8->parent, "failed to create Avahi threaded poll" );
        goto error;
    }

    VAR_8->client = FUNC_2( FUNC_6(VAR_8->poll),
                                      0, VAR_6, VAR_8, &VAR_9 );
    if( VAR_8->client == ((void*)0) )
    {
        FUNC_9( VAR_8->parent, "failed to create avahi client: %s",
                 FUNC_4( VAR_9 ) );
        goto error;
    }

    for( unsigned VAR_10 = 0; VAR_10 < VAR_2; VAR_10++ )
    {
        if( VAR_7[VAR_10].b_renderer != VAR_8->renderer )
            continue;

        AvahiServiceBrowser *VAR_11;
        VAR_11 = FUNC_3( VAR_8->client, VAR_0,
                VAR_1,
                VAR_7[VAR_10].psz_service_name, ((void*)0),
                0, VAR_5, VAR_8 );
        if( VAR_11 == ((void*)0) )
        {
            FUNC_9( VAR_8->parent, "failed to create avahi service browser %s", FUNC_4( FUNC_0(VAR_8->client) ) );
            goto error;
        }
    }

    FUNC_8( VAR_8->poll );

    return VAR_4;

error:
    if( VAR_8->client != ((void*)0) )
        FUNC_1( VAR_8->client );
    if( VAR_8->poll != ((void*)0) )
        FUNC_5( VAR_8->poll );

    return VAR_3;
}
