
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int offset; int * data; int out; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,void*,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_4( stream_t *VAR_3, void *VAR_4, size_t VAR_5 )
{
    access_sys_t *VAR_6 = VAR_3->p_sys;

    if( VAR_6->data == ((void*)0) )
        return 0;
    FUNC_0( !VAR_6->out );

    ssize_t VAR_7 = FUNC_3( VAR_6->data, VAR_4, VAR_5, 0 );
    if( VAR_7 >= 0 )
        VAR_6->offset += VAR_7;
    else if( VAR_2 != VAR_1 && VAR_2 != VAR_0 )
    {
        FUNC_1( VAR_3, "receive error: %s", FUNC_2(VAR_2) );
        VAR_7 = 0;
    }

    return VAR_7;
}
