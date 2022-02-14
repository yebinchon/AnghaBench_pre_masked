
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_7__ {char* search_chain; char* open_chain; void* box_type; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(intf_thread_t *VAR_4, int VAR_5, int VAR_6)
{
    intf_sys_t *VAR_7 = VAR_4->p_sys;
    bool VAR_8 = VAR_6 == VAR_2;
    char *VAR_9 = VAR_8 ? VAR_7->search_chain: VAR_7->open_chain;
    size_t VAR_10 = FUNC_6(VAR_9);

    FUNC_3(VAR_6 == VAR_2 || VAR_6 == VAR_0);

    switch(VAR_5)
    {
    case 0x0c:
    case 129: FUNC_4(); return;

    case 128:
    case '\r':
    case '\n':
        if (VAR_8)
            FUNC_2(VAR_7);
        else
            FUNC_0(VAR_4);

        VAR_7->box_type = VAR_1;
        return;

    case 0x1b:
        if (FUNC_5() == VAR_3)
            VAR_7->box_type = VAR_1;
        return;

    case 130:
    case 0x7f:
        FUNC_1(VAR_9, VAR_10);
        break;

    default:
        if (VAR_10 + 1 < (VAR_8 ? sizeof VAR_7->search_chain
                              : sizeof VAR_7->open_chain)) {
            VAR_9[VAR_10 + 0] = VAR_5;
            VAR_9[VAR_10 + 1] = '\0';
        }
    }

    if (VAR_8)
        FUNC_2(VAR_7);
}
