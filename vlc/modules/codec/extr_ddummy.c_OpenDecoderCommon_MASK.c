
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int psz_file ;
typedef int p_dec ;
struct TYPE_5__ {int fmt_in; int fmt_out; int pf_decode; int * p_sys; } ;
typedef TYPE_1__ decoder_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 int FUNC_3 (char*,int,char*,void*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int * FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_3, bool VAR_4 )
{
    decoder_t *VAR_5 = (decoder_t*)VAR_3;
    char VAR_6[10 + 3 * sizeof (VAR_5)];

    FUNC_3( VAR_6, sizeof( VAR_6), "stream.%p", (void *)VAR_5 );

    if( !VAR_4 )
        VAR_4 = FUNC_4( VAR_5, "dummy-save-es" );
    if( VAR_4 )
    {
        FILE *VAR_7 = FUNC_5( VAR_6, "wb" );
        if( VAR_7 == ((void*)0) )
        {
            FUNC_2( VAR_5, "cannot create `%s'", VAR_6 );
            return VAR_1;
        }
        FUNC_1( VAR_5, "dumping stream to file `%s'", VAR_6 );
        VAR_5->p_sys = (void *)VAR_7;
    }
    else
        VAR_5->p_sys = ((void*)0);


    VAR_5->pf_decode = VAR_0;

    FUNC_0( &VAR_5->fmt_out, &VAR_5->fmt_in );

    return VAR_2;
}
