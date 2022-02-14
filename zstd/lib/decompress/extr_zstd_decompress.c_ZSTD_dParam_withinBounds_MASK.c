
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_dParameter ;
struct TYPE_3__ {int lowerBound; int upperBound; int error; } ;
typedef TYPE_1__ ZSTD_bounds ;


 TYPE_1__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(ZSTD_dParameter VAR_0, int VAR_1)
{
    ZSTD_bounds const VAR_2 = FUNC_0(VAR_0);
    if (FUNC_1(VAR_2.error)) return 0;
    if (VAR_1 < VAR_2.lowerBound) return 0;
    if (VAR_1 > VAR_2.upperBound) return 0;
    return 1;
}
