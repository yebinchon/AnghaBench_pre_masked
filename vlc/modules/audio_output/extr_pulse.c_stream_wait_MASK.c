
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_threaded_mainloop ;
typedef scalar_t__ pa_stream_state_t ;
typedef int pa_stream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(pa_stream *VAR_3, pa_threaded_mainloop *VAR_4)
{
    pa_stream_state_t VAR_5;

    while ((VAR_5 = FUNC_0(VAR_3)) != VAR_1) {
        if (VAR_5 == VAR_0 || VAR_5 == VAR_2)
            return -1;
        FUNC_1(VAR_4);
    }
    return 0;
}
