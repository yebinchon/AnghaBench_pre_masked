
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vlc_threadvar_t ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;

int FUNC_3 (vlc_threadvar_t VAR_1, void *VAR_2)
{
    int VAR_3 = FUNC_0 ();

    if (!FUNC_2(VAR_1->id, VAR_2))
        return VAR_0;

    FUNC_1(VAR_3);
    return 0;
}
