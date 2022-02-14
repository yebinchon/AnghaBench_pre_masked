
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int msftime_t ;
struct TYPE_6__ {int quot; int rem; } ;
typedef TYPE_1__ lldiv_t ;
struct TYPE_8__ {int QuadPart; } ;
struct TYPE_7__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 TYPE_4__ VAR_0 ;
 TYPE_1__ FUNC_2 (int ,int) ;

__attribute__((used)) static msftime_t FUNC_3(void)
{
    LARGE_INTEGER VAR_1;

    if (!FUNC_0(&VAR_1))
        FUNC_1();

    lldiv_t VAR_2 = FUNC_2(VAR_1.QuadPart, VAR_0.QuadPart);
    return (VAR_2.quot * 10000000) + ((VAR_2.rem * 10000000) / VAR_0.QuadPart);
}
