
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_plugin_t ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
    if (!VAR_0)
        return;

    for (unsigned VAR_1 = 0; VAR_0[VAR_1]; VAR_1++)
    {
        vlc_plugin_t *VAR_2 = FUNC_1(VAR_0[VAR_1]);
        if (FUNC_0(VAR_2 != ((void*)0)))
            FUNC_2(VAR_2);
    }
}
