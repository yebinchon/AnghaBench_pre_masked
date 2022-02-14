
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int input_thread_t ;


 scalar_t__ FUNC_0 (int *,int*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static vlc_tick_t FUNC_3(input_thread_t *VAR_0)
{
    int VAR_1 = FUNC_2();

    vlc_tick_t VAR_2;
    if (FUNC_0(VAR_0, &VAR_2, ((void*)0)))
        VAR_2 = -1;
    FUNC_1(VAR_1);

    return VAR_2;
}
