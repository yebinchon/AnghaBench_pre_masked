
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* list; } ;
typedef TYPE_1__ candidates_bucket ;
struct TYPE_9__ {size_t candidates_bucket_bits; unsigned int candidates_bucket_count; size_t candidates_bucket_size; int self_client_id; int getnodes; TYPE_1__* candidates; scalar_t__ hash; } ;
typedef TYPE_2__ Client_entry ;
typedef TYPE_2__ Assoc ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int const*) ;
 void* FUNC_5 (int) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 () ;

Assoc *FUNC_8(size_t VAR_1, size_t VAR_2, const uint8_t *VAR_3)
{
    if (!VAR_3)
        return ((void*)0);

    Assoc *VAR_4 = FUNC_1(1, sizeof(*VAR_4));

    if (!VAR_4)
        return ((void*)0);





    if (VAR_1 < 2)
        VAR_1 = 2;
    else if (VAR_1 > 15)
        VAR_1 = 15;

    VAR_4->candidates_bucket_bits = VAR_1;
    VAR_4->candidates_bucket_count = 1U << VAR_1;

    if (VAR_2 < 25) {
        if (VAR_2 <= 6)
            VAR_2 = 5;
        else {
            VAR_2 = VAR_2 - (1 - (VAR_2 % 2));


            if (!(VAR_2 % 3))
                VAR_2 -= 2;
        }
    } else if (VAR_2 > ((1 << 17) - 1))
        VAR_2 = (1 << 17) - 1;
    else {

        size_t VAR_5 = FUNC_6(VAR_2);

        if (VAR_5 == VAR_0)
            VAR_5 = FUNC_6(VAR_5 - 1);

        if (VAR_5 != VAR_2) {

            FUNC_0("trimmed %i to %i.\n", (int)VAR_2, (int)VAR_5);
            VAR_2 = (size_t)VAR_5;
        }
    }

    VAR_4->candidates_bucket_size = VAR_2;


    size_t VAR_6, VAR_7;
    Client_entry *VAR_8 = FUNC_5(sizeof(*VAR_8) * VAR_4->candidates_bucket_count * VAR_4->candidates_bucket_size);

    if (!VAR_8) {
        FUNC_3(VAR_4);
        return ((void*)0);
    }

    candidates_bucket *VAR_9 = FUNC_5(sizeof(*VAR_9) * VAR_4->candidates_bucket_count);

    if (!VAR_9) {
        FUNC_3(VAR_4);
        FUNC_3(VAR_8);
        return ((void*)0);
    }

    for (VAR_6 = 0; VAR_6 < VAR_4->candidates_bucket_count; VAR_6++) {
        candidates_bucket *VAR_10 = &VAR_9[VAR_6];

        VAR_10->list = &VAR_8[VAR_6 * VAR_4->candidates_bucket_size];

        for (VAR_7 = 0; VAR_7 < VAR_4->candidates_bucket_size; VAR_7++)
            VAR_10->list[VAR_7].hash = 0;
    }

    VAR_4->candidates = VAR_9;
    VAR_4->getnodes = FUNC_7();

    FUNC_4(VAR_4->self_client_id, VAR_3);
    FUNC_2(VAR_4);

    return VAR_4;
}
