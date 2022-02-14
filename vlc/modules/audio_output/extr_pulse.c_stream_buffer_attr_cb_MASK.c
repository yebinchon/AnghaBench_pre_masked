
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pa_stream ;
struct TYPE_3__ {int minreq; int prebuf; int tlength; int maxlength; } ;
typedef TYPE_1__ pa_buffer_attr ;
typedef int audio_output_t ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(pa_stream *VAR_0, void *VAR_1)
{
    audio_output_t *VAR_2 = VAR_1;
    const pa_buffer_attr *VAR_3 = FUNC_1(VAR_0);

    FUNC_0(VAR_2, "changed buffer metrics: maxlength=%u, tlength=%u, "
            "prebuf=%u, minreq=%u",
            VAR_3->maxlength, VAR_3->tlength, VAR_3->prebuf, VAR_3->minreq);
}
