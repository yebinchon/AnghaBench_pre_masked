
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned int i_chapter; TYPE_2__* chapter; } ;
struct TYPE_6__ {TYPE_4__* p_chpl; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_7__ {int psz_name; } ;
typedef TYPE_3__ MP4_Box_t ;
typedef TYPE_4__ MP4_Box_data_chpl_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    MP4_Box_data_chpl_t *VAR_1 = VAR_0->data.p_chpl;
    for( unsigned VAR_2 = 0; VAR_2 < VAR_1->i_chapter; VAR_2++ )
        FUNC_0( VAR_1->chapter[VAR_2].psz_name );
}
