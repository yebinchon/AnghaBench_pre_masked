
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_playlist_export {int file; } ;


 int FUNC_0 (struct vlc_playlist_export*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct vlc_playlist_export*,char*) ;

int FUNC_3( vlc_object_t *VAR_1 )
{
    struct vlc_playlist_export *VAR_2 = (struct vlc_playlist_export *) VAR_1;

    FUNC_2( VAR_2, "saving using HTML format" );


    FUNC_1( VAR_2->file, "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n"
"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" \"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
"<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n"
"<head>\n"
"  <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n"
"  <meta name=\"Generator\" content=\"VLC media player\" />\n"
"  <meta name=\"Author\" content=\"VLC, http://www.videolan.org/vlc/\" />\n"
"  <title>VLC generated playlist</title>\n"
"  <style type=\"text/css\">\n"
"    body {\n"
"      background-color: #E4F3FF;\n"
"      font-family: sans-serif, Helvetica, Arial;\n"
"      font-size: 13px;\n"
"    }\n"
"    h1 {\n"
"      color: #2D58AE;\n"
"      font-size: 25px;\n"
"    }\n"
"    hr {\n"
"      color: #555555;\n"
"    }\n"
"  </style>\n"
"</head>\n\n"
"<body>\n"
"  <h1>Playlist</h1>\n"
"  <hr />\n"
"  <ol>\n" );


    FUNC_0(VAR_2);


    FUNC_1( VAR_2->file, "  </ol>\n"
"  <hr />\n"
"</body>\n"
"</html>" );
    return VAR_0;
}
