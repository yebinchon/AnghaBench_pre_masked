
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int point_t ;
struct TYPE_10__ {int i_row_nbr; int i_first_row_offset; int ps_piece_shape_row; } ;
typedef TYPE_2__ piece_shape_t ;
typedef int piece_shape_row_t ;
typedef int int32_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {TYPE_1__* ps_desk_planes; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_9__ {int i_pce_max_width; int i_pce_max_lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (int ,int) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int) ;
 size_t VAR_2 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int,int,float,float,int *,size_t,size_t,size_t) ;
 int FUNC_4 (float*,float*,float,float,int *,size_t) ;

int FUNC_5( filter_t *VAR_3, piece_shape_t *VAR_4, uint8_t VAR_5, point_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{

    if ((!VAR_6) || (!VAR_4))
        return VAR_0;

    filter_sys_t *VAR_9 = VAR_3->p_sys;

    int32_t VAR_10 = VAR_9->ps_desk_planes[VAR_7].i_pce_max_width;
    int32_t VAR_11 = VAR_9->ps_desk_planes[VAR_7].i_pce_max_lines;
    int32_t VAR_12 = VAR_9->ps_desk_planes[0].i_pce_max_width;
    int32_t VAR_13 = VAR_9->ps_desk_planes[0].i_pce_max_lines;

    float VAR_14 = ((float) VAR_10) / ((float) VAR_12);
    float VAR_15 = ((float) VAR_11) / ((float) VAR_13);


    float VAR_16, VAR_17;
    FUNC_4(&VAR_16, &VAR_17, VAR_14, VAR_15, VAR_6, VAR_5);

    VAR_17 = FUNC_0(0,FUNC_1(VAR_17));
    VAR_16 = FUNC_0(0,FUNC_1(VAR_16));


    int32_t VAR_18 = (VAR_8==VAR_2)?FUNC_1(VAR_17):0;
    int32_t VAR_19 = (VAR_8==VAR_2)?(VAR_11 / 2 - VAR_18):VAR_11;


    VAR_4->i_row_nbr = VAR_19;
    VAR_4->i_first_row_offset = VAR_18;
    VAR_4->ps_piece_shape_row = FUNC_2( sizeof( piece_shape_row_t ) * VAR_4->i_row_nbr );
    if (!VAR_4->ps_piece_shape_row)
        return VAR_1;

    return FUNC_3(VAR_3, VAR_4, VAR_18, VAR_19, VAR_14, VAR_15, VAR_6, VAR_5, VAR_8, VAR_7);
}
