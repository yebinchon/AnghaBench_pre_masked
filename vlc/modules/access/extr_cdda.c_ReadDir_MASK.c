
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int yearbuf ;
typedef int vlc_tick_t ;
typedef int vlc_meta_t ;
struct TYPE_13__ {int i_first_track; scalar_t__ i_last_track; int i_tracks; TYPE_2__* p_sectors; } ;
typedef TYPE_4__ vcddev_toc_t ;
struct TYPE_14__ {char* psz_url; TYPE_7__* p_sys; } ;
typedef TYPE_5__ stream_t ;
typedef int num ;
struct TYPE_15__ {size_t i_tracks; char const* psz_artist; char const* psz_coverart_url; scalar_t__ psz_date; scalar_t__ psz_title; TYPE_1__* p_tracks; } ;
typedef TYPE_6__ musicbrainz_release_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;
typedef int cddb_track_t ;
struct TYPE_16__ {int i_cdda_first; int i_cdda_tracks; scalar_t__ i_cdda_last; int cdtextc; TYPE_3__* mbrecord; int ** cdtextv; int * cddb; TYPE_4__* p_toc; } ;
typedef TYPE_7__ access_sys_t ;
struct TYPE_12__ {TYPE_6__* p_releases; scalar_t__ i_release; } ;
struct TYPE_11__ {int i_lba; } ;
struct TYPE_10__ {unsigned int i_index; scalar_t__ psz_artist; scalar_t__ psz_title; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char**,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,char*,int ) ;
 int * FUNC_13 (char*,char*,int const) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,char const*) ;
 int FUNC_18 (int *,char const*) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,char const*) ;
 int FUNC_21 (int *,char const*) ;
 int FUNC_22 (int *,char const*) ;
 int FUNC_23 (int *,char const*) ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (int *,char*) ;
 int FUNC_26 (int *,int *) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (TYPE_5__*,char*,int,int) ;
 int FUNC_29 (char*,int,char*,int) ;
 int FUNC_30 (scalar_t__,char*,unsigned int*) ;
 scalar_t__ FUNC_31 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_32 (int const*,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_33(stream_t *VAR_10, input_item_node_t *VAR_11)
{
    access_sys_t *VAR_12 = VAR_10->p_sys;
    const vcddev_toc_t *VAR_13 = VAR_12->p_toc;


    const int VAR_14 = VAR_12->i_cdda_first - VAR_12->p_toc->i_first_track;
    for (int VAR_15 = 0; VAR_15 < VAR_12->i_cdda_tracks; VAR_15++)
    {
        if(VAR_15 < VAR_14)
            continue;

        FUNC_28(VAR_10, "track[%d] start=%d", VAR_15, VAR_13->p_sectors[VAR_15].i_lba);


        char *VAR_16;

        if (FUNC_31(FUNC_3(&VAR_16, FUNC_2("Audio CD - Track %02i"),
                              VAR_15 - VAR_14 + 1 ) == -1))
            VAR_16 = ((void*)0);


        int VAR_17 = VAR_13->p_sectors[VAR_15].i_lba;
        int VAR_18 = VAR_13->p_sectors[VAR_15 + 1].i_lba;
        if(VAR_12->i_cdda_first + VAR_15 == VAR_12->i_cdda_last &&
           VAR_13->i_last_track > VAR_12->i_cdda_last)
            VAR_18 -= VAR_1;

        const vlc_tick_t VAR_19 =
            (vlc_tick_t)(VAR_18 - VAR_17)
            * VAR_0 * VAR_2 / 44100 / 2 / 2;

        input_item_t *VAR_20 = FUNC_13(VAR_10->psz_url,
                                                (VAR_16 != ((void*)0)) ? VAR_16 :
                                                VAR_10->psz_url, VAR_19);
        FUNC_11(VAR_16);

        if (FUNC_31(VAR_20 == ((void*)0)))
            continue;

        char *VAR_21;
        if (FUNC_27(FUNC_3(&VAR_21, "cdda-track=%i", VAR_15 + 1) != -1))
        {
            FUNC_12(VAR_20, VAR_21, VAR_3);
            FUNC_11(VAR_21);
        }

        if (FUNC_27(FUNC_3(&VAR_21, "cdda-first-sector=%i",
                            VAR_13->p_sectors[VAR_15].i_lba) != -1))
        {
            FUNC_12(VAR_20, VAR_21, VAR_3);
            FUNC_11(VAR_21);
        }

        if (FUNC_27(FUNC_3(&VAR_21, "cdda-last-sector=%i", VAR_18) != -1))
        {
            FUNC_12(VAR_20, VAR_21, VAR_3);
            FUNC_11(VAR_21);
        }

        const char *VAR_22 = ((void*)0);
        const char *VAR_23 = ((void*)0);
        const char *VAR_24 = ((void*)0);
        const char *VAR_25 = ((void*)0);
        const char *VAR_26 = ((void*)0);
        int VAR_27 = 0;
        if(VAR_12->cdtextc > 0)
        {
            const vlc_meta_t *VAR_28;
            if (VAR_15 + 1 < VAR_12->cdtextc && (VAR_28 = VAR_12->cdtextv[VAR_15 + 1]) != ((void*)0))
            {
                FUNC_1(VAR_22, FUNC_32(VAR_28, VAR_9));
                FUNC_1(VAR_23, FUNC_32(VAR_28, VAR_6));
                FUNC_1(VAR_25, FUNC_32(VAR_28, VAR_8));
                FUNC_1(VAR_26, FUNC_32(VAR_28, VAR_7));
            }


            if ((VAR_28 = VAR_12->cdtextv[0]) != ((void*)0))
            {
                FUNC_1(VAR_23, FUNC_32(VAR_28, VAR_6));
                FUNC_1(VAR_24, FUNC_32(VAR_28, VAR_5));
                FUNC_1(VAR_25, FUNC_32(VAR_28, VAR_8));
                FUNC_1(VAR_26, FUNC_32(VAR_28, VAR_7));
            }
        }

        if(VAR_12->mbrecord && VAR_12->mbrecord->i_release)
        {
            musicbrainz_release_t *VAR_29 = VAR_12->mbrecord->p_releases;
            for(size_t VAR_30=0; VAR_30<VAR_29->i_tracks; VAR_30++)
            {
                if(VAR_29->p_tracks[VAR_30].i_index == (unsigned)VAR_15 + 1)
                {
                    if (VAR_29->p_tracks[VAR_30].psz_title)
                    {
                        FUNC_1(VAR_22, VAR_29->p_tracks[VAR_30].psz_title);
                        FUNC_1(VAR_23, VAR_29->p_tracks[VAR_30].psz_artist);
                    }
                    break;
                }
            }
            FUNC_1(VAR_24, VAR_29->psz_title);
            if(FUNC_0(VAR_29->psz_artist))
            {
                VAR_23 = VAR_29->psz_artist;
                FUNC_16(VAR_20, VAR_29->psz_artist);
            }
            if(VAR_27 == 0 && VAR_29->psz_date)
            {
                unsigned VAR_31;
                if(FUNC_30(VAR_29->psz_date, "%4d", &VAR_31) == 1)
                    VAR_27 = VAR_31;
            }
            if(FUNC_0(VAR_29->psz_coverart_url))
                FUNC_18(VAR_20, VAR_29->psz_coverart_url);
        }

        if (FUNC_0(VAR_22))
        {
            FUNC_22(VAR_20, VAR_22);
            FUNC_23(VAR_20, VAR_22);
        }

        if (FUNC_0(VAR_23))
            FUNC_17(VAR_20, VAR_23);

        if (FUNC_0(VAR_25))
            FUNC_21(VAR_20, VAR_25);

        if (FUNC_0(VAR_26))
            FUNC_20(VAR_20, VAR_26);

        if (FUNC_0(VAR_24))
            FUNC_15(VAR_20, VAR_24);

        if (VAR_27 != 0)
        {
            char VAR_32[5];

            FUNC_29(VAR_32, sizeof (VAR_32), "%u", VAR_27);
            FUNC_19(VAR_20, VAR_32);
        }

        char VAR_33[4];
        if(FUNC_29(VAR_33, sizeof (VAR_33), "%u", VAR_15 + 1) < 4)
            FUNC_24(VAR_20, VAR_33);
        FUNC_29(VAR_33, sizeof (VAR_33), "%u", VAR_13->i_tracks);
        FUNC_25(VAR_20, VAR_33);

        FUNC_26(VAR_11, VAR_20);
        FUNC_14(VAR_20);
    }


    return VAR_4;
}
