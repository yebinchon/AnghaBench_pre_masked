
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t_upx_stub ;
struct TYPE_6__ {scalar_t__ cputype; int offset; } ;
struct TYPE_5__ {int nfat_arch; } ;
typedef TYPE_1__ Fat_header ;
typedef TYPE_2__ Fat_arch ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static off_t_upx_stub
FUNC_1(Fat_header *VAR_1)
{
    Fat_arch *VAR_2 = (Fat_arch *)(1+ VAR_1);
    FUNC_0(VAR_1, sizeof(*VAR_1) + (VAR_1->nfat_arch>>24)*sizeof(*VAR_2));
    unsigned VAR_3;
    for (VAR_3= 0; VAR_3 < VAR_1->nfat_arch; ++VAR_3, ++VAR_2) {
        if (VAR_0==VAR_2->cputype) {
            return VAR_2->offset;
        }
    }
    return 0;
}
