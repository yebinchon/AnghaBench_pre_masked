
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int services_discovery_t ;
typedef int pa_subscription_event_type_t ;
typedef int pa_operation ;
typedef int pa_context ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(pa_context *VAR_4, pa_subscription_event_type_t VAR_5,
                            uint32_t VAR_6, void *VAR_7)
{
    services_discovery_t *VAR_8 = VAR_7;
    pa_operation *VAR_9;

    FUNC_1 ((VAR_5 & VAR_0)
                                              == VAR_1);
    switch (VAR_5 & VAR_2)
    {
      case 129:
      case 130:
        VAR_9 = FUNC_3(VAR_4, VAR_6, VAR_3, VAR_8);
        if (FUNC_2(VAR_9 != ((void*)0)))
            FUNC_4(VAR_9);
        break;

      case 128:
        FUNC_0 (VAR_8, VAR_6);
        break;
    }
}
