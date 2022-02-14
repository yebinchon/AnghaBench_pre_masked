
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {int rem; int quot; } ;
typedef TYPE_1__ lldiv_t ;
typedef int ULONG ;
typedef int QWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_1__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

vlc_tick_t FUNC_7 (void)
{

    QWORD VAR_0;
    ULONG VAR_1;
    if (FUNC_1(&VAR_0) || FUNC_0(&VAR_1))
        FUNC_3();



    lldiv_t VAR_2 = FUNC_4 (FUNC_2(VAR_0), VAR_1);

    return FUNC_6( VAR_2.quot ) + FUNC_5(VAR_2.rem, VAR_1);
}
