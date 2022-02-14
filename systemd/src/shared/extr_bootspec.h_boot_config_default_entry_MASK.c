
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ default_entry; int * entries; } ;
typedef int BootEntry ;
typedef TYPE_1__ BootConfig ;



__attribute__((used)) static inline BootEntry* FUNC_0(BootConfig *VAR_0) {
        if (VAR_0->default_entry < 0)
                return ((void*)0);

        return VAR_0->entries + VAR_0->default_entry;
}
