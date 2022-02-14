
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct sink {struct sink* sink_force; struct sink* next; struct sink* sinks; int mainloop; int * context; } ;
typedef int pa_context ;
struct TYPE_2__ {struct sink* sys; } ;
typedef TYPE_1__ audio_output_t ;
typedef struct sink aout_sys_t ;


 int FUNC_0 (struct sink*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(vlc_object_t *VAR_0)
{
    audio_output_t *VAR_1 = (audio_output_t *)VAR_0;
    aout_sys_t *VAR_2 = VAR_1->sys;
    pa_context *VAR_3 = VAR_2->context;

    FUNC_2(VAR_2->mainloop);
    FUNC_1(VAR_2->context, ((void*)0), ((void*)0));
    FUNC_3(VAR_2->mainloop);
    FUNC_4(VAR_0, VAR_3, VAR_2->mainloop);

    for (struct sink *VAR_4 = VAR_2->sinks, *VAR_5; VAR_4 != ((void*)0); VAR_4 = VAR_5)
    {
        VAR_5 = VAR_4->next;
        FUNC_0(VAR_4);
    }
    FUNC_0(VAR_2->sink_force);
    FUNC_0(VAR_2);
}
