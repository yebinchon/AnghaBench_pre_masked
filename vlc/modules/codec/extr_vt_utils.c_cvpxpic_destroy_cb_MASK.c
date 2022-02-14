
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvpxpic_ctx {int nb_fields; int on_released_data; int cvpx; int (* on_released_cb ) (int ,int ,int ) ;int rc; } ;
typedef int picture_context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(picture_context_t *VAR_0)
{
    struct cvpxpic_ctx *VAR_1 = (struct cvpxpic_ctx *)VAR_0;

    if (FUNC_3(&VAR_1->rc))
    {
        FUNC_0(VAR_1->cvpx);
        if (VAR_1->on_released_cb)
            VAR_1->on_released_cb(VAR_1->cvpx, VAR_1->on_released_data, VAR_1->nb_fields);
        FUNC_1(VAR_0);
    }
}
