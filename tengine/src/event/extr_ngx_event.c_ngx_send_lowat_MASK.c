
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {int sndlowat; int fd; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_5__ {size_t available; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,void const*,int) ;

ngx_int_t
FUNC_2(ngx_connection_t *VAR_7, size_t VAR_8)
{
    int VAR_9;
    if (VAR_8 == 0 || VAR_7->sndlowat) {
        return VAR_1;
    }

    VAR_9 = (int) VAR_8;

    if (FUNC_1(VAR_7->fd, VAR_3, VAR_4,
                   (const void *) &VAR_9, sizeof(int))
        == -1)
    {
        FUNC_0(VAR_7, VAR_6,
                             "setsockopt(SO_SNDLOWAT) failed");
        return VAR_0;
    }

    VAR_7->sndlowat = 1;

    return VAR_1;
}
