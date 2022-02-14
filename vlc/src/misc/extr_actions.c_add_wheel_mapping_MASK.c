
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_action_id_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void**,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1 (void **VAR_5, uint32_t VAR_6, uint32_t VAR_7,
                                 int VAR_8)
{
    vlc_action_id_t VAR_9 = VAR_4, VAR_10 = VAR_4;

    switch (VAR_8)
    {
        case 0:
            VAR_9 = VAR_1;
            VAR_10 = VAR_0;
            break;
        case 2:
            VAR_9 = VAR_3;
            VAR_10 = VAR_2;
            break;
        case 3:
            VAR_9 = VAR_2;
            VAR_10 = VAR_3;
            break;
    }

    if (VAR_9 != VAR_4)
        FUNC_0 (VAR_5, VAR_6, VAR_9);
    if (VAR_10 != VAR_4)
        FUNC_0 (VAR_5, VAR_7, VAR_10);
}
