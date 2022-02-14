
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vlc_playlist_item_meta {int has_date; int has_track_number; int has_disc_number; int has_rating; void* rating; int url; void* disc_number; void* track_number; void* date; int genre; int album_artist; int album; int artist; int duration; int title_or_name; TYPE_1__* item; } ;
struct TYPE_5__ {char* psz_name; int i_duration; } ;
typedef TYPE_2__ input_item_t ;
typedef enum vlc_playlist_sort_key { ____Placeholder_vlc_playlist_sort_key } vlc_playlist_sort_key ;
struct TYPE_4__ {TYPE_2__* media; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;
 char* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *,char const*) ;

__attribute__((used)) static int
FUNC_6(struct vlc_playlist_item_meta *VAR_13,
                                 enum vlc_playlist_sort_key VAR_14)
{
    input_item_t *VAR_15 = VAR_13->item->media;
    switch (VAR_14)
    {
        case 130:
        {
            const char *VAR_16 = FUNC_3(VAR_15, VAR_10);
            if (FUNC_0(VAR_16))
                VAR_16 = VAR_15->psz_name;
            return FUNC_5(&VAR_13->title_or_name,
                                                     VAR_16);
        }
        case 133:
        {
            if (VAR_15->i_duration == VAR_0
             || VAR_15->i_duration == VAR_1)
                VAR_13->duration = 0;
            else
                VAR_13->duration = VAR_15->i_duration;
            return VAR_2;
        }
        case 136:
        {
            const char *VAR_17 = FUNC_3(VAR_15,
                                                         VAR_5);
            return FUNC_5(&VAR_13->artist, VAR_17);
        }
        case 138:
        {
            const char *VAR_18 = FUNC_3(VAR_15, VAR_3);
            return FUNC_5(&VAR_13->album, VAR_18);
        }
        case 137:
        {
            const char *VAR_19 = FUNC_3(VAR_15,
                                                         VAR_4);
            return FUNC_5(&VAR_13->album_artist,
                                                     VAR_19);
        }
        case 132:
        {
            const char *VAR_20 = FUNC_3(VAR_15, VAR_8);
            return FUNC_5(&VAR_13->genre, VAR_20);
        }
        case 135:
        {
            const char *VAR_21 = FUNC_3(VAR_15, VAR_6);
            VAR_13->has_date = !FUNC_0(VAR_21);
            if (VAR_13->has_date)
                VAR_13->date = FUNC_2(VAR_21);
            return VAR_2;
        }
        case 129:
        {
            const char *VAR_22 = FUNC_3(VAR_15,
                                                       VAR_11);
            VAR_13->has_track_number = !FUNC_0(VAR_22);
            if (VAR_13->has_track_number)
                VAR_13->track_number = FUNC_2(VAR_22);
            return VAR_2;
        }
        case 134:
        {
            const char *VAR_23 = FUNC_3(VAR_15,
                                                       VAR_7);
            VAR_13->has_disc_number = !FUNC_0(VAR_23);
            if (VAR_13->has_disc_number)
                VAR_13->disc_number = FUNC_2(VAR_23);
            return VAR_2;
        }
        case 128:
        {
            const char *VAR_24 = FUNC_3(VAR_15, VAR_12);
            return FUNC_5(&VAR_13->url, VAR_24);
        }
        case 131:
        {
            const char *VAR_25 = FUNC_3(VAR_15, VAR_9);
            VAR_13->has_rating = !FUNC_0(VAR_25);
            if (VAR_13->has_rating)
                VAR_13->rating = FUNC_2(VAR_25);
            return VAR_2;
        }
        default:
            FUNC_1(!"Unknown sort key");
            FUNC_4();
    }
}
