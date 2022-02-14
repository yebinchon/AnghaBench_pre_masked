
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_chain_t ;


 int FUNC_0 (int *,int *) ;
 char* FUNC_1 (char**,int **,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_5()
{
    for( int VAR_1 = 0; VAR_0[VAR_1]; VAR_1++ )
    {
        char *VAR_2;
        config_chain_t *VAR_3;
        char *VAR_4 = FUNC_1( &VAR_2, &VAR_3, VAR_0[VAR_1] );

        config_chain_t *VAR_5 = FUNC_3( VAR_3 );
        FUNC_0(VAR_3, VAR_5);

        FUNC_2( VAR_5 );
        FUNC_2( VAR_3 );
        FUNC_4( VAR_4 );
        FUNC_4( VAR_2 );
    }
}
