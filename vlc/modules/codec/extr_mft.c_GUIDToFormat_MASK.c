
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_3__ {scalar_t__ fourcc; int guid; } ;
typedef TYPE_1__ pair_format_guid ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static vlc_fourcc_t FUNC_1(const pair_format_guid VAR_0[], const GUID* VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2].fourcc; ++VAR_2)
        if (FUNC_0(VAR_0[VAR_2].guid, VAR_1))
            return VAR_0[VAR_2].fourcc;

    return 0;
}
