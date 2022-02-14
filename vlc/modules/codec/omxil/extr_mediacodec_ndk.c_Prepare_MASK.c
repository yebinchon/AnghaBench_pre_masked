
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_quirks; int psz_name; int i_codec; int i_cat; int psz_mime; int p_obj; } ;
typedef TYPE_1__ mc_api ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(mc_api * VAR_2, int VAR_3)
{
    FUNC_2(VAR_2->psz_name);

    VAR_2->i_quirks = 0;
    VAR_2->psz_name = FUNC_0(VAR_2->p_obj, VAR_2->psz_mime,
                                       VAR_3, &VAR_2->i_quirks);
    if (!VAR_2->psz_name)
        return VAR_0;
    VAR_2->i_quirks |= FUNC_1(VAR_2->i_cat, VAR_2->i_codec, VAR_2->psz_name,
                                        FUNC_3(VAR_2->psz_name));

    VAR_2->i_quirks |= VAR_1;
    return 0;
}
