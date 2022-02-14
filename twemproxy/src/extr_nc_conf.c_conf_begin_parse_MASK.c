
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct conf {scalar_t__ depth; TYPE_1__ event; int parsed; scalar_t__ sound; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;



 int FUNC_2 (struct conf*) ;
 scalar_t__ FUNC_3 (struct conf*) ;
 scalar_t__ FUNC_4 (struct conf*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static rstatus_t
FUNC_6(struct conf *VAR_3)
{
    rstatus_t VAR_4;
    bool VAR_5;

    FUNC_0(VAR_3->sound && !VAR_3->parsed);
    FUNC_0(VAR_3->depth == 0);

    VAR_4 = FUNC_4(VAR_3);
    if (VAR_4 != VAR_2) {
        return VAR_4;
    }

    VAR_5 = 0;
    do {
        VAR_4 = FUNC_3(VAR_3);
        if (VAR_4 != VAR_2) {
            return VAR_4;
        }

        FUNC_5(VAR_1, "next begin event %d", VAR_3->event.type);

        switch (VAR_3->event.type) {
        case 128:
        case 130:
            break;

        case 129:
            FUNC_0(VAR_3->depth < VAR_0);
            VAR_3->depth++;
            VAR_5 = 1;
            break;

        default:
            FUNC_1();
        }

        FUNC_2(VAR_3);

    } while (!VAR_5);

    return VAR_2;
}
