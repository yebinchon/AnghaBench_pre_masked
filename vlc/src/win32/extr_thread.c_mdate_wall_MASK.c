
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {int QuadPart; int HighPart; int LowPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
struct TYPE_6__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_2__ FILETIME ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static vlc_tick_t FUNC_4 (void)
{
    FILETIME VAR_1;
    ULARGE_INTEGER VAR_2;


    FUNC_1 (&VAR_1);



    VAR_2.LowPart = VAR_1.dwLowDateTime;
    VAR_2.HighPart = VAR_1.dwHighDateTime;

    FUNC_3 ((10000000 % VAR_0) == 0, "Broken frequencies ratio");
    return FUNC_2(VAR_2.QuadPart);
}
