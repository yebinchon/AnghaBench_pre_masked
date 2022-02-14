
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int n; int capacity; int* data; int element_size; int* ids; } ;
typedef TYPE_1__ BS_LIST ;


 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (TYPE_1__*,int const) ;

int FUNC_4(BS_LIST *VAR_0, const uint8_t *VAR_1, int VAR_2)
{


    int VAR_3 = FUNC_0(VAR_0, VAR_1);

    if (VAR_3 >= 0) {

        return 0;
    }

    VAR_3 = ~VAR_3;


    if (VAR_0->n == VAR_0->capacity) {

        const uint32_t VAR_4 = VAR_0->n + VAR_0->n / 2 + 1;

        if (!FUNC_3(VAR_0, VAR_4)) {
            return 0;
        }

        VAR_0->capacity = VAR_4;
    }


    FUNC_2(VAR_0->data + (VAR_3 + 1) * VAR_0->element_size, VAR_0->data + VAR_3 * VAR_0->element_size,
            (VAR_0->n - VAR_3) * VAR_0->element_size);
    FUNC_1(VAR_0->data + VAR_3 * VAR_0->element_size, VAR_1, VAR_0->element_size);


    FUNC_2(&VAR_0->ids[VAR_3 + 1], &VAR_0->ids[VAR_3], (VAR_0->n - VAR_3) * sizeof(int));
    VAR_0->ids[VAR_3] = VAR_2;


    VAR_0->n++;

    return 1;
}
