
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int sout_access_out_t ;
struct TYPE_9__ {int force; } ;
struct TYPE_10__ {int pf_control; int pf_demux; void* p_sys; TYPE_1__ obj; } ;
typedef TYPE_2__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int * FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 char* FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_7( vlc_object_t * VAR_5 )
{
    demux_t *VAR_6 = (demux_t*)VAR_5;


    if( !VAR_6->obj.force )
        return VAR_2;

    char *VAR_7 = FUNC_5( VAR_6, "demuxdump-access" );
    if( VAR_7 == ((void*)0) )
        return VAR_2;


    FUNC_3( VAR_6, "sout-file-append", VAR_4 );
    if( FUNC_4( VAR_6, "demuxdump-append" ) )
        FUNC_6( VAR_6, "sout-file-append", 1 );

    FUNC_3( VAR_6, "sout-file-format", VAR_4 );

    char *VAR_8 = FUNC_5( VAR_6, "demuxdump-file" );
    if( VAR_8 == ((void*)0) )
    {
        FUNC_0( VAR_7 );
        FUNC_1( VAR_6, "no dump file name given" );
        return VAR_2;
    }

    sout_access_out_t *VAR_9 = FUNC_2( VAR_6, VAR_7, VAR_8 );
    FUNC_0( VAR_8 );
    FUNC_0( VAR_7 );
    if( VAR_9 == ((void*)0) )
    {
        FUNC_1( VAR_6, "cannot create output" );
        return VAR_2;
    }

    VAR_6->p_sys = (void *)VAR_9;
    VAR_6->pf_demux = VAR_1;
    VAR_6->pf_control = VAR_0;
    return VAR_3;
}
