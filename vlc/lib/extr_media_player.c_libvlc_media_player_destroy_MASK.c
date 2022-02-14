
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_http_cookie_jar_t ;
struct TYPE_9__ {int * p_libvlc_instance; scalar_t__ p_md; int event_manager; int player; int listener; int aout_listener; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int * FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void FUNC_16( libvlc_media_player_t *VAR_1 )
{
    FUNC_0( VAR_1 );


    FUNC_5( FUNC_10(VAR_1),
                     "snapshot-file", VAR_0, VAR_1 );

    FUNC_12(VAR_1->player);
    FUNC_15(VAR_1->player, VAR_1->aout_listener);
    FUNC_13(VAR_1->player, VAR_1->listener);
    FUNC_14(VAR_1->player);

    FUNC_11(VAR_1->player);

    if (VAR_1->p_md)
        FUNC_4(VAR_1->p_md);
    FUNC_1(&VAR_1->event_manager);
    FUNC_2( VAR_1->p_md );

    vlc_http_cookie_jar_t *VAR_2 = FUNC_7( VAR_1, "http-cookies" );
    if ( VAR_2 )
    {
        FUNC_6( VAR_1, "http-cookies" );
        FUNC_8( VAR_2 );
    }

    libvlc_instance_t *VAR_3 = VAR_1->p_libvlc_instance;
    FUNC_9(VAR_1);
    FUNC_3(VAR_3);
}
