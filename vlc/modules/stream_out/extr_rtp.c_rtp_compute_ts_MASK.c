
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint32_t ;
struct TYPE_3__ {int quot; int rem; } ;
typedef TYPE_1__ lldiv_t ;
typedef int int64_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,int) ;

uint32_t FUNC_1( unsigned VAR_1, vlc_tick_t VAR_2 )
{





    lldiv_t VAR_3 = FUNC_0(VAR_2, VAR_0);
    return VAR_3.quot * (int64_t)VAR_1
          + VAR_3.rem * (int64_t)VAR_1 / VAR_0;
}
