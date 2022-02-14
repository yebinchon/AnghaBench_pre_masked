
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int row_section_t ;
typedef int point_t ;
struct TYPE_4__ {TYPE_3__* ps_piece_shape_row; } ;
typedef TYPE_1__ piece_shape_t ;
typedef size_t int8_t ;
typedef scalar_t__ int32_t ;
typedef int filter_t ;
struct TYPE_5__ {size_t i_section_nbr; size_t i_type; scalar_t__ i_width; struct TYPE_5__* ps_row_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int) ;


 size_t FUNC_2 (int *,scalar_t__,float,float,int *,size_t,size_t,size_t,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int,size_t) ;

int FUNC_4( filter_t *VAR_3, piece_shape_t *VAR_4, int32_t VAR_5, int32_t VAR_6, float VAR_7, float VAR_8, point_t *VAR_9, uint8_t VAR_10, uint8_t VAR_11, uint8_t VAR_12)
{

    for (int32_t VAR_13 = VAR_5; VAR_13 < VAR_6 + VAR_5; VAR_13++) {
        int32_t VAR_14 = VAR_13 - VAR_5;

        int32_t VAR_15[VAR_0];

        uint8_t VAR_16 = FUNC_2( VAR_3, VAR_13, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_15);


        int8_t VAR_17 = 0;
        int32_t VAR_18 = (VAR_11==128 && (VAR_13>=0))?FUNC_3( VAR_3, VAR_13, 1, VAR_12 ):0;

        for (VAR_17 = 0; VAR_17<VAR_16; VAR_17++) {
            int32_t VAR_19 = VAR_15[VAR_17];
            int32_t VAR_20 = VAR_19 - VAR_18;
            VAR_15[VAR_17] = VAR_20;

            VAR_18 = VAR_19;
        }

        switch (VAR_11)
        {
          case 128:


            if ( VAR_13 >= 0 ) {
                VAR_4->ps_piece_shape_row[VAR_14].i_section_nbr = VAR_16;
                VAR_4->ps_piece_shape_row[VAR_14].ps_row_section = FUNC_1 ( sizeof(row_section_t) * VAR_16);
                if (!VAR_4->ps_piece_shape_row[VAR_14].ps_row_section) {
                    for (uint8_t VAR_21=0; VAR_21<VAR_14;VAR_21++)
                        FUNC_0(VAR_4->ps_piece_shape_row[VAR_21].ps_row_section);
                    FUNC_0(VAR_4->ps_piece_shape_row);
                    VAR_4->ps_piece_shape_row = ((void*)0);
                    return VAR_1;
                }
                for (uint8_t VAR_22=0; VAR_22 < VAR_16; VAR_22++) {
                    VAR_4->ps_piece_shape_row[VAR_14].ps_row_section[VAR_22].i_type = VAR_22 % 2;
                    VAR_4->ps_piece_shape_row[VAR_14].ps_row_section[VAR_22].i_width = VAR_15[VAR_22];
                }
            }
            else {
                VAR_4->ps_piece_shape_row[VAR_14].i_section_nbr = VAR_16;
                VAR_4->ps_piece_shape_row[VAR_14].ps_row_section = FUNC_1 ( sizeof(row_section_t) * VAR_16);
                if (!VAR_4->ps_piece_shape_row[VAR_14].ps_row_section) {
                    for (uint8_t VAR_23=0; VAR_23<VAR_14;VAR_23++)
                        FUNC_0(VAR_4->ps_piece_shape_row[VAR_23].ps_row_section);
                    FUNC_0(VAR_4->ps_piece_shape_row);
                    VAR_4->ps_piece_shape_row = ((void*)0);
                    return VAR_1;
                }
                for (uint8_t VAR_24=0; VAR_24 < VAR_16; VAR_24++) {
                    VAR_4->ps_piece_shape_row[VAR_14].ps_row_section[VAR_24].i_type = (VAR_24 + 1) % 2;
                    VAR_4->ps_piece_shape_row[VAR_14].ps_row_section[VAR_24].i_width = VAR_15[VAR_24];
                }
            }
            break;
          case 129:


            VAR_4->ps_piece_shape_row[VAR_14].i_section_nbr = VAR_16;
            VAR_4->ps_piece_shape_row[VAR_14].ps_row_section = FUNC_1 ( sizeof(row_section_t) * VAR_16);
            if (!VAR_4->ps_piece_shape_row[VAR_14].ps_row_section) {
                for (uint8_t VAR_25=0; VAR_25<VAR_14;VAR_25++)
                    FUNC_0(VAR_4->ps_piece_shape_row[VAR_25].ps_row_section);
                FUNC_0(VAR_4->ps_piece_shape_row);
                VAR_4->ps_piece_shape_row = ((void*)0);
                return VAR_1;
            }
            for (uint8_t VAR_26=0; VAR_26 < VAR_16; VAR_26++) {
                VAR_4->ps_piece_shape_row[VAR_14].ps_row_section[VAR_26].i_type = (VAR_26+1) % 2;
                VAR_4->ps_piece_shape_row[VAR_14].ps_row_section[VAR_26].i_width = VAR_15[VAR_26];
            }
        }
    }
    return VAR_2;
}
