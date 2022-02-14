
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_playlist_view {struct vlc_playlist* playlist; } ;
struct vlc_playlist_export {int base_url; int file; struct vlc_playlist_view* playlist_view; } ;
struct vlc_playlist {int player; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct vlc_playlist_export*,char*,char const*,int) ;
 int FUNC_4 (struct vlc_playlist_export*,int *) ;
 int FUNC_5 (struct vlc_playlist_export*,char*,...) ;
 struct vlc_playlist_export* FUNC_6 (int ,int,char*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (struct vlc_playlist_export*) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vlc_playlist*) ;
 int FUNC_12 (int ) ;

int
FUNC_13(struct vlc_playlist *VAR_4, const char *VAR_5,
                    const char *VAR_6)
{
    FUNC_11(VAR_4);

    struct vlc_playlist_export *VAR_7 =
        FUNC_6(FUNC_10(VAR_4->player),
                          sizeof(*VAR_7), "playlist export");

    if (!VAR_7)
        return VAR_1;

    int VAR_8 = VAR_0;

    struct vlc_playlist_view VAR_9 = { .playlist = VAR_4 };

    VAR_7->playlist_view = &VAR_9;
    VAR_7->base_url = FUNC_9(VAR_5, ((void*)0));
    VAR_7->file = FUNC_7(VAR_5, "wt");
    if (!VAR_7->file)
    {
        FUNC_5(VAR_7, "Could not create playlist file %s, %s",
                VAR_5, FUNC_12(VAR_3));
        goto close_file;
    }


    module_t *VAR_10 = FUNC_3(VAR_7, "playlist export", VAR_6, 1);

    if (!VAR_10)
    {
        FUNC_5(VAR_7, "Could not export playlist");
        goto out;
    }

    FUNC_4(VAR_7, VAR_10);

    if (!FUNC_1(VAR_7->file))
        VAR_8 = VAR_2;
    else
        FUNC_5(VAR_7, "Could not write playlist file: %s",
                FUNC_12(VAR_3));

close_file:
    FUNC_0(VAR_7->file);
out:
   FUNC_2(VAR_7->base_url);
   FUNC_8(VAR_7);
   return VAR_8;
}
