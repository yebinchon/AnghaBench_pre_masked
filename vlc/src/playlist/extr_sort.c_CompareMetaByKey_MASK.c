
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_playlist_item_meta {int rating; int has_rating; int url; int disc_number; int has_disc_number; int track_number; int has_track_number; int date; int has_date; int genre; int album_artist; int album; int artist; int duration; int title_or_name; } ;
typedef enum vlc_playlist_sort_key { ____Placeholder_vlc_playlist_sort_key } vlc_playlist_sort_key ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static inline int
FUNC_5(const struct vlc_playlist_item_meta *VAR_0,
                 const struct vlc_playlist_item_meta *VAR_1,
                 enum vlc_playlist_sort_key VAR_2)
{
    switch (VAR_2)
    {
        case 130:
            return FUNC_2(VAR_0->title_or_name, VAR_1->title_or_name);
        case 133:
            return FUNC_0(VAR_0->duration, VAR_1->duration);
        case 136:
            return FUNC_2(VAR_0->artist, VAR_1->artist);
        case 138:
            return FUNC_2(VAR_0->album, VAR_1->album);
        case 137:
            return FUNC_2(VAR_0->album_artist, VAR_1->album_artist);
        case 132:
            return FUNC_2(VAR_0->genre, VAR_1->genre);
        case 135:
            return FUNC_1(VAR_0->has_date, VAR_0->date,
                                           VAR_1->has_date, VAR_1->date);
        case 129:
            return FUNC_1(VAR_0->has_track_number, VAR_0->track_number,
                                           VAR_1->has_track_number, VAR_1->track_number);
        case 134:
            return FUNC_1(VAR_0->has_disc_number, VAR_0->disc_number,
                                           VAR_1->has_disc_number, VAR_1->disc_number);
        case 128:
            return FUNC_2(VAR_0->url, VAR_1->url);
        case 131:
            return FUNC_1(VAR_0->has_rating, VAR_0->rating,
                                           VAR_1->has_rating, VAR_1->rating);
        default:
            FUNC_3(!"Unknown sort key");
            FUNC_4();
     }
}
