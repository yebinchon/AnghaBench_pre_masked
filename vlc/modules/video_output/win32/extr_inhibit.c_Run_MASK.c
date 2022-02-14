
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_5__ {unsigned int mask; int mutex; int cond; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;
typedef int EXECUTION_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void* FUNC_8(void* VAR_5)
{
    vlc_inhibit_t *VAR_6 = (vlc_inhibit_t*)VAR_5;
    vlc_inhibit_sys_t *VAR_7 = VAR_6->p_sys;
    EXECUTION_STATE VAR_8 = VAR_0;

    for (unsigned int VAR_9 = 0;;)
    {
        FUNC_6(&VAR_7->mutex);
        FUNC_1(&VAR_7->mutex);
        FUNC_4(VAR_3, VAR_6);
        while (VAR_9 == VAR_7->mask)
            FUNC_5(&VAR_7->cond, &VAR_7->mutex);
        VAR_9 = VAR_7->mask;
        FUNC_7(&VAR_7->mutex);
        FUNC_3();
        FUNC_3();

        bool VAR_10 = (VAR_9 & VAR_4) != 0;
        if (VAR_10)

            VAR_8 = FUNC_0( VAR_1 |
                                                  VAR_2 |
                                                  VAR_0 );
        else
            FUNC_0( VAR_8 );
    }
    FUNC_2();
}
