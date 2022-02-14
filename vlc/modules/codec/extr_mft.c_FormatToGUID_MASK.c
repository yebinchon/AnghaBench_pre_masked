
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_3__ {scalar_t__ fourcc; int const* guid; } ;
typedef TYPE_1__ pair_format_guid ;
typedef int GUID ;



__attribute__((used)) static const GUID *FUNC_0(const pair_format_guid VAR_0[], vlc_fourcc_t VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2].fourcc; ++VAR_2)
        if (VAR_0[VAR_2].fourcc == VAR_1)
            return VAR_0[VAR_2].guid;

    return ((void*)0);
}
