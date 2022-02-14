
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int*) ;






__attribute__((used)) static int FUNC_1( vlc_fourcc_t VAR_1, uint8_t *VAR_2 )
{
    switch( VAR_1 )
    {
        case 132:





            if( FUNC_0( VAR_2 ) != 0x00000100 )
            {

                return VAR_0;
            }
            return VAR_2[4] & 0x06 ? 0 : VAR_0;

        case 131:
        case 130:
        case 128:



            return VAR_2[0] & 0xC0 ? 0 : VAR_0;
        case 129:




            if( FUNC_0( VAR_2 ) != 0x000001b6 )
            {

                return VAR_0;
            }
            return VAR_2[4] & 0xC0 ? 0 : VAR_0;

        default:

            return VAR_0;
    }
}
