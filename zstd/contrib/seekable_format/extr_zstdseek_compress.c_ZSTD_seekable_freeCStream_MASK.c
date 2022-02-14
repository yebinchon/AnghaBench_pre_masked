
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int framelog; int cstream; } ;
typedef TYPE_1__ ZSTD_seekable_CStream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

size_t FUNC_3(ZSTD_seekable_CStream* VAR_0)
{
    if (VAR_0 == ((void*)0)) return 0;
    FUNC_0(VAR_0->cstream);
    FUNC_1(&VAR_0->framelog);
    FUNC_2(VAR_0);

    return 0;
}
