
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_bool; int i_int; int f_float; int psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;



 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,char const*,int,TYPE_1__*) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *) ;

int FUNC_7( vlc_object_t *VAR_3, const char *VAR_4, int VAR_5,
                 vlc_value_t *VAR_6 )
{
    VAR_5 &= VAR_2;
    for (vlc_object_t *VAR_7 = VAR_3; VAR_7 != ((void*)0); VAR_7 = FUNC_6(VAR_7))
    {
        if( FUNC_4( VAR_7, VAR_4, VAR_5, VAR_6 ) == VAR_1 )
            return VAR_1;
    }


    switch( VAR_5 & VAR_2 )
    {
        case 128:
            VAR_6->psz_string = FUNC_2( VAR_4 );
            if( !VAR_6->psz_string ) VAR_6->psz_string = FUNC_3("");
            break;
        case 130:
            VAR_6->f_float = FUNC_0( VAR_4 );
            break;
        case 129:
            VAR_6->i_int = FUNC_1( VAR_4 );
            break;
        case 131:
            VAR_6->b_bool = FUNC_1( VAR_4 ) > 0;
            break;
        default:
            FUNC_5();
        case 132:
            return VAR_0;
    }
    return VAR_1;
}
