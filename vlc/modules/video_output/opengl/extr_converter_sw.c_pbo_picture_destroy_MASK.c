
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_planes; TYPE_2__* p_sys; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_6__ {int buffers; int (* DeleteBuffers ) (int ,int ) ;} ;
typedef TYPE_2__ picture_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(picture_t *VAR_0)
{
    picture_sys_t *VAR_1 = VAR_0->p_sys;

    VAR_1->DeleteBuffers(VAR_0->i_planes, VAR_1->buffers);

    FUNC_0(VAR_1);
}
