
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int pos_check ;
typedef size_t hash_t ;
struct TYPE_7__ {TYPE_2__* list; } ;
typedef TYPE_1__ candidates_bucket ;
typedef size_t bucket_t ;
struct TYPE_9__ {size_t const candidates_bucket_size; TYPE_1__* candidates; } ;
struct TYPE_8__ {int heard_at; int seen_at; int used_at; int hash; } ;
typedef TYPE_2__ Client_entry ;
typedef TYPE_3__ Assoc ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_0 (TYPE_3__ const*,int const*) ;
 size_t FUNC_1 (TYPE_3__ const*,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t*,int ,int) ;

__attribute__((used)) static uint8_t FUNC_4(const Assoc *VAR_8, hash_t const VAR_9, const uint8_t *VAR_10, uint8_t VAR_11,
        uint8_t VAR_12, bucket_t *VAR_13, size_t *VAR_14)
{
    if (!VAR_8 || !VAR_10 || !VAR_13 || !VAR_14)
        return 0;

    bucket_t VAR_15 = FUNC_0(VAR_8, VAR_10);
    candidates_bucket *VAR_16 = &VAR_8->candidates[VAR_15];

    size_t VAR_17, VAR_18 = VAR_9 % VAR_8->candidates_bucket_size, VAR_19;
    size_t VAR_20[6];

    FUNC_3(VAR_20, 0, sizeof(VAR_20));

    for (VAR_17 = 0; VAR_17 < VAR_4; VAR_18 = FUNC_1(VAR_8, VAR_18) , VAR_17++) {
        Client_entry *VAR_21 = &VAR_16->list[VAR_18];


        if (!VAR_21->hash) {
            *VAR_13 = VAR_15;
            *VAR_14 = VAR_18;

            return 1;
        }






        if (!FUNC_2(VAR_21->used_at, VAR_1))
            VAR_19 = VAR_7;
        else if (!FUNC_2(VAR_21->seen_at, VAR_3))
            VAR_19 = VAR_6;
        else if (!FUNC_2(VAR_21->heard_at, VAR_2))
            VAR_19 = VAR_5;
        else
            VAR_19 = VAR_0;

        if (!VAR_20[VAR_19])
            VAR_20[VAR_19] = VAR_18 + 1;
    }


    size_t VAR_22, VAR_23 = VAR_12 ? VAR_7 : (VAR_11 ? VAR_6 : VAR_5);

    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
        if (VAR_20[VAR_22]) {
            *VAR_13 = VAR_15;
            *VAR_14 = VAR_20[VAR_22] - 1;

            return 1;
        }

    return 0;
}
