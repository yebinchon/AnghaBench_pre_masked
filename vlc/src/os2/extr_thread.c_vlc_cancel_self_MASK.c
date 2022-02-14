
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_thread {int killed; } ;
typedef struct vlc_thread* PVOID ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1 (PVOID VAR_0)
{
    struct vlc_thread *VAR_1 = VAR_0;

    if (FUNC_0(VAR_1 != ((void*)0)))
        VAR_1->killed = 1;
}
