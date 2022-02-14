
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_playlist_item_meta {scalar_t__ url; scalar_t__ genre; scalar_t__ album_artist; scalar_t__ album; scalar_t__ artist; scalar_t__ title_or_name; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(struct vlc_playlist_item_meta *VAR_0)
{
    FUNC_0((void *) VAR_0->title_or_name);
    FUNC_0((void *) VAR_0->artist);
    FUNC_0((void *) VAR_0->album);
    FUNC_0((void *) VAR_0->album_artist);
    FUNC_0((void *) VAR_0->genre);
    FUNC_0((void *) VAR_0->url);
}
