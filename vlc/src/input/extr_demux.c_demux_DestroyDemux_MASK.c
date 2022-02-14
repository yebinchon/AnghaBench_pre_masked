
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_demux_private {int module; } ;
struct TYPE_5__ {int * s; int psz_name; int psz_filepath; } ;
typedef TYPE_1__ demux_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 struct vlc_demux_private* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(demux_t *VAR_0)
{
    struct vlc_demux_private *VAR_1 = FUNC_4(VAR_0);

    FUNC_2(VAR_0, VAR_1->module);
    FUNC_1(VAR_0->psz_filepath);
    FUNC_1(VAR_0->psz_name);

    FUNC_0(VAR_0->s != ((void*)0));
    FUNC_3(VAR_0->s);
}
