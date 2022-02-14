
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* p; } ;
typedef TYPE_4__ vout_thread_t ;
struct TYPE_15__ {int format; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_13__ {int video; } ;
struct TYPE_11__ {TYPE_4__* sys; } ;
struct TYPE_16__ {TYPE_3__ fmt_out; TYPE_1__ owner; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_12__ {int private_pool; } ;


 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static picture_t *FUNC_3(filter_t *VAR_0)
{
    vout_thread_t *VAR_1 = VAR_0->owner.sys;

    picture_t *VAR_2 = FUNC_1(VAR_1->p->private_pool);
    if (VAR_2) {
        FUNC_0(VAR_2);
        FUNC_2(&VAR_2->format, &VAR_0->fmt_out.video);
    }
    return VAR_2;
}
