
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int bs_t ;
struct TYPE_6__ {int high_bitdepth; int twelve_bit; int mono_chrome; int subsampling_x; int subsampling_y; int chroma_sample_position; } ;
struct TYPE_7__ {int seq_profile; TYPE_2__ color_config; TYPE_1__* operating_points; } ;
typedef TYPE_3__ av1_OBU_sequence_header_t ;
struct TYPE_5__ {int seq_level_idx; int seq_tier; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *,size_t) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t const) ;

size_t FUNC_4(uint8_t **VAR_0,
                                             const av1_OBU_sequence_header_t *VAR_1,
                                             size_t VAR_2, const uint8_t *VAR_3[],
                                             const size_t VAR_4[])
{
    size_t VAR_5 = 4;
    for(size_t VAR_6=0; VAR_6<VAR_2; VAR_6++)
        VAR_5 += VAR_4[VAR_6];

    uint8_t *VAR_7 = FUNC_2(VAR_5);
    if(!VAR_7)
        return 0;

    bs_t VAR_8;
    FUNC_1(&VAR_8, VAR_7, VAR_5);
    FUNC_0(&VAR_8, 1, 1);
    FUNC_0(&VAR_8, 7, 1);
    FUNC_0(&VAR_8, 3, VAR_1->seq_profile);
    FUNC_0(&VAR_8, 5, VAR_1->operating_points[0].seq_level_idx);

    FUNC_0(&VAR_8, 1, VAR_1->operating_points[0].seq_tier);
    FUNC_0(&VAR_8, 1, VAR_1->color_config.high_bitdepth);
    FUNC_0(&VAR_8, 1, VAR_1->color_config.twelve_bit);
    FUNC_0(&VAR_8, 1, VAR_1->color_config.mono_chrome);
    FUNC_0(&VAR_8, 1, VAR_1->color_config.subsampling_x);
    FUNC_0(&VAR_8, 1, VAR_1->color_config.subsampling_y);
    FUNC_0(&VAR_8, 2, VAR_1->color_config.chroma_sample_position);

    FUNC_0(&VAR_8, 3, 0);
    FUNC_0(&VAR_8, 1, 0);
    FUNC_0(&VAR_8, 4, 0);


    size_t VAR_9 = 4;
    for(size_t VAR_10=0; VAR_10<VAR_2; VAR_10++)
        FUNC_3(&VAR_7[VAR_9], VAR_3[VAR_10], VAR_4[VAR_10]);

    *VAR_0 = VAR_7;
    return VAR_5;
}
