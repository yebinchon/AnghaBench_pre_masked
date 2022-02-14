
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_entries_count; int psz_dialog_password; int psz_dialog_username; int psz_var_password; int psz_var_username; int psz_split_domain; scalar_t__ p_keystore; int p_entries; } ;
typedef TYPE_1__ vlc_credential ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

void
FUNC_3(vlc_credential *VAR_0)
{
    if (VAR_0->i_entries_count > 0)
        FUNC_2(VAR_0->p_entries,
                                     VAR_0->i_entries_count);
    if (VAR_0->p_keystore)
        FUNC_1(VAR_0->p_keystore);

    FUNC_0(VAR_0->psz_split_domain);
    FUNC_0(VAR_0->psz_var_username);
    FUNC_0(VAR_0->psz_var_password);
    FUNC_0(VAR_0->psz_dialog_username);
    FUNC_0(VAR_0->psz_dialog_password);
}
