
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;
struct TYPE_6__ {int i_fd; int p_session; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2( stream_t *VAR_0, void *VAR_1, size_t VAR_2 )
{
    access_sys_t *VAR_3 = VAR_0->p_sys;
    int VAR_4;

    VAR_4 = FUNC_1( VAR_3->p_session, VAR_3->i_fd, VAR_1, VAR_2 );
    if( VAR_4 < 0 )
    {
        FUNC_0( VAR_0, "read failed" );
        return -1;
    }

    return VAR_4;
}
