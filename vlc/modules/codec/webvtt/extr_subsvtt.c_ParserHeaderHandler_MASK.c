
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int webvtt_dom_node_t ;
struct TYPE_23__ {struct TYPE_23__* p_next; } ;
typedef TYPE_3__ vlc_css_rule_t ;
struct TYPE_22__ {TYPE_3__* p_first; } ;
struct TYPE_24__ {TYPE_2__ rules; } ;
typedef TYPE_4__ vlc_css_parser_t ;
typedef int uint8_t ;
struct TYPE_20__ {scalar_t__ stream; scalar_t__ ptr; int length; } ;
struct parser_ctx {TYPE_11__ css; TYPE_7__* p_region; TYPE_5__* p_dec; } ;
typedef enum webvtt_header_line_e { ____Placeholder_webvtt_header_line_e } webvtt_header_line_e ;
struct TYPE_25__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_26__ {TYPE_3__* p_css_rules; TYPE_1__* p_root; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_27__ {scalar_t__ psz_id; int * p_parent; } ;
struct TYPE_21__ {int p_child; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int const*,int ) ;
 scalar_t__ FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_11__*,char) ;
 int FUNC_9 (TYPE_11__*,char const*) ;
 int FUNC_10 (int *,TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 TYPE_7__* FUNC_12 () ;
 int FUNC_13 (TYPE_7__*,char*) ;

__attribute__((used)) static void FUNC_14( void *VAR_3, enum webvtt_header_line_e VAR_4,
                                 bool VAR_5, const char *VAR_6 )
{
    struct parser_ctx *VAR_7 = (struct parser_ctx *)VAR_3;
    decoder_t *VAR_8 = VAR_7->p_dec;
    decoder_sys_t *VAR_9 = VAR_8->p_sys;

    if( VAR_5 || !VAR_6 )
    {
        if( VAR_7->p_region )
        {
            if( VAR_7->p_region->psz_id )
            {
                FUNC_10( &VAR_9->p_root->p_child, VAR_7->p_region );
                VAR_7->p_region->p_parent = (webvtt_dom_node_t *) VAR_9->p_root;
                FUNC_1( VAR_8, "added new region %s", VAR_7->p_region->psz_id );
            }

            else FUNC_11( VAR_7->p_region );
            VAR_7->p_region = ((void*)0);
        }
        if( !VAR_6 )
            return;

        if( VAR_5 )
        {
            if( VAR_4 == VAR_1 )
                VAR_7->p_region = FUNC_12();




            return;
        }
    }

    if( VAR_4 == VAR_1 && VAR_7->p_region )
        FUNC_13( VAR_7->p_region, (char*) VAR_6 );







}
