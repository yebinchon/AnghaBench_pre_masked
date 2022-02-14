
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* cropViewport; TYPE_1__* textureFormat; } ;
typedef TYPE_3__ d3d_quad_t ;
struct TYPE_14__ {int const formatTexture; } ;
typedef TYPE_4__ d3d_format_t ;
struct TYPE_15__ {int left; int top; } ;
struct TYPE_12__ {int TopLeftX; int TopLeftY; int Width; int Height; } ;
struct TYPE_11__ {int formatTexture; int fourcc; } ;
typedef TYPE_5__ RECT ;
typedef int LONG ;
 int FUNC_0 (TYPE_5__ const) ;
 int FUNC_1 (TYPE_5__ const) ;



 int FUNC_2 () ;

void FUNC_3(d3d_quad_t *VAR_0, const RECT *VAR_1, const d3d_format_t *VAR_2)
{
    LONG VAR_3, VAR_4;

    VAR_3 = FUNC_1(*VAR_1);
    VAR_4 = FUNC_0(*VAR_1);

    VAR_0->cropViewport[0].TopLeftX = VAR_1->left;
    VAR_0->cropViewport[0].TopLeftY = VAR_1->top;
    VAR_0->cropViewport[0].Width = VAR_3;
    VAR_0->cropViewport[0].Height = VAR_4;

    switch ( VAR_0->textureFormat->formatTexture )
    {
    case 137:
    case 136:
        VAR_0->cropViewport[1].TopLeftX = VAR_1->left / 2;
        VAR_0->cropViewport[1].TopLeftY = VAR_1->top / 2;
        VAR_0->cropViewport[1].Width = VAR_3 / 2;
        VAR_0->cropViewport[1].Height = VAR_4 / 2;
        break;
    case 133:
    case 139:
    case 138:
    case 140:
    case 135:
    case 134:
    case 131:
    case 141:
        if ( VAR_2->formatTexture == 137 ||
             VAR_2->formatTexture == 136 )
        {
            VAR_0->cropViewport[1].TopLeftX = VAR_1->left / 2;
            VAR_0->cropViewport[1].TopLeftY = VAR_1->top / 2;
            VAR_0->cropViewport[1].Width = VAR_3 / 2;
            VAR_0->cropViewport[1].Height = VAR_4 / 2;
        }
        break;
    case 132:
        switch ( VAR_0->textureFormat->fourcc )
        {
        case 128:
            if ( VAR_2->formatTexture != 137 &&
                 VAR_2->formatTexture != 136 )
            {
                VAR_0->cropViewport[1] = VAR_0->cropViewport[2] =
                VAR_0->cropViewport[3] = VAR_0->cropViewport[0];
                break;
            }

        case 129:
        case 130:
            VAR_0->cropViewport[1].TopLeftX = VAR_0->cropViewport[0].TopLeftX / 2;
            VAR_0->cropViewport[1].TopLeftY = VAR_0->cropViewport[0].TopLeftY / 2;
            VAR_0->cropViewport[1].Width = VAR_0->cropViewport[0].Width / 2;
            VAR_0->cropViewport[1].Height = VAR_0->cropViewport[0].Height / 2;
            VAR_0->cropViewport[2] = VAR_0->cropViewport[1];
            break;
        }
        break;
    default:
        FUNC_2();
    }
}
