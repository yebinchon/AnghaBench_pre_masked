
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t n_entries; scalar_t__ entries; scalar_t__ entry_default; scalar_t__ entry_oneshot; scalar_t__ console_mode; scalar_t__ auto_firmware; scalar_t__ auto_entries; scalar_t__ editor; scalar_t__ timeout; scalar_t__ default_pattern; } ;
typedef TYPE_1__ BootConfig ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(BootConfig *VAR_0) {
        size_t VAR_1;

        FUNC_0(VAR_0);

        FUNC_2(VAR_0->default_pattern);
        FUNC_2(VAR_0->timeout);
        FUNC_2(VAR_0->editor);
        FUNC_2(VAR_0->auto_entries);
        FUNC_2(VAR_0->auto_firmware);
        FUNC_2(VAR_0->console_mode);

        FUNC_2(VAR_0->entry_oneshot);
        FUNC_2(VAR_0->entry_default);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_entries; VAR_1++)
                FUNC_1(VAR_0->entries + VAR_1);
        FUNC_2(VAR_0->entries);
}
