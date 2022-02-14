
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 char* VAR_3 ;
 int VAR_4 ;

void FUNC_1( void ) {
    char *VAR_5 = VAR_3;
    for( size_t VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6 ) {
        for( size_t VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7 ) {
            *(VAR_5++) = VAR_6 * 4 & 0xFF;
            *(VAR_5++) = 0xFF;
            *(VAR_5++) = 0x00;
            *(VAR_5++) = VAR_7 * 4 & 0xFF;
        }
    }

    FUNC_0( VAR_4, VAR_1, VAR_2 );
}
