
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_11__ {int (* smpl ) (int *,char const*,char*,int ) ;int (* cmplx ) (TYPE_3__*,int *,int *,char const*,int const) ;} ;
struct TYPE_12__ {char const* name; TYPE_1__ pf_handler; int cmplx; } ;
typedef TYPE_2__ xml_elem_hnd_t ;
struct TYPE_13__ {int p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int FUNC_0 (char*) ;

 int VAR_0 ;


 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (TYPE_2__ const*,size_t,char const*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (TYPE_3__*,char*,char const*) ;
 int FUNC_5 (int *,int *,int *,char const*,int const) ;
 int FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_3__*,int *,int *,char const*,int const) ;
 int FUNC_9 (int *,char const*,char*,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char const**) ;

__attribute__((used)) static bool FUNC_13(stream_t *VAR_1,
                       input_item_node_t *VAR_2, input_item_t *VAR_3,
                       xml_reader_t *VAR_4, const char *VAR_5,
                       const xml_elem_hnd_t *VAR_6, size_t VAR_7)
{
    bool VAR_8 = 0;

    char *VAR_9 = ((void*)0);
    const char *VAR_10;
    int VAR_11;
    const xml_elem_hnd_t *VAR_12 = ((void*)0);

    while ((VAR_11 = FUNC_12(VAR_4, &VAR_10)) > VAR_0)
    {
        const bool VAR_13 = FUNC_11(VAR_4);

        switch (VAR_11)
        {
            case 129:
                FUNC_0(VAR_9);
                if (!*VAR_10)
                {
                    FUNC_3(VAR_1, "invalid XML stream");
                    goto end;
                }

                VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_10);
                if (!VAR_12)
                {
                    FUNC_4(VAR_1, "skipping unexpected element <%s>", VAR_10);
                    if(!FUNC_5(((void*)0), ((void*)0), VAR_4, VAR_10, VAR_13))
                        return 0;
                }
                else
                {

                    if (VAR_12->cmplx)
                    {
                        if (!VAR_12->pf_handler.cmplx(VAR_1, VAR_2,
                                                         VAR_4, VAR_12->name,
                                                         VAR_13))
                            return 0;

                        VAR_12 = ((void*)0);
                    }
                }
                break;

            case 128:
                FUNC_1(VAR_9);
                if(!VAR_12)
                {
                    VAR_9 = ((void*)0);
                }
                else
                {
                    VAR_9 = FUNC_7(VAR_10);
                    if (FUNC_10(!VAR_9))
                        goto end;
                }
                break;

            case 130:

                if (!FUNC_6(VAR_10, VAR_5))
                {
                    VAR_8 = 1;
                    goto end;
                }

                if(VAR_12)
                {

                    if (FUNC_6(VAR_12->name, VAR_10))
                    {
                        FUNC_3(VAR_1, "there's no open element left for <%s>", VAR_10);
                        goto end;
                    }

                    if (VAR_12->pf_handler.smpl)
                        VAR_12->pf_handler.smpl(VAR_3, VAR_12->name,
                                                   VAR_9, VAR_1->p_sys);

                    FUNC_1(VAR_9);
                    VAR_9 = ((void*)0);
                    VAR_12 = ((void*)0);
                }
                break;
        }
    }

end:
    FUNC_1(VAR_9);

    return VAR_8;
}
