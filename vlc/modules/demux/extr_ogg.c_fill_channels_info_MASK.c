
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pi_channels_map ;
struct TYPE_3__ {unsigned int i_channels; int i_physical_channels; } ;
typedef TYPE_1__ audio_format_t ;
__attribute__((used)) static void FUNC_0(audio_format_t *VAR_0)
{
    static const int VAR_1[9] =
    {
        0,
        136,
        135 | 128,
        136 | 135 | 128,
        135 | 128 | 130
            | 129,
        135 | 128 | 136
            | 130 | 129,
        135 | 128 | 136
            | 130 | 129 | 134,
        135 | 128 | 136
            | 131 | 133
            | 132 | 134,
        135 | 128 | 136 | 130
            | 129 | 133 | 132
            | 134,
    };

    unsigned VAR_2 = VAR_0->i_channels;
    if (VAR_2 < sizeof(VAR_1) / sizeof(VAR_1[0]))
        VAR_0->i_physical_channels = VAR_1[VAR_2];
}
