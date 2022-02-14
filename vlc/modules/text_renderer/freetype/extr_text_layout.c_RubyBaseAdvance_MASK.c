
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int i_character_count; TYPE_2__* p_character; } ;
typedef TYPE_3__ line_desc_t ;
struct TYPE_5__ {scalar_t__ xMin; scalar_t__ xMax; } ;
struct TYPE_6__ {scalar_t__ p_ruby; TYPE_1__ bbox; } ;



__attribute__((used)) static int FUNC_0( const line_desc_t *VAR_0, int VAR_1, int *VAR_2 )
{
    int VAR_3 = 0;
    *VAR_2 = 0;
    for( int VAR_4 = VAR_1; VAR_4 < VAR_0->i_character_count; VAR_4++ )
    {
        if( VAR_0->p_character[VAR_4].p_ruby != VAR_0->p_character[VAR_1].p_ruby )
            break;
        (*VAR_2)++;
        VAR_3 += (VAR_0->p_character[VAR_4].bbox.xMax - VAR_0->p_character[VAR_4].bbox.xMin);
    }
    return VAR_3;
}
