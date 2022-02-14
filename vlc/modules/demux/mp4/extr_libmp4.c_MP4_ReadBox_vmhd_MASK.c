
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {int * i_opcolor; int i_graphics_mode; } ;
struct TYPE_5__ {TYPE_4__* p_vmhd; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    FUNC_2( VAR_0, ((void*)0) );

    FUNC_1( VAR_2->data.p_vmhd );

    FUNC_0( VAR_2->data.p_vmhd->i_graphics_mode );
    for( unsigned VAR_3 = 0; VAR_3 < 3; VAR_3++ )
    {
        FUNC_0( VAR_2->data.p_vmhd->i_opcolor[VAR_3] );
    }
    FUNC_3( 1 );
}
