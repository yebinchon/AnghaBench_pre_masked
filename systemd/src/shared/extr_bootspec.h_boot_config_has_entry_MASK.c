
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t n_entries; TYPE_1__* entries; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_2__ BootConfig ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static inline bool FUNC_1(BootConfig *VAR_0, const char *VAR_1) {
        size_t VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_0->n_entries; VAR_2++)
                if (FUNC_0(VAR_0->entries[VAR_2].id, VAR_1))
                        return 1;

        return 0;
}
