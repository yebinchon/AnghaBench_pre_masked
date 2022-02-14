
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p; } ;
typedef TYPE_3__ spu_t ;
typedef int input_attachment_t ;
struct TYPE_6__ {TYPE_3__* sys; } ;
struct TYPE_9__ {TYPE_1__ owner; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_7__ {scalar_t__ input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ***) ;

__attribute__((used)) static int FUNC_1(filter_t *VAR_2,
                               input_attachment_t ***VAR_3,
                               int *VAR_4)
{
    spu_t *VAR_5 = VAR_2->owner.sys;

    if (VAR_5->p->input)
    {
        int VAR_6 = FUNC_0(VAR_5->p->input, VAR_3);
        if (VAR_6 <= 0)
            return VAR_0;
        *VAR_4 = VAR_6;
        return VAR_1;
    }

    return VAR_0;
}
