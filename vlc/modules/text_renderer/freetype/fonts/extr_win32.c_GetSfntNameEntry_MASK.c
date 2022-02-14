
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int * string; scalar_t__ string_len; void* name_id; void* language_id; void* encoding_id; void* platform_id; } ;
typedef TYPE_1__ FT_SfntName ;
typedef int FT_Byte ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1( FT_Byte *VAR_2, FT_Byte *VAR_3,
                             FT_Byte *VAR_4, FT_SfntName *VAR_5 )
{
    uint16_t VAR_6 = FUNC_0( VAR_2 + 8 );
    uint16_t VAR_7 = FUNC_0( VAR_2 + 10 );
    if( VAR_6 == 0
     || VAR_3 + VAR_7 + VAR_6 > VAR_4 )
        return VAR_0;

    VAR_5->platform_id = FUNC_0( VAR_2 + 0 );
    VAR_5->encoding_id = FUNC_0( VAR_2 + 2 );
    VAR_5->language_id = FUNC_0( VAR_2 + 4 );
    VAR_5->name_id = FUNC_0( VAR_2 + 6 );
    VAR_5->string_len = VAR_6;
    VAR_5->string = VAR_3 + VAR_7;

    return VAR_1;
}
