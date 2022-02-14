
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_style_flags; int i_features; void* psz_monofontname; void* psz_fontname; } ;
typedef TYPE_1__ text_style_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (void*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_3 (void*) ;

void FUNC_4( text_style_t *VAR_24, const text_style_t *VAR_25, bool VAR_26 )
{
    if( VAR_25->psz_fontname && (!VAR_24->psz_fontname || VAR_26) )
    {
        FUNC_2( VAR_24->psz_fontname );
        VAR_24->psz_fontname = FUNC_3( VAR_25->psz_fontname );
    }

    if( VAR_25->psz_monofontname && (!VAR_24->psz_monofontname || VAR_26) )
    {
        FUNC_2( VAR_24->psz_monofontname );
        VAR_24->psz_monofontname = FUNC_3( VAR_25->psz_monofontname );
    }

    if( VAR_25->i_features != VAR_9 )
    {
        FUNC_0(VAR_15, VAR_3);
        FUNC_0(VAR_14, VAR_2);
        FUNC_0(VAR_18, VAR_5);
        FUNC_0(VAR_17, VAR_4);
        FUNC_0(VAR_21, VAR_7);
        FUNC_0(VAR_20, VAR_6);
        FUNC_0(VAR_13, VAR_1);
        FUNC_0(VAR_12, VAR_0);
        FUNC_0(VAR_10, VAR_8);
        VAR_24->i_features |= VAR_25->i_features;
        VAR_24->i_style_flags |= VAR_25->i_style_flags;
    }

    FUNC_1(VAR_11);
    FUNC_1(VAR_16);
    FUNC_1(VAR_19);
    FUNC_1(VAR_22);
    FUNC_1(VAR_23);
}
