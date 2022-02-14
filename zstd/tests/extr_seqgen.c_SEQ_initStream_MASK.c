
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int seed; int xxh; scalar_t__ state; } ;
typedef TYPE_1__ SEQ_stream ;


 int FUNC_0 (int *,int ) ;

SEQ_stream FUNC_1(unsigned VAR_0)
{
    SEQ_stream VAR_1;
    VAR_1.state = 0;
    FUNC_0(&VAR_1.xxh, 0);
    VAR_1.seed = VAR_0;
    return VAR_1;
}
