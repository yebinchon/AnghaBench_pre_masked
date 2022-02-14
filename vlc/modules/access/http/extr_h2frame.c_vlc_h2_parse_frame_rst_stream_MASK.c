
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
struct vlc_h2_parser {TYPE_1__* cbs; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int (* stream_reset ) (void*,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 int FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 (struct vlc_h2_frame*) ;
 int FUNC_4 (struct vlc_h2_parser*,int ) ;
 void* FUNC_5 (struct vlc_h2_parser*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct vlc_h2_parser *VAR_2,
                                         struct vlc_h2_frame *VAR_3, size_t VAR_4,
                                         uint_fast32_t VAR_5)
{
    if (VAR_5 == 0)
    {
        FUNC_1(VAR_3);
        return FUNC_4(VAR_2, VAR_1);
    }

    if (VAR_4 != 4)
    {
        FUNC_1(VAR_3);
        return FUNC_4(VAR_2, VAR_0);
    }

    void *VAR_6 = FUNC_5(VAR_2, VAR_5);
    uint_fast32_t VAR_7 = FUNC_0(FUNC_3(VAR_3));

    FUNC_1(VAR_3);

    if (VAR_6 == ((void*)0))
        return 0;
    return VAR_2->cbs->stream_reset(VAR_6, VAR_7);
}
