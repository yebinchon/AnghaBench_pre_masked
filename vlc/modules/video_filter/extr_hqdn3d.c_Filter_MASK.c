
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct vf_priv_s {int * Frame; int * Coefs; int Line; } ;
struct TYPE_16__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_17__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_18__ {int b_recalc_coefs; int * h; int * w; int coefs_mutex; int chroma_temp; int chroma_spat; int luma_temp; int luma_spat; struct vf_priv_s cfg; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_15__ {int i_pitch; int p_pixels; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static picture_t *FUNC_9(filter_t *VAR_0, picture_t *VAR_1)
{
    picture_t *VAR_2;
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    struct vf_priv_s *VAR_4 = &VAR_3->cfg;
    bool VAR_5 = 0;

    if (!VAR_1) return ((void*)0);

    VAR_2 = FUNC_3(VAR_0);
    if ( FUNC_6(!VAR_2) ) {
        FUNC_5(VAR_1);
        return ((void*)0);
    }
    FUNC_7( &VAR_3->coefs_mutex );
    VAR_5 = VAR_3->b_recalc_coefs;
    VAR_3->b_recalc_coefs = 0;

    if( FUNC_6( VAR_5 ) )
    {
        FUNC_4( VAR_0, "Changing coefs to %.2f %.2f %.2f %.2f",
                            VAR_3->luma_spat, VAR_3->luma_temp, VAR_3->chroma_spat, VAR_3->chroma_temp );
        FUNC_1(VAR_4->Coefs[0], VAR_3->luma_spat);
        FUNC_1(VAR_4->Coefs[1], VAR_3->luma_temp);
        FUNC_1(VAR_4->Coefs[2], VAR_3->chroma_spat);
        FUNC_1(VAR_4->Coefs[3], VAR_3->chroma_temp);
    }
    FUNC_8( &VAR_3->coefs_mutex );

    FUNC_2(VAR_1->p[0].p_pixels, VAR_2->p[0].p_pixels,
            VAR_4->Line, &VAR_4->Frame[0], VAR_3->w[0], VAR_3->h[0],
            VAR_1->p[0].i_pitch, VAR_2->p[0].i_pitch,
            VAR_4->Coefs[0],
            VAR_4->Coefs[0],
            VAR_4->Coefs[1]);
    FUNC_2(VAR_1->p[1].p_pixels, VAR_2->p[1].p_pixels,
            VAR_4->Line, &VAR_4->Frame[1], VAR_3->w[1], VAR_3->h[1],
            VAR_1->p[1].i_pitch, VAR_2->p[1].i_pitch,
            VAR_4->Coefs[2],
            VAR_4->Coefs[2],
            VAR_4->Coefs[3]);
    FUNC_2(VAR_1->p[2].p_pixels, VAR_2->p[2].p_pixels,
            VAR_4->Line, &VAR_4->Frame[2], VAR_3->w[2], VAR_3->h[2],
            VAR_1->p[2].i_pitch, VAR_2->p[2].i_pitch,
            VAR_4->Coefs[2],
            VAR_4->Coefs[2],
            VAR_4->Coefs[3]);

    if(FUNC_6(!VAR_4->Frame[0] || !VAR_4->Frame[1] || !VAR_4->Frame[2]))
    {
        FUNC_5( VAR_1 );
        FUNC_5( VAR_2 );
        return ((void*)0);
    }

    return FUNC_0(VAR_2, VAR_1);
}
