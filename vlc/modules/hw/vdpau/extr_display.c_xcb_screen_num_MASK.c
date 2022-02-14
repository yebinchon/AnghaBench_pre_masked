
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_8__ {scalar_t__ root; } ;
typedef TYPE_2__ xcb_screen_t ;
struct TYPE_9__ {scalar_t__ rem; TYPE_1__* data; } ;
typedef TYPE_3__ xcb_screen_iterator_t ;
typedef int xcb_connection_t ;
struct TYPE_7__ {scalar_t__ root; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__ FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(xcb_connection_t *VAR_0, const xcb_screen_t *VAR_1)
{
    const xcb_setup_t *VAR_2 = FUNC_0(VAR_0);
    unsigned VAR_3 = 0;

    for (xcb_screen_iterator_t VAR_4 = FUNC_2(VAR_2);
         VAR_4.rem > 0; FUNC_1(&VAR_4))
    {
        if (VAR_4.data->root == VAR_1->root)
            return VAR_3;
        VAR_3++;
    }
    return -1;
}
