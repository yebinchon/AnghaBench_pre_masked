
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int file; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1( stream_t* VAR_1, uint64_t VAR_2 )
{
    access_sys_t *VAR_3 = VAR_1->p_sys;

    FUNC_0( VAR_3->file, VAR_2 );
    return VAR_0;
}
