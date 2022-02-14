
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint64_t ;
struct TYPE_2__ {int denom; int numer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline uint64_t
FUNC_2(vlc_tick_t VAR_1)
{
    FUNC_1(VAR_0.denom != 0);
    return FUNC_0(VAR_1 * VAR_0.denom / VAR_0.numer);
}
