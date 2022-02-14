
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_5__ {scalar_t__ cputype; int offset; } ;
struct TYPE_4__ {unsigned int nfat_arch; } ;
typedef TYPE_1__ Fat_header ;
typedef TYPE_2__ Fat_arch ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static off_t
FUNC_0(Fat_header *VAR_1)
{
    Fat_arch *VAR_2 = (Fat_arch *)(1+ VAR_1);

    unsigned VAR_3;
    for (VAR_3= 0; VAR_3 < VAR_1->nfat_arch; ++VAR_3, ++VAR_2) {
        if (VAR_0==VAR_2->cputype) {
            return VAR_2->offset;
        }
    }
    return 0;
}
