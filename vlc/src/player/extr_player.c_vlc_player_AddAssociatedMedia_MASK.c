
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_address; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int thread; } ;
struct TYPE_6__ {int b_forced; } ;
typedef TYPE_2__ input_item_slave_t ;
typedef enum slave_type { ____Placeholder_slave_type } slave_type ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;



 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 struct vlc_player_input* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;

int
FUNC_6(vlc_player_t *VAR_5,
                              enum es_format_category_e VAR_6, const char *VAR_7,
                              bool VAR_8, bool VAR_9, bool VAR_10)
{
    struct vlc_player_input *VAR_11 = FUNC_4(VAR_5);

    if (!VAR_11 || !VAR_7)
        return VAR_2;

    enum slave_type VAR_12;
    switch (VAR_6)
    {
        case 131:
            VAR_12 = 130;
            break;
        case 128:
            VAR_12 = 129;
            break;
        default:
            return VAR_2;
    }

    if (VAR_10 && VAR_12 == 129 && !FUNC_2(VAR_7))
        return VAR_2;

    input_item_slave_t *VAR_13 =
        FUNC_1(VAR_7, VAR_12, VAR_1);
    if (!VAR_13)
        return VAR_3;
    VAR_13->b_forced = VAR_8;

    vlc_value_t VAR_14 = { .p_address = VAR_13 };
    int VAR_15 = FUNC_0(VAR_11->thread, VAR_0,
                                      &VAR_14);
    if (VAR_15 != VAR_4)
        return VAR_15;

    if (VAR_9)
    {
        switch( VAR_12 )
        {
            case 130:
                FUNC_5(VAR_5, "%s",
                                       FUNC_3("Audio track added"));
                break;
            case 129:
                FUNC_5(VAR_5, "%s",
                                       FUNC_3("Subtitle track added"));
                break;
        }
    }
    return VAR_4;
}
