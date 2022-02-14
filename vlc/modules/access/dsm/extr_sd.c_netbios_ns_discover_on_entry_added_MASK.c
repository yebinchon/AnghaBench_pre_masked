
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int services_discovery_t ;
typedef int netbios_ns_entry ;
typedef int input_item_t ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*) ;
 char* FUNC_6 (int *) ;
 char FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( void *VAR_2,
                                                netbios_ns_entry *VAR_3 )
{
    services_discovery_t *VAR_4 = (services_discovery_t *)VAR_2;

    char VAR_5 = FUNC_7( VAR_3 );

    if( VAR_5 == VAR_1 )
    {
        input_item_t *VAR_6;
        char *VAR_7;
        const char *VAR_8 = FUNC_6( VAR_3 );

        if( FUNC_0(&VAR_7, "smb://%s", VAR_8) < 0 )
            return;

        VAR_6 = FUNC_3( VAR_7, VAR_8, VAR_0 );
        FUNC_5( VAR_4, "Adding item %s", VAR_7 );
        FUNC_2(VAR_7);

        FUNC_1( VAR_4, VAR_3, VAR_6 );
        FUNC_4( VAR_6 );
    }
}
