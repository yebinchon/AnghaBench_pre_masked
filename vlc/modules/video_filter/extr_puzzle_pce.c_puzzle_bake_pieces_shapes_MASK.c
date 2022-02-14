
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int point_t ;
typedef int piece_shape_t ;
typedef int int32_t ;
struct TYPE_19__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_17__ {int i_planes; int i_shape_size; } ;
struct TYPE_20__ {int b_shape_init; TYPE_6__** ps_pieces_shapes; TYPE_1__ s_allocated; int * ps_bezier_pts_H; TYPE_2__* ps_desk_planes; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_21__ {int * ps_piece_shape_row; scalar_t__ i_row_nbr; } ;
struct TYPE_18__ {int i_pce_max_width; int i_pce_max_lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 (int,int,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int,int *) ;
 int * FUNC_4 (int,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_6__*,TYPE_6__*,size_t) ;
 int FUNC_7 (TYPE_3__*,TYPE_6__*,TYPE_6__*,size_t) ;
 int FUNC_8 (TYPE_3__*,TYPE_6__*,int,int *,size_t,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_6__*,size_t,int ) ;
 int * FUNC_10 (int,int,int,int ,int ) ;

int FUNC_11( filter_t *VAR_9)
{
    filter_sys_t *VAR_10 = VAR_9->p_sys;

    FUNC_5(VAR_9);
    VAR_10->ps_pieces_shapes = FUNC_1( sizeof( piece_shape_t *) * VAR_0 );
    if( !VAR_10->ps_pieces_shapes )
        return VAR_3;

    for (int32_t VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_10->ps_pieces_shapes[VAR_11] = FUNC_1( sizeof( piece_shape_t) * VAR_10->s_allocated.i_planes );
        if( !VAR_10->ps_pieces_shapes[VAR_11] )
            return VAR_3;
        for (uint8_t VAR_12 = 0; VAR_12 < VAR_10->s_allocated.i_planes; VAR_12++) {
            VAR_10->ps_pieces_shapes[VAR_11][VAR_12].i_row_nbr = 0;
            VAR_10->ps_pieces_shapes[VAR_11][VAR_12].ps_piece_shape_row = ((void*)0);
        }
    }

    int32_t VAR_13 = 0;

    for (uint8_t VAR_14 = 0; VAR_14 < VAR_10->s_allocated.i_planes; VAR_14++) {
        int VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+0][VAR_14], VAR_14, VAR_6);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+1][VAR_14], VAR_14, VAR_6);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+2][VAR_14], VAR_14, VAR_8);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+3][VAR_14], VAR_14, VAR_8);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+4][VAR_14], VAR_14, VAR_5);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+5][VAR_14], VAR_14, VAR_5);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+6][VAR_14], VAR_14, VAR_7);
        if (VAR_15 != VAR_4) return VAR_15;
        VAR_15 = FUNC_9( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+7][VAR_14], VAR_14, VAR_7);
        if (VAR_15 != VAR_4) return VAR_15;
    }

    VAR_13 += 8;

    int32_t VAR_16 = VAR_10->ps_desk_planes[0].i_pce_max_width;
    int32_t VAR_17 = VAR_10->ps_desk_planes[0].i_pce_max_lines;

    for (int32_t VAR_18 = 0; VAR_18<VAR_1; VAR_18++) {

        point_t *VAR_19 = FUNC_10(VAR_16, VAR_17, 7, VAR_10->ps_bezier_pts_H[VAR_18], VAR_10->s_allocated.i_shape_size);
        point_t *VAR_20 = FUNC_2(VAR_16, VAR_17, 7, VAR_10->ps_bezier_pts_H[VAR_18], VAR_10->s_allocated.i_shape_size);
        point_t *VAR_21 = FUNC_3(7, VAR_19);
        point_t *VAR_22 = FUNC_4(7, VAR_20);

        if (!VAR_19 || !VAR_20 || !VAR_21 || !VAR_22) {
            FUNC_0(VAR_19);
            FUNC_0(VAR_20);
            FUNC_0(VAR_21);
            FUNC_0(VAR_22);
            return VAR_2;
        }

        int VAR_23;
        for (uint8_t VAR_24 = 0; VAR_24 < VAR_10->s_allocated.i_planes; VAR_24++) {
            VAR_23 = FUNC_8( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13][VAR_24], 7, VAR_20, VAR_24, VAR_6);
            if (VAR_23 != VAR_4) break;
            VAR_23 = FUNC_8( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+1][VAR_24], 7, VAR_22, VAR_24, VAR_6);
            if (VAR_23 != VAR_4) break;
            VAR_23 = FUNC_8( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+2][VAR_24], 7, VAR_19, VAR_24, VAR_8);
            if (VAR_23 != VAR_4) break;
            VAR_23 = FUNC_8( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+3][VAR_24], 7, VAR_21, VAR_24, VAR_8);
            if (VAR_23 != VAR_4) break;

            VAR_23 = FUNC_7( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+4][VAR_24], &VAR_10->ps_pieces_shapes[VAR_13+2][VAR_24], VAR_24);
            if (VAR_23 != VAR_4) break;
            VAR_23 = FUNC_7( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+5][VAR_24], &VAR_10->ps_pieces_shapes[VAR_13+3][VAR_24], VAR_24);
            if (VAR_23 != VAR_4) break;
            VAR_23 = FUNC_6( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+6][VAR_24], &VAR_10->ps_pieces_shapes[VAR_13][VAR_24], VAR_24);
            if (VAR_23 != VAR_4) break;
            VAR_23 = FUNC_6( VAR_9, &VAR_10->ps_pieces_shapes[VAR_13+7][VAR_24], &VAR_10->ps_pieces_shapes[VAR_13+1][VAR_24], VAR_24);
            if (VAR_23 != VAR_4) break;
        }

        FUNC_0(VAR_19);
        FUNC_0(VAR_20);
        FUNC_0(VAR_21);
        FUNC_0(VAR_22);

        if (VAR_23 != VAR_4) return VAR_23;

        VAR_13 += 8;
    }

    VAR_10->b_shape_init = 1;

    return VAR_4;
}
