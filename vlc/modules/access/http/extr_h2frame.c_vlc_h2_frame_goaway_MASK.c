
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_frame {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct vlc_h2_frame* FUNC_2 (int ,int ,int ,int) ;
 int * FUNC_3 (struct vlc_h2_frame*) ;

struct vlc_h2_frame *
FUNC_4(uint_fast32_t VAR_1, uint_fast32_t VAR_2)
{
    struct vlc_h2_frame *VAR_3 = FUNC_2(VAR_0, 0, 0, 8);
    if (FUNC_1(VAR_3 != ((void*)0)))
    {
        uint8_t *VAR_4 = FUNC_3(VAR_3);

        FUNC_0(VAR_4, VAR_1);
        FUNC_0(VAR_4 + 4, VAR_2);
    }
    return VAR_3;
}
