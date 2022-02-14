
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* list; } ;
typedef TYPE_2__ candidates_bucket ;
typedef size_t bucket_t ;
struct TYPE_12__ {int self_hash; size_t* self_client_id; size_t candidates_bucket_size; TYPE_2__* candidates; } ;
struct TYPE_9__ {int public_key; } ;
struct TYPE_11__ {size_t hash; TYPE_1__ client; } ;
typedef TYPE_3__ Client_entry ;
typedef TYPE_4__ Assoc ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (TYPE_4__*,size_t*) ;
 size_t VAR_1 ;
 size_t FUNC_2 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_3 (int ,size_t*) ;
 int FUNC_4 (TYPE_4__*,size_t*) ;

__attribute__((used)) static void FUNC_5(Assoc *VAR_2)
{
    if (VAR_2->self_hash)
        return;

    size_t VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        VAR_4 |= VAR_2->self_client_id[VAR_3];

    if (!VAR_4)
        return;

    VAR_2->self_hash = FUNC_4(VAR_2, VAR_2->self_client_id);

    FUNC_0("id is now set, purging cache of self-references");




    bucket_t VAR_5 = FUNC_1(VAR_2, VAR_2->self_client_id);
    candidates_bucket *VAR_6 = &VAR_2->candidates[VAR_5];
    size_t VAR_7 = VAR_2->self_hash % VAR_2->candidates_bucket_size;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_7 = FUNC_2(VAR_2, VAR_7), VAR_3++) {
        Client_entry *VAR_8 = &VAR_6->list[VAR_7];

        if (VAR_8->hash == VAR_2->self_hash)
            if (FUNC_3(VAR_8->client.public_key, VAR_2->self_client_id))
                VAR_8->hash = 0;
    }
}
