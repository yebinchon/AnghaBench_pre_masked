
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* psz_string; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int vlc_player_title_list ;
typedef int vlc_player_t ;
struct vlc_player_track {char const* name; } ;
struct vlc_player_title {int chapter_count; } ;
typedef int ssize_t ;
struct TYPE_9__ {TYPE_1__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_7__ {int playlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *) ;
 struct vlc_player_title* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct vlc_player_track* FUNC_9 (int *,int) ;
 int * FUNC_10 (int *) ;
 struct vlc_player_track* FUNC_11 (int *,int,size_t) ;
 size_t FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,size_t) ;
 int FUNC_17 (int *,struct vlc_player_track const*,int ) ;
 int FUNC_18 (int *,float) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 size_t FUNC_22 (int *) ;
 int * FUNC_23 (int ) ;
 int FUNC_24 (int) ;

__attribute__((used)) static void FUNC_25(intf_thread_t *VAR_4, char const *VAR_5,
                  vlc_value_t VAR_6)
{
    vlc_player_t *VAR_7 = FUNC_23(VAR_4->p_sys->playlist);

    FUNC_14(VAR_7);

    if( !FUNC_3( VAR_5, "seek" ) )
    {
        if( FUNC_4( VAR_6.psz_string ) > 0 &&
            VAR_6.psz_string[FUNC_4( VAR_6.psz_string ) - 1] == '%' )
        {
            float VAR_8 = FUNC_0( VAR_6.psz_string ) / 100.0;
            FUNC_18(VAR_7, VAR_8);
        }
        else
        {
            int VAR_9 = FUNC_1( VAR_6.psz_string );
            FUNC_20(VAR_7, FUNC_24(VAR_9));
        }
    }
    else if( !FUNC_3( VAR_5, "chapter" ) )
    {
            if ( *VAR_6.psz_string )
            {

                FUNC_15(VAR_7, FUNC_1(VAR_6.psz_string));
            }
            else
            {

                struct vlc_player_title const *VAR_10 = FUNC_7(VAR_7);
                ssize_t VAR_11 = -1;
                if (VAR_10 != ((void*)0))
                    VAR_11 = FUNC_6(VAR_7);
                if (VAR_11 != -1)
                    FUNC_2(VAR_4, "Currently playing chapter %zd/%zu.",
                              VAR_11, VAR_10->chapter_count);
                else
                    FUNC_2(VAR_4, "No chapter selected.");
            }
    }
    else if( !FUNC_3( VAR_5, "title" ) )
    {
            if ( *VAR_6.psz_string )
            {

                int VAR_12 = FUNC_1(VAR_6.psz_string);
                if (VAR_12 >= 0)
                    FUNC_16(VAR_7, (size_t)VAR_12);
            }
            else
            {

                ssize_t VAR_13 = FUNC_8(VAR_7);
                vlc_player_title_list *VAR_14 =
                    FUNC_10(VAR_7);
                size_t VAR_15 = 0;
                if (VAR_14 != ((void*)0))
                    VAR_15 = FUNC_22(VAR_14);
                if (VAR_13 != -1 && VAR_15 != 0)
                    FUNC_2(VAR_4, "Currently playing title %zd/%zu.", VAR_13,
                              VAR_15);
                else
                    FUNC_2(VAR_4, "No title selected.");
            }
    }
    else if( !FUNC_3( VAR_5, "atrack" )
             || !FUNC_3( VAR_5, "vtrack" )
             || !FUNC_3( VAR_5, "strack" ) )
    {
        enum es_format_category_e VAR_16;
        if( !FUNC_3( VAR_5, "atrack" ) )
            VAR_16 = VAR_0;
        else if( !FUNC_3( VAR_5, "vtrack" ) )
            VAR_16 = VAR_2;
        else
            VAR_16 = VAR_1;
        if( VAR_6.psz_string && *VAR_6.psz_string )
        {
            int VAR_17 = FUNC_1(VAR_6.psz_string);
            if (VAR_17 < 0)
                goto out;
            size_t VAR_18 = FUNC_12(VAR_7, VAR_16);
            if ((unsigned)VAR_17 >= VAR_18)
                goto out;
            struct vlc_player_track const *VAR_19 =
                FUNC_11(VAR_7, VAR_16, (size_t)VAR_17);
            if (!VAR_19)
                goto out;
            FUNC_17(VAR_7, VAR_19, VAR_3);
        }
        else
        {
            struct vlc_player_track const *VAR_20 =
                FUNC_9(VAR_7, VAR_16);
            char const *VAR_21 = VAR_20 ? VAR_20->name : VAR_5;
            FUNC_2(VAR_4, "+----[ %s ]", VAR_21);
            size_t VAR_22 = FUNC_12(VAR_7, VAR_16);
            for (size_t VAR_23 = 0; VAR_23 < VAR_22; ++VAR_23)
            {
                struct vlc_player_track const *VAR_24 =
                    FUNC_11(VAR_7, VAR_16, VAR_23);
                FUNC_2(VAR_4, "| %zu - %s%s",
                          VAR_23, VAR_24->name, VAR_24 == VAR_20 ? " *" : "");
            }
            FUNC_2(VAR_4, "+----[ end of %s ]", VAR_21);
        }
    }
    else if( !FUNC_3( VAR_5, "record" ) )
    {
        bool VAR_25 = 1;
        bool VAR_26 = FUNC_13(VAR_7);

        if( VAR_6.psz_string[0] != '\0' )
        {
            if ( ( !FUNC_5( VAR_6.psz_string, "on", 2 ) && VAR_26 ) ||
                 ( !FUNC_5( VAR_6.psz_string, "off", 3 ) && !VAR_26 ) )
            {
                VAR_25 = 0;
            }
        }
        if( VAR_25 )
        {
            VAR_26 = !VAR_26;
            FUNC_19( VAR_7, VAR_26 );
        }
    }
out:
    FUNC_21(VAR_7);
}
