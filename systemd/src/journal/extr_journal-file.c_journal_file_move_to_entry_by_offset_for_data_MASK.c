
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int direction_t ;
struct TYPE_6__ {int n_entries; int entry_array_offset; int entry_offset; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
typedef TYPE_2__ Object ;
typedef int JournalFile ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,int ,TYPE_2__**,int *,int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

int FUNC_4(
                JournalFile *VAR_2,
                uint64_t VAR_3,
                uint64_t VAR_4,
                direction_t VAR_5,
                Object **VAR_6, uint64_t *VAR_7) {

        int VAR_8;
        Object *VAR_9;

        FUNC_0(VAR_2);

        VAR_8 = FUNC_2(VAR_2, VAR_0, VAR_3, &VAR_9);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_1(VAR_2,
                                             FUNC_3(VAR_9->data.entry_offset),
                                             FUNC_3(VAR_9->data.entry_array_offset),
                                             FUNC_3(VAR_9->data.n_entries),
                                             VAR_4,
                                             VAR_1,
                                             VAR_5,
                                             VAR_6, VAR_7, ((void*)0));
}
