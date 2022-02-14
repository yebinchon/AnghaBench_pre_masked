
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fast32_t ;
struct TYPE_2__ {scalar_t__ sid; } ;
struct vlc_h2_parser {TYPE_1__ headers; } ;
struct vlc_h2_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 scalar_t__ FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (struct vlc_h2_parser*,int ) ;
 int FUNC_4 (struct vlc_h2_parser*,struct vlc_h2_frame*,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct vlc_h2_parser *VAR_2,
                                      struct vlc_h2_frame *VAR_3, size_t VAR_4,
                                      uint_fast32_t VAR_5)
{
    FUNC_0(VAR_2->headers.sid != 0);



    if (FUNC_2(VAR_3) != VAR_0)
    {
        FUNC_1(VAR_3);
        return FUNC_3(VAR_2, VAR_1);
    }

    return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
}
