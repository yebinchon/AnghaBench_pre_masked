
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {struct TYPE_4__* next; int chain; int offset; } ;
typedef TYPE_1__ sout_cycle_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sout_cycle_t ***restrict VAR_0,
                       vlc_tick_t VAR_1, const char *VAR_2)
{

    size_t VAR_3 = FUNC_2(VAR_2);
    sout_cycle_t *VAR_4 = FUNC_0(sizeof (*VAR_4) + VAR_3);
    if (FUNC_3(VAR_4 == ((void*)0)))
        return -1;

    VAR_4->next = ((void*)0);
    VAR_4->offset = VAR_1;
    FUNC_1(VAR_4->chain, VAR_2, VAR_3 + 1);

    **VAR_0 = VAR_4;
    *VAR_0 = &VAR_4->next;
    return 0;
}
