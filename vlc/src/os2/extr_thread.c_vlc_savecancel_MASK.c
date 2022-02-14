
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_thread {int killable; } ;


 struct vlc_thread* FUNC_0 () ;

int FUNC_1 (void)
{
    int VAR_0;

    struct vlc_thread *VAR_1 = FUNC_0 ();
    if (VAR_1 == ((void*)0))
        return 0;

    VAR_0 = VAR_1->killable;
    VAR_1->killable = 0;
    return VAR_0;
}
