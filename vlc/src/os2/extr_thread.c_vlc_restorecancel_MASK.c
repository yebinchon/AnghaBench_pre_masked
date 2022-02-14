
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_thread {int killable; } ;


 int FUNC_0 (int) ;
 struct vlc_thread* FUNC_1 () ;

void FUNC_2 (int VAR_0)
{
    struct vlc_thread *VAR_1 = FUNC_1 ();
    FUNC_0 (VAR_0 == 0 || VAR_0 == 1);

    if (VAR_1 == ((void*)0))
        return;

    FUNC_0 (!VAR_1->killable);
    VAR_1->killable = VAR_0 != 0;
}
