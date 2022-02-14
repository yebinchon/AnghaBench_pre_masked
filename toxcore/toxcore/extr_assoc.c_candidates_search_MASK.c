
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t hash_t ;
struct TYPE_10__ {TYPE_3__* list; } ;
typedef TYPE_2__ candidates_bucket ;
typedef size_t bucket_t ;
struct TYPE_12__ {size_t candidates_bucket_size; TYPE_2__* candidates; } ;
struct TYPE_9__ {int public_key; } ;
struct TYPE_11__ {size_t hash; TYPE_1__ client; } ;
typedef TYPE_3__ Client_entry ;
typedef TYPE_4__ Assoc ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_4__ const*,int const*) ;
 size_t FUNC_1 (TYPE_4__ const*,size_t) ;
 scalar_t__ FUNC_2 (int ,int const*) ;

__attribute__((used)) static uint8_t FUNC_3(const Assoc *VAR_1, const uint8_t *VAR_2, hash_t VAR_3, Client_entry **VAR_4)
{
    bucket_t VAR_5 = FUNC_0(VAR_1, VAR_2);
    candidates_bucket *VAR_6 = &VAR_1->candidates[VAR_5];
    size_t VAR_7, VAR_8 = VAR_3 % VAR_1->candidates_bucket_size;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_8 = FUNC_1(VAR_1, VAR_8) , VAR_7++) {
        Client_entry *VAR_9 = &VAR_6->list[VAR_8];

        if (VAR_9->hash == VAR_3)
            if (FUNC_2(VAR_9->client.public_key, VAR_2)) {
                *VAR_4 = VAR_9;
                return 1;
            }
    }

    *VAR_4 = ((void*)0);
    return 0;
}
