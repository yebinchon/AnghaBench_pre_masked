
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_1 (stream_t *VAR_1)
{
    access_sys_t *VAR_2 = VAR_1->p_sys;
    struct pollfd VAR_3;

    VAR_3.fd = VAR_2->fd;
    VAR_3.events = VAR_0;

    return FUNC_0 (&VAR_3, 1, -1);
}
