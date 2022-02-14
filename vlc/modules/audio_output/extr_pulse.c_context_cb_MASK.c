
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef unsigned int pa_subscription_event_type_t ;
typedef int pa_context ;
struct TYPE_3__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_4__ {int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,int ,void*) ;
 int FUNC_2 (int *,unsigned int,int ,void*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(pa_context *VAR_2, pa_subscription_event_type_t VAR_3,
                       uint32_t VAR_4, void *VAR_5)
{
    audio_output_t *VAR_6 = VAR_5;
    aout_sys_t *VAR_7 = VAR_6->sys;
    unsigned VAR_8 = VAR_3 & VAR_0;

    VAR_3 &= VAR_1;
    switch (VAR_8)
    {
        case 129:
            FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        case 128:

            if (VAR_7->stream != ((void*)0) && VAR_4 == FUNC_0(VAR_7->stream))
                FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
            break;

        default:
            FUNC_3();
    }
}
