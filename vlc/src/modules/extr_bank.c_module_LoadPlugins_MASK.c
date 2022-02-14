
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int module_t ;
struct TYPE_2__ {int usage; int lock; int caps_tree; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int **) ;
 int ** FUNC_5 (size_t*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;

void FUNC_9(vlc_object_t *VAR_2)
{


    if (VAR_0.usage == 1)
    {
        FUNC_3 ();




        FUNC_2 ();
        FUNC_1 ();

        FUNC_7(VAR_0.caps_tree, VAR_1);
    }
    FUNC_8 (&VAR_0.lock);

    size_t VAR_3;
    module_t **VAR_4 = FUNC_5 (&VAR_3);
    FUNC_4 (VAR_4);
    FUNC_6 (VAR_2, "plug-ins loaded: %zu modules", VAR_3);
}
