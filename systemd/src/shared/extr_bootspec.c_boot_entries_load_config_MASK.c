
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int default_entry; int entry_default; int entry_oneshot; int n_entries; int entries; } ;
typedef TYPE_1__ BootConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,char const*,int *,int *) ;
 int FUNC_3 (char const*,char const*,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (char const*,TYPE_1__*) ;
 int FUNC_7 (int ,char*,int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*) ;
 char* FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ,int ,int ) ;

int FUNC_13(
                const char *VAR_5,
                const char *VAR_6,
                BootConfig *VAR_7) {

        const char *VAR_8;
        int VAR_9;

        FUNC_1(VAR_7);

        if (VAR_5) {
                VAR_8 = FUNC_11(VAR_5, "/loader/loader.conf");
                VAR_9 = FUNC_6(VAR_8, VAR_7);
                if (VAR_9 < 0)
                        return VAR_9;

                VAR_8 = FUNC_11(VAR_5, "/loader/entries");
                VAR_9 = FUNC_2(VAR_5, VAR_8, &VAR_7->entries, &VAR_7->n_entries);
                if (VAR_9 < 0)
                        return VAR_9;

                VAR_8 = FUNC_11(VAR_5, "/EFI/Linux/");
                VAR_9 = FUNC_3(VAR_5, VAR_8, &VAR_7->entries, &VAR_7->n_entries);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        if (VAR_6) {
                VAR_8 = FUNC_11(VAR_6, "/loader/entries");
                VAR_9 = FUNC_2(VAR_6, VAR_8, &VAR_7->entries, &VAR_7->n_entries);
                if (VAR_9 < 0)
                        return VAR_9;

                VAR_8 = FUNC_11(VAR_6, "/EFI/Linux/");
                VAR_9 = FUNC_3(VAR_6, VAR_8, &VAR_7->entries, &VAR_7->n_entries);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        FUNC_12(VAR_7->entries, VAR_7->n_entries, VAR_4);

        VAR_9 = FUNC_5(VAR_7->entries, VAR_7->n_entries);
        if (VAR_9 < 0)
                return FUNC_9(VAR_9, "Failed to uniquify boot entries: %m");

        if (FUNC_8()) {
                VAR_9 = FUNC_7(VAR_0, "LoaderEntryOneShot", &VAR_7->entry_oneshot);
                if (VAR_9 < 0 && !FUNC_0(VAR_9, -VAR_2, -VAR_1)) {
                        FUNC_10(VAR_9, "Failed to read EFI variable \"LoaderEntryOneShot\": %m");
                        if (VAR_9 == -VAR_3)
                                return VAR_9;
                }

                VAR_9 = FUNC_7(VAR_0, "LoaderEntryDefault", &VAR_7->entry_default);
                if (VAR_9 < 0 && !FUNC_0(VAR_9, -VAR_2, -VAR_1)) {
                        FUNC_10(VAR_9, "Failed to read EFI variable \"LoaderEntryDefault\": %m");
                        if (VAR_9 == -VAR_3)
                                return VAR_9;
                }
        }

        VAR_7->default_entry = FUNC_4(VAR_7);
        return 0;
}
