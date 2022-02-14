
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_clock_t ;
struct TYPE_4__ {int lock; int rc; } ;
typedef TYPE_1__ vlc_clock_main_t ;
struct vlc_clock_cbs {int dummy; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;





 int * FUNC_0 (TYPE_1__*,unsigned int,struct vlc_clock_cbs const*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

vlc_clock_t *FUNC_4(vlc_clock_main_t *VAR_0,
                                        enum es_format_category_e VAR_1,
                                        const struct vlc_clock_cbs *VAR_2,
                                        void *VAR_3)
{




    unsigned VAR_4;
    switch (VAR_1)
    {
        case 128:
        case 130:
            VAR_4 = 1;
            break;
        case 129:
        default:
            VAR_4 = 2;
            break;
    }

    vlc_clock_t *VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2,
                                               VAR_3);
    if (!VAR_5)
        return ((void*)0);

    FUNC_2(&VAR_0->lock);
    FUNC_1(VAR_5);
    VAR_0->rc++;
    FUNC_3(&VAR_0->lock);

    return VAR_5;
}
