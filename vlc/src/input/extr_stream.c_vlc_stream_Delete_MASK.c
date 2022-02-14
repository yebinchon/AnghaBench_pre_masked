
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_2__ {int (* destroy ) (int *) ;} ;
typedef TYPE_1__ stream_priv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(stream_t *VAR_0)
{
    stream_priv_t *VAR_1 = (stream_priv_t *)VAR_0;

    VAR_1->destroy(VAR_0);
    FUNC_0(VAR_0);
}
