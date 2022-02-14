
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
typedef int ssize_t ;
typedef int dist_list ;
struct TYPE_20__ {TYPE_5__* list; } ;
typedef TYPE_4__ candidates_bucket ;
typedef size_t bucket_t ;
struct TYPE_24__ {int ip; } ;
struct TYPE_23__ {size_t candidates_bucket_count; size_t candidates_bucket_size; TYPE_4__* candidates; int self_hash; } ;
struct TYPE_22__ {size_t (* distance_absolute_func ) (TYPE_7__*,int ,int ,int ) ;int flags; size_t count_good; size_t count; TYPE_3__** result; int distance_relative_func; int custom_data; int wanted_id; } ;
struct TYPE_18__ {int timestamp; TYPE_9__ ip_port; } ;
struct TYPE_17__ {int timestamp; TYPE_9__ ip_port; } ;
struct TYPE_19__ {TYPE_2__ assoc6; TYPE_1__ assoc4; int public_key; } ;
struct TYPE_21__ {TYPE_3__ client; scalar_t__ hash; int seen_at; } ;
typedef TYPE_5__ Client_entry ;
typedef TYPE_6__ Assoc_close_entries ;
typedef TYPE_7__ Assoc ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,size_t*,size_t,size_t,int ,int ,int ) ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (TYPE_7__*,size_t) ;
 size_t FUNC_4 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_9__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (size_t*,int ,size_t) ;
 int FUNC_8 (size_t*,size_t,int,int ) ;
 size_t FUNC_9 (TYPE_7__*,int ,int ,int ) ;

uint8_t FUNC_10(Assoc *VAR_8, Assoc_close_entries *VAR_9)
{
    if (!VAR_8 || !VAR_9 || !VAR_9->wanted_id || !VAR_9->result)
        return 0;

    if (!VAR_8->self_hash) {
        FUNC_1(VAR_8);

        if (!VAR_8->self_hash)
            return 0;
    }

    if (!VAR_9->distance_relative_func)
        VAR_9->distance_relative_func = VAR_6;

    if (!VAR_9->distance_absolute_func)
        VAR_9->distance_absolute_func = FUNC_4;

    size_t VAR_10 = VAR_8->candidates_bucket_count * VAR_8->candidates_bucket_size;
    uint64_t VAR_11[VAR_10];
    FUNC_7(VAR_11, ~0, VAR_10 * sizeof(VAR_11[0]));
    bucket_t VAR_12;
    size_t VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_8->candidates_bucket_count; VAR_12++) {
        candidates_bucket *VAR_14 = &VAR_8->candidates[VAR_12];

        for (VAR_13 = 0; VAR_13 < VAR_8->candidates_bucket_size; VAR_13++) {
            Client_entry *VAR_15 = &VAR_14->list[VAR_13];

            if (VAR_15->hash) {
                if (VAR_9->flags & VAR_4) {
                    if (!FUNC_5(&VAR_15->client.assoc4.ip_port))
                        continue;

                    if (!(VAR_9->flags & VAR_3))
                        if (!FUNC_0(VAR_15->client.assoc4.ip_port.ip))
                            continue;
                }

                if (VAR_9->flags & VAR_5) {
                    if (!FUNC_5(&VAR_15->client.assoc6.ip_port))
                        continue;

                    if (!(VAR_9->flags & VAR_3))
                        if (!FUNC_0(VAR_15->client.assoc6.ip_port.ip))
                            continue;
                }

                uint64_t VAR_16 = VAR_9->distance_absolute_func(VAR_8, VAR_9->custom_data, VAR_9->wanted_id, VAR_15->client.public_key);
                uint32_t VAR_17 = VAR_12 * VAR_8->candidates_bucket_size + VAR_13;
                VAR_11[VAR_17] = (VAR_16 << VAR_1) | VAR_17;
            }
        }
    }

    FUNC_8(VAR_11, VAR_10, sizeof(VAR_11[0]), VAR_7);





    uint64_t VAR_18 = ~0;
    size_t VAR_19 = ~0, VAR_20;
    size_t VAR_21 = 1;

    for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {

        if ((VAR_11[VAR_20] & VAR_2) == VAR_2)
            break;

        uint64_t VAR_22 = VAR_11[VAR_20] >> VAR_1;

        if (VAR_18 == VAR_22)
            VAR_21++;
        else {
            if (VAR_21 > 1)
                FUNC_2(VAR_8, VAR_11, VAR_19, VAR_20 - 1, VAR_9->wanted_id, VAR_9->custom_data,
                                  VAR_9->distance_relative_func);

            VAR_18 = VAR_22;
            VAR_19 = VAR_20;
            VAR_21 = 1;
        }
    }

    if (VAR_21 > 1)
        FUNC_2(VAR_8, VAR_11, VAR_19, VAR_20 - 1, VAR_9->wanted_id, VAR_9->custom_data,
                          VAR_9->distance_relative_func);





    size_t VAR_23 = 0, VAR_24 = 0;
    size_t VAR_25 = VAR_9->count_good;

    ssize_t VAR_26 = - 1;

    for (VAR_13 = 0; (VAR_13 < VAR_10) && (VAR_24 < VAR_9->count); VAR_13++) {

        if ((VAR_11[VAR_13] & VAR_2) == VAR_2)
            break;

        Client_entry *VAR_27 = FUNC_3(VAR_8, VAR_11[VAR_13]);

        if (VAR_27 && VAR_27->hash) {
            if (VAR_23 >= VAR_25) {
                VAR_9->result[VAR_24++] = &VAR_27->client;
                VAR_26 = VAR_13;
            } else {
                if (VAR_9->flags & (VAR_4 | VAR_5)) {
                    if ((VAR_9->flags & VAR_4) && FUNC_6(VAR_27->client.assoc4.timestamp, VAR_0))
                        continue;

                    if ((VAR_9->flags & VAR_5) && FUNC_6(VAR_27->client.assoc6.timestamp, VAR_0))
                        continue;
                } else if (FUNC_6(VAR_27->seen_at, VAR_0))
                    continue;

                VAR_9->result[VAR_24++] = &VAR_27->client;
                VAR_23++;
                VAR_26 = VAR_13;
            }
        }
    }





    if (VAR_24 < VAR_9->count) {
        for (VAR_13 = VAR_26 + 1; (VAR_13 < VAR_10) && (VAR_24 < VAR_9->count); VAR_13++) {

            if ((VAR_11[VAR_13] & VAR_2) == VAR_2)
                break;

            Client_entry *VAR_28 = FUNC_3(VAR_8, VAR_11[VAR_13]);

            if (VAR_28 && VAR_28->hash)
                VAR_9->result[VAR_24++] = &VAR_28->client;
        }
    }

    return VAR_24;
}
