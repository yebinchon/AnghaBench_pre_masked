
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ (* read_cb ) (int ,void*,size_t) ;int opaque; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    access_sys_t *VAR_3 = VAR_0->p_sys;

    ssize_t VAR_4 = VAR_3->read_cb(VAR_3->opaque, VAR_1, VAR_2);

    if (VAR_4 < 0) {
        FUNC_0(VAR_0, "read error");
        VAR_4 = 0;
    }

    return VAR_4;
}
