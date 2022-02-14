
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1 (stream_t *VAR_3, uint64_t VAR_4)
{
    access_sys_t *VAR_5 = VAR_3->p_sys;

    if (FUNC_0(VAR_5->fd, VAR_4, VAR_0) == (off_t)-1)
        return VAR_1;
    return VAR_2;
}
