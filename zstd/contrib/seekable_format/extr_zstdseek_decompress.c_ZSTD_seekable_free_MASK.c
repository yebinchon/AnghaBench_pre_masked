
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* entries; } ;
struct TYPE_6__ {TYPE_1__ seekTable; int dstream; } ;
typedef TYPE_2__ ZSTD_seekable ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

size_t FUNC_2(ZSTD_seekable* VAR_0)
{
    if (VAR_0 == ((void*)0)) return 0;
    FUNC_0(VAR_0->dstream);
    FUNC_1(VAR_0->seekTable.entries);
    FUNC_1(VAR_0);

    return 0;
}
