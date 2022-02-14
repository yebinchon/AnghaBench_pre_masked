
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int *,int,char const*,int ) ;

__attribute__((used)) static void FUNC_1( void *VAR_4, int VAR_5, const char *VAR_6, va_list VAR_7)
{
    encoder_t *VAR_8 = (encoder_t *)VAR_4;

    switch( VAR_5 )
    {
        case 130:
            VAR_5 = VAR_1;
            break;
        case 128:
            VAR_5 = VAR_3;
            break;
        case 129:
            VAR_5 = VAR_2;
            break;
        case 131:
        default:
            VAR_5 = VAR_0;
    }

    FUNC_0( VAR_8, VAR_5, VAR_6, VAR_7 );
}
