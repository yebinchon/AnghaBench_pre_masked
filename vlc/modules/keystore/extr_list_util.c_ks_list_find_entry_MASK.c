
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** ppsz_values; int p_secret; } ;
typedef TYPE_1__ vlc_keystore_entry ;
struct ks_list {unsigned int i_count; TYPE_1__* p_entries; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

vlc_keystore_entry *
FUNC_1(struct ks_list *VAR_1, const char *const VAR_2[VAR_0],
                   unsigned *VAR_3)
{
    for (unsigned int VAR_4 = VAR_3 ? *VAR_3 : 0;
         VAR_4 < VAR_1->i_count; ++VAR_4)
    {
        vlc_keystore_entry *VAR_5 = &VAR_1->p_entries[VAR_4];
        if (!VAR_5->p_secret)
            continue;

        bool VAR_6 = 1;
        for (unsigned int VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
        {
            const char *VAR_8 = VAR_2[VAR_7];
            const char *VAR_9 = VAR_5->ppsz_values[VAR_7];

            if (!VAR_8)
                continue;
            if (!VAR_9 || FUNC_0(VAR_8, VAR_9))
                VAR_6 = 0;
        }
        if (VAR_6)
        {
            if (VAR_3)
                *VAR_3 = VAR_4 + 1;
            return VAR_5;
        }
    }
    return ((void*)0);
}
