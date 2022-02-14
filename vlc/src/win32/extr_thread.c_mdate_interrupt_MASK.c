
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int ULONGLONG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static vlc_tick_t FUNC_4 (void)
{
    ULONGLONG VAR_1;
    BOOL VAR_2;

    VAR_2 = FUNC_0 (&VAR_1);
    if (FUNC_3(!VAR_2))
        FUNC_1 ();


    FUNC_2 ((10000000 % VAR_0) == 0, "Broken frequencies ratio");
    return VAR_1 / (10000000 / VAR_0);
}
