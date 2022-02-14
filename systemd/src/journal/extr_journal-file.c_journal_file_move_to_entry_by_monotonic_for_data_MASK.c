
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int sd_id128_t ;
typedef int direction_t ;
struct TYPE_7__ {int n_entries; int entry_array_offset; int entry_offset; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
typedef TYPE_2__ Object ;
typedef int JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,TYPE_2__**,scalar_t__*) ;
 int FUNC_2 (int *,int ,int ,int ,scalar_t__,int ,int ,TYPE_2__**,scalar_t__*,int *) ;
 int FUNC_3 (int *,int ,scalar_t__,TYPE_2__**) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(
                JournalFile *VAR_4,
                uint64_t VAR_5,
                sd_id128_t VAR_6,
                uint64_t VAR_7,
                direction_t VAR_8,
                Object **VAR_9, uint64_t *VAR_10) {

        Object *VAR_11, *VAR_12;
        int VAR_13;
        uint64_t VAR_14, VAR_15;

        FUNC_0(VAR_4);


        VAR_13 = FUNC_1(VAR_4, VAR_6, &VAR_11, &VAR_14);
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0)
                return -VAR_0;

        VAR_13 = FUNC_2(VAR_4,
                                          FUNC_4(VAR_11->data.entry_offset),
                                          FUNC_4(VAR_11->data.entry_array_offset),
                                          FUNC_4(VAR_11->data.n_entries),
                                          VAR_7,
                                          VAR_2,
                                          VAR_8,
                                          ((void*)0), &VAR_15, ((void*)0));
        if (VAR_13 <= 0)
                return VAR_13;




        for (;;) {
                Object *VAR_16;
                uint64_t VAR_17, VAR_18;

                VAR_13 = FUNC_3(VAR_4, VAR_1, VAR_5, &VAR_12);
                if (VAR_13 < 0)
                        return VAR_13;

                VAR_13 = FUNC_2(VAR_4,
                                                  FUNC_4(VAR_12->data.entry_offset),
                                                  FUNC_4(VAR_12->data.entry_array_offset),
                                                  FUNC_4(VAR_12->data.n_entries),
                                                  VAR_15,
                                                  VAR_3,
                                                  VAR_8,
                                                  ((void*)0), &VAR_17, ((void*)0));
                if (VAR_13 <= 0)
                        return VAR_13;

                VAR_13 = FUNC_3(VAR_4, VAR_1, VAR_14, &VAR_11);
                if (VAR_13 < 0)
                        return VAR_13;

                VAR_13 = FUNC_2(VAR_4,
                                                  FUNC_4(VAR_11->data.entry_offset),
                                                  FUNC_4(VAR_11->data.entry_array_offset),
                                                  FUNC_4(VAR_11->data.n_entries),
                                                  VAR_17,
                                                  VAR_3,
                                                  VAR_8,
                                                  &VAR_16, &VAR_18, ((void*)0));

                if (VAR_13 <= 0)
                        return VAR_13;

                if (VAR_17 == VAR_18) {
                        if (VAR_9)
                                *VAR_9 = VAR_16;
                        if (VAR_10)
                                *VAR_10 = VAR_18;

                        return 1;
                }

                VAR_15 = VAR_18;
        }
}
