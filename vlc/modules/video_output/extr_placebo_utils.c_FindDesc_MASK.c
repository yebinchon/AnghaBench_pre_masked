
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct fmt_desc {int dummy; } ;
struct TYPE_2__ {scalar_t__ fcc; struct fmt_desc const desc; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const struct fmt_desc *FUNC_0(vlc_fourcc_t VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2].fcc; VAR_2++) {
        if (VAR_0[VAR_2].fcc == VAR_1) {
            return &VAR_0[VAR_2].desc;
        }
    }

    return ((void*)0);
}
