
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vlc_mouse_t ;
struct TYPE_18__ {scalar_t__ i_cat; } ;
struct TYPE_15__ {int * sub; TYPE_3__* sys; int * video; } ;
struct TYPE_16__ {char const* psz_name; TYPE_4__ fmt_in; TYPE_4__ fmt_out; int * p_module; TYPE_1__ owner; int * p_cfg; scalar_t__ b_allow_fmt_out_change; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_17__ {int obj; TYPE_5__* last; TYPE_5__* first; scalar_t__ b_allow_fmt_out_change; TYPE_4__ fmt_out; TYPE_4__ fmt_in; } ;
typedef TYPE_3__ filter_chain_t ;
typedef TYPE_4__ es_format_t ;
typedef int config_chain_t ;
struct TYPE_19__ {int * pending; int * mouse; struct TYPE_19__* next; struct TYPE_19__* prev; TYPE_2__ filter; } ;
typedef TYPE_5__ chained_filter_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__ const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int) ;
 char const* FUNC_5 (int *,int) ;
 void* FUNC_6 (TYPE_2__*,char const*,char const*,int) ;
 int FUNC_7 (int ,char*,char const*,void*) ;
 int FUNC_8 (int ,char*,char const*,...) ;
 int FUNC_9 (char*,char*,char const*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_5__* FUNC_12 (int ,int,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static filter_t *FUNC_15( filter_chain_t *VAR_2,
    const char *VAR_3, const char *VAR_4, config_chain_t *VAR_5,
    const es_format_t *VAR_6 )
{
    chained_filter_t *VAR_7 =
        FUNC_12( VAR_2->obj, sizeof(*VAR_7), "filter" );
    if( FUNC_11(VAR_7 == ((void*)0)) )
        return ((void*)0);

    filter_t *VAR_8 = &VAR_7->filter;

    const es_format_t *VAR_9;
    if( VAR_2->last != ((void*)0) )
        VAR_9 = &VAR_2->last->filter.fmt_out;
    else
        VAR_9 = &VAR_2->fmt_in;

    if( VAR_6 == ((void*)0) )
        VAR_6 = &VAR_2->fmt_out;

    FUNC_2( &VAR_8->fmt_in, VAR_9 );
    FUNC_2( &VAR_8->fmt_out, VAR_6 );
    VAR_8->b_allow_fmt_out_change = VAR_2->b_allow_fmt_out_change;
    VAR_8->p_cfg = VAR_5;
    VAR_8->psz_name = VAR_3;

    if (VAR_9->i_cat == VAR_0)
    {
        VAR_8->owner.video = &VAR_1;
        VAR_8->owner.sys = VAR_2;
    }
    else
        VAR_8->owner.sub = ((void*)0);

    FUNC_0( VAR_4 != ((void*)0) );
    if( VAR_3 != ((void*)0) && VAR_2->b_allow_fmt_out_change )
    {



        char VAR_10[FUNC_10(VAR_3) + sizeof(",chain")];
        FUNC_9( VAR_10, "%s,chain", VAR_3 );
        VAR_8->p_module = FUNC_6( VAR_8, VAR_4, VAR_10, 1 );
    }
    else
        VAR_8->p_module = FUNC_6( VAR_8, VAR_4, VAR_3, VAR_3 != ((void*)0) );

    if( VAR_8->p_module == ((void*)0) )
        goto error;

    if( VAR_2->last == ((void*)0) )
    {
        FUNC_0( VAR_2->first == ((void*)0) );
        VAR_2->first = VAR_7;
    }
    else
        VAR_2->last->next = VAR_7;
    VAR_7->prev = VAR_2->last;
    VAR_2->last = VAR_7;
    VAR_7->next = ((void*)0);

    vlc_mouse_t *VAR_11 = FUNC_4( sizeof(*VAR_11) );
    if( FUNC_3(VAR_11 != ((void*)0)) )
        FUNC_13( VAR_11 );
    VAR_7->mouse = VAR_11;
    VAR_7->pending = ((void*)0);

    FUNC_7( VAR_2->obj, "Filter '%s' (%p) appended to chain",
             (VAR_3 != ((void*)0)) ? VAR_3 : FUNC_5(VAR_8->p_module, 0),
             (void *)VAR_8 );
    return VAR_8;

error:
    if( VAR_3 != ((void*)0) )
        FUNC_8( VAR_2->obj, "Failed to create %s '%s'", VAR_4, VAR_3 );
    else
        FUNC_8( VAR_2->obj, "Failed to create %s", VAR_4 );
    FUNC_1( &VAR_8->fmt_out );
    FUNC_1( &VAR_8->fmt_in );
    FUNC_14(VAR_8);
    return ((void*)0);
}
