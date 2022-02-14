
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rec_type; int subrec_type; int* ex; int l_rec_size; int b_ext; int l_ty_pts; } ;
typedef TYPE_1__ ty_rec_hdr_t ;


 int FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static ty_rec_hdr_t *FUNC_2( const uint8_t *VAR_0,
                                          int VAR_1, int *VAR_2)
{
    int VAR_3;
    ty_rec_hdr_t *VAR_4, *VAR_5;

    *VAR_2 = 0;
    VAR_4 = FUNC_1(VAR_1 * sizeof(ty_rec_hdr_t));

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        const uint8_t *VAR_6 = VAR_0 + (VAR_3 * 16);
        VAR_5 = &VAR_4[VAR_3];
        VAR_5->rec_type = VAR_6[3];
        VAR_5->subrec_type = VAR_6[2] & 0x0f;
        if ((VAR_6[ 0 ] & 0x80) == 0x80)
        {
            uint8_t VAR_7, VAR_8;

            VAR_7 = ( ( ( VAR_6[ 0 ] & 0x0f ) << 4 ) |
                   ( ( VAR_6[ 1 ] & 0xf0 ) >> 4 ) );
            VAR_8 = ( ( ( VAR_6[ 1 ] & 0x0f ) << 4 ) |
                   ( ( VAR_6[ 2 ] & 0xf0 ) >> 4 ) );

            VAR_5->ex[0] = VAR_7;
            VAR_5->ex[1] = VAR_8;
            VAR_5->l_rec_size = 0;
            VAR_5->l_ty_pts = 0;
            VAR_5->b_ext = 1;
        }
        else
        {
            VAR_5->l_rec_size = ( VAR_6[ 0 ] << 8 |
                VAR_6[ 1 ] ) << 4 | ( VAR_6[ 2 ] >> 4 );
            *VAR_2 += VAR_5->l_rec_size;
            VAR_5->b_ext = 0;
            VAR_5->l_ty_pts = FUNC_0( &VAR_6[ 8 ] );
        }

    }
    return VAR_4;
}
