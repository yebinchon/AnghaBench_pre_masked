
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct timespec*,struct timespec*) ;
 struct timespec FUNC_1 (int ) ;

void FUNC_2 (vlc_tick_t VAR_2)
{
    struct timespec VAR_3 = FUNC_1 (VAR_2);

    while (FUNC_0(VAR_0, 0, &VAR_3, &VAR_3) == VAR_1);
}
