
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_access_private {int module; } ;
struct TYPE_5__ {int psz_name; int psz_filepath; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct vlc_access_private* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(stream_t *VAR_0)
{
    struct vlc_access_private *VAR_1 = FUNC_2(VAR_0);

    FUNC_1(VAR_0, VAR_1->module);
    FUNC_0(VAR_0->psz_filepath);
    FUNC_0(VAR_0->psz_name);
}
