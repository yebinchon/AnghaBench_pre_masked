
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast8_t ;
typedef unsigned int uint8_t ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vlc_h2_frame const*) ;
 size_t FUNC_2 (struct vlc_h2_frame const*) ;
 unsigned int* FUNC_3 (struct vlc_h2_frame const*) ;
 scalar_t__ FUNC_4 (struct vlc_h2_frame const*) ;

const uint8_t *(FUNC_5)(const struct vlc_h2_frame *VAR_2,
                                       size_t *restrict VAR_3)
{
    FUNC_0(FUNC_4(VAR_2) == VAR_1);

    size_t VAR_4 = FUNC_2(VAR_2);
    uint_fast8_t VAR_5 = FUNC_1(VAR_2);
    const uint8_t *VAR_6 = FUNC_3(VAR_2);


    if (VAR_5 & VAR_0)
    {
        FUNC_0(VAR_4 >= 1u && VAR_4 >= 1u + VAR_6[0]);
        VAR_4 -= 1u + *(VAR_6++);
    }

    *VAR_3 = VAR_4;
    return VAR_6;
}
