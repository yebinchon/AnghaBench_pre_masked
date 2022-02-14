
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int subpicture_updater_t ;
struct TYPE_4__ {int b_subtitle; } ;
typedef TYPE_1__ subpicture_t ;
typedef int decoder_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int const*) ;

__attribute__((used)) static subpicture_t *FUNC_3( decoder_t *VAR_0,
                                     const subpicture_updater_t *VAR_1 )
{
    FUNC_0( VAR_0 );
    subpicture_t *VAR_2 = FUNC_2( VAR_1 );
    if( FUNC_1(VAR_2 != ((void*)0)) )
        VAR_2->b_subtitle = 1;
    return VAR_2;
}
