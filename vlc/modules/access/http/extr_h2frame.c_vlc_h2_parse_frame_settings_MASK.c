
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
typedef int uint8_t ;
struct vlc_h2_parser {int opaque; TYPE_1__* cbs; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int (* settings_done ) (int ) ;int (* setting ) (int ,int ,int ) ;} ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vlc_h2_frame*) ;
 int * FUNC_6 (struct vlc_h2_frame*) ;
 int FUNC_7 (struct vlc_h2_parser*,int ) ;

__attribute__((used)) static int FUNC_8(struct vlc_h2_parser *VAR_4,
                                       struct vlc_h2_frame *VAR_5, size_t VAR_6,
                                       uint_fast32_t VAR_7)
{
    const uint8_t *VAR_8 = FUNC_6(VAR_5);

    if (VAR_7 != 0)
    {
        FUNC_2(VAR_5);
        return FUNC_7(VAR_4, VAR_2);
    }

    if (VAR_6 % 6 || VAR_6 > VAR_1)
    {
        FUNC_2(VAR_5);
        return FUNC_7(VAR_4, VAR_0);
    }

    if (FUNC_5(VAR_5) & VAR_3)
    {
        FUNC_2(VAR_5);
        if (VAR_6 != 0)
            return FUNC_7(VAR_4, VAR_0);

        return 0;
    }

    for (const uint8_t *VAR_9 = VAR_8 + VAR_6; VAR_8 < VAR_9; VAR_8 += 6)
        VAR_4->cbs->setting(VAR_4->opaque, FUNC_1(VAR_8), FUNC_0(VAR_8 + 2));

    FUNC_2(VAR_5);
    return VAR_4->cbs->settings_done(VAR_4->opaque);
}
