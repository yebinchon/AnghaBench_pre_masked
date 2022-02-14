
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast8_t ;
typedef scalar_t__ uint_fast32_t ;
typedef unsigned int uint8_t ;
struct vlc_h2_parser {int dummy; } ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 unsigned int* FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (struct vlc_h2_parser*,int ) ;
 int FUNC_4 (struct vlc_h2_parser*,unsigned int const*,size_t) ;
 int FUNC_5 (struct vlc_h2_parser*) ;
 int FUNC_6 (struct vlc_h2_parser*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct vlc_h2_parser *VAR_7,
                                      struct vlc_h2_frame *VAR_8, size_t VAR_9,
                                      uint_fast32_t VAR_10)
{
    uint_fast8_t VAR_11 = FUNC_1(VAR_8);
    const uint8_t *VAR_12 = FUNC_2(VAR_8);

    if (VAR_10 == 0)
    {
        FUNC_0(VAR_8);
        return FUNC_3(VAR_7, VAR_6);
    }

    if (VAR_9 > VAR_5)
    {
        FUNC_0(VAR_8);
        return FUNC_3(VAR_7, VAR_0);
    }

    if (VAR_11 & VAR_3)
    {
        if (VAR_9 < 1 || VAR_9 < (1u + VAR_12[0]))
        {
            FUNC_0(VAR_8);
            return FUNC_3(VAR_7, VAR_0);
        }
        VAR_9 -= 1 + VAR_12[0];
        VAR_12++;
    }

    if (VAR_11 & VAR_4)
    {
        if (VAR_9 < 5)
        {
            FUNC_0(VAR_8);
            return FUNC_3(VAR_7, VAR_0);
        }
        VAR_12 += 5;
        VAR_9 -= 5;
    }

    FUNC_6(VAR_7, VAR_10, VAR_11 & VAR_2);

    int VAR_13 = FUNC_4(VAR_7, VAR_12, VAR_9);

    if (VAR_13 == 0 && (VAR_11 & VAR_1))
        VAR_13 = FUNC_5(VAR_7);

    FUNC_0(VAR_8);
    return VAR_13;
}
