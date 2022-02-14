
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int uint8_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1( vlc_fourcc_t VAR_5,
                                   unsigned int *VAR_6,
                                   enum es_format_category_e *VAR_7 )
{
    int VAR_8, VAR_9;

    VAR_8 = ((uint8_t *)&VAR_5)[0];
    VAR_9 = ((uint8_t *)&VAR_5)[1];

    if( VAR_8 < '0' || VAR_8 > '9' || VAR_9 < '0' || VAR_9 > '9' )
    {
        *VAR_6 = 100;
        *VAR_7 = VAR_3;
    }
    else
    {
        *VAR_6 = (VAR_8 - '0') * 10 + (VAR_9 - '0' );
        switch( FUNC_0( ((uint8_t *)&VAR_5)[2], ((uint8_t *)&VAR_5)[3] ) )
        {
            case 128:
                *VAR_7 = VAR_0;
                break;
            case 132:
            case 133:
            case 134:
                *VAR_7 = VAR_4;
                break;
            case 129:
            case 130:
                *VAR_7 = VAR_2;
                break;
            case 131:
                *VAR_7 = VAR_1;
                break;
            default:
                *VAR_7 = VAR_3;
                break;
        }
    }
}
