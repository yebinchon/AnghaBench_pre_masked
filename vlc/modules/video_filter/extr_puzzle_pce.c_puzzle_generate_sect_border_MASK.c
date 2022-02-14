
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int row_section_t ;
struct TYPE_10__ {int i_row_nbr; int i_first_row_offset; TYPE_8__* ps_piece_shape_row; } ;
typedef TYPE_2__ piece_shape_t ;
typedef int piece_shape_row_t ;
typedef int int32_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {TYPE_1__* ps_desk_planes; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_13__ {size_t i_section_nbr; size_t i_type; int i_width; struct TYPE_13__* ps_row_section; } ;
struct TYPE_9__ {int i_pce_max_width; int i_pce_max_lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*) ;
 void* FUNC_2 (int) ;




 int FUNC_3 (TYPE_3__*,int,int,size_t) ;

int FUNC_4( filter_t *VAR_4, piece_shape_t *VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{

    if (!VAR_5)
        return VAR_1;

    filter_sys_t *VAR_8 = VAR_4->p_sys;

    int32_t VAR_9 = VAR_8->ps_desk_planes[VAR_6].i_pce_max_width;
    int32_t VAR_10 = VAR_8->ps_desk_planes[VAR_6].i_pce_max_lines;


    int32_t VAR_11 = (VAR_7 != 131) ? 0 : FUNC_0( VAR_10 / 2 );

    int32_t VAR_12 = (VAR_7 != 128)?
                        (VAR_10 - VAR_11) : (VAR_10 /2 - VAR_11);


    VAR_5->i_row_nbr = VAR_12;
    VAR_5->i_first_row_offset = VAR_11;
    VAR_5->ps_piece_shape_row = FUNC_2( sizeof( piece_shape_row_t ) * VAR_12 );
    if (!VAR_5->ps_piece_shape_row)
        return VAR_2;

    for (int32_t VAR_13 = VAR_11; VAR_13 < VAR_12 + VAR_11; VAR_13++) {
        uint8_t VAR_14 = 0;
        int32_t VAR_15[VAR_0];
        int32_t VAR_16 = VAR_13 - VAR_11;


        switch (VAR_7)
        {
          case 128:
          case 131:
            VAR_15[VAR_14] = FUNC_3( VAR_4, VAR_13, 0, VAR_6 ) - 1
                            - (FUNC_3( VAR_4, VAR_13, 1, VAR_6 ) - 1);
            break;
          case 129:
            VAR_15[VAR_14] = VAR_9 - FUNC_3( VAR_4, VAR_13, 0, VAR_6 );
            break;
          case 130:
          default:
            VAR_15[VAR_14] = FUNC_3( VAR_4, VAR_13, 1, VAR_6 );
        }
        VAR_14++;


        VAR_5->ps_piece_shape_row[VAR_16].i_section_nbr = VAR_14;
        VAR_5->ps_piece_shape_row[VAR_16].ps_row_section = FUNC_2 ( sizeof(row_section_t) * VAR_14);
        if (!VAR_5->ps_piece_shape_row[VAR_16].ps_row_section) {
            for (uint8_t VAR_17=0; VAR_17<VAR_16;VAR_17++)
                FUNC_1(VAR_5->ps_piece_shape_row[VAR_17].ps_row_section);
            FUNC_1(VAR_5->ps_piece_shape_row);
            VAR_5->ps_piece_shape_row = ((void*)0);
            return VAR_2;
        }

        for (uint8_t VAR_18=0; VAR_18 < VAR_14; VAR_18++) {
            VAR_5->ps_piece_shape_row[VAR_16].ps_row_section[VAR_18].i_type = VAR_18 % 2;
            VAR_5->ps_piece_shape_row[VAR_16].ps_row_section[VAR_18].i_width = VAR_15[VAR_18];
        }
    }
    return VAR_3;
}
