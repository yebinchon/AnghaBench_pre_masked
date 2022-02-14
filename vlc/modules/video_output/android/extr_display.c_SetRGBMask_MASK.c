
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_chroma; int i_bmask; int i_gmask; int i_rmask; } ;
typedef TYPE_1__ video_format_t ;






__attribute__((used)) static void FUNC_0(video_format_t *VAR_0)
{
    switch(VAR_0->i_chroma) {
        case 130:
            VAR_0->i_bmask = 0x0000001f;
            VAR_0->i_gmask = 0x000007e0;
            VAR_0->i_rmask = 0x0000f800;
            break;

        case 129:
        case 128:
            VAR_0->i_rmask = 0x000000ff;
            VAR_0->i_gmask = 0x0000ff00;
            VAR_0->i_bmask = 0x00ff0000;
            break;
    }
}
