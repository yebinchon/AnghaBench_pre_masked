
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct mux_extradata_builder_cb {scalar_t__ (* pf_init ) (TYPE_1__*) ;} ;
struct TYPE_8__ {struct mux_extradata_builder_cb cb; scalar_t__ fcc; } ;
typedef TYPE_1__ mux_extradata_builder_t ;
typedef enum mux_extradata_type_e { ____Placeholder_mux_extradata_type_e } mux_extradata_type_e ;
struct TYPE_9__ {int type; scalar_t__ fcc; struct mux_extradata_builder_cb* cb; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

mux_extradata_builder_t * FUNC_4(vlc_fourcc_t VAR_1,
                                                    enum mux_extradata_type_e VAR_2)
{
    const struct mux_extradata_builder_cb *VAR_3 = ((void*)0);
    for(size_t VAR_4=0; VAR_4<FUNC_0(VAR_0); VAR_4++)
    {
        if(VAR_0[VAR_4].type != VAR_2 || VAR_0[VAR_4].fcc != VAR_1)
            continue;
        VAR_3 = VAR_0[VAR_4].cb;
        break;
    }

    if(VAR_3 == ((void*)0))
        return ((void*)0);

    mux_extradata_builder_t *VAR_5 = FUNC_1(1, sizeof(*VAR_5));
    if(VAR_5)
    {
        VAR_5->fcc = VAR_1;
        VAR_5->cb = *VAR_3;
        if(VAR_5->cb.pf_init && VAR_5->cb.pf_init(VAR_5) != 0)
        {
            FUNC_2(VAR_5);
            VAR_5 = ((void*)0);
        }
    }
    return VAR_5;
}
