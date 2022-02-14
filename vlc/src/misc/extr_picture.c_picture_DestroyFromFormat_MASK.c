
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_5__ {int size; int base; int fd; } ;
typedef TYPE_2__ picture_buffer_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(picture_t *VAR_0)
{
    picture_buffer_t *VAR_1 = VAR_0->p_sys;

    if (VAR_1 != ((void*)0))
        FUNC_0(VAR_1->fd, VAR_1->base, VAR_1->size);
}
