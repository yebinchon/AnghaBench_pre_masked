
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ rtcp_port; int psz_sessionname; int psz_uri; } ;
typedef TYPE_1__ sdp_t ;
struct TYPE_11__ {int b_net; int lock; int i_type; } ;
typedef TYPE_2__ input_item_t ;
struct TYPE_12__ {TYPE_2__* p_input_item; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_13__ {TYPE_1__* p_sdp; } ;
typedef TYPE_4__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    sdp_t *VAR_6 = VAR_5->p_sdp;
    input_item_t *VAR_7 = VAR_4->p_input_item;

    if( !VAR_7 )
    {
        FUNC_5( VAR_4, "parent input could not be found" );
        return VAR_1;
    }

    FUNC_4( VAR_7, VAR_6->psz_uri );
    FUNC_3( VAR_7, VAR_6->psz_sessionname );
    if( VAR_6->rtcp_port )
    {
        char *VAR_8;
        if( FUNC_0( &VAR_8, ":rtcp-port=%ld", VAR_6->rtcp_port ) != -1 )
        {
            FUNC_2( VAR_7, VAR_8, VAR_2 );
            FUNC_1( VAR_8 );
        }
    }

    FUNC_6( &VAR_7->lock );

    VAR_7->i_type = VAR_0;
    VAR_7->b_net = 1;

    FUNC_7( &VAR_7->lock );
    return VAR_3;
}
