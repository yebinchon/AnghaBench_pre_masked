
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_meta_t ;
struct TYPE_3__ {int cdtextc; int p_toc; scalar_t__ mbrecord; int * cddb; int ** cdtextv; } ;
typedef TYPE_1__ access_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(access_sys_t *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->cdtextc; VAR_1++)
    {
        vlc_meta_t *VAR_2 = VAR_0->cdtextv[VAR_1];
        if (VAR_2 != ((void*)0))
            FUNC_4(VAR_2);
    }
    FUNC_1(VAR_0->cdtextv);





    if(VAR_0->mbrecord)
        FUNC_2(VAR_0->mbrecord);
    FUNC_3(VAR_0->p_toc);
}
