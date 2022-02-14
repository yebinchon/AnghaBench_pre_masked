
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * remap_fun_t ;
struct TYPE_3__ {int i_format; } ;
typedef TYPE_1__ audio_format_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;






__attribute__((used)) static inline remap_fun_t FUNC_0( audio_format_t *VAR_10, bool VAR_11 )
{
    if( VAR_11 )
    {
        switch( VAR_10->i_format )
        {
            case 128:
                return VAR_4;
            case 130:
                return VAR_2;
            case 129:
                return VAR_3;
            case 132:
                return VAR_0;
            case 131:
                return VAR_1;
        }
    }
    else
    {
        switch( VAR_10->i_format )
        {
            case 128:
                return VAR_9;
            case 130:
                return VAR_7;
            case 129:
                return VAR_8;
            case 132:
                return VAR_5;
            case 131:
                return VAR_6;
        }
    }

    return ((void*)0);
}
