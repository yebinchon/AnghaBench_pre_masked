
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* vlc_plugin_cb ) (int ,void**) ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_1(vlc_plugin_cb VAR_2)
{
    void *VAR_3 = ((void*)0);

    if (VAR_2(VAR_1, &VAR_3))
    {
        FUNC_0(VAR_3, VAR_0);
        return ((void*)0);
    }

    return VAR_3;
}
