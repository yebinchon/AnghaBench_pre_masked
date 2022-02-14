
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int tableLen; TYPE_1__* entries; } ;
struct TYPE_8__ {TYPE_2__ seekTable; } ;
typedef TYPE_3__ ZSTD_seekable ;
struct TYPE_6__ {size_t dOffset; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_3__*,void*,size_t const,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

size_t FUNC_2(ZSTD_seekable* VAR_2, void* VAR_3, size_t VAR_4, unsigned VAR_5)
{
    if (VAR_5 >= VAR_2->seekTable.tableLen) {
        return FUNC_0(VAR_1);
    }

    {
        size_t const VAR_6 =
                VAR_2->seekTable.entries[VAR_5 + 1].dOffset -
                VAR_2->seekTable.entries[VAR_5].dOffset;
        if (VAR_4 < VAR_6) {
            return FUNC_0(VAR_0);
        }
        return FUNC_1(
                VAR_2, VAR_3, VAR_6,
                VAR_2->seekTable.entries[VAR_5].dOffset);
    }
}
