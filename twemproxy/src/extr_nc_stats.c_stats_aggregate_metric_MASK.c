
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int timestamp; int counter; } ;
struct stats_metric {int type; TYPE_1__ value; } ;
struct array {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;



 struct stats_metric* FUNC_2 (struct array*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct array*) ;

__attribute__((used)) static void
FUNC_4(struct array *VAR_0, struct array *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1); VAR_2++) {
        struct stats_metric *VAR_3, *VAR_4;

        VAR_3 = FUNC_2(VAR_1, VAR_2);
        VAR_4 = FUNC_2(VAR_0, VAR_2);

        FUNC_0(VAR_3->type == VAR_4->type);

        switch (VAR_3->type) {
        case 130:
            VAR_4->value.counter += VAR_3->value.counter;
            break;

        case 129:
            VAR_4->value.counter += VAR_3->value.counter;
            break;

        case 128:
            if (VAR_3->value.timestamp) {
                VAR_4->value.timestamp = VAR_3->value.timestamp;
            }
            break;

        default:
            FUNC_1();
        }
    }
}
