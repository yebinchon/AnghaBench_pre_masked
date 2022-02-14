
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_quirks; int psz_name; int i_codec; int i_cat; int psz_mime; int p_obj; } ;
typedef TYPE_1__ mc_api ;
struct TYPE_5__ {scalar_t__ get_output_buffer; scalar_t__ get_input_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_3, int VAR_4)
{
    FUNC_2(VAR_3->psz_name);

    VAR_3->i_quirks = 0;
    VAR_3->psz_name = FUNC_0(VAR_3->p_obj, VAR_3->psz_mime,
                                       VAR_4, &VAR_3->i_quirks);
    if (!VAR_3->psz_name)
        return VAR_0;
    VAR_3->i_quirks |= FUNC_1(VAR_3->i_cat, VAR_3->i_codec, VAR_3->psz_name,
                                        FUNC_3(VAR_3->psz_name));


    if (VAR_2.get_input_buffer && VAR_2.get_output_buffer)
        VAR_3->i_quirks |= VAR_1;
    return 0;
}
