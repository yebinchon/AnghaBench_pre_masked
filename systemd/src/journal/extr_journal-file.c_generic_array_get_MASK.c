
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_16__ {scalar_t__ total; scalar_t__ array; } ;
struct TYPE_15__ {int chain_cache; } ;
struct TYPE_13__ {int * items; int next_entry_array_offset; } ;
struct TYPE_14__ {TYPE_1__ entry_array; } ;
typedef TYPE_2__ Object ;
typedef TYPE_3__ JournalFile ;
typedef TYPE_4__ ChainCacheItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_4__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int ,scalar_t__,TYPE_2__**) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(
                JournalFile *VAR_2,
                uint64_t VAR_3,
                uint64_t VAR_4,
                Object **VAR_5, uint64_t *VAR_6) {

        Object *VAR_7;
        uint64_t VAR_8 = 0, VAR_9, VAR_10 = 0;
        int VAR_11;
        ChainCacheItem *VAR_12;

        FUNC_0(VAR_2);

        VAR_9 = VAR_3;


        VAR_12 = FUNC_5(VAR_2->chain_cache, &VAR_3);
        if (VAR_12 && VAR_4 > VAR_12->total) {
                VAR_9 = VAR_12->array;
                VAR_4 -= VAR_12->total;
                VAR_10 = VAR_12->total;
        }

        while (VAR_9 > 0) {
                uint64_t VAR_13;

                VAR_11 = FUNC_3(VAR_2, VAR_1, VAR_9, &VAR_7);
                if (VAR_11 < 0)
                        return VAR_11;

                VAR_13 = FUNC_2(VAR_7);
                if (VAR_4 < VAR_13) {
                        VAR_8 = FUNC_4(VAR_7->entry_array.items[VAR_4]);
                        goto found;
                }

                VAR_4 -= VAR_13;
                VAR_10 += VAR_13;
                VAR_9 = FUNC_4(VAR_7->entry_array.next_entry_array_offset);
        }

        return 0;

found:

        FUNC_1(VAR_2->chain_cache, VAR_12, VAR_3, VAR_9, FUNC_4(VAR_7->entry_array.items[0]), VAR_10, VAR_4);

        VAR_11 = FUNC_3(VAR_2, VAR_0, VAR_8, &VAR_7);
        if (VAR_11 < 0)
                return VAR_11;

        if (VAR_5)
                *VAR_5 = VAR_7;

        if (VAR_6)
                *VAR_6 = VAR_8;

        return 1;
}
