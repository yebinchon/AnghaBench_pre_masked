
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ p_media_library; scalar_t__ main_playlist; int * parser; scalar_t__ p_vlm; scalar_t__ media_source_provider; scalar_t__ p_thumbnailer; } ;
typedef TYPE_2__ libvlc_priv_t ;
struct TYPE_16__ {int logger; } ;
struct TYPE_18__ {TYPE_1__ obj; } ;
typedef TYPE_3__ libvlc_int_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (scalar_t__) ;
 TYPE_2__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,char*,...) ;
 int FUNC_13 (TYPE_3__*,char*,char*,int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (TYPE_3__*,char*) ;
 char* FUNC_17 (TYPE_3__*,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;

void FUNC_24( libvlc_int_t *VAR_1 )
{
    libvlc_priv_t *VAR_2 = FUNC_10 (VAR_1);

    if (VAR_2->parser != ((void*)0))
        FUNC_3(VAR_2->parser);


    FUNC_12( VAR_1, "removing all interfaces" );
    FUNC_5( VAR_1 );

    if ( VAR_2->p_thumbnailer )
        FUNC_22( VAR_2->p_thumbnailer );

    if( VAR_2->media_source_provider )
        FUNC_19( VAR_2->media_source_provider );

    FUNC_7( VAR_1 );
    FUNC_8( VAR_1 );
    char *VAR_3 = FUNC_17( VAR_1, "pidfile" );
    if( VAR_3 != ((void*)0) )
    {
        FUNC_12( VAR_1, "removing PID file %s", VAR_3 );
        if( FUNC_15( VAR_3 ) )
            FUNC_13( VAR_1, "cannot remove PID file %s: %s",
                      VAR_3, FUNC_21(VAR_0) );
        FUNC_2( VAR_3 );
    }


    if (VAR_2->parser != ((void*)0))
        FUNC_4(VAR_2->parser);

    if (VAR_2->main_playlist)
        FUNC_20(VAR_2->main_playlist);

    if ( VAR_2->p_media_library )
        FUNC_9( VAR_2->p_media_library );

    FUNC_6( VAR_1 );


    if( !FUNC_16( VAR_1, "ignore-config" ) )
        FUNC_1( FUNC_0(VAR_1) );

    FUNC_18(VAR_1->obj.logger);

    FUNC_11 (1);



}
