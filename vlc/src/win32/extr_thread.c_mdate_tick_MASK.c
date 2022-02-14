
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int ULONGLONG ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static vlc_tick_t FUNC_3 (void)
{
    ULONGLONG VAR_1 = FUNC_0 ();


    FUNC_2 ((VAR_0 % 1000) == 0, "Broken frequencies ratio");
    return FUNC_1( VAR_1 );
}
