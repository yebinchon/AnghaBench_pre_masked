
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ind ;
struct TYPE_10__ {float x; float y; } ;
struct TYPE_9__ {float x; float y; float z; } ;
struct TYPE_11__ {TYPE_2__ texture; TYPE_1__ position; } ;
typedef TYPE_3__ d3d_vertex_t ;
struct TYPE_12__ {float i_width; float i_height; } ;
typedef TYPE_4__ d3d_quad_t ;
typedef int WORD ;
struct TYPE_13__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_5__ RECT ;


 int FUNC_0 (float const*) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_2(d3d_vertex_t *VAR_0, const RECT *VAR_1,
                          const d3d_quad_t *VAR_2, WORD *VAR_3)
{
    static const float VAR_4[] = {
        -1.0, 1.0, -1.0f,
        -1.0, -1.0, -1.0f,
        1.0, 1.0, -1.0f,
        1.0, -1.0, -1.0f,

        -1.0, 1.0, 1.0f,
        -1.0, -1.0, 1.0f,
        1.0, 1.0, 1.0f,
        1.0, -1.0, 1.0f,

        -1.0, 1.0, -1.0f,
        -1.0, -1.0, -1.0f,
        -1.0, 1.0, 1.0f,
        -1.0, -1.0, 1.0f,

        1.0f, 1.0, -1.0f,
        1.0f, -1.0, -1.0f,
        1.0f, 1.0, 1.0f,
        1.0f, -1.0, 1.0f,

        -1.0, -1.0, 1.0f,
        -1.0, -1.0, -1.0f,
        1.0, -1.0, 1.0f,
        1.0, -1.0, -1.0f,

        -1.0, 1.0, 1.0f,
        -1.0, 1.0, -1.0f,
        1.0, 1.0, 1.0f,
        1.0, 1.0, -1.0f,
    };

    const float VAR_5 = (float)(VAR_1->right - VAR_1->left) / VAR_2->i_width;
    const float VAR_6 = (float)(VAR_1->bottom - VAR_1->top) / VAR_2->i_height;

    const float VAR_7[] = {0.f, VAR_5 / 3, VAR_5 * 2 / 3, VAR_5};
    const float VAR_8[] = {0.f, VAR_6 / 2, VAR_6};

    const float VAR_9[] = {
        VAR_7[1], VAR_8[1],
        VAR_7[1], VAR_8[2],
        VAR_7[2], VAR_8[1],
        VAR_7[2], VAR_8[2],

        VAR_7[3], VAR_8[1],
        VAR_7[3], VAR_8[2],
        VAR_7[2], VAR_8[1],
        VAR_7[2], VAR_8[2],

        VAR_7[2], VAR_8[0],
        VAR_7[2], VAR_8[1],
        VAR_7[1], VAR_8[0],
        VAR_7[1], VAR_8[1],

        VAR_7[0], VAR_8[0],
        VAR_7[0], VAR_8[1],
        VAR_7[1], VAR_8[0],
        VAR_7[1], VAR_8[1],

        VAR_7[0], VAR_8[2],
        VAR_7[0], VAR_8[1],
        VAR_7[1], VAR_8[2],
        VAR_7[1], VAR_8[1],

        VAR_7[2], VAR_8[0],
        VAR_7[2], VAR_8[1],
        VAR_7[3], VAR_8[0],
        VAR_7[3], VAR_8[1],
    };

    const unsigned VAR_10 = FUNC_0(VAR_4) / 3;

    for (unsigned VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
    {
        VAR_0[VAR_11].position.x = VAR_4[3 * VAR_11];
        VAR_0[VAR_11].position.y = VAR_4[3 * VAR_11 + 1];
        VAR_0[VAR_11].position.z = VAR_4[3 * VAR_11 + 2];

        VAR_0[VAR_11].texture.x = VAR_9[2 * VAR_11];
        VAR_0[VAR_11].texture.y = VAR_9[2 * VAR_11 + 1];
    }

    const WORD VAR_12[] = {
        2, 1, 0, 3, 1, 2,
        4, 7, 6, 5, 7, 4,
        8, 11, 10, 9, 11, 8,
        14, 13, 12, 15, 13, 14,
        16, 19, 18, 17, 19, 16,
        22, 21, 20, 23, 21, 22,
    };

    FUNC_1(VAR_3, VAR_12, sizeof(VAR_12));
}
