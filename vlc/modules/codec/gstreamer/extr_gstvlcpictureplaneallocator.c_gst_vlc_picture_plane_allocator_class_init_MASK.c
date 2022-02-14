
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int finalize; } ;
struct TYPE_3__ {int free; int alloc; } ;
typedef int GstVlcPicturePlaneAllocatorClass ;
typedef TYPE_1__ GstAllocatorClass ;
typedef TYPE_2__ GObjectClass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(
    GstVlcPicturePlaneAllocatorClass *VAR_3 )
{
    GObjectClass *VAR_4;
    GstAllocatorClass *VAR_5;

    VAR_4 = (GObjectClass*) VAR_3;
    VAR_5 = (GstAllocatorClass*) VAR_3;

    VAR_4->finalize = VAR_1;

    VAR_5->alloc = VAR_0;
    VAR_5->free = VAR_2;
}
