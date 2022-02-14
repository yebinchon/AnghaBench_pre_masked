
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct timespec {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct timespec FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,unsigned int,struct timespec*) ;

bool FUNC_2(void *VAR_2, unsigned VAR_3, vlc_tick_t VAR_4)
{
    struct timespec VAR_5 = FUNC_0(VAR_4);

    return (FUNC_1(VAR_2, VAR_3, &VAR_5) == 0 || VAR_1 != VAR_0);
}
