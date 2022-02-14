
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {struct vlc_logger* logger; } ;
struct TYPE_20__ {TYPE_1__ obj; } ;
typedef TYPE_2__ xml_reader_t ;
struct TYPE_21__ {int pf_control; int pf_readdir; TYPE_2__* p_sys; struct TYPE_21__* s; } ;
typedef TYPE_3__ vlc_object_t ;
typedef int uint8_t ;
struct vlc_logger {int dummy; } ;
typedef TYPE_3__ stream_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*,int *,scalar_t__,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int const**,int) ;
 void* FUNC_10 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,char const**) ;

int FUNC_13( vlc_object_t* VAR_5 )
{
    stream_t* VAR_6 = (stream_t*)VAR_5;

    FUNC_0(VAR_6);
    if( !FUNC_5( VAR_6, ".wpl" ) &&
        !FUNC_5( VAR_6, ".zpl" ) )
        return VAR_1;

    const uint8_t *VAR_7;
    ssize_t VAR_8 = FUNC_9( VAR_6->s, &VAR_7, 2048 );
    if( FUNC_6( VAR_8 <= 0 ) )
        return VAR_1;

    stream_t *VAR_9 = FUNC_8( VAR_6, (uint8_t *)VAR_7, VAR_8, 1 );
    if( FUNC_6( !VAR_9 ) )
        return VAR_1;

    xml_reader_t *VAR_10 = FUNC_10( VAR_5, VAR_9 );
    if ( VAR_10 == ((void*)0) )
    {
        FUNC_3( VAR_6, "Failed to create an XML reader" );
        FUNC_7( VAR_9 );
        return VAR_1;
    }
    VAR_6->p_sys = VAR_10;

    struct vlc_logger *const VAR_11 = VAR_10->obj.logger;
    VAR_10->obj.logger = ((void*)0);
    const char* VAR_12;
    int VAR_13 = FUNC_12( VAR_10, &VAR_12 );
    VAR_10->obj.logger = VAR_11;
    if ( VAR_13 != VAR_3 || FUNC_4( VAR_12, "smil" ) )
    {
        FUNC_3( VAR_6, "Invalid WPL playlist. Root element should have been <smil>" );
        FUNC_1( VAR_5 );
        FUNC_7( VAR_9 );
        return VAR_1;
    }

    FUNC_11( VAR_6->p_sys );

    VAR_6->p_sys = FUNC_10( VAR_6, VAR_6->s );
    FUNC_7( VAR_9 );
    if( FUNC_6( VAR_6->p_sys == ((void*)0) ) )
        return VAR_1;

    FUNC_2( VAR_6, "Found valid WPL playlist" );
    VAR_6->pf_readdir = VAR_0;
    VAR_6->pf_control = VAR_4;

    return VAR_2;
}
