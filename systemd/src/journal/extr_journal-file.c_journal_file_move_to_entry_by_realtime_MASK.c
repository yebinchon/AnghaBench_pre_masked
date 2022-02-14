
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int direction_t ;
struct TYPE_5__ {int n_entries; struct TYPE_5__* header; int entry_array_offset; } ;
typedef int Object ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ,int **,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

int FUNC_3(
                JournalFile *VAR_1,
                uint64_t VAR_2,
                direction_t VAR_3,
                Object **VAR_4,
                uint64_t *VAR_5) {
        FUNC_0(VAR_1);
        FUNC_0(VAR_1->header);

        return FUNC_1(VAR_1,
                                    FUNC_2(VAR_1->header->entry_array_offset),
                                    FUNC_2(VAR_1->header->n_entries),
                                    VAR_2,
                                    VAR_0,
                                    VAR_3,
                                    VAR_4, VAR_5, ((void*)0));
}
