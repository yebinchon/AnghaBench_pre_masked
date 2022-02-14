
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_renderer_item_t ;
typedef int vlc_renderer_discovery_t ;
typedef int uint16_t ;
struct TYPE_3__ {int services_name_to_input_item; scalar_t__ parent; } ;
typedef TYPE_1__ discovery_sys_t ;
typedef int AvahiStringList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 int * FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char**,char**,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int *,char const*,int *) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (char const*,char*,char*,char const*,char const*,char*,int) ;

__attribute__((used)) static void FUNC_11( const char *VAR_2, const char *VAR_3,
                          const char *VAR_4, uint16_t VAR_5,
                          AvahiStringList *VAR_6, discovery_sys_t *VAR_7 )
{
    vlc_renderer_discovery_t *VAR_8 = ( vlc_renderer_discovery_t* )(VAR_7->parent);
    AvahiStringList *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0);
    const char *VAR_13 = ((void*)0);
    const char *VAR_14 = ((void*)0);
    int VAR_15 = 0;

    if( !FUNC_6( "chromecast", VAR_2 ) ) {
        int VAR_16 = 0;


        VAR_9 = FUNC_3( VAR_6, "ca" );
        if( VAR_9 != ((void*)0) ) {
            char *VAR_17 = ((void*)0);
            char *VAR_18 = ((void*)0);
            if( FUNC_4( VAR_9, &VAR_17, &VAR_18, ((void*)0) ) == 0 &&
                VAR_18 != ((void*)0) )
            {
                int VAR_19 = FUNC_1( VAR_18 );

                if( ( VAR_19 & 0x01 ) != 0 )
                    VAR_15 |= VAR_1;
                if( ( VAR_19 & 0x04 ) != 0 )
                    VAR_15 |= VAR_0;
            }

            if( VAR_17 != ((void*)0) )
                FUNC_2( (void *)VAR_17 );
            if( VAR_18 != ((void*)0) )
                FUNC_2( (void *)VAR_18 );
        }


        VAR_9 = FUNC_3( VAR_6, "fn" );
        if( VAR_9 != ((void*)0) )
        {
            char *VAR_20 = ((void*)0);
            char *VAR_21 = ((void*)0);
            if( FUNC_4( VAR_9, &VAR_20, &VAR_21, ((void*)0) ) == 0 &&
                VAR_21 != ((void*)0) )
            {
                VAR_10 = FUNC_7( VAR_21 );
                if( !VAR_10 )
                    VAR_16 = -1;
            }

            if( VAR_20 != ((void*)0) )
                FUNC_2( (void *)VAR_20 );
            if( VAR_21 != ((void*)0) )
                FUNC_2( (void *)VAR_21 );
        }
        if( VAR_16 < 0 )
            goto error;


        VAR_9 = FUNC_3( VAR_6, "ic" );
        if( VAR_9 != ((void*)0) ) {
            char *VAR_22 = ((void*)0);
            char *VAR_23 = ((void*)0);
            if( FUNC_4( VAR_9, &VAR_22, &VAR_23, ((void*)0) ) == 0 &&
                VAR_23 != ((void*)0) )
                VAR_16 = FUNC_0( &VAR_11, "http://%s:8008%s", VAR_4, VAR_23);

            if( VAR_22 != ((void*)0) )
                FUNC_2( (void *)VAR_22 );
            if( VAR_23 != ((void*)0) )
                FUNC_2( (void *)VAR_23 );
        }
        if( VAR_16 < 0 )
            goto error;

        if( FUNC_0( &VAR_12, "%s://%s:%u", VAR_2, VAR_4, VAR_5 ) < 0 )
            goto error;

        VAR_14 = VAR_15 & VAR_1 ? ((void*)0) : "no-video";
        VAR_13 = "cc_demux";
    }

    vlc_renderer_item_t *VAR_24 =
        FUNC_10( VAR_2, VAR_10 ? VAR_10 : VAR_3, VAR_12, VAR_14,
                               VAR_13, VAR_11, VAR_15 );
    if( VAR_24 == ((void*)0) )
        goto error;

    FUNC_8( &VAR_7->services_name_to_input_item,
        VAR_3, VAR_24);
    FUNC_9( VAR_8, VAR_24 );

error:
    FUNC_5( VAR_10 );
    FUNC_5( VAR_11 );
    FUNC_5( VAR_12 );
}
