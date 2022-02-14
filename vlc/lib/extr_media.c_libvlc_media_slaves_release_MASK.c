
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** libvlc_media_slave_t ;


 int FUNC_0 (int ******) ;
 int FUNC_1 (int ******) ;

void FUNC_2( libvlc_media_slave_t **VAR_0,
                                  unsigned int VAR_1 )
{
    if( VAR_1 > 0 )
    {
        FUNC_0( VAR_0 );
        for( unsigned int VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2 )
            FUNC_1( &VAR_0[VAR_2] );
    }
    FUNC_1( VAR_0 );
}
