
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_frame {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct vlc_h2_frame* FUNC_3 (int ,int ,int,int) ;
 int * FUNC_4 (struct vlc_h2_frame*) ;

struct vlc_h2_frame *
FUNC_5(uint_fast32_t VAR_1, uint_fast32_t VAR_2)
{
    FUNC_1((VAR_1 >> 31) == 0);

    struct vlc_h2_frame *VAR_3 = FUNC_3(VAR_0,
                                                0, VAR_1, 4);
    if (FUNC_2(VAR_3 != ((void*)0)))
    {
        uint8_t *VAR_4 = FUNC_4(VAR_3);

        FUNC_0(VAR_4, VAR_2);
    }
    return VAR_3;
}
