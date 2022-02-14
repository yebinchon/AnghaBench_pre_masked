
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int od_descriptors_t ;


 unsigned int FUNC_0 (unsigned int*,int const**) ;
 int FUNC_1 (unsigned int*,int const**,int) ;


 int FUNC_2 (int *,int *,unsigned int const,int const*) ;
 int FUNC_3 (int *,int *,unsigned int const,int const*) ;
 int FUNC_4 (int *,char*,int const,unsigned int const) ;

void FUNC_5( vlc_object_t *VAR_0, od_descriptors_t *VAR_1,
                      unsigned VAR_2, const uint8_t *VAR_3 )
{
    while( VAR_2 )
    {
        const uint8_t VAR_4 = FUNC_1( &VAR_2, &VAR_3, 1 );
        const unsigned VAR_5 = FUNC_0( &VAR_2, &VAR_3 );
        if( !VAR_5 || VAR_5 > VAR_2 )
            break;
        FUNC_4( VAR_0, "Decode tag 0x%x length %d", VAR_4, VAR_5 );
        switch( VAR_4 )
        {
            case 128:
                FUNC_3( VAR_0, VAR_1, VAR_5, VAR_3 );
                break;
            case 129:
                FUNC_2( VAR_0, VAR_1, VAR_5, VAR_3 );
                break;
            default:
                break;
        }
        VAR_3 += VAR_5;
        VAR_2 -= VAR_5;
    }
}
