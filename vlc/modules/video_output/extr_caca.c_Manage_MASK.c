
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_8__ {scalar_t__ cursor_deadline; scalar_t__ cursor_timeout; int window; int dp; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct caca_event {int dummy; } ;
struct TYPE_10__ {int caca; int vlc; } ;
struct TYPE_9__ {int caca; int vlc; } ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const) ;
 scalar_t__ FUNC_1 (int ,int ,struct caca_event*,int ) ;
 int FUNC_2 (struct caca_event*) ;
 int FUNC_3 (struct caca_event*) ;
 int FUNC_4 (struct caca_event*) ;
 int FUNC_5 (struct caca_event*) ;
 int const FUNC_6 (struct caca_event*) ;
 int FUNC_7 (int ,int) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(vout_display_t *VAR_4)
{
    vout_display_sys_t *VAR_5 = VAR_4->sys;

    if (VAR_5->cursor_deadline != VAR_1 && VAR_5->cursor_deadline < FUNC_8()) {
        FUNC_7(VAR_5->dp, 0);
        VAR_5->cursor_deadline = VAR_1;
    }

    struct caca_event VAR_6;
    while (FUNC_1(VAR_5->dp, VAR_0, &VAR_6, 0) > 0) {
        switch (FUNC_6(&VAR_6)) {
        case 133: {
            const int VAR_7 = FUNC_2(&VAR_6);

            for (int VAR_8 = 0; VAR_2[VAR_8].caca != -1; VAR_8++) {
                if (VAR_2[VAR_8].caca == VAR_7) {
                    const int VAR_9 = VAR_2[VAR_8].vlc;

                    if (VAR_9 >= 0)
                        FUNC_0(VAR_5, VAR_9);
                    return;
                }
            }
            if (VAR_7 >= 0x20 && VAR_7 <= 0x7f) {
                FUNC_0(VAR_5, VAR_7);
                return;
            }
            break;
        }
        case 128:
            break;
        case 132:
            FUNC_7(VAR_5->dp, 1);
            VAR_5->cursor_deadline = FUNC_8() + VAR_5->cursor_timeout;
            FUNC_10(VAR_5->window,
                                         FUNC_4(&VAR_6),
                                         FUNC_5(&VAR_6));
            break;
        case 131:
        case 130: {
            FUNC_7(VAR_5->dp, 1);
            VAR_5->cursor_deadline = FUNC_8() + VAR_5->cursor_timeout;

            const int VAR_10 = FUNC_3(&VAR_6);
            for (int VAR_11 = 0; VAR_3[VAR_11].caca != -1; VAR_11++) {
                if (VAR_3[VAR_11].caca == VAR_10) {
                    if (FUNC_6(&VAR_6) == 131)
                        FUNC_11(VAR_5->window,
                                                       VAR_3[VAR_11].vlc);
                    else
                        FUNC_12(VAR_5->window,
                                                        VAR_3[VAR_11].vlc);
                    return;
                }
            }
            break;
        }
        case 129:
            FUNC_9(VAR_5->window);
            break;
        default:
            break;
        }
    }
}
