
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int font; int color; } ;
typedef TYPE_1__ eia608_t ;
typedef int eia608_status_t ;
struct TYPE_6__ {int i_font; int i_color; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (char*,int const) ;

__attribute__((used)) static eia608_status_t FUNC_4( eia608_t *VAR_2, uint8_t VAR_3 )
{
    const int VAR_4 = VAR_3 - 0x20;
    FUNC_2( VAR_3 >= 0x20 && VAR_3 <= 0x2f );

    FUNC_0(FUNC_3("[TA %d]", VAR_4));
    VAR_2->color = VAR_1[VAR_4].i_color;
    VAR_2->font = VAR_1[VAR_4].i_font;
    FUNC_1( VAR_2, 1 );

    return VAR_0;
}
