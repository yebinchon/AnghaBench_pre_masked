
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mem_copy; int mem_unmap; int mem_map; int mem_type; } ;
typedef int GstVlcPicturePlaneAllocator ;
typedef TYPE_1__ GstAllocator ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(
        GstVlcPicturePlaneAllocator *VAR_5 )
{
    GstAllocator *VAR_6 = FUNC_0( VAR_5 );

    VAR_6->mem_type = VAR_1;
    VAR_6->mem_map = VAR_3;
    VAR_6->mem_unmap = VAR_4;
    VAR_6->mem_copy = VAR_2;


    FUNC_1( VAR_5, VAR_0 );
}
