
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subpicture_t ;
typedef int decoder_t ;
typedef int block_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4( decoder_t *VAR_1, block_t *VAR_2 )
{

    FUNC_3( VAR_1, "Decode" );


    if( VAR_2 == ((void*)0) )
        return VAR_0;

    if( !(VAR_2 = FUNC_1( VAR_1, VAR_2 )) )
        return VAR_0;


    subpicture_t *VAR_3 = FUNC_0( VAR_1, VAR_2 );
    if( VAR_3 != ((void*)0) )
        FUNC_2( VAR_1, VAR_3 );
    return VAR_0;
}
