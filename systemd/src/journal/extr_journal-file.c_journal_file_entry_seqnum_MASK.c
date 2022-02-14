
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ head_entry_seqnum; struct TYPE_4__* header; void* tail_entry_seqnum; } ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static uint64_t FUNC_3(JournalFile *VAR_0, uint64_t *VAR_1) {
        uint64_t VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_0->header);

        VAR_2 = FUNC_2(VAR_0->header->tail_entry_seqnum) + 1;

        if (VAR_1) {




                if (*VAR_1 + 1 > VAR_2)
                        VAR_2 = *VAR_1 + 1;

                *VAR_1 = VAR_2;
        }

        VAR_0->header->tail_entry_seqnum = FUNC_1(VAR_2);

        if (VAR_0->header->head_entry_seqnum == 0)
                VAR_0->header->head_entry_seqnum = FUNC_1(VAR_2);

        return VAR_2;
}
