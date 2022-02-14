
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ BufferObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(BufferObject *VAR_1)
{
    if (VAR_1->buf == VAR_0)
    {
 FUNC_1(FUNC_0("attempt to refer to deleted buffer"));
 return -1;
    }

    return 0;
}
