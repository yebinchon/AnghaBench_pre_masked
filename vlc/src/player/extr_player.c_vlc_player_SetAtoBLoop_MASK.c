
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {TYPE_1__* abloop_state; } ;
typedef enum vlc_player_abloop { ____Placeholder_vlc_player_abloop } vlc_player_abloop ;
struct TYPE_2__ {int set; void* time; float pos; } ;


 int VAR_0 ;



 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 float FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,void*,float) ;
 int FUNC_5 (int *,float) ;
 int FUNC_6 (int *,void*) ;
 struct vlc_player_input* FUNC_7 (int *) ;

int
FUNC_8(vlc_player_t *VAR_4, enum vlc_player_abloop VAR_5)
{
    struct vlc_player_input *VAR_6 = FUNC_7(VAR_4);

    if (!VAR_6 || !FUNC_1(VAR_4))
        return VAR_0;

    vlc_tick_t VAR_7 = FUNC_3(VAR_4);
    float VAR_8 = FUNC_2(VAR_4);
    int VAR_9 = VAR_1;
    switch (VAR_5)
    {
        case 130:
            if (VAR_6->abloop_state[1].set)
                return VAR_0;
            VAR_6->abloop_state[0].time = VAR_7;
            VAR_6->abloop_state[0].pos = VAR_8;
            VAR_6->abloop_state[0].set = 1;
            break;
        case 129:
            if (!VAR_6->abloop_state[0].set)
                return VAR_0;
            VAR_6->abloop_state[1].time = VAR_7;
            VAR_6->abloop_state[1].pos = VAR_8;
            VAR_6->abloop_state[1].set = 1;
            if (VAR_6->abloop_state[0].time != VAR_2
             && VAR_7 != VAR_2)
            {
                if (VAR_7 > VAR_6->abloop_state[0].time)
                {
                    FUNC_6(VAR_4, VAR_6->abloop_state[0].time);
                    break;
                }
            }
            else if (VAR_8 > VAR_6->abloop_state[0].pos)
            {
                FUNC_5(VAR_4, VAR_6->abloop_state[0].pos);
                break;
            }


            VAR_5 = 128;
            VAR_9 = VAR_0;

        case 128:
            VAR_6->abloop_state[0].set = VAR_6->abloop_state[1].set = 0;
            VAR_7 = VAR_2;
            VAR_8 = 0.f;
            break;
        default:
            FUNC_0();
    }
    FUNC_4(VAR_4, VAR_3, VAR_5, VAR_7, VAR_8);
    return VAR_9;
}
