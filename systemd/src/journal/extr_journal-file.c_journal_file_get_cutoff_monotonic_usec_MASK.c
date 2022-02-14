
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef scalar_t__ uint64_t ;
typedef int sd_id128_t ;
struct TYPE_8__ {int monotonic; } ;
struct TYPE_7__ {int n_entries; int entry_array_offset; int entry_offset; } ;
struct TYPE_9__ {TYPE_2__ entry; TYPE_1__ data; } ;
typedef TYPE_3__ Object ;
typedef int JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_3__**,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,TYPE_3__**,int *) ;
 int FUNC_3 (int *,int ,scalar_t__,TYPE_3__**) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(JournalFile *VAR_2, sd_id128_t VAR_3, usec_t *VAR_4, usec_t *VAR_5) {
        Object *VAR_6;
        uint64_t VAR_7;
        int VAR_8;

        FUNC_0(*VAR_2);
        FUNC_0(VAR_4 || VAR_5);

        VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_7);
        if (VAR_8 <= 0)
                return VAR_8;

        if (FUNC_4(VAR_6->data.n_entries) <= 0)
                return 0;

        if (VAR_4) {
                VAR_8 = FUNC_3(VAR_2, VAR_1, FUNC_4(VAR_6->data.entry_offset), &VAR_6);
                if (VAR_8 < 0)
                        return VAR_8;

                *VAR_4 = FUNC_4(VAR_6->entry.monotonic);
        }

        if (VAR_5) {
                VAR_8 = FUNC_3(VAR_2, VAR_0, VAR_7, &VAR_6);
                if (VAR_8 < 0)
                        return VAR_8;

                VAR_8 = FUNC_2(VAR_2,
                                               FUNC_4(VAR_6->data.entry_offset),
                                               FUNC_4(VAR_6->data.entry_array_offset),
                                               FUNC_4(VAR_6->data.n_entries)-1,
                                               &VAR_6, ((void*)0));
                if (VAR_8 <= 0)
                        return VAR_8;

                *VAR_5 = FUNC_4(VAR_6->entry.monotonic);
        }

        return 1;
}
