
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ i_int; } ;
typedef TYPE_1__ vlc_value_t ;
struct TYPE_11__ {int corked; scalar_t__ global_state; scalar_t__ pause_on_cork; } ;
typedef TYPE_2__ vlc_player_t ;
typedef int vlc_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(vlc_object_t *VAR_4, const char *VAR_5,
                        vlc_value_t VAR_6, vlc_value_t VAR_7, void *VAR_8)
{
    vlc_player_t *VAR_9 = VAR_8;

    if (VAR_6.i_int == VAR_7.i_int )
        return VAR_2;

    FUNC_0(VAR_9);

    if (VAR_9->pause_on_cork)
    {
        if (VAR_7.i_int)
        {
            VAR_9->corked = VAR_9->global_state == VAR_0
                          || VAR_9->global_state == VAR_1;
            if (VAR_9->corked)
                FUNC_1(VAR_9);
        }
        else
        {
            if (VAR_9->corked)
            {
                FUNC_2(VAR_9);
                VAR_9->corked = 0;
            }
        }
    }
    else
        FUNC_3(VAR_9, VAR_3, VAR_7.i_int);

    FUNC_4(VAR_9);

    return VAR_2;
    (void) VAR_4; (void) VAR_5;
}
