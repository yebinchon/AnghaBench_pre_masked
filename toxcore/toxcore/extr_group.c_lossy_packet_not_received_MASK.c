
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* group; } ;
struct TYPE_4__ {int bottom_lossy_number; int top_lossy_number; int* recv_lossy; } ;
typedef TYPE_2__ Group_c ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static unsigned int FUNC_1(Group_c *VAR_1, int VAR_2, uint16_t VAR_3)
{
    if (VAR_2 == -1)
        return -1;

    if (VAR_1->group[VAR_2].bottom_lossy_number == VAR_1->group[VAR_2].top_lossy_number) {
        VAR_1->group[VAR_2].top_lossy_number = VAR_3;
        VAR_1->group[VAR_2].bottom_lossy_number = (VAR_3 - VAR_0) + 1;
        VAR_1->group[VAR_2].recv_lossy[VAR_3 % VAR_0] = 1;
        return 0;
    }

    if ((uint16_t)(VAR_3 - VAR_1->group[VAR_2].bottom_lossy_number) < VAR_0) {
        if (VAR_1->group[VAR_2].recv_lossy[VAR_3 % VAR_0]) {
            return 1;
        }

        VAR_1->group[VAR_2].recv_lossy[VAR_3 % VAR_0] = 1;
        return 0;
    }

    if ((uint16_t)(VAR_3 - VAR_1->group[VAR_2].bottom_lossy_number) > (1 << 15))
        return -1;

    uint16_t VAR_4 = VAR_3 - VAR_1->group[VAR_2].top_lossy_number;

    if (VAR_4 >= VAR_0) {
        FUNC_0(VAR_1->group[VAR_2].recv_lossy, sizeof(VAR_1->group[VAR_2].recv_lossy));
        VAR_1->group[VAR_2].top_lossy_number = VAR_3;
        VAR_1->group[VAR_2].bottom_lossy_number = (VAR_3 - VAR_0) + 1;
        VAR_1->group[VAR_2].recv_lossy[VAR_3 % VAR_0] = 1;
        return 0;
    }

    if (VAR_4 < VAR_0) {
        unsigned int VAR_5;

        for (VAR_5 = VAR_1->group[VAR_2].bottom_lossy_number; VAR_5 != (VAR_1->group[VAR_2].bottom_lossy_number + VAR_4);
                ++VAR_5) {
            VAR_1->group[VAR_2].recv_lossy[VAR_5 % VAR_0] = 0;
        }

        VAR_1->group[VAR_2].top_lossy_number = VAR_3;
        VAR_1->group[VAR_2].bottom_lossy_number = (VAR_3 - VAR_0) + 1;
        VAR_1->group[VAR_2].recv_lossy[VAR_3 % VAR_0] = 1;
        return 0;
    }

    return -1;
}
