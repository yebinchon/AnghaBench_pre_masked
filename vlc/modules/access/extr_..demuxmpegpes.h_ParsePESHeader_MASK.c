
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int stime_t ;


 int FUNC_0 (int const*,int const,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) inline
static int FUNC_2( vlc_object_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4,
                           unsigned *VAR_5, stime_t *VAR_6, stime_t *VAR_7,
                           uint8_t *VAR_8, bool *VAR_9 )
{
    unsigned VAR_10;

    if ( VAR_4 < 9 )
        return VAR_0;

    *VAR_8 = VAR_3[3];

    switch( VAR_3[3] )
    {
    case 0xBC:
    case 0xBE:
    case 0xBF:
    case 0xF0:
    case 0xF1:
    case 0xFF:
    case 0xF2:
    case 0xF8:
        VAR_10 = 6;
        if( VAR_9 )
            *VAR_9 = 0;
        break;
    default:
        if( ( VAR_3[6]&0xC0 ) == 0x80 )
        {

            VAR_10 = VAR_3[8] + 9;

            if( VAR_9 )
                *VAR_9 = VAR_3[6]&0x30;

            if( VAR_3[7]&0x80 )
            {
                if( VAR_4 >= 9 + 5 )
                   (void) FUNC_0( &VAR_3[9], VAR_3[7] >> 6, VAR_7 );

                if( ( VAR_3[7]&0x40 ) &&
                    VAR_4 >= 14 + 5 )
                   (void) FUNC_0( &VAR_3[14], 0x01, VAR_6 );
            }
        }
        else
        {




            VAR_10 = 6;

            if( VAR_9 )
                *VAR_9 = 0;

            while( VAR_10 < 23 && VAR_3[VAR_10] == 0xff )
            {
                VAR_10++;
                if( VAR_4 < VAR_10 + 1 )
                    return VAR_0;
            }
            if( VAR_10 == 23 )
            {
                FUNC_1( VAR_2, "too much MPEG-1 stuffing" );
                return VAR_0;
            }

            if( ( VAR_3[VAR_10] & 0xC0 ) == 0x40 )
            {
                VAR_10 += 2;
            }

            if( VAR_4 < VAR_10 + 1 )
                return VAR_0;

            if( VAR_3[VAR_10]&0x20 )
            {
                if( VAR_4 >= VAR_10 + 5 )
                    (void) FUNC_0( &VAR_3[VAR_10], VAR_3[VAR_10] >> 4, VAR_7 );

                if( ( VAR_3[VAR_10]&0x10 ) &&
                    VAR_4 >= VAR_10 + 10 )
                {
                    (void) FUNC_0( &VAR_3[VAR_10+5], 0x01, VAR_6 );
                    VAR_10 += 10;
                }
                else
                {
                    VAR_10 += 5;
                }
            }
            else
            {
                if( (VAR_3[VAR_10] & 0xFF) != 0x0F )
                    return VAR_0;
                VAR_10 += 1;
            }
        }
        break;
    }

    *VAR_5 = VAR_10;
    return VAR_1;
}
