
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int video_orientation_t ;
struct TYPE_8__ {int x; int y; float tu; float tv; float z; float rhw; } ;
struct TYPE_7__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ CUSTOMVERTEX ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static void FUNC_1(CUSTOMVERTEX *VAR_0,
                                  const RECT *VAR_1, const RECT *VAR_2,
                                  const RECT *VAR_3,
                                  int VAR_4,
                                  video_orientation_t VAR_5)
{

    const int VAR_6[4][2] = {
        { VAR_3->left, VAR_3->top },
        { VAR_3->right, VAR_3->top },
        { VAR_3->right, VAR_3->bottom },
        { VAR_3->left, VAR_3->bottom },
    };


    int VAR_7[4];
    FUNC_0(VAR_5, VAR_7);

    for (int VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
        VAR_0[VAR_8].x = VAR_6[VAR_7[VAR_8]][0];
        VAR_0[VAR_8].y = VAR_6[VAR_7[VAR_8]][1];
    }

    float VAR_9 = (float)VAR_2->right / (float)VAR_1->right;
    float VAR_10 = (float)VAR_2->left / (float)VAR_1->right;
    float VAR_11 = (float)VAR_2->top / (float)VAR_1->bottom;
    float VAR_12 = (float)VAR_2->bottom / (float)VAR_1->bottom;

    VAR_0[0].tu = VAR_10;
    VAR_0[0].tv = VAR_11;

    VAR_0[1].tu = VAR_9;
    VAR_0[1].tv = VAR_11;

    VAR_0[2].tu = VAR_9;
    VAR_0[2].tv = VAR_12;

    VAR_0[3].tu = VAR_10;
    VAR_0[3].tv = VAR_12;

    for (int VAR_13 = 0; VAR_13 < 4; VAR_13++) {


        VAR_0[VAR_13].x -= 0.5;
        VAR_0[VAR_13].y -= 0.5;

        VAR_0[VAR_13].z = 0.0f;
        VAR_0[VAR_13].rhw = 1.0f;
    }
}
