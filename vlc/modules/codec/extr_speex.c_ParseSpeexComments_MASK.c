
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ogg_packet ;
struct TYPE_8__ {scalar_t__ p_description; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_9__ {TYPE_1__* p_header; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_10__ {int modeName; } ;
struct TYPE_7__ {size_t mode; scalar_t__ vbr; } ;
typedef TYPE_4__ SpeexMode ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,char*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 TYPE_4__** VAR_1 ;
 int FUNC_5 (scalar_t__,int ,char*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7( decoder_t *VAR_2, ogg_packet *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;
    const SpeexMode *VAR_5;

    FUNC_3( VAR_4->p_header->mode < VAR_0 );

    VAR_5 = VAR_1[VAR_4->p_header->mode];
    FUNC_3( VAR_5 != ((void*)0) );

    if( !VAR_2->p_description )
    {
        VAR_2->p_description = FUNC_6();
        if( !VAR_2->p_description )
            return;
    }


    char *VAR_6;
    if( FUNC_2( &VAR_6, "%d%s", VAR_5->modeName, VAR_4->p_header->vbr ? " VBR" : "" ) >= 0 )
    {
        FUNC_5( VAR_2->p_description, FUNC_1("Mode"), VAR_6 );
        FUNC_4( VAR_6 );
    }


    FUNC_0( VAR_3 );
}
