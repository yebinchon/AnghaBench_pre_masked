
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int read_fd; } ;
typedef TYPE_2__ stream_sys_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1 (stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;
    ssize_t VAR_4 = FUNC_0 (VAR_3->read_fd, VAR_1, VAR_2);
    return (VAR_4 >= 0) ? VAR_4 : 0;
}
