
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_text; } ;
struct TYPE_6__ {int i_alpha; int b_active; TYPE_1__ data; int p_fontstyle; int format; scalar_t__ i_y; scalar_t__ i_x; } ;
typedef TYPE_2__ overlay_t ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int,int) ;

overlay_t *FUNC_4( void )
{
    overlay_t *VAR_1 = FUNC_1( 1, sizeof( overlay_t ) );
    if( VAR_1 == ((void*)0) )
       return ((void*)0);

    VAR_1->i_x = VAR_1->i_y = 0;
    VAR_1->i_alpha = 0xFF;
    VAR_1->b_active = 0;
    FUNC_3( &VAR_1->format, FUNC_0( '\0','\0','\0','\0') , 0, 0,
                        0, 0, 1, 1 );
    VAR_1->p_fontstyle = FUNC_2( VAR_0 );
    VAR_1->data.p_text = ((void*)0);

    return VAR_1;
}
