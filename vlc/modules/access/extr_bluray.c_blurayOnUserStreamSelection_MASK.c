
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_12__ {int pl_info_lock; int p_out; int b_menu; TYPE_3__* p_clip_info; int bluray; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_10__ {int audio_stream_count; int pg_stream_count; TYPE_2__* pg_streams; TYPE_1__* audio_streams; } ;
struct TYPE_9__ {int pid; scalar_t__ lang; } ;
struct TYPE_8__ {int pid; scalar_t__ lang; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(demux_t *VAR_9, int VAR_10)
{
    demux_sys_t *VAR_11 = VAR_9->p_sys;
    FUNC_4(&VAR_11->pl_info_lock);

    if(VAR_10 == -VAR_0)
        FUNC_0(VAR_11->bluray, VAR_3, 0, 0);
    else if(VAR_10 == -VAR_8)
        FUNC_0(VAR_11->bluray, VAR_5, 0, 0);
    else if (VAR_11->p_clip_info)
    {
        if ((VAR_10 & 0xff00) == 0x1100) {
            bool VAR_12 = 0;

            for (int VAR_13 = 0; VAR_13 < VAR_11->p_clip_info->audio_stream_count; VAR_13++) {
                if (VAR_10 == VAR_11->p_clip_info->audio_streams[VAR_13].pid) {
                    FUNC_0(VAR_11->bluray, VAR_3, VAR_13 + 1, 1);

                    if(!VAR_11->b_menu)
                        FUNC_1(VAR_11->bluray, VAR_6,
                                  (const char *) VAR_11->p_clip_info->audio_streams[VAR_13].lang);
                    VAR_12 = 1;
                    break;
                }
            }
            if(!VAR_12 && !VAR_11->b_menu)
            {


                FUNC_3(VAR_9, "Incorrect playlist for menuless track, forcing");
                FUNC_2(VAR_11->p_out, VAR_4,
                               VAR_1, VAR_10);
            }
        } else if ((VAR_10 & 0xff00) == 0x1200 || VAR_10 == 0x1800) {
            bool VAR_14 = 0;

            for (int VAR_15 = 0; VAR_15 < VAR_11->p_clip_info->pg_stream_count; VAR_15++) {
                if (VAR_10 == VAR_11->p_clip_info->pg_streams[VAR_15].pid) {
                    FUNC_0(VAR_11->bluray, VAR_5, VAR_15 + 1, 1);
                    if(!VAR_11->b_menu)
                        FUNC_1(VAR_11->bluray, VAR_7,
                                   (const char *) VAR_11->p_clip_info->pg_streams[VAR_15].lang);
                    VAR_14 = 1;
                    break;
                }
            }
            if(!VAR_14 && !VAR_11->b_menu)
            {
                FUNC_3(VAR_9, "Incorrect playlist for menuless track, forcing");
                FUNC_2(VAR_11->p_out, VAR_4,
                               VAR_2, VAR_10);
            }
        }
    }

    FUNC_5(&VAR_11->pl_info_lock);
}
