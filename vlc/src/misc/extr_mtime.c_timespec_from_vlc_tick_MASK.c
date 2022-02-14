
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct timespec {int member_1; int member_0; } ;
struct TYPE_3__ {int rem; int quot; } ;
typedef TYPE_1__ lldiv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (int ,int ) ;

struct timespec FUNC_2 (vlc_tick_t VAR_1)
{
    lldiv_t VAR_2 = FUNC_1 (VAR_1, VAR_0);
    struct timespec VAR_3 = { VAR_2.quot, FUNC_0( VAR_2.rem ) };

    return VAR_3;
}
