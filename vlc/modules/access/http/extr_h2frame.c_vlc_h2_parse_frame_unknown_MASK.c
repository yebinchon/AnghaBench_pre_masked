
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_fast32_t ;
struct vlc_h2_parser {int dummy; } ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (struct vlc_h2_parser*,int ) ;
 int FUNC_2 (struct vlc_h2_parser*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct vlc_h2_parser *VAR_2,
                                      struct vlc_h2_frame *VAR_3, size_t VAR_4,
                                      uint_fast32_t VAR_5)
{
    FUNC_0(VAR_3);

    if (VAR_4 > VAR_1)
    {
        if (VAR_5 == 0)
            return FUNC_1(VAR_2, VAR_0);
        return FUNC_2(VAR_2, VAR_5, VAR_0);
    }


    return 0;
}
