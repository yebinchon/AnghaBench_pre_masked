
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tableLen; } ;
struct TYPE_5__ {TYPE_1__ seekTable; } ;
typedef TYPE_2__ ZSTD_seekable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

unsigned FUNC_1(ZSTD_seekable* const VAR_1)
{
    FUNC_0(VAR_1->seekTable.tableLen <= VAR_0);
    return (unsigned)VAR_1->seekTable.tableLen;
}
