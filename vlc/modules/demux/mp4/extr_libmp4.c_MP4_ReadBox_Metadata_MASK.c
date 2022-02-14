
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int stream_t ;
typedef int MP4_Box_t ;


 int const VAR_0 ;
 int FUNC_0 (int *,int *,int const*) ;
 int FUNC_1 (int *,int const**,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    const uint8_t *VAR_3;
    if ( FUNC_1( VAR_1, &VAR_3, 16 ) < 16 )
        return 0;
    if ( FUNC_2( VAR_1, ((void*)0), 8 ) < 8 )
        return 0;
    const uint32_t VAR_4[] = { VAR_0, 0 };
    return FUNC_0( VAR_1, VAR_2, VAR_4 );
}
