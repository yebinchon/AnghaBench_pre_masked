
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct conf {scalar_t__ depth; TYPE_1__ event; int parsed; scalar_t__ sound; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;


 int FUNC_2 (struct conf*) ;
 int FUNC_3 (struct conf*) ;
 int FUNC_4 (struct conf*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static rstatus_t
FUNC_6(struct conf *VAR_2)
{
    rstatus_t VAR_3;
    bool VAR_4;

    FUNC_0(VAR_2->sound && !VAR_2->parsed);
    FUNC_0(VAR_2->depth == 0);

    VAR_4 = 0;
    do {
        VAR_3 = FUNC_3(VAR_2);
        if (VAR_3 != VAR_1) {
            return VAR_3;
        }

        FUNC_5(VAR_0, "next end event %d", VAR_2->event.type);

        switch (VAR_2->event.type) {
        case 128:
            VAR_4 = 1;
            break;

        case 129:
            break;

        default:
            FUNC_1();
        }

        FUNC_2(VAR_2);
    } while (!VAR_4);

    FUNC_4(VAR_2);

    return VAR_1;
}
