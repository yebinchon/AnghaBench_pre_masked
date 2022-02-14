
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* content; } ;
struct TYPE_4__ {size_t n_entries; TYPE_3__* entries; } ;
typedef TYPE_1__ PStoreList ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(PStoreList *VAR_0) {
        for (size_t VAR_1 = 0; VAR_1 < VAR_0->n_entries; VAR_1++)
                FUNC_0(VAR_0->entries[VAR_1].content);
        FUNC_0(VAR_0->entries);
        VAR_0->n_entries = 0;
}
