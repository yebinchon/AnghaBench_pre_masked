
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_font_alpha; } ;
struct TYPE_5__ {TYPE_1__ fontstyle; } ;
typedef TYPE_2__ commandparams_t ;
typedef int buffer_t ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1( const commandparams_t *VAR_1,
                                 buffer_t *VAR_2 )
{
    int VAR_3 = FUNC_0( VAR_2, " %d", VAR_1->fontstyle.i_font_alpha );
    if( VAR_3 != VAR_0 )
        return VAR_3;

    return VAR_0;
}
