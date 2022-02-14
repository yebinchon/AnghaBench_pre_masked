
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_align; int i_x; int i_y; } ;
typedef TYPE_1__ subpicture_region_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_1( subpicture_region_t *VAR_5, char *VAR_6 )
{
    int VAR_7 = 0;
    int VAR_8;
    int VAR_9, VAR_10;

    VAR_7 = FUNC_0( VAR_6, &VAR_8, &VAR_9, &VAR_10 );

    if( VAR_7 & VAR_0 )
        VAR_5->i_align = VAR_8;





    if( VAR_7 & VAR_1 )
        VAR_5->i_x = VAR_9;
    else if( VAR_7 & VAR_2 )
        VAR_5->i_x = 0;

    if( VAR_7 & VAR_3 )
        VAR_5->i_y = VAR_10;
    else if( VAR_7 & VAR_4 )
        VAR_5->i_y = 0;
}
