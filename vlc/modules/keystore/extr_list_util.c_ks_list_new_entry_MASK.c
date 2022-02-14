
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ppsz_values; int * p_secret; } ;
typedef TYPE_1__ vlc_keystore_entry ;
struct ks_list {int i_count; int i_max; TYPE_1__* p_entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ks_list*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;

vlc_keystore_entry *
FUNC_3(struct ks_list *VAR_0)
{
    if (VAR_0->i_count + 1 > VAR_0->i_max)
    {
        VAR_0->i_max += 10;
        vlc_keystore_entry *VAR_1 = FUNC_2(VAR_0->p_entries, VAR_0->i_max
                                                * sizeof(*VAR_0->p_entries));
        if (!VAR_1)
        {
            FUNC_1(VAR_0);
            return ((void*)0);
        }
        VAR_0->p_entries = VAR_1;
    }
    vlc_keystore_entry *VAR_2 = &VAR_0->p_entries[VAR_0->i_count];
    VAR_2->p_secret = ((void*)0);
    FUNC_0(VAR_2->ppsz_values);
    VAR_0->i_count++;

    return VAR_2;
}
