
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_parsed_status_t ;
typedef int input_item_t ;
typedef enum input_item_preparse_status { ____Placeholder_input_item_preparse_status } input_item_preparse_status ;






 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(input_item_t *VAR_4,
                                      enum input_item_preparse_status VAR_5,
                                      void *VAR_6)
{
    FUNC_0(VAR_4);
    libvlc_media_t * VAR_7 = VAR_6;
    libvlc_media_parsed_status_t VAR_8;

    switch( VAR_5 )
    {
        case 129:
            VAR_8 = VAR_2;
            break;
        case 130:
            VAR_8 = VAR_1;
            break;
        case 128:
            VAR_8 = VAR_3;
            break;
        case 131:
            VAR_8 = VAR_0;
            break;
        default:
            return;
    }
    FUNC_1( VAR_7, VAR_8 );
}
