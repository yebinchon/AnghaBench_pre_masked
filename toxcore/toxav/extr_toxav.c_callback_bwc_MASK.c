
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int video_bit_rate; int audio_bit_rate; TYPE_3__* av; } ;
typedef TYPE_2__ ToxAVCall ;
struct TYPE_6__ {int second; int (* first ) (TYPE_3__*,int ,float,float,int ) ;} ;
struct TYPE_8__ {int mutex; TYPE_1__ bcb; } ;
typedef int BWController ;


 int FUNC_0 (char*,float) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,int,float,int ) ;
 int FUNC_6 (TYPE_3__*,int ,float,float,int ) ;

void FUNC_7(BWController *VAR_0, uint32_t VAR_1, float VAR_2, void *VAR_3)
{







    ToxAVCall *VAR_4 = VAR_3;
    FUNC_2(VAR_4);

    FUNC_0("Reported loss of %f%%", VAR_2 * 100);

    if (VAR_2 < .01f)
        return;

    FUNC_3(VAR_4->av->mutex);

    if (!VAR_4->av->bcb.first) {
        FUNC_4(VAR_4->av->mutex);
        FUNC_1("No callback to report loss on");
        return;
    }

    if (VAR_4->video_bit_rate)
        (*VAR_4->av->bcb.first) (VAR_4->av, VAR_1, VAR_4->audio_bit_rate,
                                VAR_4->video_bit_rate - (VAR_4->video_bit_rate * VAR_2),
                                VAR_4->av->bcb.second);
    else if (VAR_4->audio_bit_rate)
        (*VAR_4->av->bcb.first) (VAR_4->av, VAR_1,
                                VAR_4->audio_bit_rate - (VAR_4->audio_bit_rate * VAR_2),
                                0, VAR_4->av->bcb.second);

    FUNC_4(VAR_4->av->mutex);
}
