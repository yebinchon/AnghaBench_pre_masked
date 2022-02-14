
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
struct vlc_h2_parser {TYPE_1__* cbs; int opaque; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int (* stream_window_update ) (void*,scalar_t__) ;int (* window_update ) (int ,scalar_t__) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (struct vlc_h2_frame*) ;
 int FUNC_5 (struct vlc_h2_parser*,int ) ;
 int FUNC_6 (struct vlc_h2_parser*,scalar_t__,int ) ;
 void* FUNC_7 (struct vlc_h2_parser*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct vlc_h2_parser *VAR_2,
                                            struct vlc_h2_frame *VAR_3, size_t VAR_4,
                                            uint_fast32_t VAR_5)
{
    if (VAR_4 != 4)
    {
        FUNC_1(VAR_3);

        if (VAR_5 == 0)
            return FUNC_5(VAR_2, VAR_0);
        return FUNC_6(VAR_2, VAR_5, VAR_0);
    }

    uint_fast32_t VAR_6 = FUNC_0(FUNC_4(VAR_3)) & 0x7fffffffu;

    FUNC_1(VAR_3);

    if (VAR_6 == 0)
    {
        if (VAR_5 == 0)
            return FUNC_5(VAR_2, VAR_1);
        return FUNC_6(VAR_2, VAR_5, VAR_1);
    }

    if (VAR_5 == 0)
        VAR_2->cbs->window_update(VAR_2->opaque, VAR_6);
    else
    {
        void *VAR_7 = FUNC_7(VAR_2, VAR_5);

        if (VAR_7 != ((void*)0))
            VAR_2->cbs->stream_window_update(VAR_7, VAR_6);
    }
    return 0;
}
