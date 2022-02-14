
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {int i_mpeg_dar_num; int i_mpeg_dar_den; } ;
struct TYPE_9__ {TYPE_1__ video; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_10__ {int i_buffer; int* p_buffer; } ;
typedef TYPE_4__ block_t ;



__attribute__((used)) static int FUNC_0(decoder_t *VAR_0, block_t **VAR_1)
{
    if (VAR_1 == ((void*)0) || (*VAR_1)->i_buffer <= 7)
        return 1;

    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    const int VAR_3 = (*VAR_1)->p_buffer[3];


    static const int VAR_4[16][2] =
    {
        {0,0},
        {0,0},
        {4,3}, {16,9}, {221,100},

        {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0}, {0,0},
        {0,0}, {0,0}
    };

    if (VAR_3 == 0xB3 )
    {
        int VAR_5 = (*VAR_1)->p_buffer[7] >> 4;

        if (VAR_5 >= 16)
            return 0;

        VAR_2->video.i_mpeg_dar_num = VAR_4[VAR_5][0];
        VAR_2->video.i_mpeg_dar_den = VAR_4[VAR_5][1];
    }

    return 1;
}
