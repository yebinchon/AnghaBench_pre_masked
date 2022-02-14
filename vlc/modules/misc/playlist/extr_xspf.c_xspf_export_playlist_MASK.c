
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_item_t ;
typedef int vlc_object_t ;
struct vlc_playlist_export {int file; int playlist_view; } ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 int * FUNC_3 (int ,size_t) ;
 int FUNC_4 (int *,int ,size_t) ;

int FUNC_5( vlc_object_t *VAR_1 )
{
    struct vlc_playlist_export *VAR_2 = (struct vlc_playlist_export *) VAR_1;


    FUNC_0( VAR_2->file, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n" );
    FUNC_0( VAR_2->file,
             "<playlist xmlns=\"http://xspf.org/ns/0/\" " "xmlns:vlc=\"http://www.videolan.org/vlc/playlist/ns/0/\" " "version=\"1\">\n" );



    FUNC_0( VAR_2->file, "\t<trackList>\n" );
    size_t VAR_3 = FUNC_2(VAR_2->playlist_view);
    for( size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4 )
    {
        vlc_playlist_item_t *VAR_5 =
            FUNC_3(VAR_2->playlist_view, VAR_4);
        input_item_t *VAR_6 = FUNC_1(VAR_5);

        FUNC_4(VAR_6, VAR_2->file, VAR_4);
    }

    FUNC_0( VAR_2->file, "\t</trackList>\n" );


    FUNC_0( VAR_2->file, "</playlist>\n" );

    return VAR_0;
}
