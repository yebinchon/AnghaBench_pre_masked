
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_renderer_discovery_t ;
typedef int services_discovery_t ;
struct TYPE_2__ {int services_name_to_input_item; scalar_t__ parent; scalar_t__ renderer; int client; } ;
typedef TYPE_1__ discovery_sys_t ;
typedef int AvahiServiceBrowser ;
typedef int AvahiProtocol ;
typedef int * AvahiLookupResultFlags ;
typedef int AvahiIfIndex ;
typedef scalar_t__ AvahiBrowserEvent ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int ,char const*,char const*,char const*,int ,int ,int ,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (scalar_t__,char*,char const*,...) ;
 int VAR_3 ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,char const*,int *,int *) ;
 void* FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static void FUNC_11(
    AvahiServiceBrowser *VAR_4,
    AvahiIfIndex VAR_5,
    AvahiProtocol VAR_6,
    AvahiBrowserEvent VAR_7,
    const char *VAR_8,
    const char *VAR_9,
    const char *VAR_10,
    AvahiLookupResultFlags VAR_11,
    void* VAR_12 )
{
    FUNC_0(VAR_4);
    FUNC_0(VAR_11);
    discovery_sys_t *VAR_13 = VAR_12;
    if( VAR_7 == VAR_0 )
    {
        if( FUNC_2( VAR_13->client, VAR_5, VAR_6,
                                        VAR_8, VAR_9, VAR_10, VAR_2,
                                        0,
                                        VAR_3, VAR_12 ) == ((void*)0) )
        {
            FUNC_5( VAR_13->parent, "failed to resolve service '%s': %s", VAR_8,
                     FUNC_3( FUNC_1( VAR_13->client ) ) );
        }
    }
    else if( VAR_7 == VAR_1 && VAR_8 )
    {

        void *VAR_14;
        VAR_14 = FUNC_8(
                        &VAR_13->services_name_to_input_item,
                        VAR_8 );
        if( !VAR_14 )
            FUNC_5( VAR_13->parent, "failed to find service '%s' in playlist", VAR_8 );
        else
        {
            if( VAR_13->renderer )
            {
                vlc_renderer_discovery_t *VAR_15 = ( vlc_renderer_discovery_t* )(VAR_13->parent);
                FUNC_9( VAR_15, VAR_14 );
                FUNC_10( VAR_14 );
            }
            else
            {
                services_discovery_t *VAR_16 = ( services_discovery_t* )(VAR_13->parent);
                FUNC_6( VAR_16, VAR_14 );
                FUNC_4( VAR_14 );
            }
            FUNC_7(
                        &VAR_13->services_name_to_input_item,
                        VAR_8, ((void*)0), ((void*)0) );
        }
    }
}
