
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_transform_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {void* orientation; } ;
struct TYPE_9__ {TYPE_4__ video; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int metadata; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVDictionaryEntry ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_3__* FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 (scalar_t__*,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int *) ;
 long FUNC_4 (int ) ;
 long FUNC_5 (int ,int *,int) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_7(es_format_t *VAR_7, AVStream *VAR_8)
{
    char const *VAR_9 = "rotate";
    AVDictionaryEntry *VAR_10 = FUNC_0(VAR_8->metadata, VAR_9, ((void*)0), 0);
    long VAR_11 = 0;

    int32_t *VAR_12 = (int32_t *)FUNC_3(VAR_8, VAR_0, ((void*)0));
    if( VAR_12 ) {
        int64_t VAR_13 = (int64_t)VAR_12[0] * VAR_12[4] - (int64_t)VAR_12[1] * VAR_12[3];
        if (VAR_13 < 0) {



            FUNC_1(VAR_12, 1, 0);
        }
        VAR_11 = FUNC_4(FUNC_2(VAR_12));

        if (VAR_11 > 45 && VAR_11 < 135)
            VAR_7->video.orientation = VAR_4;

        else if (VAR_11 > 135 || VAR_11 < -135) {
            if (VAR_13 < 0)
                VAR_7->video.orientation = VAR_6;
            else
                VAR_7->video.orientation = VAR_3;
        }
        else if (VAR_11 < -45 && VAR_11 > -135)
            VAR_7->video.orientation = VAR_5;

        else
            VAR_7->video.orientation = VAR_2;


        if (VAR_13 < 0 && !(VAR_11 > 135 || VAR_11 < -135)) {
            video_transform_t VAR_14 = (video_transform_t)VAR_7->video.orientation;

            VAR_7->video.orientation = VAR_1;
            FUNC_6(&VAR_7->video, VAR_14);
        }

    } else if( VAR_10 ) {
        VAR_11 = FUNC_5(VAR_10->value, ((void*)0), 10);

        if (VAR_11 > 45 && VAR_11 < 135)
            VAR_7->video.orientation = VAR_5;

        else if (VAR_11 > 135 && VAR_11 < 225)
            VAR_7->video.orientation = VAR_3;

        else if (VAR_11 > 225 && VAR_11 < 315)
            VAR_7->video.orientation = VAR_4;

        else
            VAR_7->video.orientation = VAR_2;
    }
}
