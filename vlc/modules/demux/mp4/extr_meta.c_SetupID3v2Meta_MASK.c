
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef int uint8_t ;
struct TYPE_2__ {int i_blob; scalar_t__ p_blob; } ;
typedef int MP4_Box_t ;


 TYPE_1__* FUNC_0 (int const*) ;
 int FUNC_1 (int *,int,int ,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3( vlc_meta_t *VAR_1, MP4_Box_t *VAR_2 )
{
    const MP4_Box_t *VAR_3 = FUNC_2( VAR_2, "ID32" );
    if( VAR_3 == ((void*)0) || !FUNC_0(VAR_3) || FUNC_0(VAR_3)->i_blob < 6 + 20 + 1 )
        return;


    FUNC_1( &((uint8_t *)FUNC_0(VAR_3)->p_blob)[6], FUNC_0(VAR_3)->i_blob - 6,
                  VAR_0, VAR_1 );
}
