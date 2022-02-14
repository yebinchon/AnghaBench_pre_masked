
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_25__ {TYPE_5__* p; } ;
typedef TYPE_6__ vout_thread_t ;
struct TYPE_26__ {char* psz_string; int i_int; } ;
typedef TYPE_7__ vlc_value_t ;
struct TYPE_22__ {char* psz; } ;
struct TYPE_20__ {scalar_t__* psz; int * i; } ;
struct TYPE_27__ {unsigned int list_count; TYPE_3__ orig; int * list_text; TYPE_1__ list; } ;
typedef TYPE_8__ module_config_t ;
struct TYPE_23__ {int is_interlaced; } ;
struct TYPE_21__ {int has_deint; } ;
struct TYPE_24__ {TYPE_4__ interlacing; TYPE_2__ filter; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_7__ FUNC_1 (char*) ;
 TYPE_8__* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_6__*,char*,int ,int *) ;
 int FUNC_7 (TYPE_6__*,char*,int ,...) ;
 int FUNC_8 (TYPE_6__*,char*,int) ;
 char* FUNC_9 (TYPE_6__*,char*) ;
 int FUNC_10 (TYPE_6__*,char*) ;
 char* FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (TYPE_6__*,char*,int) ;
 int FUNC_13 (int ) ;

void FUNC_14(vout_thread_t *VAR_9)
{
    vlc_value_t VAR_10;

    FUNC_5(VAR_9, "Deinterlacing available");

    VAR_9->p->filter.has_deint = 0;



    FUNC_8(VAR_9, "deinterlace", VAR_5 | VAR_4 );
    int VAR_11 = FUNC_10(VAR_9, "deinterlace");

    FUNC_7(VAR_9, "deinterlace", VAR_6, FUNC_1("Deinterlace"));

    const module_config_t *VAR_12 = FUNC_2("deinterlace");
    FUNC_7(VAR_9, "deinterlace", VAR_3);
    if (FUNC_4(VAR_12 != ((void*)0)))
        for (unsigned VAR_13 = 0; VAR_13 < VAR_12->list_count; VAR_13++) {
            VAR_10.i_int = VAR_12->list.i[VAR_13];
            FUNC_7(VAR_9, "deinterlace", VAR_1, VAR_10,
                       FUNC_13(VAR_12->list_text[VAR_13]));
        }
    FUNC_6(VAR_9, "deinterlace", VAR_0, ((void*)0));

    FUNC_8(VAR_9, "deinterlace-mode", VAR_8 | VAR_4 );
    char *VAR_14 = FUNC_11(VAR_9, "deinterlace-mode");

    FUNC_7(VAR_9, "deinterlace-mode", VAR_6,
               FUNC_1("Deinterlace mode"));

    const module_config_t *VAR_15 = FUNC_2("deinterlace-mode");
    FUNC_7(VAR_9, "deinterlace-mode", VAR_3);
    if (FUNC_4(VAR_15 != ((void*)0)))
        for (unsigned VAR_16 = 0; VAR_16 < VAR_15->list_count; VAR_16++) {
             if (!FUNC_0(VAR_15->list.psz[VAR_16]))
                 continue;

             VAR_10.psz_string = (char *)VAR_15->list.psz[VAR_16];
             FUNC_7(VAR_9, "deinterlace-mode", VAR_1,
                        VAR_10, FUNC_13(VAR_15->list_text[VAR_16]));
         }
    FUNC_6(VAR_9, "deinterlace-mode", VAR_0, ((void*)0));

    FUNC_8(VAR_9, "deinterlace-needed", VAR_2);
    FUNC_6(VAR_9, "deinterlace-needed", VAR_0, ((void*)0));


    char *VAR_17 = ((void*)0);
    if (VAR_9->p->filter.has_deint)
        VAR_17 = FUNC_9(VAR_9, "sout-deinterlace-mode");
    if (VAR_17) {
        VAR_11 = 1;
        FUNC_3(VAR_14);
        VAR_14 = VAR_17;
    }


    VAR_10.psz_string = VAR_14 ? VAR_14 : VAR_15->orig.psz;
    FUNC_7(VAR_9, "deinterlace-mode", VAR_7, VAR_10);

    FUNC_12(VAR_9, "deinterlace", VAR_11);
    FUNC_3(VAR_14);

    VAR_9->p->interlacing.is_interlaced = 0;
}
