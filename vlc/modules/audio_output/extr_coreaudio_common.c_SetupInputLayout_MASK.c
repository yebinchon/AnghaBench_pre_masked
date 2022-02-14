
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct aout_sys_common {void* chans_to_reorder; int chan_table; } ;
struct TYPE_7__ {int i_physical_channels; } ;
typedef TYPE_1__ audio_sample_format_t ;
struct TYPE_8__ {scalar_t__ sys; } ;
typedef TYPE_2__ audio_output_t ;
typedef int AudioChannelLayoutTag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int *,int*,int,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static int
FUNC_3(audio_output_t *VAR_27, const audio_sample_format_t *VAR_28,
                 AudioChannelLayoutTag *VAR_29)
{
    struct aout_sys_common *VAR_30 = (struct aout_sys_common *) VAR_27->sys;
    uint32_t VAR_31[VAR_5];
    switch (FUNC_1(VAR_28))
    {
        case 1:
            *VAR_29 = VAR_25;
            break;
        case 2:
            *VAR_29 = VAR_26;
            break;
        case 3:
            if (VAR_28->i_physical_channels & VAR_2)
                *VAR_29 = VAR_22;
            else if (VAR_28->i_physical_channels & VAR_4)
                *VAR_29 = VAR_21;
            break;
        case 4:
            if (VAR_28->i_physical_channels & (VAR_2 | VAR_4))
                *VAR_29 = VAR_16;
            else if (VAR_28->i_physical_channels & VAR_1)
                *VAR_29 = VAR_20;
            else if (VAR_28->i_physical_channels & VAR_0)
                *VAR_29 = VAR_20;
            break;
        case 5:
            if (VAR_28->i_physical_channels & (VAR_2))
                *VAR_29 = VAR_18;
            else if (VAR_28->i_physical_channels & (VAR_4))
                *VAR_29 = VAR_17;
            break;
        case 6:
            if (VAR_28->i_physical_channels & (VAR_4))
            {

                *VAR_29 = VAR_19;

                VAR_31[0] = VAR_3;
                VAR_31[1] = VAR_11;
                VAR_31[2] = VAR_9;
                VAR_31[3] = VAR_10;
                VAR_31[4] = VAR_2;
                VAR_31[5] = VAR_4;

                VAR_30->chans_to_reorder =
                    FUNC_0(((void*)0), VAR_31,
                                             VAR_28->i_physical_channels,
                                             VAR_30->chan_table);
                if (VAR_30->chans_to_reorder)
                    FUNC_2(VAR_27, "channel reordering needed for 5.1 output");
            }
            else
            {

                *VAR_29 = VAR_13;

                VAR_31[0] = VAR_3;
                VAR_31[1] = VAR_11;
                VAR_31[2] = VAR_9;
                VAR_31[3] = VAR_10;
                VAR_31[4] = VAR_2;
                VAR_31[5] = VAR_8;

                VAR_30->chans_to_reorder =
                    FUNC_0(((void*)0), VAR_31,
                                             VAR_28->i_physical_channels,
                                             VAR_30->chan_table);
                if (VAR_30->chans_to_reorder)
                    FUNC_2(VAR_27, "channel reordering needed for 6.0 output");
            }
            break;
        case 7:

            *VAR_29 = VAR_23;

            VAR_31[0] = VAR_3;
            VAR_31[1] = VAR_11;
            VAR_31[2] = VAR_2;
            VAR_31[3] = VAR_4;
            VAR_31[4] = VAR_9;
            VAR_31[5] = VAR_10;
            VAR_31[6] = VAR_8;

            VAR_30->chans_to_reorder =
                FUNC_0(((void*)0), VAR_31,
                                         VAR_28->i_physical_channels,
                                         VAR_30->chan_table);
            if (VAR_30->chans_to_reorder)
                FUNC_2(VAR_27, "channel reordering needed for 6.1 output");

            break;
        case 8:
            if (VAR_28->i_physical_channels & (VAR_4))
            {

                *VAR_29 = VAR_24;

                VAR_31[0] = VAR_3;
                VAR_31[1] = VAR_11;
                VAR_31[2] = VAR_2;
                VAR_31[3] = VAR_4;
                VAR_31[4] = VAR_6;
                VAR_31[5] = VAR_7;
                VAR_31[6] = VAR_9;
                VAR_31[7] = VAR_10;
            }
            else
            {

                *VAR_29 = VAR_14;

                VAR_31[0] = VAR_6;
                VAR_31[1] = VAR_2;
                VAR_31[2] = VAR_7;
                VAR_31[3] = VAR_3;
                VAR_31[4] = VAR_11;
                VAR_31[5] = VAR_9;
                VAR_31[6] = VAR_8;
                VAR_31[7] = VAR_10;
            }
            VAR_30->chans_to_reorder =
                FUNC_0(((void*)0), VAR_31,
                                         VAR_28->i_physical_channels,
                                         VAR_30->chan_table);
            if (VAR_30->chans_to_reorder)
                FUNC_2(VAR_27, "channel reordering needed for 7.1 / 8.0 output");
            break;
        case 9:

            *VAR_29 = VAR_15;
            VAR_31[0] = VAR_6;
            VAR_31[1] = VAR_2;
            VAR_31[2] = VAR_7;
            VAR_31[3] = VAR_3;
            VAR_31[4] = VAR_11;
            VAR_31[5] = VAR_9;
            VAR_31[6] = VAR_8;
            VAR_31[7] = VAR_10;
            VAR_31[8] = VAR_4;

            VAR_30->chans_to_reorder =
                FUNC_0(((void*)0), VAR_31,
                                         VAR_28->i_physical_channels,
                                         VAR_30->chan_table);
            if (VAR_30->chans_to_reorder)
                FUNC_2(VAR_27, "channel reordering needed for 8.1 output");
            break;
    }

    return VAR_12;
}
