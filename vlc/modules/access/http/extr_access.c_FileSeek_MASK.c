
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int resource; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(stream_t *VAR_2, uint64_t VAR_3)
{
    access_sys_t *VAR_4 = VAR_2->p_sys;

    if (FUNC_0(VAR_4->resource, VAR_3))
        return VAR_0;
    return VAR_1;
}
