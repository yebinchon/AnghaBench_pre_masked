
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef int vlc_tick_t ;
typedef scalar_t__ vlc_fourcc_t ;
typedef int video_format_t ;
typedef int picture_t ;
typedef int block_t ;
struct TYPE_7__ {int snapshot; int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ,int **,int *,int *,scalar_t__,int const,int const,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int * FUNC_7 (int ,int ) ;

int FUNC_8(vout_thread_t *VAR_3,
                     block_t **VAR_4, picture_t **VAR_5,
                     video_format_t *VAR_6,
                     const char *VAR_7, vlc_tick_t VAR_8)
{
    FUNC_1(!VAR_3->p->dummy);
    picture_t *VAR_9 = FUNC_7(VAR_3->p->snapshot, VAR_8);
    if (!VAR_9) {
        FUNC_3(VAR_3, "Failed to grab a snapshot");
        return VAR_1;
    }

    if (VAR_4) {
        vlc_fourcc_t VAR_10 = VAR_0;
        if (VAR_7 && FUNC_2(VAR_7))
            VAR_10 = FUNC_2(VAR_7);

        const int VAR_11 = FUNC_6(VAR_3, "snapshot-width");
        const int VAR_12 = FUNC_6(VAR_3, "snapshot-height");

        if (FUNC_4(FUNC_0(VAR_3), VAR_4, VAR_6,
                           VAR_9, VAR_10, VAR_11, VAR_12, 0)) {
            FUNC_3(VAR_3, "Failed to convert image for snapshot");
            FUNC_5(VAR_9);
            return VAR_1;
        }
    }
    if (VAR_5)
        *VAR_5 = VAR_9;
    else
        FUNC_5(VAR_9);
    return VAR_2;
}
