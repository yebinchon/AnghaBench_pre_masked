
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float x; float y; } ;
struct TYPE_7__ {float x; float y; float z; } ;
struct TYPE_9__ {TYPE_2__ texture; TYPE_1__ position; } ;
typedef TYPE_3__ d3d_vertex_t ;
struct TYPE_10__ {float i_width; float i_height; } ;
typedef TYPE_4__ d3d_quad_t ;
typedef unsigned int WORD ;
typedef int RECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 float VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (float,float*,float*) ;

__attribute__((used)) static void FUNC_3(d3d_vertex_t *VAR_4, const RECT *VAR_5,
                            const d3d_quad_t *VAR_6, WORD *VAR_7)
{
    const float VAR_8 = (float)(FUNC_1(*VAR_5)) / VAR_6->i_width;
    const float VAR_9 = (float)(FUNC_0(*VAR_5)) / VAR_6->i_height;
    for (unsigned VAR_10 = 0; VAR_10 <= VAR_2; VAR_10++) {
        float VAR_11 = VAR_10 * (float) VAR_0 / VAR_2;
        float VAR_12, VAR_13;

        FUNC_2(VAR_11, &VAR_12, &VAR_13);

        for (unsigned VAR_14 = 0; VAR_14 <= VAR_3; VAR_14++) {
            float VAR_15 = VAR_14 * 2 * (float) VAR_0 / VAR_3;
            float VAR_16, VAR_17;

            FUNC_2(VAR_15, &VAR_16, &VAR_17);

            float VAR_18 = VAR_17 * VAR_12;
            float VAR_19 = VAR_13;
            float VAR_20 = VAR_16 * VAR_12;

            unsigned VAR_21 = VAR_10 * (VAR_3 + 1) + VAR_14;
            VAR_4[VAR_21].position.x = VAR_1 * VAR_18;
            VAR_4[VAR_21].position.y = VAR_1 * VAR_19;
            VAR_4[VAR_21].position.z = VAR_1 * VAR_20;

            VAR_4[VAR_21].texture.x = VAR_8 * VAR_14 / (float) VAR_3;
            VAR_4[VAR_21].texture.y = VAR_9 * VAR_10 / (float) VAR_2;
        }
    }

    for (unsigned VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
        for (unsigned VAR_23 = 0; VAR_23 < VAR_3; VAR_23++) {
            unsigned VAR_24 = (VAR_22 * (VAR_3 + 1)) + VAR_23;
            unsigned VAR_25 = VAR_24 + VAR_3 + 1;

            unsigned VAR_26 = (VAR_22 * VAR_2 + VAR_23) * 3 * 2;

            VAR_7[VAR_26] = VAR_24;
            VAR_7[VAR_26 + 1] = VAR_24 + 1;
            VAR_7[VAR_26 + 2] = VAR_25;

            VAR_7[VAR_26 + 3] = VAR_25;
            VAR_7[VAR_26 + 4] = VAR_24 + 1;
            VAR_7[VAR_26 + 5] = VAR_25 + 1;
        }
    }
}
