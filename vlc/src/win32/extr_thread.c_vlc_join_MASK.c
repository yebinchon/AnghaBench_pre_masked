
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vlc_thread_t ;
struct TYPE_4__ {int id; void* data; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (vlc_thread_t VAR_5, void **VAR_6)
{
    DWORD VAR_7;

    do
    {
        FUNC_3 ();
        VAR_7 = FUNC_1(VAR_5->id, VAR_0, VAR_1);
        FUNC_2(VAR_7 != VAR_2);
    }
    while (VAR_7 == VAR_4 || VAR_7 == VAR_3);

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_5->data;
    FUNC_0 (VAR_5->id);
    FUNC_4(VAR_5);
}
