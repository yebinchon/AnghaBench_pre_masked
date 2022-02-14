
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ sid; } ;
struct vlc_h2_parser {TYPE_1__ headers; } ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 int * FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (struct vlc_h2_parser*,int ) ;
 int FUNC_4 (struct vlc_h2_parser*,int const*,size_t) ;
 int FUNC_5 (struct vlc_h2_parser*) ;

__attribute__((used)) static int FUNC_6(struct vlc_h2_parser *VAR_4,
                                           struct vlc_h2_frame *VAR_5, size_t VAR_6,
                                           uint_fast32_t VAR_7)
{
    const uint8_t *VAR_8 = FUNC_2(VAR_5);


    if (VAR_7 == 0 || VAR_7 != VAR_4->headers.sid)
    {
        FUNC_0(VAR_5);
        return FUNC_3(VAR_4, VAR_3);
    }

    if (VAR_6 > VAR_2)
    {
        FUNC_0(VAR_5);
        return FUNC_3(VAR_4, VAR_1);
    }

    int VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_6);

    if (VAR_9 == 0 && (FUNC_1(VAR_5) & VAR_0))
        VAR_9 = FUNC_5(VAR_4);

    FUNC_0(VAR_5);
    return 0;
}
