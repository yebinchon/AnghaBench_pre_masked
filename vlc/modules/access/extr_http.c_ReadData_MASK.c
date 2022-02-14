
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int stream; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,void*,size_t,int) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_5, int *VAR_6,
                     void *VAR_7, size_t VAR_8 )
{
    access_sys_t *VAR_9 = VAR_5->p_sys;

    *VAR_6 = FUNC_0(VAR_9->stream, VAR_7, VAR_8, 0);
    if( *VAR_6 < 0 && VAR_4 != VAR_1 && VAR_4 != VAR_0 )
        return VAR_2;
    return VAR_3;
}
