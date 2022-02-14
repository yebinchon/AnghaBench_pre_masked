
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_plugin_t ;
typedef scalar_t__ (* vlc_plugin_cb ) (int ,int *) ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

vlc_plugin_t *FUNC_3(vlc_plugin_cb VAR_1)
{
    vlc_plugin_t *VAR_2 = FUNC_1();
    if (FUNC_0(VAR_2 == ((void*)0)))
        return ((void*)0);

    if (VAR_1(VAR_0, VAR_2) != 0)
    {
        FUNC_2(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_2;
}
