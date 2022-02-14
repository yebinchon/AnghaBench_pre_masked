
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int lost; } ;
struct TYPE_7__ {int rb; } ;
struct TYPE_8__ {TYPE_1__ cycle; TYPE_2__ rcvpkt; } ;
typedef TYPE_3__ BWController ;


 int VAR_0 ;
 int FUNC_0 (int ,void**) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(BWController *VAR_1, uint32_t VAR_2)
{
    if (!VAR_1)
        return;

    if (!VAR_2) {
        uint32_t *VAR_3[VAR_0], VAR_4 = 1;

        FUNC_0(VAR_1->rcvpkt.rb, (void **) VAR_3);

        int VAR_5 = 0;

        for (; VAR_5 < VAR_0; VAR_5 ++) {
            VAR_2 += *(VAR_3[VAR_5]);

            if (*(VAR_3[VAR_5]))
                VAR_4++;
        }

        VAR_2 /= VAR_4;
    }

    VAR_1->cycle.lost += VAR_2;
    FUNC_1(VAR_1);
}
