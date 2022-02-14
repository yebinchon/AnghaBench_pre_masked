
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_object_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ pa_usec_t ;
struct TYPE_3__ {scalar_t__ write_index; scalar_t__ write_index_corrupt; } ;
typedef TYPE_1__ pa_timing_info ;
typedef int pa_stream ;
typedef int pa_sample_spec ;
typedef int pa_context ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int *) ;

vlc_tick_t FUNC_7(vlc_object_t *VAR_2, pa_context *VAR_3, pa_stream *VAR_4)
{
    const pa_sample_spec *VAR_5 = FUNC_3(VAR_4);
    const pa_timing_info *VAR_6 = FUNC_5(VAR_4);

    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_2, "no timing infos");
        return VAR_1;
    }

    if (VAR_6->write_index_corrupt) {
        FUNC_0(VAR_2, "write index corrupt");
        return VAR_1;
    }

    pa_usec_t VAR_7 = FUNC_1((uint64_t)VAR_6->write_index, VAR_5);
    pa_usec_t VAR_8;

    if (FUNC_4(VAR_4, &VAR_8)) {
        if (FUNC_2(VAR_3) != VAR_0)
            FUNC_6(VAR_2, "unknown time", VAR_3);
        return VAR_1;
    }

    union { uint64_t u; int64_t s; } VAR_9;
    VAR_9.u = VAR_7 - VAR_8;
    return VAR_9.s;
}
