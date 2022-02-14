
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
typedef int uint64_t ;
struct vlc_h2_parser {int opaque; TYPE_1__* cbs; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int (* ping ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vlc_h2_frame*) ;
 int FUNC_4 (struct vlc_h2_frame*) ;
 int FUNC_5 (struct vlc_h2_parser*,int ) ;

__attribute__((used)) static int FUNC_6(struct vlc_h2_parser *VAR_3,
                                   struct vlc_h2_frame *VAR_4, size_t VAR_5,
                                   uint_fast32_t VAR_6)
{
    uint64_t VAR_7;

    if (VAR_6 != 0)
    {
        FUNC_0(VAR_4);
        return FUNC_5(VAR_3, VAR_2);
    }

    if (VAR_5 != 8)
    {
        FUNC_0(VAR_4);
        return FUNC_5(VAR_3, VAR_0);
    }

    if (FUNC_3(VAR_4) & VAR_1)
    {
        FUNC_0(VAR_4);
        return 0;
    }

    FUNC_1(&VAR_7, FUNC_4(VAR_4), 8);
    FUNC_0(VAR_4);

    return VAR_3->cbs->ping(VAR_3->opaque, VAR_7);
}
