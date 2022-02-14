
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psz_file; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_6__ {int i_secret_len; int p_secret; scalar_t__ ppsz_values; } ;
typedef TYPE_2__ vlc_keystore_entry ;
struct TYPE_7__ {TYPE_1__* p_sys; } ;
typedef TYPE_3__ vlc_keystore ;
struct ks_list {unsigned int i_count; TYPE_2__* p_entries; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,char const* const*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(vlc_keystore *VAR_2, FILE *VAR_3, int VAR_4, struct ks_list *VAR_5)
{
    vlc_keystore_sys *VAR_6 = VAR_2->p_sys;
    int VAR_7 = VAR_0;

    FUNC_2(VAR_3);
    if (FUNC_3(VAR_4))
    {
        FUNC_6(VAR_6->psz_file);
        return VAR_7;
    }

    for (unsigned int VAR_8 = 0; VAR_8 < VAR_5->i_count; ++VAR_8)
    {
        vlc_keystore_entry *VAR_9 = &VAR_5->p_entries[VAR_8];
        if (!VAR_9->p_secret)
            continue;

        if (FUNC_0(VAR_3, "{") < 0)
            goto end;
        if (FUNC_4(VAR_3, (const char *const *) VAR_9->ppsz_values))
            goto end;
        char *VAR_10 = FUNC_5(VAR_9->p_secret,
                                              VAR_9->i_secret_len);
        if (!VAR_10)
            goto end;
        if (FUNC_0(VAR_3, "}:%s\n", VAR_10) < 0)
        {
            FUNC_1(VAR_10);
            goto end;
        }
        FUNC_1(VAR_10);
    }
    VAR_7 = VAR_1;
end:

    if (VAR_7 != VAR_1)
    {
        if (FUNC_3(VAR_4))
            FUNC_6(VAR_6->psz_file);
    }
    return VAR_7;
}
