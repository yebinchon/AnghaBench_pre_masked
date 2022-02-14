
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_10__ {int cache; int dest_pics; int dpy; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_11__ {int image_id; int buf; } ;
typedef TYPE_3__ VAImage ;
typedef int VADisplay ;


 int FUNC_0 (TYPE_3__*,void*,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int const,int ,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,int const,int ) ;
 scalar_t__ FUNC_8 (int ,int const,int ,void**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int const,int ) ;

__attribute__((used)) static picture_t *
FUNC_12(filter_t *VAR_0, picture_t *VAR_1)
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    VADisplay const VAR_3 = VAR_2->dpy;
    VAImage VAR_4;
    void * VAR_5;
    picture_t * VAR_6 = FUNC_5(VAR_2->dest_pics);

    if (!VAR_6)
    {
        FUNC_2(VAR_0, "cannot retrieve picture from the dest pics pool");
        goto ret;
    }
    FUNC_9(VAR_6);
    FUNC_3(VAR_6, VAR_1);

    if (FUNC_6(FUNC_1(VAR_0), VAR_3,
                              FUNC_10(VAR_6), &VAR_4)
        || FUNC_8(FUNC_1(VAR_0), VAR_3,
                               VAR_4.buf, &VAR_5))
        goto error;

    FUNC_0(&VAR_4, VAR_5, VAR_6,
                           VAR_1, &VAR_2->cache);

    if (FUNC_11(FUNC_1(VAR_0), VAR_3, VAR_4.buf)
        || FUNC_7(FUNC_1(VAR_0),
                                  VAR_3, VAR_4.image_id))
        goto error;

ret:
    FUNC_4(VAR_1);
    return VAR_6;

error:
    FUNC_4(VAR_6);
    VAR_6 = ((void*)0);
    goto ret;
}
