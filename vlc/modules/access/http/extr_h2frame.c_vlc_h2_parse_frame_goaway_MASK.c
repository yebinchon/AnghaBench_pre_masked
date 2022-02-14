
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_parser {int opaque; TYPE_1__* cbs; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int (* reset ) (int ,scalar_t__,scalar_t__) ;} ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int * FUNC_3 (struct vlc_h2_frame*) ;
 int FUNC_4 (struct vlc_h2_parser*,int ) ;

__attribute__((used)) static int FUNC_5(struct vlc_h2_parser *VAR_3,
                                     struct vlc_h2_frame *VAR_4, size_t VAR_5,
                                     uint_fast32_t VAR_6)
{
    const uint8_t *VAR_7 = FUNC_3(VAR_4);

    if (VAR_6 != 0)
    {
        FUNC_1(VAR_4);
        return FUNC_4(VAR_3, VAR_2);
    }

    if (VAR_5 < 8 || VAR_5 > VAR_1)
    {
        FUNC_1(VAR_4);
        return FUNC_4(VAR_3, VAR_0);
    }

    uint_fast32_t VAR_8 = FUNC_0(VAR_7) & 0x7FFFFFFF;
    uint_fast32_t VAR_9 = FUNC_0(VAR_7 + 4);

    FUNC_1(VAR_4);
    return VAR_3->cbs->reset(VAR_3->opaque, VAR_8, VAR_9);
}
