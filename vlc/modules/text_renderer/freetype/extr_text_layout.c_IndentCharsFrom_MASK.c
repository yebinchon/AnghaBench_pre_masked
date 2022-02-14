
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bbox; TYPE_2__* p_character; } ;
typedef TYPE_1__ line_desc_t ;
struct TYPE_6__ {int bbox; } ;
typedef TYPE_2__ line_character_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_2( line_desc_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4 )
{
    for( int VAR_5=0; VAR_5<VAR_2; VAR_5++ )
    {
        line_character_t *VAR_6 = &VAR_0->p_character[VAR_1 + VAR_5];
        FUNC_1( VAR_6, VAR_3, VAR_4 );
        FUNC_0( &VAR_0->bbox, &VAR_6->bbox );
    }
}
