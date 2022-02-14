
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_4__ {int p_dec; int i_clock; } ;
typedef TYPE_1__ cea708_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5( cea708_t *VAR_0 )
{
    FUNC_1(FUNC_4("@%ld ms\n", FUNC_2(VAR_0->i_clock)));
    subpicture_t *VAR_1 = FUNC_0( VAR_0 );
    if( VAR_1 )
        FUNC_3( VAR_0->p_dec, VAR_1 );
}
