
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pa_subscription_event_type_t ;
typedef int pa_operation ;
typedef int pa_context ;
typedef int audio_output_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(pa_context *VAR_1,
                             pa_subscription_event_type_t VAR_2,
                             uint32_t VAR_3, audio_output_t *VAR_4)
{
    pa_operation *VAR_5;


    switch (VAR_2)
    {
        case 128:
            FUNC_1(VAR_4, "sink input killed!");
            break;

        default:
            VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_0,
                                                VAR_4);
            if (FUNC_0(VAR_5 != ((void*)0)))
                FUNC_3(VAR_5);
            break;
    }
}
