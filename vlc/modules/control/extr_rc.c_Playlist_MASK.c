
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* psz_string; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int vlc_playlist_t ;
struct TYPE_9__ {TYPE_1__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
typedef int input_item_t ;
typedef enum vlc_playlist_playback_repeat { ____Placeholder_vlc_playlist_playback_repeat } vlc_playlist_playback_repeat ;
typedef enum vlc_playlist_playback_order { ____Placeholder_vlc_playlist_playback_order } vlc_playlist_playback_order ;
struct TYPE_7__ {int * playlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 long long FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int * FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,char*,int) ;
 int FUNC_8 (char*,char*,size_t) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,size_t,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,size_t) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(intf_thread_t *VAR_6, char const *VAR_7,
                     vlc_value_t VAR_8)
{
    vlc_playlist_t *VAR_9 = VAR_6->p_sys->playlist;

    FUNC_13(VAR_9);


    if( !FUNC_5( VAR_7, "repeat" ) )
    {
        bool VAR_10 = 1;
        enum vlc_playlist_playback_repeat VAR_11 =
            FUNC_11(VAR_9);
        bool VAR_12 = VAR_11 == VAR_3;

        if( FUNC_6( VAR_8.psz_string ) > 0 )
        {
            if ( ( !FUNC_7( VAR_8.psz_string, "on", 2 ) && VAR_12 ) ||
                 ( !FUNC_7( VAR_8.psz_string, "off", 3 ) && !VAR_12 ) )
            {
                VAR_10 = 0;
            }
        }

        if ( VAR_10 )
        {
            VAR_12 = !VAR_12;
            VAR_11 = VAR_12
                ? VAR_3
                : VAR_4;
            FUNC_16(VAR_9, VAR_11);
        }
        FUNC_3(VAR_6, "Setting repeat to %s", VAR_12 ? "true" : "false");
    }
    else if( !FUNC_5( VAR_7, "loop" ) )
    {
        bool VAR_13 = 1;
        enum vlc_playlist_playback_repeat VAR_14 =
            FUNC_11(VAR_9);
        bool VAR_15 = VAR_14 == VAR_2;

        if( FUNC_6( VAR_8.psz_string ) > 0 )
        {
            if ( ( !FUNC_7( VAR_8.psz_string, "on", 2 ) && VAR_15 ) ||
                 ( !FUNC_7( VAR_8.psz_string, "off", 3 ) && !VAR_15 ) )
            {
                VAR_13 = 0;
            }
        }

        if ( VAR_13 )
        {
            VAR_15 = !VAR_15;
            VAR_14 = VAR_15
                ? VAR_2
                : VAR_4;
            FUNC_16(VAR_9, VAR_14);
        }
        FUNC_3(VAR_6, "Setting loop to %s", VAR_15 ? "true" : "false");
    }
    else if( !FUNC_5( VAR_7, "random" ) )
    {
        bool VAR_16 = 1;
        enum vlc_playlist_playback_order VAR_17 =
            FUNC_10(VAR_9);
        bool VAR_18 = VAR_17 == VAR_1;

        if( FUNC_6( VAR_8.psz_string ) > 0 )
        {
            if ( ( !FUNC_7( VAR_8.psz_string, "on", 2 ) && VAR_18 ) ||
                 ( !FUNC_7( VAR_8.psz_string, "off", 3 ) && !VAR_18 ) )
            {
                VAR_16 = 0;
            }
        }

        if ( VAR_16 )
        {
            VAR_18 = !VAR_18;
            VAR_17 = VAR_18
                ? VAR_1
                : VAR_0;
            FUNC_15(VAR_9, VAR_17);
        }
        FUNC_3(VAR_6, "Setting random to %s", VAR_18 ? "true" : "false");
    }
    else if (!FUNC_5( VAR_7, "goto" ) )
    {
        long long VAR_19 = FUNC_1(VAR_8.psz_string);
        size_t VAR_20 = (size_t)VAR_19;
        size_t VAR_21 = FUNC_9(VAR_9);
        if (VAR_19 < 0)
            FUNC_3(VAR_6, FUNC_0("Error: `goto' needs an argument greater or equal to zero."));
        else if (VAR_20 < VAR_21)
            FUNC_14(VAR_9, VAR_20);
        else
            FUNC_3(VAR_6,
                      FUNC_8("Playlist has only %zu element",
                                   "Playlist has only %zu elements", VAR_21),
                      VAR_21);
    }
    else if ((!FUNC_5(VAR_7, "add") || !FUNC_5(VAR_7, "enqueue")) &&
             VAR_8.psz_string && *VAR_8.psz_string)
    {
        input_item_t *VAR_22 = FUNC_4( VAR_8.psz_string );

        if( VAR_22 )
        {
            FUNC_3(VAR_6, "Trying to %s %s to playlist.", VAR_7,
                      VAR_8.psz_string);

            size_t VAR_23 = FUNC_9(VAR_9);
            int VAR_24 = FUNC_12(VAR_9, VAR_23, VAR_22);
            FUNC_2(VAR_22);
            if (VAR_24 != VAR_5)
                goto end;

            if (!FUNC_5(VAR_7, "add"))
                FUNC_14(VAR_9, VAR_23);
        }
    }



    else
        FUNC_3(VAR_6, "unknown command!");

end:
    FUNC_17(VAR_9);
}
