
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int istream_t ;
struct TYPE_3__ {int single_segment_flag; int content_checksum_flag; size_t window_size; int frame_content_size; scalar_t__ dictionary_id; } ;
typedef TYPE_1__ frame_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int * const,int const) ;

__attribute__((used)) static void FUNC_2(frame_header_t *const VAR_0,
                               istream_t *const VAR_1) {
    const u8 VAR_2 = (u8)FUNC_1(VAR_1, 8);


    const u8 VAR_3 = VAR_2 >> 6;
    const u8 VAR_4 = (VAR_2 >> 5) & 1;
    const u8 VAR_5 = (VAR_2 >> 3) & 1;
    const u8 VAR_6 = (VAR_2 >> 2) & 1;
    const u8 VAR_7 = VAR_2 & 3;

    if (VAR_5 != 0) {
        FUNC_0();
    }

    VAR_0->single_segment_flag = VAR_4;
    VAR_0->content_checksum_flag = VAR_6;


    if (!VAR_4) {






        u8 VAR_8 = (u8)FUNC_1(VAR_1, 8);
        u8 VAR_9 = VAR_8 >> 3;
        u8 VAR_10 = VAR_8 & 7;



        size_t VAR_11 = (size_t)1 << (10 + VAR_9);
        size_t VAR_12 = (VAR_11 / 8) * VAR_10;
        VAR_0->window_size = VAR_11 + VAR_12;
    }


    if (VAR_7) {




        const int VAR_13[] = {0, 1, 2, 4};
        const int VAR_14 = VAR_13[VAR_7];

        VAR_0->dictionary_id = (u32)FUNC_1(VAR_1, VAR_14 * 8);
    } else {
        VAR_0->dictionary_id = 0;
    }


    if (VAR_4 || VAR_3) {







        const int VAR_15[] = {1, 2, 4, 8};
        const int VAR_16 = VAR_15[VAR_3];

        VAR_0->frame_content_size = FUNC_1(VAR_1, VAR_16 * 8);
        if (VAR_16 == 2) {

            VAR_0->frame_content_size += 256;
        }
    } else {
        VAR_0->frame_content_size = 0;
    }

    if (VAR_4) {




        VAR_0->window_size = VAR_0->frame_content_size;
    }
}
