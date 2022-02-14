
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_parser {int dummy; } ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 int* FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (struct vlc_h2_parser*,int ) ;

__attribute__((used)) static int FUNC_4(struct vlc_h2_parser *VAR_4,
                                           struct vlc_h2_frame *VAR_5, size_t VAR_6,
                                           uint_fast32_t VAR_7)
{
    uint8_t VAR_8 = FUNC_1(VAR_5);
    const uint8_t *VAR_9 = FUNC_2(VAR_5);

    if (VAR_7 == 0)
    {
        FUNC_0(VAR_5);
        return FUNC_3(VAR_4, VAR_2);
    }

    if (VAR_6 > VAR_1)
    {
        FUNC_0(VAR_5);
        return FUNC_3(VAR_4, VAR_0);
    }

    if (VAR_8 & VAR_3)
    {
        if (VAR_6 < 1 || VAR_6 < (1u + VAR_9[0]))
        {
            FUNC_0(VAR_5);
            return FUNC_3(VAR_4, VAR_0);
        }
        VAR_6 -= 1 + VAR_9[0];
        VAR_9++;
    }


    FUNC_0(VAR_5);
    return FUNC_3(VAR_4, VAR_2);
}
