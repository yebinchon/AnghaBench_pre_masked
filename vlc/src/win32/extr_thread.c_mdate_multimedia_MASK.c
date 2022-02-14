
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int (* timeGetTime ) () ;} ;
struct TYPE_4__ {TYPE_1__ multimedia; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static vlc_tick_t FUNC_3 (void)
{
    DWORD VAR_2 = VAR_1.multimedia.timeGetTime ();


    FUNC_1 ((VAR_0 % 1000) == 0, "Broken frequencies ratio");
    return FUNC_0( VAR_2 );
}
