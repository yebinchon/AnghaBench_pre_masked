
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_playlist_item_t ;
struct vlc_playlist_export {int file; int playlist_view; } ;
typedef int input_item_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 size_t FUNC_7 (int ) ;
 int * FUNC_8 (int ,size_t) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( struct vlc_playlist_export *VAR_0 )
{

    size_t VAR_1 = FUNC_7(VAR_0->playlist_view);
    for( size_t VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2 )
    {
        vlc_playlist_item_t *VAR_3 =
            FUNC_8(VAR_0->playlist_view, VAR_2);

        input_item_t *VAR_4 = FUNC_6(VAR_3);

        char* VAR_5 = ((void*)0);
        char *VAR_6 = FUNC_5(VAR_4);
        if( VAR_6 )
            VAR_5 = FUNC_9( VAR_6 );
        FUNC_2( VAR_6 );

        if( VAR_5 )
        {
            char* VAR_7 = ((void*)0);
            VAR_6 = FUNC_3(VAR_4);
            if( VAR_6 )
                VAR_7 = FUNC_9( VAR_6 );
            FUNC_2( VAR_6 );

            vlc_tick_t VAR_8 = FUNC_4(VAR_4);
            int VAR_9 = FUNC_0( VAR_8 ) / 60;
            int VAR_10 = FUNC_0( VAR_8 ) - VAR_9 * 60;


            if( VAR_7 && *VAR_7 )
                FUNC_1( VAR_0->file, "    <li>%s - %s (%02d:%02d)</li>\n", VAR_7, VAR_5, VAR_9, VAR_10 );
            else
                FUNC_1( VAR_0->file, "    <li>%s (%2d:%2d)</li>\n", VAR_5, VAR_9, VAR_10);

            FUNC_2( VAR_7 );
        }
        FUNC_2( VAR_5 );
    }
}
