
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ platform_id; scalar_t__ encoding_id; scalar_t__ name_id; scalar_t__ language_id; int string_len; int * string; } ;
typedef scalar_t__ FT_UShort ;
typedef int FT_UInt ;
typedef TYPE_1__ FT_SfntName ;
typedef int FT_Byte ;


 scalar_t__ FUNC_0 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2( FT_Byte *VAR_2, FT_UInt VAR_3, FT_UShort VAR_4,
                              FT_UShort VAR_5, FT_UShort VAR_6, FT_UShort VAR_7,
                              FT_Byte **VAR_8, FT_UInt *VAR_9 )
{
    uint16_t VAR_10 = FUNC_1( VAR_2 + 2 );
    uint16_t VAR_11 = FUNC_1( VAR_2 + 4 );
    FT_Byte *VAR_12 = VAR_2 + VAR_11;
    FT_Byte *VAR_13 = VAR_2 + 6;

    const int VAR_14 = 12;

    for(int VAR_15 = 0; VAR_15 < VAR_10; ++VAR_15)
    {
        FT_SfntName VAR_16;

        if( FUNC_0( VAR_13 + VAR_15 * VAR_14, VAR_12, VAR_2 + VAR_3, &VAR_16 ) )
            return VAR_0;

        if( VAR_16.platform_id == VAR_4 && VAR_16.encoding_id == VAR_5
         && VAR_16.name_id == VAR_6 && VAR_16.language_id == VAR_7 )
        {
            *VAR_9 = VAR_16.string_len;
            *VAR_8 = VAR_16.string;

            return VAR_1;
        }
    }

    return VAR_0;
}
