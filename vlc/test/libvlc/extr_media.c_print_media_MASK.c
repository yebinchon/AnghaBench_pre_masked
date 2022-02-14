
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int i_type; TYPE_3__* subtitle; TYPE_2__* video; TYPE_1__* audio; int i_original_fourcc; int i_codec; int i_id; } ;
typedef TYPE_4__ libvlc_media_track_t ;
typedef int libvlc_media_t ;
typedef enum libvlc_meta_t { ____Placeholder_libvlc_meta_t } libvlc_meta_t ;
struct TYPE_9__ {char* psz_encoding; } ;
struct TYPE_8__ {int i_width; int i_height; int i_sar_num; int i_sar_den; int i_frame_rate_num; int i_frame_rate_den; } ;
struct TYPE_7__ {int i_channels; int i_rate; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int *,TYPE_4__***) ;
 int FUNC_3 (TYPE_4__**,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(libvlc_media_t *VAR_2)
{
    libvlc_media_track_t **VAR_3;
    unsigned VAR_4 = FUNC_2(VAR_2, &VAR_3);
    if (VAR_4 > 0)
    {
        for (unsigned VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
        {
            libvlc_media_track_t *VAR_6 = VAR_3[VAR_5];
            FUNC_5("\ttrack(%d/%d): codec: %4.4s/%4.4s, ", VAR_5, VAR_6->i_id,
                (const char *)&VAR_6->i_codec,
                (const char *)&VAR_6->i_original_fourcc);
            switch (VAR_6->i_type)
            {
            case 131:
                FUNC_4("audio: channels: %u, rate: %u\n",
                       VAR_6->audio->i_channels, VAR_6->audio->i_rate);
                break;
            case 128:
                FUNC_4("video: %ux%u, sar: %u/%u, fps: %u/%u\n",
                       VAR_6->video->i_width, VAR_6->video->i_height,
                       VAR_6->video->i_sar_num, VAR_6->video->i_sar_den,
                       VAR_6->video->i_frame_rate_num, VAR_6->video->i_frame_rate_den);
                break;
            case 130:
                FUNC_4("text: %s\n", VAR_6->subtitle->psz_encoding);
                break;
            case 129:
                FUNC_4("unknown\n");
                break;
            default:
                FUNC_6();
            }
        }
        FUNC_3(VAR_3, VAR_4);
    }
    else
        FUNC_5("\tmedia doesn't have any tracks\n");

    for (enum libvlc_meta_t VAR_7 = VAR_1;
         VAR_7 <= VAR_0; ++VAR_7)
    {
        char *VAR_8 = FUNC_1(VAR_2, VAR_7);
        if (VAR_8 != ((void*)0))
            FUNC_5("\tmeta(%d): '%s'\n", VAR_7, VAR_8);
        FUNC_0(VAR_8);
    }
}
