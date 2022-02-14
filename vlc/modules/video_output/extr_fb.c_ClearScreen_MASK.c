
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chroma; int video_size; int video_ptr; } ;
typedef TYPE_1__ vout_display_sys_t ;
typedef int uint32_t ;



 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(vout_display_sys_t *VAR_0)
{
    switch (VAR_0->chroma) {

    case 128: {
        unsigned int VAR_1, VAR_2 = VAR_0->video_size / 4;
        uint32_t *VAR_3 = (uint32_t*)((uintptr_t)(VAR_0->video_ptr + 3) & ~3);
        for(VAR_1=0; VAR_1 < VAR_2; VAR_1++)
            VAR_3[VAR_1] = 0x10801080;
        break;
    }
    default:
        FUNC_0(VAR_0->video_ptr, 0, VAR_0->video_size);
    }
}
