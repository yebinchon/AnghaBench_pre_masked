
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_rate; } ;
struct TYPE_8__ {int i_extra; int i_codec; int i_original_fourcc; int i_cat; scalar_t__ p_extra; TYPE_2__ audio; } ;
struct TYPE_9__ {unsigned int i_samples_count; int i_read_duration; TYPE_3__ fmt; int i_track_id; TYPE_1__* samples; } ;
typedef TYPE_4__ mp4mux_trackinfo_t ;
typedef scalar_t__ int64_t ;
typedef int bo_t ;
struct TYPE_6__ {scalar_t__ i_size; int i_length; } ;



 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int * FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static bo_t *FUNC_6(mp4mux_trackinfo_t *VAR_1)
{
    bo_t *VAR_2;


    int VAR_3 = (VAR_1->fmt.i_extra > 0) ? 5 + VAR_1->fmt.i_extra : 0;

    VAR_2 = FUNC_5("esds", 0, 0);
    if(!VAR_2)
        return ((void*)0);


    int64_t VAR_4 = 0;
    int64_t VAR_5 = 0;

    for (unsigned VAR_6 = 0; VAR_6 < VAR_1->i_samples_count; VAR_6++) {
        VAR_4 += VAR_1->samples[VAR_6].i_size;
        if (VAR_1->samples[VAR_6].i_length > 0) {
            int64_t VAR_7 = VAR_0 * 8 * VAR_1->samples[VAR_6].i_size / VAR_1->samples[VAR_6].i_length;
            if (VAR_7 > VAR_5)
                VAR_5 = VAR_7;
        }
    }

    if (VAR_1->i_read_duration > 0)
        VAR_4 = VAR_0 * 8 * VAR_4 / VAR_1->i_read_duration;
    else
        VAR_4 = 0;
    if (VAR_5 <= 1)
        VAR_5 = 0x7fffffff;


    FUNC_4(VAR_2, 0x03, 3 + 5 + 13 + VAR_3 + 5 + 1);
    FUNC_0(VAR_2, VAR_1->i_track_id);
    FUNC_3 (VAR_2, 0x1f);



    FUNC_4(VAR_2, 0x04, 13 + VAR_3);

    uint8_t VAR_8;
    switch(VAR_1->fmt.i_codec)
    {
    case 130:
        VAR_8 = 0x20;
        break;
    case 128:
        if(VAR_1->fmt.i_original_fourcc == 134)
        {
            VAR_8 = 0x6a;
            break;
        }

    case 133:

        VAR_8 = 0x61;
        break;
    case 134:
        VAR_8 = 0x6a;
        break;
    case 131:

        VAR_8 = 0x40;
        break;
    case 132:
    case 129:
        VAR_8 =
            VAR_1->fmt.audio.i_rate < 32000 ? 0x69
                                              : 0x6b;
        break;
    case 135:
        VAR_8 = 0xa9;
        break;
    default:
        VAR_8 = 0xFE;
        break;
    }

    uint8_t VAR_9;
    switch(VAR_1->fmt.i_cat)
    {
        case 136:
            VAR_9 = 0x04;
            break;
        case 138:
            VAR_9 = 0x05;
            break;
        case 137:
            VAR_9 = 0x0D;
            break;
        default:
            VAR_9 = 0x20;
            break;
    }

    FUNC_3 (VAR_2, VAR_8);
    FUNC_3 (VAR_2, (VAR_9 << 2) | 1);
    FUNC_1(VAR_2, 1024 * 1024);
    FUNC_2(VAR_2, VAR_5);
    FUNC_2(VAR_2, VAR_4);

    if (VAR_1->fmt.i_extra > 0) {

        FUNC_4(VAR_2, 0x05, VAR_1->fmt.i_extra);

        for (int VAR_10 = 0; VAR_10 < VAR_1->fmt.i_extra; VAR_10++)
            FUNC_3(VAR_2, ((uint8_t*)VAR_1->fmt.p_extra)[VAR_10]);
    }


    FUNC_4(VAR_2, 0x06, 1);
    FUNC_3 (VAR_2, 0x02);

    return VAR_2;
}
