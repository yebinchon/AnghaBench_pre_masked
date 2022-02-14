
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_rmask; int i_gmask; int i_bmask; int i_chroma; } ;
typedef TYPE_1__ video_format_t ;







void FUNC_0( video_format_t *VAR_0 )
{

    if( !VAR_0->i_rmask || !VAR_0->i_gmask || !VAR_0->i_bmask )
    {
        switch( VAR_0->i_chroma )
        {
        case 131:
            VAR_0->i_rmask = 0x7c00;
            VAR_0->i_gmask = 0x03e0;
            VAR_0->i_bmask = 0x001f;
            break;

        case 130:
            VAR_0->i_rmask = 0xf800;
            VAR_0->i_gmask = 0x07e0;
            VAR_0->i_bmask = 0x001f;
            break;

        case 129:
            VAR_0->i_rmask = 0xff0000;
            VAR_0->i_gmask = 0x00ff00;
            VAR_0->i_bmask = 0x0000ff;
            break;
        case 128:
            VAR_0->i_rmask = 0x00ff0000;
            VAR_0->i_gmask = 0x0000ff00;
            VAR_0->i_bmask = 0x000000ff;
            break;

        default:
            return;
        }
    }
}
