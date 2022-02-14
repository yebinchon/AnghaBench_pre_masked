
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_format; int i_bytes_per_frame; int i_frame_length; int i_rate; int channel_type; } ;
typedef TYPE_1__ audio_sample_format_t ;
typedef int audio_output_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 int VAR_3 ;
 void* VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(audio_output_t *VAR_6, audio_sample_format_t *restrict VAR_7)
{
    (void) VAR_6;

    switch (VAR_7->i_format)
    {
        case 132:
        case 130:
            VAR_7->i_format = VAR_4;
            VAR_7->i_bytes_per_frame = 4;
            VAR_7->i_frame_length = 1;
            break;
        case 131:
        case 128:
        case 129:
            VAR_7->i_format = VAR_4;
            VAR_7->i_rate = 768000;
            VAR_7->i_bytes_per_frame = 16;
            VAR_7->i_frame_length = 1;
            break;
        default:
            FUNC_2(FUNC_0(VAR_7));
            FUNC_2(FUNC_1(VAR_7) > 0);
            VAR_7->i_format = VAR_1 ? VAR_2 : VAR_3;
            VAR_7->channel_type = VAR_0;
            break;
    }

    return VAR_5;
}
