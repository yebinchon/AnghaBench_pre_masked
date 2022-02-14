
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pa_operation ;
typedef int pa_context ;
typedef int audio_output_t ;





 int * FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(pa_context *VAR_2, unsigned VAR_3, uint32_t VAR_4,
                       audio_output_t *VAR_5)
{
    pa_operation *VAR_6 = ((void*)0);

    switch (VAR_3)
    {
        case 129:
            VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_0,
                                                   VAR_5);
            break;
        case 130:
            VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_1,
                                                   VAR_5);
            break;
        case 128:
            FUNC_2(VAR_4, VAR_5);
            break;
    }
    if (VAR_6 != ((void*)0))
        FUNC_1(VAR_6);
}
