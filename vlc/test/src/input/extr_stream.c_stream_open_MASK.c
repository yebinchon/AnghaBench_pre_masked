
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; } ;
struct reader {char* psz_name; TYPE_2__* p_data; int pf_seek; int pf_tell; int pf_peek; int pf_read; int pf_getsize; int pf_close; TYPE_1__ u; } ;
struct TYPE_6__ {int p_libvlc_int; } ;
typedef TYPE_2__ libvlc_instance_t ;
typedef int argv ;


 int FUNC_0 (struct reader*) ;
 struct reader* FUNC_1 (int,int) ;
 int FUNC_2 (struct reader*) ;
 TYPE_2__* FUNC_3 (int,char const**) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static struct reader *
FUNC_6( const char *VAR_6 )
{
    libvlc_instance_t *VAR_7;
    struct reader *VAR_8;
    const char * VAR_9[] = {
        "-v",
        "--ignore-config",
        "-I",
        "dummy",
        "--no-media-library",
        "--vout=dummy",
        "--aout=dummy",
    };

    VAR_8 = FUNC_1( 1, sizeof(struct reader) );
    FUNC_0( VAR_8 );

    VAR_7 = FUNC_3( sizeof(VAR_9) / sizeof(VAR_9[0]), VAR_9 );
    FUNC_0( VAR_7 != ((void*)0) );

    VAR_8->u.s = FUNC_5( VAR_7->p_libvlc_int, VAR_6 );
    if( !VAR_8->u.s )
    {
        FUNC_4( VAR_7 );
        FUNC_2( VAR_8 );
        return ((void*)0);
    }
    VAR_8->pf_close = VAR_0;
    VAR_8->pf_getsize = VAR_1;
    VAR_8->pf_read = VAR_3;
    VAR_8->pf_peek = VAR_2;
    VAR_8->pf_tell = VAR_5;
    VAR_8->pf_seek = VAR_4;
    VAR_8->p_data = VAR_7;
    VAR_8->psz_name = "stream";
    return VAR_8;
}
