
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int row_section_t ;
struct TYPE_11__ {int i_first_row_offset; int i_row_nbr; TYPE_9__* ps_piece_shape_row; } ;
typedef TYPE_2__ piece_shape_t ;
typedef int piece_shape_row_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_12__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_13__ {TYPE_1__* ps_desk_planes; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_14__ {int i_section_nbr; int i_width; struct TYPE_14__* ps_row_section; int i_type; } ;
struct TYPE_10__ {int i_pce_max_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int,int,size_t) ;

int FUNC_3( filter_t *VAR_3, piece_shape_t *VAR_4, piece_shape_t *VAR_5, uint8_t VAR_6)
{
    if ((!VAR_4) || (!VAR_5))
        return VAR_0;

    filter_sys_t *VAR_7 = VAR_3->p_sys;

    int32_t VAR_8 = VAR_5->i_first_row_offset;
    int32_t VAR_9 = VAR_5->i_row_nbr;


    VAR_4->i_row_nbr = VAR_9;
    VAR_4->i_first_row_offset = VAR_8;
    VAR_4->ps_piece_shape_row = FUNC_1( sizeof( piece_shape_row_t ) * VAR_9 );
    if (!VAR_4->ps_piece_shape_row)
        return VAR_1;

    for (int32_t VAR_10 = VAR_8; VAR_10 < VAR_9 + VAR_8; VAR_10++) {
        int32_t VAR_11 = VAR_10 - VAR_8;

        int32_t VAR_12 = VAR_7->ps_desk_planes[VAR_6].i_pce_max_width;
        int32_t VAR_13 = FUNC_2( VAR_3, VAR_10, 1, VAR_6 );
        int32_t VAR_14 = VAR_12 - FUNC_2( VAR_3, VAR_10, 0, VAR_6 );
        int16_t VAR_15 = VAR_5->ps_piece_shape_row[VAR_11].i_section_nbr;

        VAR_4->ps_piece_shape_row[VAR_11].i_section_nbr = VAR_15;
        VAR_4->ps_piece_shape_row[VAR_11].ps_row_section = FUNC_1 ( sizeof(row_section_t) * VAR_15);
        if (!VAR_4->ps_piece_shape_row[VAR_11].ps_row_section) {
            for (uint8_t VAR_16=0; VAR_16<VAR_11;VAR_16++)
                FUNC_0(VAR_4->ps_piece_shape_row[VAR_16].ps_row_section);
            FUNC_0(VAR_4->ps_piece_shape_row);
            VAR_4->ps_piece_shape_row = ((void*)0);
            return VAR_1;
        }

        VAR_4->ps_piece_shape_row[VAR_11].ps_row_section[0].i_type =
                VAR_5->ps_piece_shape_row[VAR_11].ps_row_section[0].i_type;
        VAR_4->ps_piece_shape_row[VAR_11].ps_row_section[0].i_width =
                VAR_5->ps_piece_shape_row[VAR_11].ps_row_section[0].i_width + VAR_14 - VAR_13;

        for (int8_t VAR_17=0; VAR_17<VAR_15;VAR_17++) {
            VAR_4->ps_piece_shape_row[VAR_11].ps_row_section[VAR_17].i_type =
                    VAR_5->ps_piece_shape_row[VAR_11].ps_row_section[VAR_15 - 1 - VAR_17].i_type;
            VAR_4->ps_piece_shape_row[VAR_11].ps_row_section[VAR_17].i_width =
                    VAR_5->ps_piece_shape_row[VAR_11].ps_row_section[VAR_15 - 1 - VAR_17].i_width
                    + (VAR_17 == 0 ? VAR_14 - VAR_13 : 0);
        }
    }
    return VAR_2;
}
